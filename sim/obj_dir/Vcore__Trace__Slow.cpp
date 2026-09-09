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
        tracep->declBit(c+126,"clk", false,-1);
        tracep->declBit(c+127,"rst", false,-1);
        tracep->declBus(c+194,"core BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+195,"core INSTR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+196,"core ALU_SEL", false,-1, 31,0);
        tracep->declBus(c+196,"core REGFILE_LEN", false,-1, 31,0);
        tracep->declBus(c+197,"core INSTR_MEM_LEN", false,-1, 31,0);
        tracep->declBus(c+197,"core DATA_MEM_LEN", false,-1, 31,0);
        tracep->declBit(c+126,"core clk", false,-1);
        tracep->declBit(c+127,"core rst", false,-1);
        tracep->declBit(c+198,"core stall", false,-1);
        tracep->declQuad(c+1,"core if_pc", false,-1, 63,0);
        tracep->declBus(c+3,"core if_instr", false,-1, 31,0);
        tracep->declBit(c+4,"core id_is_j", false,-1);
        tracep->declQuad(c+5,"core id_pc_dst", false,-1, 63,0);
        tracep->declQuad(c+7,"core ifid_pc", false,-1, 63,0);
        tracep->declBus(c+9,"core ifid_instr", false,-1, 31,0);
        tracep->declQuad(c+10,"core id_in1", false,-1, 63,0);
        tracep->declQuad(c+12,"core id_in2", false,-1, 63,0);
        tracep->declQuad(c+14,"core id_imm", false,-1, 63,0);
        tracep->declBus(c+16,"core id_alu_sel", false,-1, 4,0);
        tracep->declBit(c+17,"core id_alu_src", false,-1);
        tracep->declBus(c+18,"core id_rd_addr", false,-1, 4,0);
        tracep->declBit(c+19,"core id_reg_write", false,-1);
        tracep->declBit(c+20,"core id_mem_read", false,-1);
        tracep->declBit(c+21,"core id_mem_write", false,-1);
        tracep->declBit(c+20,"core id_mem_to_reg", false,-1);
        tracep->declBit(c+22,"core id_is_lui", false,-1);
        tracep->declBit(c+23,"core id_is_auipc", false,-1);
        tracep->declBus(c+24,"core id_funct3", false,-1, 2,0);
        tracep->declBit(c+25,"core wb_en", false,-1);
        tracep->declBus(c+26,"core wb_addr", false,-1, 4,0);
        tracep->declQuad(c+27,"core wb_data", false,-1, 63,0);
        tracep->declBus(c+29,"core idex_instr", false,-1, 31,0);
        tracep->declQuad(c+30,"core idex_pc", false,-1, 63,0);
        tracep->declQuad(c+32,"core idex_imm", false,-1, 63,0);
        tracep->declQuad(c+34,"core idex_in1", false,-1, 63,0);
        tracep->declQuad(c+36,"core idex_in2", false,-1, 63,0);
        tracep->declQuad(c+38,"core idex_write_data", false,-1, 63,0);
        tracep->declBit(c+40,"core idex_alu_src", false,-1);
        tracep->declBit(c+41,"core idex_is_j", false,-1);
        tracep->declBit(c+42,"core idex_is_lui", false,-1);
        tracep->declBit(c+43,"core idex_is_auipc", false,-1);
        tracep->declBus(c+44,"core idex_alu_sel", false,-1, 4,0);
        tracep->declBit(c+45,"core idex_mem_write", false,-1);
        tracep->declBit(c+46,"core idex_mem_read", false,-1);
        tracep->declBit(c+47,"core idex_reg_write", false,-1);
        tracep->declBit(c+48,"core idex_mem_to_reg", false,-1);
        tracep->declBus(c+49,"core idex_rd", false,-1, 4,0);
        tracep->declBus(c+50,"core idex_funct3", false,-1, 2,0);
        tracep->declQuad(c+51,"core ex_out", false,-1, 63,0);
        tracep->declBus(c+53,"core exmem_funct3", false,-1, 2,0);
        tracep->declBit(c+54,"core exmem_mem_write", false,-1);
        tracep->declBit(c+55,"core exmem_mem_read", false,-1);
        tracep->declQuad(c+56,"core exmem_write_data", false,-1, 63,0);
        tracep->declQuad(c+58,"core exmem_alu_out", false,-1, 63,0);
        tracep->declBus(c+60,"core exmem_rd", false,-1, 4,0);
        tracep->declBit(c+61,"core exmem_reg_write", false,-1);
        tracep->declBit(c+62,"core exmem_mem_to_reg", false,-1);
        tracep->declQuad(c+128,"core mem_out", false,-1, 63,0);
        tracep->declQuad(c+58,"core mem_alu_out", false,-1, 63,0);
        tracep->declQuad(c+63,"core memwb_mem_out", false,-1, 63,0);
        tracep->declQuad(c+65,"core memwb_alu_out", false,-1, 63,0);
        tracep->declBus(c+26,"core memwb_rd", false,-1, 4,0);
        tracep->declBit(c+25,"core memwb_reg_write", false,-1);
        tracep->declBit(c+67,"core memwb_mem_to_reg", false,-1);
        tracep->declBus(c+194,"core if_stage_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+195,"core if_stage_inst INSTR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+197,"core if_stage_inst INSTR_MEM_LEN", false,-1, 31,0);
        tracep->declBit(c+126,"core if_stage_inst clk", false,-1);
        tracep->declBit(c+198,"core if_stage_inst stall", false,-1);
        tracep->declBit(c+127,"core if_stage_inst rst", false,-1);
        tracep->declBit(c+4,"core if_stage_inst pc_jmp", false,-1);
        tracep->declQuad(c+5,"core if_stage_inst pc_dst", false,-1, 63,0);
        tracep->declBus(c+3,"core if_stage_inst instr", false,-1, 31,0);
        tracep->declQuad(c+1,"core if_stage_inst pc", false,-1, 63,0);
        tracep->declQuad(c+199,"core if_stage_inst ZERO", false,-1, 63,0);
        tracep->declQuad(c+1,"core if_stage_inst pc_curr", false,-1, 63,0);
        tracep->declQuad(c+68,"core if_stage_inst pc_next", false,-1, 63,0);
        tracep->declBus(c+70,"core if_stage_inst word_addr", false,-1, 14,0);
        tracep->declBus(c+194,"core if_id_reg_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+195,"core if_id_reg_inst INSTR_WIDTH", false,-1, 31,0);
        tracep->declBit(c+126,"core if_id_reg_inst clk", false,-1);
        tracep->declBit(c+127,"core if_id_reg_inst rst", false,-1);
        tracep->declBit(c+4,"core if_id_reg_inst flush", false,-1);
        tracep->declBit(c+198,"core if_id_reg_inst stall", false,-1);
        tracep->declQuad(c+1,"core if_id_reg_inst in_pc", false,-1, 63,0);
        tracep->declBus(c+3,"core if_id_reg_inst in_instr", false,-1, 31,0);
        tracep->declQuad(c+7,"core if_id_reg_inst out_pc", false,-1, 63,0);
        tracep->declBus(c+9,"core if_id_reg_inst out_instr", false,-1, 31,0);
        tracep->declBus(c+201,"core if_id_reg_inst NOP", false,-1, 31,0);
        tracep->declBus(c+194,"core id_ex_reg_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+195,"core id_ex_reg_inst INSTR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+196,"core id_ex_reg_inst ALU_SEL", false,-1, 31,0);
        tracep->declBus(c+202,"core id_ex_reg_inst FUNCT3", false,-1, 31,0);
        tracep->declBus(c+196,"core id_ex_reg_inst REGFILE_LEN", false,-1, 31,0);
        tracep->declBit(c+126,"core id_ex_reg_inst clk", false,-1);
        tracep->declBit(c+127,"core id_ex_reg_inst rst", false,-1);
        tracep->declBit(c+198,"core id_ex_reg_inst stall", false,-1);
        tracep->declBus(c+9,"core id_ex_reg_inst in_instr", false,-1, 31,0);
        tracep->declBus(c+24,"core id_ex_reg_inst in_funct3", false,-1, 2,0);
        tracep->declQuad(c+7,"core id_ex_reg_inst in_pc", false,-1, 63,0);
        tracep->declQuad(c+14,"core id_ex_reg_inst in_imm", false,-1, 63,0);
        tracep->declQuad(c+10,"core id_ex_reg_inst in_in1", false,-1, 63,0);
        tracep->declQuad(c+12,"core id_ex_reg_inst in_in2", false,-1, 63,0);
        tracep->declBit(c+17,"core id_ex_reg_inst in_alu_src", false,-1);
        tracep->declBus(c+16,"core id_ex_reg_inst in_alu_sel", false,-1, 4,0);
        tracep->declBit(c+4,"core id_ex_reg_inst in_is_j", false,-1);
        tracep->declBit(c+22,"core id_ex_reg_inst in_is_lui", false,-1);
        tracep->declBit(c+23,"core id_ex_reg_inst in_is_auipc", false,-1);
        tracep->declBit(c+21,"core id_ex_reg_inst in_mem_write", false,-1);
        tracep->declBit(c+20,"core id_ex_reg_inst in_mem_read", false,-1);
        tracep->declQuad(c+12,"core id_ex_reg_inst in_write_data", false,-1, 63,0);
        tracep->declBus(c+18,"core id_ex_reg_inst in_rd", false,-1, 4,0);
        tracep->declBit(c+19,"core id_ex_reg_inst in_reg_write", false,-1);
        tracep->declBit(c+20,"core id_ex_reg_inst in_mem_to_reg", false,-1);
        tracep->declBus(c+29,"core id_ex_reg_inst out_instr", false,-1, 31,0);
        tracep->declBus(c+50,"core id_ex_reg_inst out_funct3", false,-1, 2,0);
        tracep->declQuad(c+30,"core id_ex_reg_inst out_pc", false,-1, 63,0);
        tracep->declQuad(c+32,"core id_ex_reg_inst out_imm", false,-1, 63,0);
        tracep->declQuad(c+34,"core id_ex_reg_inst out_in1", false,-1, 63,0);
        tracep->declQuad(c+36,"core id_ex_reg_inst out_in2", false,-1, 63,0);
        tracep->declBit(c+40,"core id_ex_reg_inst out_alu_src", false,-1);
        tracep->declBus(c+44,"core id_ex_reg_inst out_alu_sel", false,-1, 4,0);
        tracep->declBit(c+41,"core id_ex_reg_inst out_is_j", false,-1);
        tracep->declBit(c+42,"core id_ex_reg_inst out_is_lui", false,-1);
        tracep->declBit(c+43,"core id_ex_reg_inst out_is_auipc", false,-1);
        tracep->declBit(c+45,"core id_ex_reg_inst out_mem_write", false,-1);
        tracep->declBit(c+46,"core id_ex_reg_inst out_mem_read", false,-1);
        tracep->declQuad(c+38,"core id_ex_reg_inst out_write_data", false,-1, 63,0);
        tracep->declBus(c+49,"core id_ex_reg_inst out_rd", false,-1, 4,0);
        tracep->declBit(c+47,"core id_ex_reg_inst out_reg_write", false,-1);
        tracep->declBit(c+48,"core id_ex_reg_inst out_mem_to_reg", false,-1);
        tracep->declBus(c+194,"core ex_stage_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+203,"core ex_stage_inst OPCODE_LEN", false,-1, 31,0);
        tracep->declBus(c+195,"core ex_stage_inst INSTR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+196,"core ex_stage_inst ALU_SEL", false,-1, 31,0);
        tracep->declQuad(c+34,"core ex_stage_inst in1", false,-1, 63,0);
        tracep->declQuad(c+36,"core ex_stage_inst in2", false,-1, 63,0);
        tracep->declQuad(c+32,"core ex_stage_inst imm", false,-1, 63,0);
        tracep->declBus(c+44,"core ex_stage_inst alu_sel", false,-1, 4,0);
        tracep->declBit(c+41,"core ex_stage_inst is_j", false,-1);
        tracep->declBit(c+42,"core ex_stage_inst is_lui", false,-1);
        tracep->declBit(c+43,"core ex_stage_inst is_auipc", false,-1);
        tracep->declQuad(c+30,"core ex_stage_inst pc", false,-1, 63,0);
        tracep->declBit(c+40,"core ex_stage_inst alu_src", false,-1);
        tracep->declQuad(c+51,"core ex_stage_inst out", false,-1, 63,0);
        tracep->declQuad(c+71,"core ex_stage_inst alu_op", false,-1, 63,0);
        tracep->declQuad(c+73,"core ex_stage_inst alu_in1", false,-1, 63,0);
        tracep->declQuad(c+75,"core ex_stage_inst alu_in2", false,-1, 63,0);
        tracep->declBus(c+194,"core ex_stage_inst alu_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+196,"core ex_stage_inst alu_alu ALU_SEL", false,-1, 31,0);
        tracep->declQuad(c+73,"core ex_stage_inst alu_alu in1", false,-1, 63,0);
        tracep->declQuad(c+75,"core ex_stage_inst alu_alu in2", false,-1, 63,0);
        tracep->declBus(c+44,"core ex_stage_inst alu_alu alu_sel", false,-1, 4,0);
        tracep->declQuad(c+71,"core ex_stage_inst alu_alu out", false,-1, 63,0);
        tracep->declQuad(c+77,"core ex_stage_inst alu_alu add_out", false,-1, 63,0);
        tracep->declQuad(c+79,"core ex_stage_inst alu_alu sub_out", false,-1, 63,0);
        tracep->declQuad(c+81,"core ex_stage_inst alu_alu xor_out", false,-1, 63,0);
        tracep->declQuad(c+83,"core ex_stage_inst alu_alu and_out", false,-1, 63,0);
        tracep->declQuad(c+85,"core ex_stage_inst alu_alu or_out", false,-1, 63,0);
        tracep->declQuad(c+87,"core ex_stage_inst alu_alu sll_out", false,-1, 63,0);
        tracep->declQuad(c+89,"core ex_stage_inst alu_alu srl_out", false,-1, 63,0);
        tracep->declQuad(c+91,"core ex_stage_inst alu_alu sra_out", false,-1, 63,0);
        tracep->declQuad(c+93,"core ex_stage_inst alu_alu slt_out", false,-1, 63,0);
        tracep->declQuad(c+95,"core ex_stage_inst alu_alu sltu_out", false,-1, 63,0);
        tracep->declQuad(c+97,"core ex_stage_inst alu_alu mul_out", false,-1, 63,0);
        tracep->declBus(c+99,"core ex_stage_inst alu_alu mul_funct3", false,-1, 1,0);
        tracep->declBus(c+194,"core ex_stage_inst alu_alu add_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+73,"core ex_stage_inst alu_alu add_alu in1", false,-1, 63,0);
        tracep->declQuad(c+75,"core ex_stage_inst alu_alu add_alu in2", false,-1, 63,0);
        tracep->declQuad(c+77,"core ex_stage_inst alu_alu add_alu out", false,-1, 63,0);
        tracep->declBus(c+194,"core ex_stage_inst alu_alu sub_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+73,"core ex_stage_inst alu_alu sub_alu in1", false,-1, 63,0);
        tracep->declQuad(c+75,"core ex_stage_inst alu_alu sub_alu in2", false,-1, 63,0);
        tracep->declQuad(c+79,"core ex_stage_inst alu_alu sub_alu out", false,-1, 63,0);
        tracep->declBus(c+194,"core ex_stage_inst alu_alu xor_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+73,"core ex_stage_inst alu_alu xor_alu in1", false,-1, 63,0);
        tracep->declQuad(c+75,"core ex_stage_inst alu_alu xor_alu in2", false,-1, 63,0);
        tracep->declQuad(c+81,"core ex_stage_inst alu_alu xor_alu out", false,-1, 63,0);
        tracep->declBus(c+194,"core ex_stage_inst alu_alu and_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+73,"core ex_stage_inst alu_alu and_alu in1", false,-1, 63,0);
        tracep->declQuad(c+75,"core ex_stage_inst alu_alu and_alu in2", false,-1, 63,0);
        tracep->declQuad(c+83,"core ex_stage_inst alu_alu and_alu out", false,-1, 63,0);
        tracep->declBus(c+194,"core ex_stage_inst alu_alu or_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+73,"core ex_stage_inst alu_alu or_alu in1", false,-1, 63,0);
        tracep->declQuad(c+75,"core ex_stage_inst alu_alu or_alu in2", false,-1, 63,0);
        tracep->declQuad(c+85,"core ex_stage_inst alu_alu or_alu out", false,-1, 63,0);
        tracep->declBus(c+194,"core ex_stage_inst alu_alu sll_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+73,"core ex_stage_inst alu_alu sll_alu in", false,-1, 63,0);
        tracep->declBus(c+100,"core ex_stage_inst alu_alu sll_alu amt", false,-1, 5,0);
        tracep->declQuad(c+87,"core ex_stage_inst alu_alu sll_alu out", false,-1, 63,0);
        tracep->declBus(c+194,"core ex_stage_inst alu_alu srl_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+73,"core ex_stage_inst alu_alu srl_alu in", false,-1, 63,0);
        tracep->declBus(c+100,"core ex_stage_inst alu_alu srl_alu amt", false,-1, 5,0);
        tracep->declQuad(c+89,"core ex_stage_inst alu_alu srl_alu out", false,-1, 63,0);
        tracep->declBus(c+194,"core ex_stage_inst alu_alu sra_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+73,"core ex_stage_inst alu_alu sra_alu in", false,-1, 63,0);
        tracep->declBus(c+100,"core ex_stage_inst alu_alu sra_alu amt", false,-1, 5,0);
        tracep->declQuad(c+91,"core ex_stage_inst alu_alu sra_alu out", false,-1, 63,0);
        tracep->declBus(c+194,"core ex_stage_inst alu_alu slt_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+73,"core ex_stage_inst alu_alu slt_alu in1", false,-1, 63,0);
        tracep->declQuad(c+75,"core ex_stage_inst alu_alu slt_alu in2", false,-1, 63,0);
        tracep->declQuad(c+93,"core ex_stage_inst alu_alu slt_alu out", false,-1, 63,0);
        tracep->declBus(c+194,"core ex_stage_inst alu_alu sltu_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+73,"core ex_stage_inst alu_alu sltu_alu in1", false,-1, 63,0);
        tracep->declQuad(c+75,"core ex_stage_inst alu_alu sltu_alu in2", false,-1, 63,0);
        tracep->declQuad(c+95,"core ex_stage_inst alu_alu sltu_alu out", false,-1, 63,0);
        tracep->declBus(c+194,"core ex_stage_inst alu_alu mul_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+204,"core ex_stage_inst alu_alu mul_alu ALU_CNTRL_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+73,"core ex_stage_inst alu_alu mul_alu in1", false,-1, 63,0);
        tracep->declQuad(c+75,"core ex_stage_inst alu_alu mul_alu in2", false,-1, 63,0);
        tracep->declBus(c+99,"core ex_stage_inst alu_alu mul_alu alu_funct3", false,-1, 1,0);
        tracep->declQuad(c+97,"core ex_stage_inst alu_alu mul_alu out", false,-1, 63,0);
        tracep->declArray(c+101,"core ex_stage_inst alu_alu mul_alu product_full", false,-1, 127,0);
        tracep->declBus(c+194,"core ex_mem_reg_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+202,"core ex_mem_reg_inst FUNCT3", false,-1, 31,0);
        tracep->declBus(c+196,"core ex_mem_reg_inst REGFILE_LEN", false,-1, 31,0);
        tracep->declBit(c+126,"core ex_mem_reg_inst clk", false,-1);
        tracep->declBit(c+127,"core ex_mem_reg_inst rst", false,-1);
        tracep->declBit(c+198,"core ex_mem_reg_inst stall", false,-1);
        tracep->declBit(c+45,"core ex_mem_reg_inst in_mem_write", false,-1);
        tracep->declBit(c+46,"core ex_mem_reg_inst in_mem_read", false,-1);
        tracep->declQuad(c+38,"core ex_mem_reg_inst in_write_data", false,-1, 63,0);
        tracep->declBus(c+50,"core ex_mem_reg_inst in_funct3", false,-1, 2,0);
        tracep->declQuad(c+51,"core ex_mem_reg_inst in_alu_out", false,-1, 63,0);
        tracep->declBus(c+49,"core ex_mem_reg_inst in_rd", false,-1, 4,0);
        tracep->declBit(c+47,"core ex_mem_reg_inst in_reg_write", false,-1);
        tracep->declBit(c+48,"core ex_mem_reg_inst in_mem_to_reg", false,-1);
        tracep->declBit(c+54,"core ex_mem_reg_inst out_mem_write", false,-1);
        tracep->declBit(c+55,"core ex_mem_reg_inst out_mem_read", false,-1);
        tracep->declQuad(c+56,"core ex_mem_reg_inst out_write_data", false,-1, 63,0);
        tracep->declBus(c+53,"core ex_mem_reg_inst out_funct3", false,-1, 2,0);
        tracep->declQuad(c+58,"core ex_mem_reg_inst out_alu_out", false,-1, 63,0);
        tracep->declBus(c+60,"core ex_mem_reg_inst out_rd", false,-1, 4,0);
        tracep->declBit(c+61,"core ex_mem_reg_inst out_reg_write", false,-1);
        tracep->declBit(c+62,"core ex_mem_reg_inst out_mem_to_reg", false,-1);
        tracep->declBus(c+194,"core mem_stage_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+197,"core mem_stage_inst DATA_MEM_LEN", false,-1, 31,0);
        tracep->declBit(c+126,"core mem_stage_inst clk", false,-1);
        tracep->declBit(c+127,"core mem_stage_inst rst", false,-1);
        tracep->declBit(c+54,"core mem_stage_inst mem_write", false,-1);
        tracep->declBit(c+55,"core mem_stage_inst mem_read", false,-1);
        tracep->declBus(c+53,"core mem_stage_inst funct3", false,-1, 2,0);
        tracep->declQuad(c+58,"core mem_stage_inst alu_op", false,-1, 63,0);
        tracep->declQuad(c+56,"core mem_stage_inst write_data", false,-1, 63,0);
        tracep->declQuad(c+58,"core mem_stage_inst addr", false,-1, 63,0);
        tracep->declQuad(c+128,"core mem_stage_inst mem_out", false,-1, 63,0);
        tracep->declQuad(c+58,"core mem_stage_inst alu_out", false,-1, 63,0);
        tracep->declBus(c+205,"core mem_stage_inst NUM_BYTES", false,-1, 31,0);
        tracep->declBus(c+105,"core mem_stage_inst access_bytes", false,-1, 3,0);
        tracep->declBit(c+106,"core mem_stage_inst is_unsigned", false,-1);
        tracep->declBus(c+107,"core mem_stage_inst byte_addr", false,-1, 14,0);
        tracep->declBus(c+108,"core mem_stage_inst i", false,-1, 31,0);
        tracep->declQuad(c+109,"core mem_stage_inst raw_read", false,-1, 63,0);
        tracep->declBus(c+206,"core mem_stage_inst j", false,-1, 31,0);
        tracep->declBit(c+111,"core mem_stage_inst sign_bit", false,-1);
        tracep->declQuad(c+112,"core mem_stage_inst sext_mask", false,-1, 63,0);
        tracep->declBus(c+207,"core mem_stage_inst FULL_BYTES", false,-1, 3,0);
        tracep->declBit(c+114,"core mem_stage_inst is_fullwidth", false,-1);
        tracep->declQuad(c+115,"core mem_stage_inst extended", false,-1, 63,0);
        tracep->declBus(c+194,"core mem_wb_reg_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+196,"core mem_wb_reg_inst REGFILE_LEN", false,-1, 31,0);
        tracep->declBit(c+126,"core mem_wb_reg_inst clk", false,-1);
        tracep->declBit(c+127,"core mem_wb_reg_inst rst", false,-1);
        tracep->declBit(c+198,"core mem_wb_reg_inst stall", false,-1);
        tracep->declQuad(c+128,"core mem_wb_reg_inst in_mem_out", false,-1, 63,0);
        tracep->declQuad(c+58,"core mem_wb_reg_inst in_alu_out", false,-1, 63,0);
        tracep->declBit(c+61,"core mem_wb_reg_inst in_reg_write", false,-1);
        tracep->declBit(c+62,"core mem_wb_reg_inst in_mem_to_reg", false,-1);
        tracep->declBus(c+60,"core mem_wb_reg_inst in_rd", false,-1, 4,0);
        tracep->declQuad(c+63,"core mem_wb_reg_inst out_mem_out", false,-1, 63,0);
        tracep->declQuad(c+65,"core mem_wb_reg_inst out_alu_out", false,-1, 63,0);
        tracep->declBit(c+25,"core mem_wb_reg_inst out_reg_write", false,-1);
        tracep->declBit(c+67,"core mem_wb_reg_inst out_mem_to_reg", false,-1);
        tracep->declBus(c+26,"core mem_wb_reg_inst out_rd", false,-1, 4,0);
        tracep->declBus(c+194,"core wb_stage_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBit(c+67,"core wb_stage_inst mem_to_reg", false,-1);
        tracep->declQuad(c+63,"core wb_stage_inst mem_out", false,-1, 63,0);
        tracep->declQuad(c+65,"core wb_stage_inst alu_out", false,-1, 63,0);
        tracep->declQuad(c+27,"core wb_stage_inst wb_data", false,-1, 63,0);
        tracep->declBus(c+194,"core id_stage_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+195,"core id_stage_inst INSTR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+196,"core id_stage_inst ALU_SEL", false,-1, 31,0);
        tracep->declBit(c+126,"core id_stage_inst clk", false,-1);
        tracep->declBit(c+127,"core id_stage_inst rst", false,-1);
        tracep->declBus(c+9,"core id_stage_inst instr", false,-1, 31,0);
        tracep->declBit(c+25,"core id_stage_inst wb_en", false,-1);
        tracep->declBus(c+26,"core id_stage_inst wb_addr", false,-1, 4,0);
        tracep->declQuad(c+27,"core id_stage_inst wb_data", false,-1, 63,0);
        tracep->declQuad(c+7,"core id_stage_inst pc", false,-1, 63,0);
        tracep->declQuad(c+10,"core id_stage_inst in1", false,-1, 63,0);
        tracep->declQuad(c+12,"core id_stage_inst in2", false,-1, 63,0);
        tracep->declQuad(c+14,"core id_stage_inst imm", false,-1, 63,0);
        tracep->declBus(c+16,"core id_stage_inst alu_sel", false,-1, 4,0);
        tracep->declBit(c+17,"core id_stage_inst alu_src", false,-1);
        tracep->declBus(c+18,"core id_stage_inst rd_addr", false,-1, 4,0);
        tracep->declBit(c+19,"core id_stage_inst reg_write", false,-1);
        tracep->declBit(c+20,"core id_stage_inst mem_read", false,-1);
        tracep->declBit(c+21,"core id_stage_inst mem_write", false,-1);
        tracep->declBit(c+20,"core id_stage_inst mem_to_reg", false,-1);
        tracep->declBus(c+24,"core id_stage_inst funct3", false,-1, 2,0);
        tracep->declQuad(c+5,"core id_stage_inst pc_dst", false,-1, 63,0);
        tracep->declBit(c+4,"core id_stage_inst is_j", false,-1);
        tracep->declBit(c+22,"core id_stage_inst is_lui", false,-1);
        tracep->declBit(c+23,"core id_stage_inst is_auipc", false,-1);
        tracep->declBus(c+117,"core id_stage_inst opcode", false,-1, 6,0);
        tracep->declBus(c+118,"core id_stage_inst rs1_addr", false,-1, 4,0);
        tracep->declBus(c+119,"core id_stage_inst rs2_addr", false,-1, 4,0);
        tracep->declBit(c+120,"core id_stage_inst branch_taken", false,-1);
        tracep->declBit(c+121,"core id_stage_inst is_branch", false,-1);
        tracep->declBit(c+122,"core id_stage_inst misprediction", false,-1);
        tracep->declBit(c+123,"core id_stage_inst is_jal", false,-1);
        tracep->declBit(c+124,"core id_stage_inst is_jalr", false,-1);
        tracep->declBus(c+194,"core id_stage_inst branch_unit_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+117,"core id_stage_inst branch_unit_inst opcode", false,-1, 6,0);
        tracep->declBus(c+24,"core id_stage_inst branch_unit_inst funct3", false,-1, 2,0);
        tracep->declQuad(c+10,"core id_stage_inst branch_unit_inst in1", false,-1, 63,0);
        tracep->declQuad(c+12,"core id_stage_inst branch_unit_inst in2", false,-1, 63,0);
        tracep->declBit(c+120,"core id_stage_inst branch_unit_inst branch_taken", false,-1);
        tracep->declBit(c+121,"core id_stage_inst branch_unit_inst is_branch", false,-1);
        tracep->declBus(c+208,"core id_stage_inst branch_unit_inst OPCODE_B", false,-1, 6,0);
        tracep->declBus(c+194,"core id_stage_inst immgen_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+195,"core id_stage_inst immgen_inst INSTR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+9,"core id_stage_inst immgen_inst instr", false,-1, 31,0);
        tracep->declQuad(c+14,"core id_stage_inst immgen_inst imm", false,-1, 63,0);
        tracep->declBus(c+203,"core id_stage_inst immgen_inst OPCODE_SIZE", false,-1, 31,0);
        tracep->declBus(c+117,"core id_stage_inst immgen_inst opcode", false,-1, 6,0);
        tracep->declBus(c+194,"core id_stage_inst alu_cntrl_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+195,"core id_stage_inst alu_cntrl_inst INSTR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+196,"core id_stage_inst alu_cntrl_inst ALU_SEL", false,-1, 31,0);
        tracep->declBus(c+9,"core id_stage_inst alu_cntrl_inst instr", false,-1, 31,0);
        tracep->declBus(c+16,"core id_stage_inst alu_cntrl_inst alu_sel", false,-1, 4,0);
        tracep->declBus(c+117,"core id_stage_inst alu_cntrl_inst opcode", false,-1, 6,0);
        tracep->declBus(c+24,"core id_stage_inst alu_cntrl_inst funct3", false,-1, 2,0);
        tracep->declBus(c+125,"core id_stage_inst alu_cntrl_inst funct7", false,-1, 6,0);
        tracep->declBus(c+194,"core id_stage_inst regfile_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+195,"core id_stage_inst regfile_inst NUM_REGS", false,-1, 31,0);
        tracep->declBit(c+126,"core id_stage_inst regfile_inst clk", false,-1);
        tracep->declBit(c+25,"core id_stage_inst regfile_inst write_en", false,-1);
        tracep->declBus(c+118,"core id_stage_inst regfile_inst read_addr_1", false,-1, 4,0);
        tracep->declQuad(c+10,"core id_stage_inst regfile_inst read_data_1", false,-1, 63,0);
        tracep->declBus(c+119,"core id_stage_inst regfile_inst read_addr_2", false,-1, 4,0);
        tracep->declQuad(c+12,"core id_stage_inst regfile_inst read_data_2", false,-1, 63,0);
        tracep->declBus(c+26,"core id_stage_inst regfile_inst write_addr", false,-1, 4,0);
        tracep->declQuad(c+27,"core id_stage_inst regfile_inst write_data", false,-1, 63,0);
        tracep->declQuad(c+199,"core id_stage_inst regfile_inst ZERO", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+130+i*2,"core id_stage_inst regfile_inst reg_file", true,(i+0), 63,0);}}
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
        tracep->fullBit(oldp+4,(vlSymsp->TOP__core__id_stage_inst.__PVT__is_j));
        tracep->fullQData(oldp+5,((((0x6fU == (0x7fU 
                                               & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                    | (IData)(vlSymsp->TOP__core__id_stage_inst.__PVT__misprediction))
                                    ? (vlSymsp->TOP__core.__PVT__ifid_pc 
                                       + vlSymsp->TOP__core__id_stage_inst.__PVT__imm)
                                    : ((0x67U == (0x7fU 
                                                  & vlSymsp->TOP__core.__PVT__ifid_instr))
                                        ? (vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_1 
                                           + vlSymsp->TOP__core__id_stage_inst.__PVT__imm)
                                        : 0ULL))),64);
        tracep->fullQData(oldp+7,(vlSymsp->TOP__core.__PVT__ifid_pc),64);
        tracep->fullIData(oldp+9,(vlSymsp->TOP__core.__PVT__ifid_instr),32);
        tracep->fullQData(oldp+10,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_1),64);
        tracep->fullQData(oldp+12,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_2),64);
        tracep->fullQData(oldp+14,(vlSymsp->TOP__core__id_stage_inst.__PVT__imm),64);
        tracep->fullCData(oldp+16,(vlSymsp->TOP__core__id_stage_inst.__PVT__alu_sel),5);
        tracep->fullBit(oldp+17,((((((0x13U == (0x7fU 
                                                & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                     | (3U == (0x7fU 
                                               & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                    | (0x23U == (0x7fU 
                                                 & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                   | (0x17U == (0x7fU 
                                                & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                  | (0x67U == (0x7fU 
                                               & vlSymsp->TOP__core.__PVT__ifid_instr)))));
        tracep->fullCData(oldp+18,((0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                             >> 7U))),5);
        tracep->fullBit(oldp+19,((((((((0x33U == (0x7fU 
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
        tracep->fullBit(oldp+20,((3U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))));
        tracep->fullBit(oldp+21,((0x23U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))));
        tracep->fullBit(oldp+22,((0x37U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))));
        tracep->fullBit(oldp+23,((0x17U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))));
        tracep->fullCData(oldp+24,((7U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                          >> 0xcU))),3);
        tracep->fullBit(oldp+25,(vlSymsp->TOP__core.__PVT__memwb_reg_write));
        tracep->fullCData(oldp+26,(vlSymsp->TOP__core.__PVT__memwb_rd),5);
        tracep->fullQData(oldp+27,(((IData)(vlSymsp->TOP__core.__PVT__memwb_mem_to_reg)
                                     ? vlSymsp->TOP__core.__PVT__memwb_mem_out
                                     : vlSymsp->TOP__core.__PVT__memwb_alu_out)),64);
        tracep->fullIData(oldp+29,(vlSymsp->TOP__core.__PVT__idex_instr),32);
        tracep->fullQData(oldp+30,(vlSymsp->TOP__core.__PVT__idex_pc),64);
        tracep->fullQData(oldp+32,(vlSymsp->TOP__core.__PVT__idex_imm),64);
        tracep->fullQData(oldp+34,(vlSymsp->TOP__core.__PVT__idex_in1),64);
        tracep->fullQData(oldp+36,(vlSymsp->TOP__core.__PVT__idex_in2),64);
        tracep->fullQData(oldp+38,(vlSymsp->TOP__core.__PVT__idex_write_data),64);
        tracep->fullBit(oldp+40,(vlSymsp->TOP__core.__PVT__idex_alu_src));
        tracep->fullBit(oldp+41,(vlSymsp->TOP__core.__PVT__idex_is_j));
        tracep->fullBit(oldp+42,(vlSymsp->TOP__core.__PVT__idex_is_lui));
        tracep->fullBit(oldp+43,(vlSymsp->TOP__core.__PVT__idex_is_auipc));
        tracep->fullCData(oldp+44,(vlSymsp->TOP__core.__PVT__idex_alu_sel),5);
        tracep->fullBit(oldp+45,(vlSymsp->TOP__core.__PVT__idex_mem_write));
        tracep->fullBit(oldp+46,(vlSymsp->TOP__core.__PVT__idex_mem_read));
        tracep->fullBit(oldp+47,(vlSymsp->TOP__core.__PVT__idex_reg_write));
        tracep->fullBit(oldp+48,(vlSymsp->TOP__core.__PVT__idex_mem_to_reg));
        tracep->fullCData(oldp+49,(vlSymsp->TOP__core.__PVT__idex_rd),5);
        tracep->fullCData(oldp+50,(vlSymsp->TOP__core.__PVT__idex_funct3),3);
        tracep->fullQData(oldp+51,(((IData)(vlSymsp->TOP__core.__PVT__idex_is_j)
                                     ? (4ULL + vlSymsp->TOP__core.__PVT__idex_pc)
                                     : ((0x10U & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                                         ? 0ULL : (
                                                   (8U 
                                                    & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                                                    ? 
                                                   ((4U 
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
                                                    : 
                                                   ((4U 
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
                                                       + vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))))))),64);
        tracep->fullCData(oldp+53,(vlSymsp->TOP__core.__PVT__exmem_funct3),3);
        tracep->fullBit(oldp+54,(vlSymsp->TOP__core.__PVT__exmem_mem_write));
        tracep->fullBit(oldp+55,(vlSymsp->TOP__core.__PVT__exmem_mem_read));
        tracep->fullQData(oldp+56,(vlSymsp->TOP__core.__PVT__exmem_write_data),64);
        tracep->fullQData(oldp+58,(vlSymsp->TOP__core.__PVT__exmem_alu_out),64);
        tracep->fullCData(oldp+60,(vlSymsp->TOP__core.__PVT__exmem_rd),5);
        tracep->fullBit(oldp+61,(vlSymsp->TOP__core.__PVT__exmem_reg_write));
        tracep->fullBit(oldp+62,(vlSymsp->TOP__core.__PVT__exmem_mem_to_reg));
        tracep->fullQData(oldp+63,(vlSymsp->TOP__core.__PVT__memwb_mem_out),64);
        tracep->fullQData(oldp+65,(vlSymsp->TOP__core.__PVT__memwb_alu_out),64);
        tracep->fullBit(oldp+67,(vlSymsp->TOP__core.__PVT__memwb_mem_to_reg));
        tracep->fullQData(oldp+68,(((IData)(vlSymsp->TOP__core__id_stage_inst.__PVT__is_j)
                                     ? (((0x6fU == 
                                          (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                         | (IData)(vlSymsp->TOP__core__id_stage_inst.__PVT__misprediction))
                                         ? (vlSymsp->TOP__core.__PVT__ifid_pc 
                                            + vlSymsp->TOP__core__id_stage_inst.__PVT__imm)
                                         : ((0x67U 
                                             == (0x7fU 
                                                 & vlSymsp->TOP__core.__PVT__ifid_instr))
                                             ? (vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_1 
                                                + vlSymsp->TOP__core__id_stage_inst.__PVT__imm)
                                             : 0ULL))
                                     : (4ULL + vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr))),64);
        tracep->fullSData(oldp+70,((0x7fffU & (IData)(
                                                      (vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr 
                                                       >> 2U)))),15);
        tracep->fullQData(oldp+71,(((0x10U & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
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
        tracep->fullQData(oldp+73,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1),64);
        tracep->fullQData(oldp+75,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2),64);
        tracep->fullQData(oldp+77,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                    + vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
        tracep->fullQData(oldp+79,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                    - vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
        tracep->fullQData(oldp+81,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                    ^ vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
        tracep->fullQData(oldp+83,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                    & vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
        tracep->fullQData(oldp+85,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                    | vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
        tracep->fullQData(oldp+87,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                    << (0x3fU & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
        tracep->fullQData(oldp+89,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                    >> (0x3fU & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
        tracep->fullQData(oldp+91,(VL_SHIFTRS_QQI(64,64,6, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1, 
                                                  (0x3fU 
                                                   & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
        tracep->fullQData(oldp+93,((QData)((IData)(
                                                   VL_LTS_IQQ(1,64,64, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
        tracep->fullQData(oldp+95,((QData)((IData)(
                                                   (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                    < vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
        tracep->fullQData(oldp+97,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_out),64);
        tracep->fullCData(oldp+99,((3U & (2U ^ (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel)))),2);
        tracep->fullCData(oldp+100,((0x3fU & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2))),6);
        tracep->fullWData(oldp+101,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full),128);
        tracep->fullCData(oldp+105,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes),4);
        tracep->fullBit(oldp+106,((1U & ((IData)(vlSymsp->TOP__core.__PVT__exmem_funct3) 
                                         >> 2U))));
        tracep->fullSData(oldp+107,((0x7fffU & (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out))),15);
        tracep->fullIData(oldp+108,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__i),32);
        tracep->fullQData(oldp+109,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read),64);
        tracep->fullBit(oldp+111,((1U & ((8U & (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))
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
        tracep->fullQData(oldp+112,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__sext_mask),64);
        tracep->fullBit(oldp+114,((8U <= (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))));
        tracep->fullQData(oldp+115,(((1U & (((IData)(vlSymsp->TOP__core.__PVT__exmem_funct3) 
                                             >> 2U) 
                                            | (8U <= (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))))
                                      ? vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read
                                      : (vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                                         | vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__sext_mask))),64);
        tracep->fullCData(oldp+117,((0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr)),7);
        tracep->fullCData(oldp+118,((0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+119,((0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                              >> 0x14U))),5);
        tracep->fullBit(oldp+120,(((0x4000U & vlSymsp->TOP__core.__PVT__ifid_instr)
                                    ? ((0x2000U & vlSymsp->TOP__core.__PVT__ifid_instr)
                                        ? ((0x1000U 
                                            & vlSymsp->TOP__core.__PVT__ifid_instr)
                                            ? (vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_1 
                                               >= vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_2)
                                            : (vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_1 
                                               < vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_2))
                                        : ((0x1000U 
                                            & vlSymsp->TOP__core.__PVT__ifid_instr)
                                            ? VL_GTES_IQQ(1,64,64, vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_1, vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_2)
                                            : VL_LTS_IQQ(1,64,64, vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_1, vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_2)))
                                    : ((~ (vlSymsp->TOP__core.__PVT__ifid_instr 
                                           >> 0xdU)) 
                                       & ((0x1000U 
                                           & vlSymsp->TOP__core.__PVT__ifid_instr)
                                           ? (vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_1 
                                              != vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_2)
                                           : (vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_1 
                                              == vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_2))))));
        tracep->fullBit(oldp+121,((0x63U == (0x7fU 
                                             & vlSymsp->TOP__core.__PVT__ifid_instr))));
        tracep->fullBit(oldp+122,(vlSymsp->TOP__core__id_stage_inst.__PVT__misprediction));
        tracep->fullBit(oldp+123,((0x6fU == (0x7fU 
                                             & vlSymsp->TOP__core.__PVT__ifid_instr))));
        tracep->fullBit(oldp+124,((0x67U == (0x7fU 
                                             & vlSymsp->TOP__core.__PVT__ifid_instr))));
        tracep->fullCData(oldp+125,((0x7fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                              >> 0x19U))),7);
        tracep->fullBit(oldp+126,(vlTOPp->clk));
        tracep->fullBit(oldp+127,(vlTOPp->rst));
        tracep->fullQData(oldp+128,((((IData)(vlSymsp->TOP__core.__PVT__exmem_mem_read) 
                                      & (~ (IData)(vlTOPp->rst)))
                                      ? ((1U & (((IData)(vlSymsp->TOP__core.__PVT__exmem_funct3) 
                                                 >> 2U) 
                                                | (8U 
                                                   <= (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))))
                                          ? vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read
                                          : (vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                                             | vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__sext_mask))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+130,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[0]),64);
        tracep->fullQData(oldp+132,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[1]),64);
        tracep->fullQData(oldp+134,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[2]),64);
        tracep->fullQData(oldp+136,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[3]),64);
        tracep->fullQData(oldp+138,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[4]),64);
        tracep->fullQData(oldp+140,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[5]),64);
        tracep->fullQData(oldp+142,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[6]),64);
        tracep->fullQData(oldp+144,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[7]),64);
        tracep->fullQData(oldp+146,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[8]),64);
        tracep->fullQData(oldp+148,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[9]),64);
        tracep->fullQData(oldp+150,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[10]),64);
        tracep->fullQData(oldp+152,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[11]),64);
        tracep->fullQData(oldp+154,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[12]),64);
        tracep->fullQData(oldp+156,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[13]),64);
        tracep->fullQData(oldp+158,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[14]),64);
        tracep->fullQData(oldp+160,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[15]),64);
        tracep->fullQData(oldp+162,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[16]),64);
        tracep->fullQData(oldp+164,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[17]),64);
        tracep->fullQData(oldp+166,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[18]),64);
        tracep->fullQData(oldp+168,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[19]),64);
        tracep->fullQData(oldp+170,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[20]),64);
        tracep->fullQData(oldp+172,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[21]),64);
        tracep->fullQData(oldp+174,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[22]),64);
        tracep->fullQData(oldp+176,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[23]),64);
        tracep->fullQData(oldp+178,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[24]),64);
        tracep->fullQData(oldp+180,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[25]),64);
        tracep->fullQData(oldp+182,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[26]),64);
        tracep->fullQData(oldp+184,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[27]),64);
        tracep->fullQData(oldp+186,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[28]),64);
        tracep->fullQData(oldp+188,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[29]),64);
        tracep->fullQData(oldp+190,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[30]),64);
        tracep->fullQData(oldp+192,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[31]),64);
        tracep->fullIData(oldp+194,(0x40U),32);
        tracep->fullIData(oldp+195,(0x20U),32);
        tracep->fullIData(oldp+196,(5U),32);
        tracep->fullIData(oldp+197,(0xfU),32);
        tracep->fullBit(oldp+198,(0U));
        tracep->fullQData(oldp+199,(0ULL),64);
        tracep->fullIData(oldp+201,(0x13U),32);
        tracep->fullIData(oldp+202,(3U),32);
        tracep->fullIData(oldp+203,(7U),32);
        tracep->fullIData(oldp+204,(2U),32);
        tracep->fullIData(oldp+205,(8U),32);
        tracep->fullIData(oldp+206,(8U),32);
        tracep->fullCData(oldp+207,(8U),4);
        tracep->fullCData(oldp+208,(0x63U),7);
    }
}
