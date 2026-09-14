#!/usr/bin/env python3
import sys

MASK64 = 0xFFFFFFFFFFFFFFFF

def to_signed64(val):
    val &= MASK64
    if val & (1 << 63):
        return val - (1 << 64)
    return val

def to_unsigned64(val):
    return val & MASK64

def sext(val, bits):
    sign_bit = 1 << (bits - 1)
    val &= (1 << bits) - 1
    if val & sign_bit:
        return val - (1 << bits)
    return val

def run_sim(hex_file, out_file):
    with open(hex_file, 'r') as f:
        words = [int(line.strip(), 16) for line in f if line.strip()]

    instr_mem = {}
    for i, w in enumerate(words):
        instr_mem[i * 4] = w

    regs = [0] * 32
    dmem = {}

    def read_mem64(addr):
        b = [dmem.get(addr + i, 0) for i in range(8)]
        val = 0
        for i in range(8):
            val |= (b[i] << (8 * i))
        return val

    def write_mem64(addr, val):
        for i in range(8):
            dmem[addr + i] = (val >> (8 * i)) & 0xFF

    def read_mem32(addr):
        b = [dmem.get(addr + i, 0) for i in range(4)]
        val = 0
        for i in range(4):
            val |= (b[i] << (8 * i))
        return val

    def write_mem32(addr, val):
        for i in range(4):
            dmem[addr + i] = (val >> (8 * i)) & 0xFF

    pc = 0
    max_steps = 100000
    step = 0

    while step < max_steps:
        if pc not in instr_mem:
            break

        instr = instr_mem[pc]
        opcode = instr & 0x7F
        rd = (instr >> 7) & 0x1F
        funct3 = (instr >> 12) & 0x7
        rs1 = (instr >> 15) & 0x1F
        rs2 = (instr >> 20) & 0x1F
        funct7 = (instr >> 25) & 0x7F

        next_pc = pc + 4

        imm_i = sext(instr >> 20, 12)
        imm_s = sext(((instr >> 25) << 5) | ((instr >> 7) & 0x1F), 12)
        imm_b = sext((((instr >> 31) & 1) << 12) | (((instr >> 7) & 1) << 11) | (((instr >> 25) & 0x3F) << 5) | (((instr >> 8) & 0xF) << 1), 13)
        imm_u = sext((instr & 0xFFFFF000), 32)
        imm_j = sext((((instr >> 31) & 1) << 20) | (((instr >> 12) & 0xFF) << 12) | (((instr >> 20) & 1) << 11) | (((instr >> 21) & 0x3FF) << 1), 21)

        if opcode == 0x6F: # JAL
            target = to_unsigned64(pc + imm_j)
            if target == pc: # infinite self-loop
                if rd != 0: regs[rd] = to_unsigned64(pc + 4)
                break
            if rd != 0: regs[rd] = to_unsigned64(pc + 4)
            next_pc = target & MASK64
        elif opcode == 0x67: # JALR
            target = to_unsigned64(regs[rs1] + imm_i) & ~1
            if target == pc: # self loop
                if rd != 0: regs[rd] = to_unsigned64(pc + 4)
                break
            if rd != 0: regs[rd] = to_unsigned64(pc + 4)
            next_pc = target & MASK64
        elif opcode == 0x37: # LUI
            if rd != 0: regs[rd] = to_unsigned64(imm_u)
        elif opcode == 0x17: # AUIPC
            if rd != 0: regs[rd] = to_unsigned64(pc + imm_u)
        elif opcode == 0x13: # OP-IMM
            v1 = to_signed64(regs[rs1])
            res = 0
            if funct3 == 0: res = v1 + imm_i # ADDI
            elif funct3 == 1: res = v1 << (imm_i & 0x3F) # SLLI
            elif funct3 == 2: res = 1 if v1 < imm_i else 0 # SLTI
            elif funct3 == 3: res = 1 if to_unsigned64(v1) < to_unsigned64(imm_i) else 0 # SLTIU
            elif funct3 == 4: res = v1 ^ imm_i # XORI
            elif funct3 == 5:
                if (funct7 & 0x20) == 0: res = to_unsigned64(v1) >> (imm_i & 0x3F) # SRLI
                else: res = v1 >> (imm_i & 0x3F) # SRAI
            elif funct3 == 6: res = v1 | imm_i # ORI
            elif funct3 == 7: res = v1 & imm_i # ANDI
            if rd != 0: regs[rd] = to_unsigned64(res)
        elif opcode == 0x3B: # OP-IMM-32
            v1 = sext(regs[rs1] & 0xFFFFFFFF, 32)
            shamt = imm_i & 0x1F
            res = 0
            if funct3 == 0: res = sext((v1 + imm_i) & 0xFFFFFFFF, 32) # ADDIW
            elif funct3 == 1: res = sext((v1 << shamt) & 0xFFFFFFFF, 32) # SLLIW
            elif funct3 == 5:
                if (funct7 & 0x20) == 0: res = sext((to_unsigned64(v1 & 0xFFFFFFFF) >> shamt), 32)
                else: res = sext(v1 >> shamt, 32)
            if rd != 0: regs[rd] = to_unsigned64(res)
        elif opcode == 0x33: # OP
            v1 = to_signed64(regs[rs1])
            v2 = to_signed64(regs[rs2])
            res = 0
            if funct7 == 1: # M extension
                if funct3 == 0: res = v1 * v2 # MUL
                elif funct3 == 1: res = (v1 * v2) >> 64 # MULH
                elif funct3 == 2: res = (v1 * to_unsigned64(v2)) >> 64 # MULSU
                elif funct3 == 3: res = (to_unsigned64(v1) * to_unsigned64(v2)) >> 64 # MULU
            else:
                if funct3 == 0: res = (v1 - v2) if (funct7 & 0x20) else (v1 + v2)
                elif funct3 == 1: res = v1 << (v2 & 0x3F)
                elif funct3 == 2: res = 1 if v1 < v2 else 0
                elif funct3 == 3: res = 1 if to_unsigned64(v1) < to_unsigned64(v2) else 0
                elif funct3 == 4: res = v1 ^ v2
                elif funct3 == 5:
                    if funct7 & 0x20: res = v1 >> (v2 & 0x3F)
                    else: res = to_unsigned64(v1) >> (v2 & 0x3F)
                elif funct3 == 6: res = v1 | v2
                elif funct3 == 7: res = v1 & v2
            if rd != 0: regs[rd] = to_unsigned64(res)
        elif opcode == 0x63: # BRANCH
            v1 = to_signed64(regs[rs1])
            v2 = to_signed64(regs[rs2])
            take = False
            if funct3 == 0: take = (v1 == v2) # BEQ
            elif funct3 == 1: take = (v1 != v2) # BNE
            elif funct3 == 4: take = (v1 < v2) # BLT
            elif funct3 == 5: take = (v1 >= v2) # BGE
            elif funct3 == 6: take = (to_unsigned64(v1) < to_unsigned64(v2)) # BLTU
            elif funct3 == 7: take = (to_unsigned64(v1) >= to_unsigned64(v2)) # BGEU

            if take:
                next_pc = (pc + imm_b) & MASK64
        elif opcode == 0x03: # LOAD
            addr = to_unsigned64(regs[rs1] + imm_i)
            b = [dmem.get(addr + i, 0) for i in range(8)]
            if funct3 == 0: # LB
                val = sext(b[0], 8)
                if rd != 0: regs[rd] = to_unsigned64(val)
            elif funct3 == 1: # LH
                val = sext(b[0] | (b[1] << 8), 16)
                if rd != 0: regs[rd] = to_unsigned64(val)
            elif funct3 == 2: # LW
                val = sext(b[0] | (b[1] << 8) | (b[2] << 16) | (b[3] << 24), 32)
                if rd != 0: regs[rd] = to_unsigned64(val)
            elif funct3 == 3: # LD
                val = read_mem64(addr)
                if rd != 0: regs[rd] = to_unsigned64(val)
            elif funct3 == 4: # LBU
                val = b[0]
                if rd != 0: regs[rd] = to_unsigned64(val)
            elif funct3 == 5: # LHU
                val = b[0] | (b[1] << 8)
                if rd != 0: regs[rd] = to_unsigned64(val)
            elif funct3 == 6: # LWU
                val = b[0] | (b[1] << 8) | (b[2] << 16) | (b[3] << 24)
                if rd != 0: regs[rd] = to_unsigned64(val)
        elif opcode == 0x23: # STORE
            addr = to_unsigned64(regs[rs1] + imm_s)
            if funct3 == 0: # SB
                dmem[addr] = regs[rs2] & 0xFF
            elif funct3 == 1: # SH
                dmem[addr] = regs[rs2] & 0xFF
                dmem[addr + 1] = (regs[rs2] >> 8) & 0xFF
            elif funct3 == 2: # SW
                write_mem32(addr, regs[rs2])
            elif funct3 == 3: # SD
                write_mem64(addr, regs[rs2])

        regs[0] = 0
        pc = next_pc
        step += 1

    with open(out_file, 'w') as f:
        for i in range(32):
            f.write(f"0x{regs[i]:016X}\n")

if __name__ == '__main__':
    if len(sys.argv) < 3:
        print("Usage: ref_sim.py program.hex out_file")
        sys.exit(1)
    run_sim(sys.argv[1], sys.argv[2])
