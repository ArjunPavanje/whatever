// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcore__Syms.h"


//======================

void Vcore::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vcore::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcore__Syms* __restrict vlSymsp = static_cast<Vcore__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vcore::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vcore::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vcore__Syms* __restrict vlSymsp = static_cast<Vcore__Syms*>(userp);
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vcore::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vcore__Syms* __restrict vlSymsp = static_cast<Vcore__Syms*>(userp);
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+113,"clk", false,-1);
        tracep->declBit(c+114,"rst", false,-1);
        tracep->declBus(c+183,"core BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+184,"core INSTR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+185,"core ALU_SEL", false,-1, 31,0);
        tracep->declBus(c+185,"core REGFILE_LEN", false,-1, 31,0);
        tracep->declBus(c+186,"core INSTR_MEM_LEN", false,-1, 31,0);
        tracep->declBus(c+186,"core DATA_MEM_LEN", false,-1, 31,0);
        tracep->declBit(c+113,"core clk", false,-1);
        tracep->declBit(c+114,"core rst", false,-1);
        tracep->declBit(c+187,"core stall", false,-1);
        tracep->declQuad(c+1,"core if_pc", false,-1, 63,0);
        tracep->declBus(c+3,"core if_instr", false,-1, 31,0);
        tracep->declBit(c+187,"core pc_jmp", false,-1);
        tracep->declQuad(c+188,"core pc_dst", false,-1, 63,0);
        tracep->declQuad(c+4,"core ifid_pc", false,-1, 63,0);
        tracep->declBus(c+6,"core ifid_instr", false,-1, 31,0);
        tracep->declQuad(c+115,"core id_in1", false,-1, 63,0);
        tracep->declQuad(c+7,"core id_in2", false,-1, 63,0);
        tracep->declQuad(c+9,"core id_imm", false,-1, 63,0);
        tracep->declBus(c+11,"core id_alu_sel", false,-1, 4,0);
        tracep->declBit(c+12,"core id_alu_src", false,-1);
        tracep->declBus(c+13,"core id_rd_addr", false,-1, 4,0);
        tracep->declBit(c+14,"core id_reg_write", false,-1);
        tracep->declBit(c+15,"core id_mem_read", false,-1);
        tracep->declBit(c+16,"core id_mem_write", false,-1);
        tracep->declBit(c+15,"core id_mem_to_reg", false,-1);
        tracep->declBit(c+17,"core id_is_lui", false,-1);
        tracep->declBit(c+18,"core id_is_auipc", false,-1);
        tracep->declBus(c+19,"core id_funct3", false,-1, 2,0);
        tracep->declBit(c+20,"core wb_en", false,-1);
        tracep->declBus(c+21,"core wb_addr", false,-1, 4,0);
        tracep->declQuad(c+22,"core wb_data", false,-1, 63,0);
        tracep->declBus(c+24,"core idex_instr", false,-1, 31,0);
        tracep->declQuad(c+25,"core idex_pc", false,-1, 63,0);
        tracep->declQuad(c+27,"core idex_imm", false,-1, 63,0);
        tracep->declQuad(c+29,"core idex_in1", false,-1, 63,0);
        tracep->declQuad(c+31,"core idex_in2", false,-1, 63,0);
        tracep->declQuad(c+33,"core idex_write_data", false,-1, 63,0);
        tracep->declBit(c+35,"core idex_alu_src", false,-1);
        tracep->declBit(c+36,"core idex_is_lui", false,-1);
        tracep->declBit(c+37,"core idex_is_auipc", false,-1);
        tracep->declBus(c+38,"core idex_alu_sel", false,-1, 4,0);
        tracep->declBit(c+39,"core idex_mem_write", false,-1);
        tracep->declBit(c+40,"core idex_mem_read", false,-1);
        tracep->declBit(c+41,"core idex_reg_write", false,-1);
        tracep->declBit(c+42,"core idex_mem_to_reg", false,-1);
        tracep->declBus(c+43,"core idex_rd", false,-1, 4,0);
        tracep->declBus(c+44,"core idex_funct3", false,-1, 2,0);
        tracep->declQuad(c+45,"core ex_out", false,-1, 63,0);
        tracep->declBus(c+47,"core exmem_funct3", false,-1, 2,0);
        tracep->declBit(c+48,"core exmem_mem_write", false,-1);
        tracep->declBit(c+49,"core exmem_mem_read", false,-1);
        tracep->declQuad(c+50,"core exmem_write_data", false,-1, 63,0);
        tracep->declQuad(c+52,"core exmem_alu_out", false,-1, 63,0);
        tracep->declBus(c+54,"core exmem_rd", false,-1, 4,0);
        tracep->declBit(c+55,"core exmem_reg_write", false,-1);
        tracep->declBit(c+56,"core exmem_mem_to_reg", false,-1);
        tracep->declQuad(c+117,"core mem_out", false,-1, 63,0);
        tracep->declQuad(c+52,"core mem_alu_out", false,-1, 63,0);
        tracep->declQuad(c+57,"core memwb_mem_out", false,-1, 63,0);
        tracep->declQuad(c+59,"core memwb_alu_out", false,-1, 63,0);
        tracep->declBus(c+21,"core memwb_rd", false,-1, 4,0);
        tracep->declBit(c+20,"core memwb_reg_write", false,-1);
        tracep->declBit(c+61,"core memwb_mem_to_reg", false,-1);
        tracep->declBus(c+183,"core if_stage_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+184,"core if_stage_inst INSTR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+186,"core if_stage_inst INSTR_MEM_LEN", false,-1, 31,0);
        tracep->declBit(c+113,"core if_stage_inst clk", false,-1);
        tracep->declBit(c+187,"core if_stage_inst stall", false,-1);
        tracep->declBit(c+114,"core if_stage_inst rst", false,-1);
        tracep->declBit(c+187,"core if_stage_inst pc_jmp", false,-1);
        tracep->declQuad(c+188,"core if_stage_inst pc_dst", false,-1, 63,0);
        tracep->declBus(c+3,"core if_stage_inst instr", false,-1, 31,0);
        tracep->declQuad(c+1,"core if_stage_inst pc", false,-1, 63,0);
        tracep->declQuad(c+188,"core if_stage_inst ZERO", false,-1, 63,0);
        tracep->declQuad(c+1,"core if_stage_inst pc_curr", false,-1, 63,0);
        tracep->declQuad(c+62,"core if_stage_inst pc_next", false,-1, 63,0);
        tracep->declBus(c+64,"core if_stage_inst word_addr", false,-1, 14,0);
        tracep->declBus(c+183,"core if_id_reg_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+184,"core if_id_reg_inst INSTR_WIDTH", false,-1, 31,0);
        tracep->declBit(c+113,"core if_id_reg_inst clk", false,-1);
        tracep->declBit(c+114,"core if_id_reg_inst rst", false,-1);
        tracep->declBit(c+187,"core if_id_reg_inst stall", false,-1);
        tracep->declQuad(c+1,"core if_id_reg_inst in_pc", false,-1, 63,0);
        tracep->declBus(c+3,"core if_id_reg_inst in_instr", false,-1, 31,0);
        tracep->declQuad(c+4,"core if_id_reg_inst out_pc", false,-1, 63,0);
        tracep->declBus(c+6,"core if_id_reg_inst out_instr", false,-1, 31,0);
        tracep->declBus(c+183,"core id_ex_reg_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+184,"core id_ex_reg_inst INSTR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+185,"core id_ex_reg_inst ALU_SEL", false,-1, 31,0);
        tracep->declBus(c+190,"core id_ex_reg_inst FUNCT3", false,-1, 31,0);
        tracep->declBus(c+185,"core id_ex_reg_inst REGFILE_LEN", false,-1, 31,0);
        tracep->declBit(c+113,"core id_ex_reg_inst clk", false,-1);
        tracep->declBit(c+114,"core id_ex_reg_inst rst", false,-1);
        tracep->declBit(c+187,"core id_ex_reg_inst stall", false,-1);
        tracep->declBus(c+6,"core id_ex_reg_inst in_instr", false,-1, 31,0);
        tracep->declBus(c+19,"core id_ex_reg_inst in_funct3", false,-1, 2,0);
        tracep->declQuad(c+4,"core id_ex_reg_inst in_pc", false,-1, 63,0);
        tracep->declQuad(c+9,"core id_ex_reg_inst in_imm", false,-1, 63,0);
        tracep->declQuad(c+115,"core id_ex_reg_inst in_in1", false,-1, 63,0);
        tracep->declQuad(c+7,"core id_ex_reg_inst in_in2", false,-1, 63,0);
        tracep->declBit(c+12,"core id_ex_reg_inst in_alu_src", false,-1);
        tracep->declBus(c+11,"core id_ex_reg_inst in_alu_sel", false,-1, 4,0);
        tracep->declBit(c+17,"core id_ex_reg_inst in_is_lui", false,-1);
        tracep->declBit(c+18,"core id_ex_reg_inst in_is_auipc", false,-1);
        tracep->declBit(c+16,"core id_ex_reg_inst in_mem_write", false,-1);
        tracep->declBit(c+15,"core id_ex_reg_inst in_mem_read", false,-1);
        tracep->declQuad(c+7,"core id_ex_reg_inst in_write_data", false,-1, 63,0);
        tracep->declBus(c+13,"core id_ex_reg_inst in_rd", false,-1, 4,0);
        tracep->declBit(c+14,"core id_ex_reg_inst in_reg_write", false,-1);
        tracep->declBit(c+15,"core id_ex_reg_inst in_mem_to_reg", false,-1);
        tracep->declBus(c+24,"core id_ex_reg_inst out_instr", false,-1, 31,0);
        tracep->declBus(c+44,"core id_ex_reg_inst out_funct3", false,-1, 2,0);
        tracep->declQuad(c+25,"core id_ex_reg_inst out_pc", false,-1, 63,0);
        tracep->declQuad(c+27,"core id_ex_reg_inst out_imm", false,-1, 63,0);
        tracep->declQuad(c+29,"core id_ex_reg_inst out_in1", false,-1, 63,0);
        tracep->declQuad(c+31,"core id_ex_reg_inst out_in2", false,-1, 63,0);
        tracep->declBit(c+35,"core id_ex_reg_inst out_alu_src", false,-1);
        tracep->declBus(c+38,"core id_ex_reg_inst out_alu_sel", false,-1, 4,0);
        tracep->declBit(c+36,"core id_ex_reg_inst out_is_lui", false,-1);
        tracep->declBit(c+37,"core id_ex_reg_inst out_is_auipc", false,-1);
        tracep->declBit(c+39,"core id_ex_reg_inst out_mem_write", false,-1);
        tracep->declBit(c+40,"core id_ex_reg_inst out_mem_read", false,-1);
        tracep->declQuad(c+33,"core id_ex_reg_inst out_write_data", false,-1, 63,0);
        tracep->declBus(c+43,"core id_ex_reg_inst out_rd", false,-1, 4,0);
        tracep->declBit(c+41,"core id_ex_reg_inst out_reg_write", false,-1);
        tracep->declBit(c+42,"core id_ex_reg_inst out_mem_to_reg", false,-1);
        tracep->declBus(c+183,"core ex_stage_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+191,"core ex_stage_inst OPCODE_LEN", false,-1, 31,0);
        tracep->declBus(c+184,"core ex_stage_inst INSTR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+185,"core ex_stage_inst ALU_SEL", false,-1, 31,0);
        tracep->declQuad(c+29,"core ex_stage_inst in1", false,-1, 63,0);
        tracep->declQuad(c+31,"core ex_stage_inst in2", false,-1, 63,0);
        tracep->declQuad(c+27,"core ex_stage_inst imm", false,-1, 63,0);
        tracep->declBus(c+38,"core ex_stage_inst alu_sel", false,-1, 4,0);
        tracep->declBit(c+36,"core ex_stage_inst is_lui", false,-1);
        tracep->declBit(c+37,"core ex_stage_inst is_auipc", false,-1);
        tracep->declQuad(c+25,"core ex_stage_inst pc", false,-1, 63,0);
        tracep->declBit(c+35,"core ex_stage_inst alu_src", false,-1);
        tracep->declQuad(c+45,"core ex_stage_inst out", false,-1, 63,0);
        tracep->declQuad(c+45,"core ex_stage_inst alu_op", false,-1, 63,0);
        tracep->declQuad(c+65,"core ex_stage_inst alu_in1", false,-1, 63,0);
        tracep->declQuad(c+67,"core ex_stage_inst alu_in2", false,-1, 63,0);
        tracep->declBus(c+183,"core ex_stage_inst alu_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+185,"core ex_stage_inst alu_alu ALU_SEL", false,-1, 31,0);
        tracep->declQuad(c+65,"core ex_stage_inst alu_alu in1", false,-1, 63,0);
        tracep->declQuad(c+67,"core ex_stage_inst alu_alu in2", false,-1, 63,0);
        tracep->declBus(c+38,"core ex_stage_inst alu_alu alu_sel", false,-1, 4,0);
        tracep->declQuad(c+45,"core ex_stage_inst alu_alu out", false,-1, 63,0);
        tracep->declQuad(c+69,"core ex_stage_inst alu_alu add_out", false,-1, 63,0);
        tracep->declQuad(c+71,"core ex_stage_inst alu_alu sub_out", false,-1, 63,0);
        tracep->declQuad(c+73,"core ex_stage_inst alu_alu xor_out", false,-1, 63,0);
        tracep->declQuad(c+75,"core ex_stage_inst alu_alu and_out", false,-1, 63,0);
        tracep->declQuad(c+77,"core ex_stage_inst alu_alu or_out", false,-1, 63,0);
        tracep->declQuad(c+79,"core ex_stage_inst alu_alu sll_out", false,-1, 63,0);
        tracep->declQuad(c+81,"core ex_stage_inst alu_alu srl_out", false,-1, 63,0);
        tracep->declQuad(c+83,"core ex_stage_inst alu_alu sra_out", false,-1, 63,0);
        tracep->declQuad(c+85,"core ex_stage_inst alu_alu slt_out", false,-1, 63,0);
        tracep->declQuad(c+87,"core ex_stage_inst alu_alu sltu_out", false,-1, 63,0);
        tracep->declQuad(c+89,"core ex_stage_inst alu_alu mul_out", false,-1, 63,0);
        tracep->declBus(c+91,"core ex_stage_inst alu_alu mul_funct3", false,-1, 1,0);
        tracep->declBus(c+183,"core ex_stage_inst alu_alu add_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+65,"core ex_stage_inst alu_alu add_alu in1", false,-1, 63,0);
        tracep->declQuad(c+67,"core ex_stage_inst alu_alu add_alu in2", false,-1, 63,0);
        tracep->declQuad(c+69,"core ex_stage_inst alu_alu add_alu out", false,-1, 63,0);
        tracep->declBus(c+183,"core ex_stage_inst alu_alu sub_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+65,"core ex_stage_inst alu_alu sub_alu in1", false,-1, 63,0);
        tracep->declQuad(c+67,"core ex_stage_inst alu_alu sub_alu in2", false,-1, 63,0);
        tracep->declQuad(c+71,"core ex_stage_inst alu_alu sub_alu out", false,-1, 63,0);
        tracep->declBus(c+183,"core ex_stage_inst alu_alu xor_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+65,"core ex_stage_inst alu_alu xor_alu in1", false,-1, 63,0);
        tracep->declQuad(c+67,"core ex_stage_inst alu_alu xor_alu in2", false,-1, 63,0);
        tracep->declQuad(c+73,"core ex_stage_inst alu_alu xor_alu out", false,-1, 63,0);
        tracep->declBus(c+183,"core ex_stage_inst alu_alu and_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+65,"core ex_stage_inst alu_alu and_alu in1", false,-1, 63,0);
        tracep->declQuad(c+67,"core ex_stage_inst alu_alu and_alu in2", false,-1, 63,0);
        tracep->declQuad(c+75,"core ex_stage_inst alu_alu and_alu out", false,-1, 63,0);
        tracep->declBus(c+183,"core ex_stage_inst alu_alu or_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+65,"core ex_stage_inst alu_alu or_alu in1", false,-1, 63,0);
        tracep->declQuad(c+67,"core ex_stage_inst alu_alu or_alu in2", false,-1, 63,0);
        tracep->declQuad(c+77,"core ex_stage_inst alu_alu or_alu out", false,-1, 63,0);
        tracep->declBus(c+183,"core ex_stage_inst alu_alu sll_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+65,"core ex_stage_inst alu_alu sll_alu in", false,-1, 63,0);
        tracep->declBus(c+92,"core ex_stage_inst alu_alu sll_alu amt", false,-1, 5,0);
        tracep->declQuad(c+79,"core ex_stage_inst alu_alu sll_alu out", false,-1, 63,0);
        tracep->declBus(c+183,"core ex_stage_inst alu_alu srl_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+65,"core ex_stage_inst alu_alu srl_alu in", false,-1, 63,0);
        tracep->declBus(c+92,"core ex_stage_inst alu_alu srl_alu amt", false,-1, 5,0);
        tracep->declQuad(c+81,"core ex_stage_inst alu_alu srl_alu out", false,-1, 63,0);
        tracep->declBus(c+183,"core ex_stage_inst alu_alu sra_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+65,"core ex_stage_inst alu_alu sra_alu in", false,-1, 63,0);
        tracep->declBus(c+92,"core ex_stage_inst alu_alu sra_alu amt", false,-1, 5,0);
        tracep->declQuad(c+83,"core ex_stage_inst alu_alu sra_alu out", false,-1, 63,0);
        tracep->declBus(c+183,"core ex_stage_inst alu_alu slt_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+65,"core ex_stage_inst alu_alu slt_alu in1", false,-1, 63,0);
        tracep->declQuad(c+67,"core ex_stage_inst alu_alu slt_alu in2", false,-1, 63,0);
        tracep->declQuad(c+85,"core ex_stage_inst alu_alu slt_alu out", false,-1, 63,0);
        tracep->declBus(c+183,"core ex_stage_inst alu_alu sltu_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+65,"core ex_stage_inst alu_alu sltu_alu in1", false,-1, 63,0);
        tracep->declQuad(c+67,"core ex_stage_inst alu_alu sltu_alu in2", false,-1, 63,0);
        tracep->declQuad(c+87,"core ex_stage_inst alu_alu sltu_alu out", false,-1, 63,0);
        tracep->declBus(c+183,"core ex_stage_inst alu_alu mul_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+192,"core ex_stage_inst alu_alu mul_alu ALU_CNTRL_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+65,"core ex_stage_inst alu_alu mul_alu in1", false,-1, 63,0);
        tracep->declQuad(c+67,"core ex_stage_inst alu_alu mul_alu in2", false,-1, 63,0);
        tracep->declBus(c+91,"core ex_stage_inst alu_alu mul_alu alu_funct3", false,-1, 1,0);
        tracep->declQuad(c+89,"core ex_stage_inst alu_alu mul_alu out", false,-1, 63,0);
        tracep->declArray(c+93,"core ex_stage_inst alu_alu mul_alu product_full", false,-1, 127,0);
        tracep->declBus(c+183,"core ex_mem_reg_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+190,"core ex_mem_reg_inst FUNCT3", false,-1, 31,0);
        tracep->declBus(c+185,"core ex_mem_reg_inst REGFILE_LEN", false,-1, 31,0);
        tracep->declBit(c+113,"core ex_mem_reg_inst clk", false,-1);
        tracep->declBit(c+114,"core ex_mem_reg_inst rst", false,-1);
        tracep->declBit(c+187,"core ex_mem_reg_inst stall", false,-1);
        tracep->declBit(c+39,"core ex_mem_reg_inst in_mem_write", false,-1);
        tracep->declBit(c+40,"core ex_mem_reg_inst in_mem_read", false,-1);
        tracep->declQuad(c+33,"core ex_mem_reg_inst in_write_data", false,-1, 63,0);
        tracep->declBus(c+44,"core ex_mem_reg_inst in_funct3", false,-1, 2,0);
        tracep->declQuad(c+45,"core ex_mem_reg_inst in_alu_out", false,-1, 63,0);
        tracep->declBus(c+43,"core ex_mem_reg_inst in_rd", false,-1, 4,0);
        tracep->declBit(c+41,"core ex_mem_reg_inst in_reg_write", false,-1);
        tracep->declBit(c+42,"core ex_mem_reg_inst in_mem_to_reg", false,-1);
        tracep->declBit(c+48,"core ex_mem_reg_inst out_mem_write", false,-1);
        tracep->declBit(c+49,"core ex_mem_reg_inst out_mem_read", false,-1);
        tracep->declQuad(c+50,"core ex_mem_reg_inst out_write_data", false,-1, 63,0);
        tracep->declBus(c+47,"core ex_mem_reg_inst out_funct3", false,-1, 2,0);
        tracep->declQuad(c+52,"core ex_mem_reg_inst out_alu_out", false,-1, 63,0);
        tracep->declBus(c+54,"core ex_mem_reg_inst out_rd", false,-1, 4,0);
        tracep->declBit(c+55,"core ex_mem_reg_inst out_reg_write", false,-1);
        tracep->declBit(c+56,"core ex_mem_reg_inst out_mem_to_reg", false,-1);
        tracep->declBus(c+183,"core mem_stage_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+186,"core mem_stage_inst DATA_MEM_LEN", false,-1, 31,0);
        tracep->declBit(c+113,"core mem_stage_inst clk", false,-1);
        tracep->declBit(c+114,"core mem_stage_inst rst", false,-1);
        tracep->declBit(c+48,"core mem_stage_inst mem_write", false,-1);
        tracep->declBit(c+49,"core mem_stage_inst mem_read", false,-1);
        tracep->declBus(c+47,"core mem_stage_inst funct3", false,-1, 2,0);
        tracep->declQuad(c+52,"core mem_stage_inst alu_op", false,-1, 63,0);
        tracep->declQuad(c+50,"core mem_stage_inst write_data", false,-1, 63,0);
        tracep->declQuad(c+52,"core mem_stage_inst addr", false,-1, 63,0);
        tracep->declQuad(c+117,"core mem_stage_inst mem_out", false,-1, 63,0);
        tracep->declQuad(c+52,"core mem_stage_inst alu_out", false,-1, 63,0);
        tracep->declBus(c+193,"core mem_stage_inst NUM_BYTES", false,-1, 31,0);
        tracep->declBus(c+97,"core mem_stage_inst access_bytes", false,-1, 3,0);
        tracep->declBit(c+98,"core mem_stage_inst is_unsigned", false,-1);
        tracep->declBus(c+99,"core mem_stage_inst byte_addr", false,-1, 14,0);
        tracep->declBus(c+100,"core mem_stage_inst i", false,-1, 31,0);
        tracep->declQuad(c+101,"core mem_stage_inst raw_read", false,-1, 63,0);
        tracep->declBus(c+194,"core mem_stage_inst j", false,-1, 31,0);
        tracep->declBit(c+103,"core mem_stage_inst sign_bit", false,-1);
        tracep->declQuad(c+104,"core mem_stage_inst sext_mask", false,-1, 63,0);
        tracep->declBus(c+195,"core mem_stage_inst FULL_BYTES", false,-1, 3,0);
        tracep->declBit(c+106,"core mem_stage_inst is_fullwidth", false,-1);
        tracep->declQuad(c+107,"core mem_stage_inst extended", false,-1, 63,0);
        tracep->declBus(c+183,"core mem_wb_reg_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+185,"core mem_wb_reg_inst REGFILE_LEN", false,-1, 31,0);
        tracep->declBit(c+113,"core mem_wb_reg_inst clk", false,-1);
        tracep->declBit(c+114,"core mem_wb_reg_inst rst", false,-1);
        tracep->declBit(c+187,"core mem_wb_reg_inst stall", false,-1);
        tracep->declQuad(c+117,"core mem_wb_reg_inst in_mem_out", false,-1, 63,0);
        tracep->declQuad(c+52,"core mem_wb_reg_inst in_alu_out", false,-1, 63,0);
        tracep->declBit(c+55,"core mem_wb_reg_inst in_reg_write", false,-1);
        tracep->declBit(c+56,"core mem_wb_reg_inst in_mem_to_reg", false,-1);
        tracep->declBus(c+54,"core mem_wb_reg_inst in_rd", false,-1, 4,0);
        tracep->declQuad(c+57,"core mem_wb_reg_inst out_mem_out", false,-1, 63,0);
        tracep->declQuad(c+59,"core mem_wb_reg_inst out_alu_out", false,-1, 63,0);
        tracep->declBit(c+20,"core mem_wb_reg_inst out_reg_write", false,-1);
        tracep->declBit(c+61,"core mem_wb_reg_inst out_mem_to_reg", false,-1);
        tracep->declBus(c+21,"core mem_wb_reg_inst out_rd", false,-1, 4,0);
        tracep->declBus(c+183,"core wb_stage_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBit(c+61,"core wb_stage_inst mem_to_reg", false,-1);
        tracep->declQuad(c+57,"core wb_stage_inst mem_out", false,-1, 63,0);
        tracep->declQuad(c+59,"core wb_stage_inst alu_out", false,-1, 63,0);
        tracep->declQuad(c+22,"core wb_stage_inst wb_data", false,-1, 63,0);
        tracep->declBus(c+183,"core id_stage_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+184,"core id_stage_inst INSTR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+185,"core id_stage_inst ALU_SEL", false,-1, 31,0);
        tracep->declBit(c+113,"core id_stage_inst clk", false,-1);
        tracep->declBit(c+114,"core id_stage_inst rst", false,-1);
        tracep->declBus(c+6,"core id_stage_inst instr", false,-1, 31,0);
        tracep->declBit(c+20,"core id_stage_inst wb_en", false,-1);
        tracep->declBus(c+21,"core id_stage_inst wb_addr", false,-1, 4,0);
        tracep->declQuad(c+22,"core id_stage_inst wb_data", false,-1, 63,0);
        tracep->declQuad(c+115,"core id_stage_inst in1", false,-1, 63,0);
        tracep->declQuad(c+7,"core id_stage_inst in2", false,-1, 63,0);
        tracep->declQuad(c+9,"core id_stage_inst imm", false,-1, 63,0);
        tracep->declBus(c+11,"core id_stage_inst alu_sel", false,-1, 4,0);
        tracep->declBit(c+12,"core id_stage_inst alu_src", false,-1);
        tracep->declBus(c+13,"core id_stage_inst rd_addr", false,-1, 4,0);
        tracep->declBit(c+14,"core id_stage_inst reg_write", false,-1);
        tracep->declBit(c+15,"core id_stage_inst mem_read", false,-1);
        tracep->declBit(c+16,"core id_stage_inst mem_write", false,-1);
        tracep->declBit(c+15,"core id_stage_inst mem_to_reg", false,-1);
        tracep->declBus(c+19,"core id_stage_inst funct3", false,-1, 2,0);
        tracep->declBit(c+17,"core id_stage_inst is_lui", false,-1);
        tracep->declBit(c+18,"core id_stage_inst is_auipc", false,-1);
        tracep->declBus(c+109,"core id_stage_inst opcode", false,-1, 6,0);
        tracep->declBus(c+110,"core id_stage_inst rs1_addr", false,-1, 4,0);
        tracep->declBus(c+111,"core id_stage_inst rs2_addr", false,-1, 4,0);
        tracep->declBus(c+183,"core id_stage_inst immgen_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+184,"core id_stage_inst immgen_inst INSTR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+6,"core id_stage_inst immgen_inst instr", false,-1, 31,0);
        tracep->declQuad(c+9,"core id_stage_inst immgen_inst imm", false,-1, 63,0);
        tracep->declBus(c+191,"core id_stage_inst immgen_inst OPCODE_SIZE", false,-1, 31,0);
        tracep->declBus(c+109,"core id_stage_inst immgen_inst opcode", false,-1, 6,0);
        tracep->declBus(c+183,"core id_stage_inst alu_cntrl_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+184,"core id_stage_inst alu_cntrl_inst INSTR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+185,"core id_stage_inst alu_cntrl_inst ALU_SEL", false,-1, 31,0);
        tracep->declBus(c+6,"core id_stage_inst alu_cntrl_inst instr", false,-1, 31,0);
        tracep->declBus(c+11,"core id_stage_inst alu_cntrl_inst alu_sel", false,-1, 4,0);
        tracep->declBus(c+109,"core id_stage_inst alu_cntrl_inst opcode", false,-1, 6,0);
        tracep->declBus(c+19,"core id_stage_inst alu_cntrl_inst funct3", false,-1, 2,0);
        tracep->declBus(c+112,"core id_stage_inst alu_cntrl_inst funct7", false,-1, 6,0);
        tracep->declBus(c+183,"core id_stage_inst regfile_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+184,"core id_stage_inst regfile_inst NUM_REGS", false,-1, 31,0);
        tracep->declBit(c+113,"core id_stage_inst regfile_inst clk", false,-1);
        tracep->declBit(c+20,"core id_stage_inst regfile_inst write_en", false,-1);
        tracep->declBus(c+110,"core id_stage_inst regfile_inst read_addr_1", false,-1, 4,0);
        tracep->declQuad(c+115,"core id_stage_inst regfile_inst read_data_1", false,-1, 63,0);
        tracep->declBus(c+111,"core id_stage_inst regfile_inst read_addr_2", false,-1, 4,0);
        tracep->declQuad(c+7,"core id_stage_inst regfile_inst read_data_2", false,-1, 63,0);
        tracep->declBus(c+21,"core id_stage_inst regfile_inst write_addr", false,-1, 4,0);
        tracep->declQuad(c+22,"core id_stage_inst regfile_inst write_data", false,-1, 63,0);
        tracep->declQuad(c+188,"core id_stage_inst regfile_inst ZERO", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+119+i*2,"core id_stage_inst regfile_inst reg_file", true,(i+0), 63,0);}}
    }
}

void Vcore::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vcore::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vcore__Syms* __restrict vlSymsp = static_cast<Vcore__Syms*>(userp);
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vcore::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vcore__Syms* __restrict vlSymsp = static_cast<Vcore__Syms*>(userp);
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr),64);
        tracep->fullIData(oldp+3,(vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__mem
                                  [(0x7fffU & (IData)(
                                                      (vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr 
                                                       >> 2U)))]),32);
        tracep->fullQData(oldp+4,(vlSymsp->TOP__core.__PVT__ifid_pc),64);
        tracep->fullIData(oldp+6,(vlSymsp->TOP__core.__PVT__ifid_instr),32);
        tracep->fullQData(oldp+7,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_2),64);
        tracep->fullQData(oldp+9,(vlSymsp->TOP__core__id_stage_inst.__PVT__imm),64);
        tracep->fullCData(oldp+11,(vlSymsp->TOP__core__id_stage_inst.__PVT__alu_sel),5);
        tracep->fullBit(oldp+12,((((((0x13U == (0x7fU 
                                                & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                     | (3U == (0x7fU 
                                               & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                    | (0x23U == (0x7fU 
                                                 & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                   | (0x17U == (0x7fU 
                                                & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                  | (0x67U == (0x7fU 
                                               & vlSymsp->TOP__core.__PVT__ifid_instr)))));
        tracep->fullCData(oldp+13,((0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                             >> 7U))),5);
        tracep->fullBit(oldp+14,((((((((0x33U == (0x7fU 
                                                  & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                       | (0x13U == 
                                          (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                      | (3U == (0x7fU 
                                                & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                     | (0x37U == (0x7fU 
                                                  & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                    | (0x17U == (0x7fU 
                                                 & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                   | (0x6fU == (0x7fU 
                                                & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                  | (0x67U == (0x7fU 
                                               & vlSymsp->TOP__core.__PVT__ifid_instr)))));
        tracep->fullBit(oldp+15,((3U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))));
        tracep->fullBit(oldp+16,((0x23U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))));
        tracep->fullBit(oldp+17,((0x37U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))));
        tracep->fullBit(oldp+18,((0x17U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))));
        tracep->fullCData(oldp+19,((7U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                          >> 0xcU))),3);
        tracep->fullBit(oldp+20,(vlSymsp->TOP__core.__PVT__memwb_reg_write));
        tracep->fullCData(oldp+21,(vlSymsp->TOP__core.__PVT__memwb_rd),5);
        tracep->fullQData(oldp+22,(((IData)(vlSymsp->TOP__core.__PVT__memwb_mem_to_reg)
                                     ? vlSymsp->TOP__core.__PVT__memwb_mem_out
                                     : vlSymsp->TOP__core.__PVT__memwb_alu_out)),64);
        tracep->fullIData(oldp+24,(vlSymsp->TOP__core.__PVT__idex_instr),32);
        tracep->fullQData(oldp+25,(vlSymsp->TOP__core.__PVT__idex_pc),64);
        tracep->fullQData(oldp+27,(vlSymsp->TOP__core.__PVT__idex_imm),64);
        tracep->fullQData(oldp+29,(vlSymsp->TOP__core.__PVT__idex_in1),64);
        tracep->fullQData(oldp+31,(vlSymsp->TOP__core.__PVT__idex_in2),64);
        tracep->fullQData(oldp+33,(vlSymsp->TOP__core.__PVT__idex_write_data),64);
        tracep->fullBit(oldp+35,(vlSymsp->TOP__core.__PVT__idex_alu_src));
        tracep->fullBit(oldp+36,(vlSymsp->TOP__core.__PVT__idex_is_lui));
        tracep->fullBit(oldp+37,(vlSymsp->TOP__core.__PVT__idex_is_auipc));
        tracep->fullCData(oldp+38,(vlSymsp->TOP__core.__PVT__idex_alu_sel),5);
        tracep->fullBit(oldp+39,(vlSymsp->TOP__core.__PVT__idex_mem_write));
        tracep->fullBit(oldp+40,(vlSymsp->TOP__core.__PVT__idex_mem_read));
        tracep->fullBit(oldp+41,(vlSymsp->TOP__core.__PVT__idex_reg_write));
        tracep->fullBit(oldp+42,(vlSymsp->TOP__core.__PVT__idex_mem_to_reg));
        tracep->fullCData(oldp+43,(vlSymsp->TOP__core.__PVT__idex_rd),5);
        tracep->fullCData(oldp+44,(vlSymsp->TOP__core.__PVT__idex_funct3),3);
        tracep->fullQData(oldp+45,(((0x10U & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                                     ? 0ULL : ((8U 
                                                & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                                                     ? 0ULL
                                                     : vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_out)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                                                     ? vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_out
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                                                      ? (QData)((IData)(
                                                                        (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                                         < vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))
                                                      : (QData)((IData)(
                                                                        VL_LTS_IQQ(1,64,64, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2))))))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                                                      ? 
                                                     VL_SHIFTRS_QQI(64,64,6, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1, 
                                                                    (0x3fU 
                                                                     & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))
                                                      : 
                                                     (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                      >> 
                                                      (0x3fU 
                                                       & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                                                      ? 
                                                     (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                      << 
                                                      (0x3fU 
                                                       & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))
                                                      : 
                                                     (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                      | vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                                                      ? 
                                                     (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                      & vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)
                                                      : 
                                                     (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                      ^ vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                                                      ? 
                                                     (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                      - vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)
                                                      : 
                                                     (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                      + vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2))))))),64);
        tracep->fullCData(oldp+47,(vlSymsp->TOP__core.__PVT__exmem_funct3),3);
        tracep->fullBit(oldp+48,(vlSymsp->TOP__core.__PVT__exmem_mem_write));
        tracep->fullBit(oldp+49,(vlSymsp->TOP__core.__PVT__exmem_mem_read));
        tracep->fullQData(oldp+50,(vlSymsp->TOP__core.__PVT__exmem_write_data),64);
        tracep->fullQData(oldp+52,(vlSymsp->TOP__core.__PVT__exmem_alu_out),64);
        tracep->fullCData(oldp+54,(vlSymsp->TOP__core.__PVT__exmem_rd),5);
        tracep->fullBit(oldp+55,(vlSymsp->TOP__core.__PVT__exmem_reg_write));
        tracep->fullBit(oldp+56,(vlSymsp->TOP__core.__PVT__exmem_mem_to_reg));
        tracep->fullQData(oldp+57,(vlSymsp->TOP__core.__PVT__memwb_mem_out),64);
        tracep->fullQData(oldp+59,(vlSymsp->TOP__core.__PVT__memwb_alu_out),64);
        tracep->fullBit(oldp+61,(vlSymsp->TOP__core.__PVT__memwb_mem_to_reg));
        tracep->fullQData(oldp+62,((4ULL + vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr)),64);
        tracep->fullSData(oldp+64,((0x7fffU & (IData)(
                                                      (vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr 
                                                       >> 2U)))),15);
        tracep->fullQData(oldp+65,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1),64);
        tracep->fullQData(oldp+67,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2),64);
        tracep->fullQData(oldp+69,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                    + vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
        tracep->fullQData(oldp+71,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                    - vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
        tracep->fullQData(oldp+73,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                    ^ vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
        tracep->fullQData(oldp+75,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                    & vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
        tracep->fullQData(oldp+77,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                    | vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
        tracep->fullQData(oldp+79,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                    << (0x3fU & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
        tracep->fullQData(oldp+81,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                    >> (0x3fU & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
        tracep->fullQData(oldp+83,(VL_SHIFTRS_QQI(64,64,6, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1, 
                                                  (0x3fU 
                                                   & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
        tracep->fullQData(oldp+85,((QData)((IData)(
                                                   VL_LTS_IQQ(1,64,64, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
        tracep->fullQData(oldp+87,((QData)((IData)(
                                                   (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                    < vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
        tracep->fullQData(oldp+89,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_out),64);
        tracep->fullCData(oldp+91,((3U & (2U ^ (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel)))),2);
        tracep->fullCData(oldp+92,((0x3fU & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2))),6);
        tracep->fullWData(oldp+93,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full),128);
        tracep->fullCData(oldp+97,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes),4);
        tracep->fullBit(oldp+98,((1U & ((IData)(vlSymsp->TOP__core.__PVT__exmem_funct3) 
                                        >> 2U))));
        tracep->fullSData(oldp+99,((0x7fffU & (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out))),15);
        tracep->fullIData(oldp+100,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__i),32);
        tracep->fullQData(oldp+101,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read),64);
        tracep->fullBit(oldp+103,((1U & ((8U & (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))
                                          ? ((~ ((IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes) 
                                                 >> 2U)) 
                                             & ((~ 
                                                 ((IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes) 
                                                  >> 1U)) 
                                                & ((~ (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes)) 
                                                   & (IData)(
                                                             (vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                                                              >> 0x3fU)))))
                                          : ((4U & (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))
                                              ? ((~ 
                                                  ((IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes) 
                                                   >> 1U)) 
                                                 & ((~ (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                                                               >> 0x1fU))))
                                              : ((2U 
                                                  & (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))
                                                  ? 
                                                 ((~ (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes)) 
                                                  & (IData)(
                                                            (vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                                                             >> 0xfU)))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes) 
                                                  & (IData)(
                                                            (vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                                                             >> 7U)))))))));
        tracep->fullQData(oldp+104,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__sext_mask),64);
        tracep->fullBit(oldp+106,((8U <= (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))));
        tracep->fullQData(oldp+107,(((1U & (((IData)(vlSymsp->TOP__core.__PVT__exmem_funct3) 
                                             >> 2U) 
                                            | (8U <= (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))))
                                      ? vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read
                                      : (vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                                         | vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__sext_mask))),64);
        tracep->fullCData(oldp+109,((0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr)),7);
        tracep->fullCData(oldp+110,((0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+111,((0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+112,((0x7fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                              >> 0x19U))),7);
        tracep->fullBit(oldp+113,(vlTOPp->clk));
        tracep->fullBit(oldp+114,(vlTOPp->rst));
        tracep->fullQData(oldp+115,(((0U == (0x1fU 
                                             & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                >> 0xfU)))
                                      ? 0ULL : vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file
                                     [(0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                >> 0xfU))])),64);
        tracep->fullQData(oldp+117,((((IData)(vlSymsp->TOP__core.__PVT__exmem_mem_read) 
                                      & (~ (IData)(vlTOPp->rst)))
                                      ? ((1U & (((IData)(vlSymsp->TOP__core.__PVT__exmem_funct3) 
                                                 >> 2U) 
                                                | (8U 
                                                   <= (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))))
                                          ? vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read
                                          : (vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                                             | vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__sext_mask))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+119,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[0]),64);
        tracep->fullQData(oldp+121,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[1]),64);
        tracep->fullQData(oldp+123,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[2]),64);
        tracep->fullQData(oldp+125,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[3]),64);
        tracep->fullQData(oldp+127,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[4]),64);
        tracep->fullQData(oldp+129,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[5]),64);
        tracep->fullQData(oldp+131,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[6]),64);
        tracep->fullQData(oldp+133,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[7]),64);
        tracep->fullQData(oldp+135,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[8]),64);
        tracep->fullQData(oldp+137,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[9]),64);
        tracep->fullQData(oldp+139,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[10]),64);
        tracep->fullQData(oldp+141,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[11]),64);
        tracep->fullQData(oldp+143,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[12]),64);
        tracep->fullQData(oldp+145,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[13]),64);
        tracep->fullQData(oldp+147,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[14]),64);
        tracep->fullQData(oldp+149,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[15]),64);
        tracep->fullQData(oldp+151,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[16]),64);
        tracep->fullQData(oldp+153,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[17]),64);
        tracep->fullQData(oldp+155,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[18]),64);
        tracep->fullQData(oldp+157,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[19]),64);
        tracep->fullQData(oldp+159,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[20]),64);
        tracep->fullQData(oldp+161,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[21]),64);
        tracep->fullQData(oldp+163,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[22]),64);
        tracep->fullQData(oldp+165,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[23]),64);
        tracep->fullQData(oldp+167,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[24]),64);
        tracep->fullQData(oldp+169,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[25]),64);
        tracep->fullQData(oldp+171,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[26]),64);
        tracep->fullQData(oldp+173,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[27]),64);
        tracep->fullQData(oldp+175,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[28]),64);
        tracep->fullQData(oldp+177,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[29]),64);
        tracep->fullQData(oldp+179,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[30]),64);
        tracep->fullQData(oldp+181,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[31]),64);
        tracep->fullIData(oldp+183,(0x40U),32);
        tracep->fullIData(oldp+184,(0x20U),32);
        tracep->fullIData(oldp+185,(5U),32);
        tracep->fullIData(oldp+186,(0xfU),32);
        tracep->fullBit(oldp+187,(0U));
        tracep->fullQData(oldp+188,(0ULL),64);
        tracep->fullIData(oldp+190,(3U),32);
        tracep->fullIData(oldp+191,(7U),32);
        tracep->fullIData(oldp+192,(2U),32);
        tracep->fullIData(oldp+193,(8U),32);
        tracep->fullIData(oldp+194,(8U),32);
        tracep->fullCData(oldp+195,(8U),4);
    }
}
