.section .text
.globl _start
_start:
        addi x5, x0, 5          # 0x00  counter = 5
        addi x6, x0, 0          # 0x04  sum = 0
        addi x0, x0, 0          # 0x08  NOP
        addi x0, x0, 0          # 0x0c  NOP
        addi x0, x0, 0          # 0x10  NOP

loop:
        add  x6, x6, x5         # 0x14  sum += counter
        addi x5, x5, -1         # 0x18  counter -= 1
        addi x0, x0, 0          # 0x1c  NOP (hazard gap: x5 not ready for bne yet)
        addi x0, x0, 0          # 0x20  NOP
        addi x0, x0, 0          # 0x24  NOP
        bne  x5, x0, loop       # 0x28  loop while counter != 0
        addi x7, x0, 1          # 0x2c  reached ONLY after loop exits (not skipped)

end:
        j end                   # 0x30  infinite self-loop, halts simulation
