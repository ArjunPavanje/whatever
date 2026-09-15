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
        tracep->declBit(c+147,"clk", false,-1);
        tracep->declBit(c+148,"rst", false,-1);
        tracep->declBus(c+222,"core BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+223,"core INSTR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+224,"core ALU_SEL", false,-1, 31,0);
        tracep->declBus(c+224,"core REGFILE_LEN", false,-1, 31,0);
        tracep->declBus(c+225,"core INSTR_MEM_LEN", false,-1, 31,0);
        tracep->declBus(c+225,"core DATA_MEM_LEN", false,-1, 31,0);
        tracep->declBit(c+147,"core clk", false,-1);
        tracep->declBit(c+148,"core rst", false,-1);
        tracep->declQuad(c+226,"core bram_douta", false,-1, 63,0);
        tracep->declBus(c+228,"core bram_addrb", false,-1, 14,0);
        tracep->declBus(c+229,"core bram_web", false,-1, 7,0);
        tracep->declQuad(c+226,"core bram_wdata", false,-1, 63,0);
        tracep->declQuad(c+226,"core bram_rdata", false,-1, 63,0);
        tracep->declBit(c+1,"core load_use_stall", false,-1);
        tracep->declBit(c+134,"core mem_stall", false,-1);
        tracep->declBit(c+135,"core pipeline_stall", false,-1);
        tracep->declBus(c+2,"core id_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+3,"core id_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+4,"core idex_rd", false,-1, 4,0);
        tracep->declBit(c+5,"core id_use_rs1", false,-1);
        tracep->declBit(c+6,"core id_use_rs2", false,-1);
        tracep->declBit(c+7,"core idex_mem_read", false,-1);
        tracep->declBit(c+136,"core id_is_j", false,-1);
        tracep->declQuad(c+149,"core id_pc_dst", false,-1, 63,0);
        tracep->declBit(c+137,"core real_is_j", false,-1);
        tracep->declQuad(c+8,"core if_pc", false,-1, 63,0);
        tracep->declBus(c+10,"core if_instr", false,-1, 31,0);
        tracep->declQuad(c+11,"core ifid_pc", false,-1, 63,0);
        tracep->declBus(c+13,"core ifid_instr", false,-1, 31,0);
        tracep->declQuad(c+138,"core id_in1", false,-1, 63,0);
        tracep->declQuad(c+140,"core id_in2", false,-1, 63,0);
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
        tracep->declQuad(c+25,"core ex_out", false,-1, 63,0);
        tracep->declBus(c+27,"core exmem_rd", false,-1, 4,0);
        tracep->declBus(c+28,"core memwb_rd", false,-1, 4,0);
        tracep->declBit(c+29,"core exmem_reg_write", false,-1);
        tracep->declBit(c+30,"core exmem_mem_to_reg", false,-1);
        tracep->declBit(c+31,"core idex_reg_write", false,-1);
        tracep->declQuad(c+32,"core exmem_alu_out", false,-1, 63,0);
        tracep->declQuad(c+142,"core mem_out", false,-1, 63,0);
        tracep->declQuad(c+34,"core wb_data", false,-1, 63,0);
        tracep->declBit(c+36,"core wb_en", false,-1);
        tracep->declBus(c+28,"core wb_addr", false,-1, 4,0);
        tracep->declBus(c+37,"core idex_instr", false,-1, 31,0);
        tracep->declQuad(c+38,"core idex_pc", false,-1, 63,0);
        tracep->declQuad(c+40,"core idex_imm", false,-1, 63,0);
        tracep->declQuad(c+42,"core idex_in1", false,-1, 63,0);
        tracep->declQuad(c+44,"core idex_in2", false,-1, 63,0);
        tracep->declQuad(c+46,"core idex_write_data", false,-1, 63,0);
        tracep->declBit(c+48,"core idex_alu_src", false,-1);
        tracep->declBit(c+49,"core idex_is_j", false,-1);
        tracep->declBit(c+50,"core idex_is_lui", false,-1);
        tracep->declBit(c+51,"core idex_is_auipc", false,-1);
        tracep->declBus(c+52,"core idex_alu_sel", false,-1, 4,0);
        tracep->declBit(c+53,"core idex_mem_write", false,-1);
        tracep->declBit(c+54,"core idex_mem_to_reg", false,-1);
        tracep->declBus(c+55,"core idex_rs1", false,-1, 4,0);
        tracep->declBus(c+56,"core idex_rs2", false,-1, 4,0);
        tracep->declBus(c+57,"core idex_funct3", false,-1, 2,0);
        tracep->declQuad(c+58,"core ex_write_data", false,-1, 63,0);
        tracep->declBit(c+36,"core memwb_reg_write", false,-1);
        tracep->declBus(c+60,"core exmem_funct3", false,-1, 2,0);
        tracep->declBit(c+61,"core exmem_mem_write", false,-1);
        tracep->declBit(c+62,"core exmem_mem_read", false,-1);
        tracep->declQuad(c+63,"core exmem_write_data", false,-1, 63,0);
        tracep->declQuad(c+32,"core mem_alu_out", false,-1, 63,0);
        tracep->declQuad(c+65,"core memwb_mem_out", false,-1, 63,0);
        tracep->declQuad(c+67,"core memwb_alu_out", false,-1, 63,0);
        tracep->declBit(c+69,"core memwb_mem_to_reg", false,-1);
        tracep->declBus(c+224,"core hazard_detecting_unit_inst REGFILE_LEN", false,-1, 31,0);
        tracep->declBus(c+2,"core hazard_detecting_unit_inst id_rs1", false,-1, 4,0);
        tracep->declBus(c+3,"core hazard_detecting_unit_inst id_rs2", false,-1, 4,0);
        tracep->declBit(c+5,"core hazard_detecting_unit_inst id_use_rs1", false,-1);
        tracep->declBit(c+6,"core hazard_detecting_unit_inst id_use_rs2", false,-1);
        tracep->declBus(c+4,"core hazard_detecting_unit_inst idex_rd", false,-1, 4,0);
        tracep->declBit(c+7,"core hazard_detecting_unit_inst idex_mem_read", false,-1);
        tracep->declBit(c+1,"core hazard_detecting_unit_inst stall", false,-1);
        tracep->declBus(c+230,"core hazard_detecting_unit_inst x0", false,-1, 4,0);
        tracep->declBit(c+70,"core hazard_detecting_unit_inst stall_rs1", false,-1);
        tracep->declBit(c+71,"core hazard_detecting_unit_inst stall_rs2", false,-1);
        tracep->declBus(c+222,"core if_stage_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+223,"core if_stage_inst INSTR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+225,"core if_stage_inst INSTR_MEM_LEN", false,-1, 31,0);
        tracep->declBit(c+147,"core if_stage_inst clk", false,-1);
        tracep->declBit(c+135,"core if_stage_inst stall", false,-1);
        tracep->declBit(c+148,"core if_stage_inst rst", false,-1);
        tracep->declBit(c+137,"core if_stage_inst pc_jmp", false,-1);
        tracep->declQuad(c+149,"core if_stage_inst pc_dst", false,-1, 63,0);
        tracep->declQuad(c+226,"core if_stage_inst bram_douta", false,-1, 63,0);
        tracep->declBus(c+10,"core if_stage_inst instr", false,-1, 31,0);
        tracep->declQuad(c+8,"core if_stage_inst pc", false,-1, 63,0);
        tracep->declQuad(c+226,"core if_stage_inst ZERO", false,-1, 63,0);
        tracep->declQuad(c+8,"core if_stage_inst pc_curr", false,-1, 63,0);
        tracep->declQuad(c+151,"core if_stage_inst pc_next", false,-1, 63,0);
        tracep->declBus(c+72,"core if_stage_inst word_addr", false,-1, 14,0);
        tracep->declBus(c+222,"core if_id_reg_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+223,"core if_id_reg_inst INSTR_WIDTH", false,-1, 31,0);
        tracep->declBit(c+147,"core if_id_reg_inst clk", false,-1);
        tracep->declBit(c+148,"core if_id_reg_inst rst", false,-1);
        tracep->declBit(c+137,"core if_id_reg_inst flush", false,-1);
        tracep->declBit(c+135,"core if_id_reg_inst stall", false,-1);
        tracep->declQuad(c+8,"core if_id_reg_inst in_pc", false,-1, 63,0);
        tracep->declBus(c+10,"core if_id_reg_inst in_instr", false,-1, 31,0);
        tracep->declQuad(c+11,"core if_id_reg_inst out_pc", false,-1, 63,0);
        tracep->declBus(c+13,"core if_id_reg_inst out_instr", false,-1, 31,0);
        tracep->declBus(c+231,"core if_id_reg_inst NOP", false,-1, 31,0);
        tracep->declBus(c+222,"core id_ex_reg_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+223,"core id_ex_reg_inst INSTR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+224,"core id_ex_reg_inst ALU_SEL", false,-1, 31,0);
        tracep->declBus(c+232,"core id_ex_reg_inst FUNCT3", false,-1, 31,0);
        tracep->declBus(c+224,"core id_ex_reg_inst REGFILE_LEN", false,-1, 31,0);
        tracep->declBit(c+147,"core id_ex_reg_inst clk", false,-1);
        tracep->declBit(c+148,"core id_ex_reg_inst rst", false,-1);
        tracep->declBit(c+134,"core id_ex_reg_inst stall", false,-1);
        tracep->declBit(c+144,"core id_ex_reg_inst flush", false,-1);
        tracep->declBus(c+13,"core id_ex_reg_inst in_instr", false,-1, 31,0);
        tracep->declBus(c+24,"core id_ex_reg_inst in_funct3", false,-1, 2,0);
        tracep->declQuad(c+11,"core id_ex_reg_inst in_pc", false,-1, 63,0);
        tracep->declQuad(c+14,"core id_ex_reg_inst in_imm", false,-1, 63,0);
        tracep->declQuad(c+138,"core id_ex_reg_inst in_in1", false,-1, 63,0);
        tracep->declQuad(c+140,"core id_ex_reg_inst in_in2", false,-1, 63,0);
        tracep->declBit(c+17,"core id_ex_reg_inst in_alu_src", false,-1);
        tracep->declBus(c+16,"core id_ex_reg_inst in_alu_sel", false,-1, 4,0);
        tracep->declBit(c+136,"core id_ex_reg_inst in_is_j", false,-1);
        tracep->declBit(c+22,"core id_ex_reg_inst in_is_lui", false,-1);
        tracep->declBit(c+23,"core id_ex_reg_inst in_is_auipc", false,-1);
        tracep->declBit(c+21,"core id_ex_reg_inst in_mem_write", false,-1);
        tracep->declBit(c+20,"core id_ex_reg_inst in_mem_read", false,-1);
        tracep->declQuad(c+140,"core id_ex_reg_inst in_write_data", false,-1, 63,0);
        tracep->declBus(c+18,"core id_ex_reg_inst in_rd", false,-1, 4,0);
        tracep->declBus(c+2,"core id_ex_reg_inst in_rs1", false,-1, 4,0);
        tracep->declBus(c+3,"core id_ex_reg_inst in_rs2", false,-1, 4,0);
        tracep->declBit(c+19,"core id_ex_reg_inst in_reg_write", false,-1);
        tracep->declBit(c+20,"core id_ex_reg_inst in_mem_to_reg", false,-1);
        tracep->declBus(c+37,"core id_ex_reg_inst out_instr", false,-1, 31,0);
        tracep->declBus(c+57,"core id_ex_reg_inst out_funct3", false,-1, 2,0);
        tracep->declQuad(c+38,"core id_ex_reg_inst out_pc", false,-1, 63,0);
        tracep->declQuad(c+40,"core id_ex_reg_inst out_imm", false,-1, 63,0);
        tracep->declQuad(c+42,"core id_ex_reg_inst out_in1", false,-1, 63,0);
        tracep->declQuad(c+44,"core id_ex_reg_inst out_in2", false,-1, 63,0);
        tracep->declBit(c+48,"core id_ex_reg_inst out_alu_src", false,-1);
        tracep->declBus(c+52,"core id_ex_reg_inst out_alu_sel", false,-1, 4,0);
        tracep->declBit(c+49,"core id_ex_reg_inst out_is_j", false,-1);
        tracep->declBit(c+50,"core id_ex_reg_inst out_is_lui", false,-1);
        tracep->declBit(c+51,"core id_ex_reg_inst out_is_auipc", false,-1);
        tracep->declBit(c+53,"core id_ex_reg_inst out_mem_write", false,-1);
        tracep->declBit(c+7,"core id_ex_reg_inst out_mem_read", false,-1);
        tracep->declQuad(c+46,"core id_ex_reg_inst out_write_data", false,-1, 63,0);
        tracep->declBus(c+4,"core id_ex_reg_inst out_rd", false,-1, 4,0);
        tracep->declBus(c+55,"core id_ex_reg_inst out_rs1", false,-1, 4,0);
        tracep->declBus(c+56,"core id_ex_reg_inst out_rs2", false,-1, 4,0);
        tracep->declBit(c+31,"core id_ex_reg_inst out_reg_write", false,-1);
        tracep->declBit(c+54,"core id_ex_reg_inst out_mem_to_reg", false,-1);
        tracep->declBus(c+231,"core id_ex_reg_inst NOP", false,-1, 31,0);
        tracep->declBus(c+222,"core ex_stage_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+233,"core ex_stage_inst OPCODE_LEN", false,-1, 31,0);
        tracep->declBus(c+223,"core ex_stage_inst INSTR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+224,"core ex_stage_inst REGFILE_LEN", false,-1, 31,0);
        tracep->declBus(c+224,"core ex_stage_inst ALU_SEL", false,-1, 31,0);
        tracep->declQuad(c+42,"core ex_stage_inst in1", false,-1, 63,0);
        tracep->declQuad(c+44,"core ex_stage_inst in2", false,-1, 63,0);
        tracep->declQuad(c+40,"core ex_stage_inst imm", false,-1, 63,0);
        tracep->declBus(c+52,"core ex_stage_inst alu_sel", false,-1, 4,0);
        tracep->declBit(c+49,"core ex_stage_inst is_j", false,-1);
        tracep->declBit(c+50,"core ex_stage_inst is_lui", false,-1);
        tracep->declBit(c+51,"core ex_stage_inst is_auipc", false,-1);
        tracep->declBus(c+55,"core ex_stage_inst idex_rs1", false,-1, 4,0);
        tracep->declBus(c+56,"core ex_stage_inst idex_rs2", false,-1, 4,0);
        tracep->declBus(c+27,"core ex_stage_inst exmem_rd", false,-1, 4,0);
        tracep->declBus(c+28,"core ex_stage_inst memwb_rd", false,-1, 4,0);
        tracep->declBit(c+29,"core ex_stage_inst exmem_reg_write", false,-1);
        tracep->declBit(c+36,"core ex_stage_inst memwb_reg_write", false,-1);
        tracep->declQuad(c+32,"core ex_stage_inst exmem_op", false,-1, 63,0);
        tracep->declQuad(c+34,"core ex_stage_inst memwb_op", false,-1, 63,0);
        tracep->declQuad(c+38,"core ex_stage_inst pc", false,-1, 63,0);
        tracep->declBit(c+48,"core ex_stage_inst alu_src", false,-1);
        tracep->declQuad(c+25,"core ex_stage_inst out", false,-1, 63,0);
        tracep->declQuad(c+58,"core ex_stage_inst write_data", false,-1, 63,0);
        tracep->declBus(c+73,"core ex_stage_inst forward_A", false,-1, 1,0);
        tracep->declBus(c+74,"core ex_stage_inst forward_B", false,-1, 1,0);
        tracep->declQuad(c+75,"core ex_stage_inst in1_forwarded", false,-1, 63,0);
        tracep->declQuad(c+58,"core ex_stage_inst in2_forwarded", false,-1, 63,0);
        tracep->declQuad(c+77,"core ex_stage_inst alu_op", false,-1, 63,0);
        tracep->declQuad(c+79,"core ex_stage_inst alu_in1", false,-1, 63,0);
        tracep->declQuad(c+81,"core ex_stage_inst alu_in2", false,-1, 63,0);
        tracep->declBus(c+224,"core ex_stage_inst forwarding_unit_inst REGFILE_LEN", false,-1, 31,0);
        tracep->declBus(c+55,"core ex_stage_inst forwarding_unit_inst idex_rs1", false,-1, 4,0);
        tracep->declBus(c+56,"core ex_stage_inst forwarding_unit_inst idex_rs2", false,-1, 4,0);
        tracep->declBus(c+27,"core ex_stage_inst forwarding_unit_inst exmem_rd", false,-1, 4,0);
        tracep->declBus(c+28,"core ex_stage_inst forwarding_unit_inst memwb_rd", false,-1, 4,0);
        tracep->declBit(c+36,"core ex_stage_inst forwarding_unit_inst memwb_reg_write", false,-1);
        tracep->declBit(c+29,"core ex_stage_inst forwarding_unit_inst exmem_reg_write", false,-1);
        tracep->declBus(c+73,"core ex_stage_inst forwarding_unit_inst forward_A", false,-1, 1,0);
        tracep->declBus(c+74,"core ex_stage_inst forwarding_unit_inst forward_B", false,-1, 1,0);
        tracep->declBus(c+230,"core ex_stage_inst forwarding_unit_inst x0", false,-1, 4,0);
        tracep->declBus(c+234,"core ex_stage_inst forwarding_unit_inst MEM", false,-1, 1,0);
        tracep->declBus(c+235,"core ex_stage_inst forwarding_unit_inst ALU_PREV", false,-1, 1,0);
        tracep->declBus(c+236,"core ex_stage_inst forwarding_unit_inst REGFILE", false,-1, 1,0);
        tracep->declBit(c+83,"core ex_stage_inst forwarding_unit_inst from_memwb_A", false,-1);
        tracep->declBit(c+84,"core ex_stage_inst forwarding_unit_inst from_exmem_A", false,-1);
        tracep->declBit(c+85,"core ex_stage_inst forwarding_unit_inst from_memwb_B", false,-1);
        tracep->declBit(c+86,"core ex_stage_inst forwarding_unit_inst from_exmem_B", false,-1);
        tracep->declBus(c+222,"core ex_stage_inst alu_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+224,"core ex_stage_inst alu_alu ALU_SEL", false,-1, 31,0);
        tracep->declQuad(c+79,"core ex_stage_inst alu_alu in1", false,-1, 63,0);
        tracep->declQuad(c+81,"core ex_stage_inst alu_alu in2", false,-1, 63,0);
        tracep->declBus(c+52,"core ex_stage_inst alu_alu alu_sel", false,-1, 4,0);
        tracep->declQuad(c+77,"core ex_stage_inst alu_alu out", false,-1, 63,0);
        tracep->declQuad(c+87,"core ex_stage_inst alu_alu add_out", false,-1, 63,0);
        tracep->declQuad(c+89,"core ex_stage_inst alu_alu sub_out", false,-1, 63,0);
        tracep->declQuad(c+91,"core ex_stage_inst alu_alu xor_out", false,-1, 63,0);
        tracep->declQuad(c+93,"core ex_stage_inst alu_alu and_out", false,-1, 63,0);
        tracep->declQuad(c+95,"core ex_stage_inst alu_alu or_out", false,-1, 63,0);
        tracep->declQuad(c+97,"core ex_stage_inst alu_alu sll_out", false,-1, 63,0);
        tracep->declQuad(c+99,"core ex_stage_inst alu_alu srl_out", false,-1, 63,0);
        tracep->declQuad(c+101,"core ex_stage_inst alu_alu sra_out", false,-1, 63,0);
        tracep->declQuad(c+103,"core ex_stage_inst alu_alu slt_out", false,-1, 63,0);
        tracep->declQuad(c+105,"core ex_stage_inst alu_alu sltu_out", false,-1, 63,0);
        tracep->declQuad(c+107,"core ex_stage_inst alu_alu mul_out", false,-1, 63,0);
        tracep->declBus(c+109,"core ex_stage_inst alu_alu mul_funct3", false,-1, 1,0);
        tracep->declBus(c+222,"core ex_stage_inst alu_alu add_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+79,"core ex_stage_inst alu_alu add_alu in1", false,-1, 63,0);
        tracep->declQuad(c+81,"core ex_stage_inst alu_alu add_alu in2", false,-1, 63,0);
        tracep->declQuad(c+87,"core ex_stage_inst alu_alu add_alu out", false,-1, 63,0);
        tracep->declBus(c+222,"core ex_stage_inst alu_alu sub_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+79,"core ex_stage_inst alu_alu sub_alu in1", false,-1, 63,0);
        tracep->declQuad(c+81,"core ex_stage_inst alu_alu sub_alu in2", false,-1, 63,0);
        tracep->declQuad(c+89,"core ex_stage_inst alu_alu sub_alu out", false,-1, 63,0);
        tracep->declBus(c+222,"core ex_stage_inst alu_alu xor_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+79,"core ex_stage_inst alu_alu xor_alu in1", false,-1, 63,0);
        tracep->declQuad(c+81,"core ex_stage_inst alu_alu xor_alu in2", false,-1, 63,0);
        tracep->declQuad(c+91,"core ex_stage_inst alu_alu xor_alu out", false,-1, 63,0);
        tracep->declBus(c+222,"core ex_stage_inst alu_alu and_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+79,"core ex_stage_inst alu_alu and_alu in1", false,-1, 63,0);
        tracep->declQuad(c+81,"core ex_stage_inst alu_alu and_alu in2", false,-1, 63,0);
        tracep->declQuad(c+93,"core ex_stage_inst alu_alu and_alu out", false,-1, 63,0);
        tracep->declBus(c+222,"core ex_stage_inst alu_alu or_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+79,"core ex_stage_inst alu_alu or_alu in1", false,-1, 63,0);
        tracep->declQuad(c+81,"core ex_stage_inst alu_alu or_alu in2", false,-1, 63,0);
        tracep->declQuad(c+95,"core ex_stage_inst alu_alu or_alu out", false,-1, 63,0);
        tracep->declBus(c+222,"core ex_stage_inst alu_alu sll_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+79,"core ex_stage_inst alu_alu sll_alu in", false,-1, 63,0);
        tracep->declBus(c+110,"core ex_stage_inst alu_alu sll_alu amt", false,-1, 5,0);
        tracep->declQuad(c+97,"core ex_stage_inst alu_alu sll_alu out", false,-1, 63,0);
        tracep->declBus(c+222,"core ex_stage_inst alu_alu srl_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+79,"core ex_stage_inst alu_alu srl_alu in", false,-1, 63,0);
        tracep->declBus(c+110,"core ex_stage_inst alu_alu srl_alu amt", false,-1, 5,0);
        tracep->declQuad(c+99,"core ex_stage_inst alu_alu srl_alu out", false,-1, 63,0);
        tracep->declBus(c+222,"core ex_stage_inst alu_alu sra_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+79,"core ex_stage_inst alu_alu sra_alu in", false,-1, 63,0);
        tracep->declBus(c+110,"core ex_stage_inst alu_alu sra_alu amt", false,-1, 5,0);
        tracep->declQuad(c+101,"core ex_stage_inst alu_alu sra_alu out", false,-1, 63,0);
        tracep->declBus(c+222,"core ex_stage_inst alu_alu slt_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+79,"core ex_stage_inst alu_alu slt_alu in1", false,-1, 63,0);
        tracep->declQuad(c+81,"core ex_stage_inst alu_alu slt_alu in2", false,-1, 63,0);
        tracep->declQuad(c+103,"core ex_stage_inst alu_alu slt_alu out", false,-1, 63,0);
        tracep->declBus(c+222,"core ex_stage_inst alu_alu sltu_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+79,"core ex_stage_inst alu_alu sltu_alu in1", false,-1, 63,0);
        tracep->declQuad(c+81,"core ex_stage_inst alu_alu sltu_alu in2", false,-1, 63,0);
        tracep->declQuad(c+105,"core ex_stage_inst alu_alu sltu_alu out", false,-1, 63,0);
        tracep->declBus(c+222,"core ex_stage_inst alu_alu mul_alu BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+237,"core ex_stage_inst alu_alu mul_alu ALU_CNTRL_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+79,"core ex_stage_inst alu_alu mul_alu in1", false,-1, 63,0);
        tracep->declQuad(c+81,"core ex_stage_inst alu_alu mul_alu in2", false,-1, 63,0);
        tracep->declBus(c+109,"core ex_stage_inst alu_alu mul_alu alu_funct3", false,-1, 1,0);
        tracep->declQuad(c+107,"core ex_stage_inst alu_alu mul_alu out", false,-1, 63,0);
        tracep->declArray(c+111,"core ex_stage_inst alu_alu mul_alu product_full", false,-1, 127,0);
        tracep->declBus(c+222,"core ex_mem_reg_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+232,"core ex_mem_reg_inst FUNCT3", false,-1, 31,0);
        tracep->declBus(c+224,"core ex_mem_reg_inst REGFILE_LEN", false,-1, 31,0);
        tracep->declBit(c+147,"core ex_mem_reg_inst clk", false,-1);
        tracep->declBit(c+148,"core ex_mem_reg_inst rst", false,-1);
        tracep->declBit(c+134,"core ex_mem_reg_inst stall", false,-1);
        tracep->declBit(c+238,"core ex_mem_reg_inst flush", false,-1);
        tracep->declBit(c+53,"core ex_mem_reg_inst in_mem_write", false,-1);
        tracep->declBit(c+7,"core ex_mem_reg_inst in_mem_read", false,-1);
        tracep->declQuad(c+58,"core ex_mem_reg_inst in_write_data", false,-1, 63,0);
        tracep->declBus(c+57,"core ex_mem_reg_inst in_funct3", false,-1, 2,0);
        tracep->declQuad(c+25,"core ex_mem_reg_inst in_alu_out", false,-1, 63,0);
        tracep->declBus(c+4,"core ex_mem_reg_inst in_rd", false,-1, 4,0);
        tracep->declBit(c+31,"core ex_mem_reg_inst in_reg_write", false,-1);
        tracep->declBit(c+54,"core ex_mem_reg_inst in_mem_to_reg", false,-1);
        tracep->declBit(c+61,"core ex_mem_reg_inst out_mem_write", false,-1);
        tracep->declBit(c+62,"core ex_mem_reg_inst out_mem_read", false,-1);
        tracep->declQuad(c+63,"core ex_mem_reg_inst out_write_data", false,-1, 63,0);
        tracep->declBus(c+60,"core ex_mem_reg_inst out_funct3", false,-1, 2,0);
        tracep->declQuad(c+32,"core ex_mem_reg_inst out_alu_out", false,-1, 63,0);
        tracep->declBus(c+27,"core ex_mem_reg_inst out_rd", false,-1, 4,0);
        tracep->declBit(c+29,"core ex_mem_reg_inst out_reg_write", false,-1);
        tracep->declBit(c+30,"core ex_mem_reg_inst out_mem_to_reg", false,-1);
        tracep->declBus(c+222,"core mem_stage_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+225,"core mem_stage_inst DATA_MEM_LEN", false,-1, 31,0);
        tracep->declBit(c+147,"core mem_stage_inst clk", false,-1);
        tracep->declBit(c+148,"core mem_stage_inst rst", false,-1);
        tracep->declBit(c+61,"core mem_stage_inst mem_write", false,-1);
        tracep->declBit(c+62,"core mem_stage_inst mem_read", false,-1);
        tracep->declBus(c+60,"core mem_stage_inst funct3", false,-1, 2,0);
        tracep->declQuad(c+32,"core mem_stage_inst alu_op", false,-1, 63,0);
        tracep->declQuad(c+63,"core mem_stage_inst write_data", false,-1, 63,0);
        tracep->declQuad(c+32,"core mem_stage_inst addr", false,-1, 63,0);
        tracep->declQuad(c+142,"core mem_stage_inst mem_out", false,-1, 63,0);
        tracep->declQuad(c+32,"core mem_stage_inst alu_out", false,-1, 63,0);
        tracep->declBit(c+134,"core mem_stage_inst mem_stall", false,-1);
        tracep->declBus(c+228,"core mem_stage_inst bram_addr", false,-1, 14,0);
        tracep->declBus(c+229,"core mem_stage_inst bram_web", false,-1, 7,0);
        tracep->declQuad(c+226,"core mem_stage_inst bram_wdata", false,-1, 63,0);
        tracep->declQuad(c+226,"core mem_stage_inst bram_rdata", false,-1, 63,0);
        tracep->declBus(c+239,"core mem_stage_inst NUM_BYTES", false,-1, 31,0);
        tracep->declBus(c+115,"core mem_stage_inst access_bytes", false,-1, 3,0);
        tracep->declBit(c+116,"core mem_stage_inst is_unsigned", false,-1);
        tracep->declBus(c+117,"core mem_stage_inst byte_addr", false,-1, 14,0);
        tracep->declBit(c+145,"core mem_stage_inst mem_op", false,-1);
        tracep->declBit(c+118,"core mem_stage_inst mem_busy", false,-1);
        tracep->declQuad(c+119,"core mem_stage_inst raw_read", false,-1, 63,0);
        tracep->declBus(c+121,"core mem_stage_inst i", false,-1, 31,0);
        tracep->declBus(c+122,"core mem_stage_inst j", false,-1, 31,0);
        tracep->declBit(c+123,"core mem_stage_inst sign_bit", false,-1);
        tracep->declQuad(c+124,"core mem_stage_inst sext_mask", false,-1, 63,0);
        tracep->declBus(c+240,"core mem_stage_inst FULL_BYTES", false,-1, 3,0);
        tracep->declBit(c+126,"core mem_stage_inst is_fullwidth", false,-1);
        tracep->declQuad(c+127,"core mem_stage_inst extended", false,-1, 63,0);
        tracep->declBus(c+222,"core mem_wb_reg_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+224,"core mem_wb_reg_inst REGFILE_LEN", false,-1, 31,0);
        tracep->declBit(c+147,"core mem_wb_reg_inst clk", false,-1);
        tracep->declBit(c+148,"core mem_wb_reg_inst rst", false,-1);
        tracep->declBit(c+238,"core mem_wb_reg_inst stall", false,-1);
        tracep->declBit(c+134,"core mem_wb_reg_inst flush", false,-1);
        tracep->declQuad(c+142,"core mem_wb_reg_inst in_mem_out", false,-1, 63,0);
        tracep->declQuad(c+32,"core mem_wb_reg_inst in_alu_out", false,-1, 63,0);
        tracep->declBit(c+29,"core mem_wb_reg_inst in_reg_write", false,-1);
        tracep->declBit(c+30,"core mem_wb_reg_inst in_mem_to_reg", false,-1);
        tracep->declBus(c+27,"core mem_wb_reg_inst in_rd", false,-1, 4,0);
        tracep->declQuad(c+65,"core mem_wb_reg_inst out_mem_out", false,-1, 63,0);
        tracep->declQuad(c+67,"core mem_wb_reg_inst out_alu_out", false,-1, 63,0);
        tracep->declBit(c+36,"core mem_wb_reg_inst out_reg_write", false,-1);
        tracep->declBit(c+69,"core mem_wb_reg_inst out_mem_to_reg", false,-1);
        tracep->declBus(c+28,"core mem_wb_reg_inst out_rd", false,-1, 4,0);
        tracep->declBus(c+222,"core wb_stage_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBit(c+69,"core wb_stage_inst mem_to_reg", false,-1);
        tracep->declQuad(c+65,"core wb_stage_inst mem_out", false,-1, 63,0);
        tracep->declQuad(c+67,"core wb_stage_inst alu_out", false,-1, 63,0);
        tracep->declQuad(c+34,"core wb_stage_inst wb_data", false,-1, 63,0);
        tracep->declBus(c+222,"core id_stage_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+223,"core id_stage_inst INSTR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+224,"core id_stage_inst ALU_SEL", false,-1, 31,0);
        tracep->declBit(c+147,"core id_stage_inst clk", false,-1);
        tracep->declBit(c+148,"core id_stage_inst rst", false,-1);
        tracep->declBus(c+13,"core id_stage_inst instr", false,-1, 31,0);
        tracep->declBit(c+36,"core id_stage_inst wb_en", false,-1);
        tracep->declBus(c+28,"core id_stage_inst wb_addr", false,-1, 4,0);
        tracep->declQuad(c+34,"core id_stage_inst wb_data", false,-1, 63,0);
        tracep->declQuad(c+11,"core id_stage_inst pc", false,-1, 63,0);
        tracep->declBus(c+4,"core id_stage_inst idex_rd", false,-1, 4,0);
        tracep->declBit(c+31,"core id_stage_inst idex_reg_write", false,-1);
        tracep->declBit(c+7,"core id_stage_inst idex_mem_read", false,-1);
        tracep->declQuad(c+25,"core id_stage_inst ex_out", false,-1, 63,0);
        tracep->declBus(c+27,"core id_stage_inst exmem_rd", false,-1, 4,0);
        tracep->declBit(c+29,"core id_stage_inst exmem_reg_write", false,-1);
        tracep->declBit(c+30,"core id_stage_inst exmem_mem_to_reg", false,-1);
        tracep->declQuad(c+32,"core id_stage_inst exmem_alu_out", false,-1, 63,0);
        tracep->declQuad(c+142,"core id_stage_inst mem_out", false,-1, 63,0);
        tracep->declQuad(c+138,"core id_stage_inst in1", false,-1, 63,0);
        tracep->declQuad(c+140,"core id_stage_inst in2", false,-1, 63,0);
        tracep->declQuad(c+14,"core id_stage_inst imm", false,-1, 63,0);
        tracep->declBus(c+16,"core id_stage_inst alu_sel", false,-1, 4,0);
        tracep->declBit(c+17,"core id_stage_inst alu_src", false,-1);
        tracep->declBus(c+18,"core id_stage_inst rd_addr", false,-1, 4,0);
        tracep->declBus(c+2,"core id_stage_inst rs1_addr", false,-1, 4,0);
        tracep->declBus(c+3,"core id_stage_inst rs2_addr", false,-1, 4,0);
        tracep->declBit(c+5,"core id_stage_inst use_rs1", false,-1);
        tracep->declBit(c+6,"core id_stage_inst use_rs2", false,-1);
        tracep->declBit(c+19,"core id_stage_inst reg_write", false,-1);
        tracep->declBit(c+20,"core id_stage_inst mem_read", false,-1);
        tracep->declBit(c+21,"core id_stage_inst mem_write", false,-1);
        tracep->declBit(c+20,"core id_stage_inst mem_to_reg", false,-1);
        tracep->declBus(c+24,"core id_stage_inst funct3", false,-1, 2,0);
        tracep->declQuad(c+149,"core id_stage_inst pc_dst", false,-1, 63,0);
        tracep->declBit(c+136,"core id_stage_inst is_j", false,-1);
        tracep->declBit(c+22,"core id_stage_inst is_lui", false,-1);
        tracep->declBit(c+23,"core id_stage_inst is_auipc", false,-1);
        tracep->declBus(c+129,"core id_stage_inst opcode", false,-1, 6,0);
        tracep->declQuad(c+153,"core id_stage_inst reg_in1", false,-1, 63,0);
        tracep->declQuad(c+155,"core id_stage_inst reg_in2", false,-1, 63,0);
        tracep->declBit(c+157,"core id_stage_inst branch_taken", false,-1);
        tracep->declBit(c+130,"core id_stage_inst is_branch", false,-1);
        tracep->declBit(c+146,"core id_stage_inst misprediction", false,-1);
        tracep->declBit(c+131,"core id_stage_inst is_jal", false,-1);
        tracep->declBit(c+132,"core id_stage_inst is_jalr", false,-1);
        tracep->declBus(c+222,"core id_stage_inst branch_unit_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+129,"core id_stage_inst branch_unit_inst opcode", false,-1, 6,0);
        tracep->declBus(c+24,"core id_stage_inst branch_unit_inst funct3", false,-1, 2,0);
        tracep->declQuad(c+138,"core id_stage_inst branch_unit_inst in1", false,-1, 63,0);
        tracep->declQuad(c+140,"core id_stage_inst branch_unit_inst in2", false,-1, 63,0);
        tracep->declBit(c+157,"core id_stage_inst branch_unit_inst branch_taken", false,-1);
        tracep->declBit(c+130,"core id_stage_inst branch_unit_inst is_branch", false,-1);
        tracep->declBus(c+241,"core id_stage_inst branch_unit_inst OPCODE_B", false,-1, 6,0);
        tracep->declBus(c+222,"core id_stage_inst immgen_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+223,"core id_stage_inst immgen_inst INSTR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+13,"core id_stage_inst immgen_inst instr", false,-1, 31,0);
        tracep->declQuad(c+14,"core id_stage_inst immgen_inst imm", false,-1, 63,0);
        tracep->declBus(c+233,"core id_stage_inst immgen_inst OPCODE_SIZE", false,-1, 31,0);
        tracep->declBus(c+129,"core id_stage_inst immgen_inst opcode", false,-1, 6,0);
        tracep->declBus(c+222,"core id_stage_inst alu_cntrl_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+223,"core id_stage_inst alu_cntrl_inst INSTR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+224,"core id_stage_inst alu_cntrl_inst ALU_SEL", false,-1, 31,0);
        tracep->declBus(c+13,"core id_stage_inst alu_cntrl_inst instr", false,-1, 31,0);
        tracep->declBus(c+16,"core id_stage_inst alu_cntrl_inst alu_sel", false,-1, 4,0);
        tracep->declBus(c+129,"core id_stage_inst alu_cntrl_inst opcode", false,-1, 6,0);
        tracep->declBus(c+24,"core id_stage_inst alu_cntrl_inst funct3", false,-1, 2,0);
        tracep->declBus(c+133,"core id_stage_inst alu_cntrl_inst funct7", false,-1, 6,0);
        tracep->declBus(c+222,"core id_stage_inst regfile_inst BUS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+223,"core id_stage_inst regfile_inst NUM_REGS", false,-1, 31,0);
        tracep->declBit(c+147,"core id_stage_inst regfile_inst clk", false,-1);
        tracep->declBit(c+36,"core id_stage_inst regfile_inst write_en", false,-1);
        tracep->declBus(c+2,"core id_stage_inst regfile_inst read_addr_1", false,-1, 4,0);
        tracep->declQuad(c+153,"core id_stage_inst regfile_inst read_data_1", false,-1, 63,0);
        tracep->declBus(c+3,"core id_stage_inst regfile_inst read_addr_2", false,-1, 4,0);
        tracep->declQuad(c+155,"core id_stage_inst regfile_inst read_data_2", false,-1, 63,0);
        tracep->declBus(c+28,"core id_stage_inst regfile_inst write_addr", false,-1, 4,0);
        tracep->declQuad(c+34,"core id_stage_inst regfile_inst write_data", false,-1, 63,0);
        tracep->declQuad(c+226,"core id_stage_inst regfile_inst ZERO", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+158+i*2,"core id_stage_inst regfile_inst reg_file", true,(i+0), 63,0);}}
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
        tracep->fullBit(oldp+1,(vlSymsp->TOP__core.__PVT__load_use_stall));
        tracep->fullCData(oldp+2,((0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                            >> 0xfU))),5);
        tracep->fullCData(oldp+3,((0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                            >> 0x14U))),5);
        tracep->fullCData(oldp+4,(vlSymsp->TOP__core.__PVT__idex_rd),5);
        tracep->fullBit(oldp+5,(((((((0x33U == (0x7fU 
                                                & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                     | (0x13U == (0x7fU 
                                                  & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                    | (3U == (0x7fU 
                                              & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                   | (0x23U == (0x7fU 
                                                & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                  | (0x63U == (0x7fU 
                                               & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                 | (0x67U == (0x7fU 
                                              & vlSymsp->TOP__core.__PVT__ifid_instr)))));
        tracep->fullBit(oldp+6,((((0x33U == (0x7fU 
                                             & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                  | (0x23U == (0x7fU 
                                               & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                 | (0x63U == (0x7fU 
                                              & vlSymsp->TOP__core.__PVT__ifid_instr)))));
        tracep->fullBit(oldp+7,(vlSymsp->TOP__core.__PVT__idex_mem_read));
        tracep->fullQData(oldp+8,(vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr),64);
        tracep->fullIData(oldp+10,(vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__mem
                                   [(0x7fffU & (IData)(
                                                       (vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr 
                                                        >> 2U)))]),32);
        tracep->fullQData(oldp+11,(vlSymsp->TOP__core.__PVT__ifid_pc),64);
        tracep->fullIData(oldp+13,(vlSymsp->TOP__core.__PVT__ifid_instr),32);
        tracep->fullQData(oldp+14,(vlSymsp->TOP__core__id_stage_inst.__PVT__imm),64);
        tracep->fullCData(oldp+16,(vlSymsp->TOP__core__id_stage_inst.__PVT__alu_sel),5);
        tracep->fullBit(oldp+17,(((((((0x13U == (0x7fU 
                                                 & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                      | (3U == (0x7fU 
                                                & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                     | (0x23U == (0x7fU 
                                                  & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                    | (0x37U == (0x7fU 
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
        tracep->fullQData(oldp+25,(vlSymsp->TOP__core.__PVT__ex_out),64);
        tracep->fullCData(oldp+27,(vlSymsp->TOP__core.__PVT__exmem_rd),5);
        tracep->fullCData(oldp+28,(vlSymsp->TOP__core.__PVT__memwb_rd),5);
        tracep->fullBit(oldp+29,(vlSymsp->TOP__core.__PVT__exmem_reg_write));
        tracep->fullBit(oldp+30,(vlSymsp->TOP__core.__PVT__exmem_mem_to_reg));
        tracep->fullBit(oldp+31,(vlSymsp->TOP__core.__PVT__idex_reg_write));
        tracep->fullQData(oldp+32,(vlSymsp->TOP__core.__PVT__exmem_alu_out),64);
        tracep->fullQData(oldp+34,(vlSymsp->TOP__core.__PVT__wb_data),64);
        tracep->fullBit(oldp+36,(vlSymsp->TOP__core.__PVT__memwb_reg_write));
        tracep->fullIData(oldp+37,(vlSymsp->TOP__core.__PVT__idex_instr),32);
        tracep->fullQData(oldp+38,(vlSymsp->TOP__core.__PVT__idex_pc),64);
        tracep->fullQData(oldp+40,(vlSymsp->TOP__core.__PVT__idex_imm),64);
        tracep->fullQData(oldp+42,(vlSymsp->TOP__core.__PVT__idex_in1),64);
        tracep->fullQData(oldp+44,(vlSymsp->TOP__core.__PVT__idex_in2),64);
        tracep->fullQData(oldp+46,(vlSymsp->TOP__core.__PVT__idex_write_data),64);
        tracep->fullBit(oldp+48,(vlSymsp->TOP__core.__PVT__idex_alu_src));
        tracep->fullBit(oldp+49,(vlSymsp->TOP__core.__PVT__idex_is_j));
        tracep->fullBit(oldp+50,(vlSymsp->TOP__core.__PVT__idex_is_lui));
        tracep->fullBit(oldp+51,(vlSymsp->TOP__core.__PVT__idex_is_auipc));
        tracep->fullCData(oldp+52,(vlSymsp->TOP__core.__PVT__idex_alu_sel),5);
        tracep->fullBit(oldp+53,(vlSymsp->TOP__core.__PVT__idex_mem_write));
        tracep->fullBit(oldp+54,(vlSymsp->TOP__core.__PVT__idex_mem_to_reg));
        tracep->fullCData(oldp+55,(vlSymsp->TOP__core.__PVT__idex_rs1),5);
        tracep->fullCData(oldp+56,(vlSymsp->TOP__core.__PVT__idex_rs2),5);
        tracep->fullCData(oldp+57,(vlSymsp->TOP__core.__PVT__idex_funct3),3);
        tracep->fullQData(oldp+58,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__in2_forwarded),64);
        tracep->fullCData(oldp+60,(vlSymsp->TOP__core.__PVT__exmem_funct3),3);
        tracep->fullBit(oldp+61,(vlSymsp->TOP__core.__PVT__exmem_mem_write));
        tracep->fullBit(oldp+62,(vlSymsp->TOP__core.__PVT__exmem_mem_read));
        tracep->fullQData(oldp+63,(vlSymsp->TOP__core.__PVT__exmem_write_data),64);
        tracep->fullQData(oldp+65,(vlSymsp->TOP__core.__PVT__memwb_mem_out),64);
        tracep->fullQData(oldp+67,(vlSymsp->TOP__core.__PVT__memwb_alu_out),64);
        tracep->fullBit(oldp+69,(vlSymsp->TOP__core.__PVT__memwb_mem_to_reg));
        tracep->fullBit(oldp+70,(((((((((0x33U == (0x7fU 
                                                   & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                        | (0x13U == 
                                           (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                       | (3U == (0x7fU 
                                                 & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                      | (0x23U == (0x7fU 
                                                   & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                     | (0x63U == (0x7fU 
                                                  & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                    | (0x67U == (0x7fU 
                                                 & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                   & (0U != (0x1fU 
                                             & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                >> 0xfU)))) 
                                  & ((0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                               >> 0xfU)) 
                                     == (IData)(vlSymsp->TOP__core.__PVT__idex_rd)))));
        tracep->fullBit(oldp+71,((((((0x33U == (0x7fU 
                                                & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                     | (0x23U == (0x7fU 
                                                  & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                    | (0x63U == (0x7fU 
                                                 & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                   & (0U != (0x1fU 
                                             & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                >> 0x14U)))) 
                                  & ((0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                               >> 0x14U)) 
                                     == (IData)(vlSymsp->TOP__core.__PVT__idex_rd)))));
        tracep->fullSData(oldp+72,((0x7fffU & (IData)(
                                                      (vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr 
                                                       >> 2U)))),15);
        tracep->fullCData(oldp+73,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__forward_A),2);
        tracep->fullCData(oldp+74,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__forward_B),2);
        tracep->fullQData(oldp+75,(((2U == (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__forward_A))
                                     ? vlSymsp->TOP__core.__PVT__exmem_alu_out
                                     : ((1U == (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__forward_A))
                                         ? vlSymsp->TOP__core.__PVT__wb_data
                                         : vlSymsp->TOP__core.__PVT__idex_in1))),64);
        tracep->fullQData(oldp+77,(((0x10U & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
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
        tracep->fullQData(oldp+79,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1),64);
        tracep->fullQData(oldp+81,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2),64);
        tracep->fullBit(oldp+83,((((IData)(vlSymsp->TOP__core.__PVT__memwb_reg_write) 
                                   & (0U != (IData)(vlSymsp->TOP__core.__PVT__memwb_rd))) 
                                  & ((IData)(vlSymsp->TOP__core.__PVT__idex_rs1) 
                                     == (IData)(vlSymsp->TOP__core.__PVT__memwb_rd)))));
        tracep->fullBit(oldp+84,((((IData)(vlSymsp->TOP__core.__PVT__exmem_reg_write) 
                                   & (0U != (IData)(vlSymsp->TOP__core.__PVT__exmem_rd))) 
                                  & ((IData)(vlSymsp->TOP__core.__PVT__idex_rs1) 
                                     == (IData)(vlSymsp->TOP__core.__PVT__exmem_rd)))));
        tracep->fullBit(oldp+85,((((IData)(vlSymsp->TOP__core.__PVT__memwb_reg_write) 
                                   & (0U != (IData)(vlSymsp->TOP__core.__PVT__memwb_rd))) 
                                  & ((IData)(vlSymsp->TOP__core.__PVT__idex_rs2) 
                                     == (IData)(vlSymsp->TOP__core.__PVT__memwb_rd)))));
        tracep->fullBit(oldp+86,((((IData)(vlSymsp->TOP__core.__PVT__exmem_reg_write) 
                                   & (0U != (IData)(vlSymsp->TOP__core.__PVT__exmem_rd))) 
                                  & ((IData)(vlSymsp->TOP__core.__PVT__idex_rs2) 
                                     == (IData)(vlSymsp->TOP__core.__PVT__exmem_rd)))));
        tracep->fullQData(oldp+87,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                    + vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
        tracep->fullQData(oldp+89,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                    - vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
        tracep->fullQData(oldp+91,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                    ^ vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
        tracep->fullQData(oldp+93,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                    & vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
        tracep->fullQData(oldp+95,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                    | vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
        tracep->fullQData(oldp+97,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                    << (0x3fU & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
        tracep->fullQData(oldp+99,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                    >> (0x3fU & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
        tracep->fullQData(oldp+101,(VL_SHIFTRS_QQI(64,64,6, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1, 
                                                   (0x3fU 
                                                    & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
        tracep->fullQData(oldp+103,((QData)((IData)(
                                                    VL_LTS_IQQ(1,64,64, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
        tracep->fullQData(oldp+105,((QData)((IData)(
                                                    (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                     < vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
        tracep->fullQData(oldp+107,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_out),64);
        tracep->fullCData(oldp+109,((3U & (2U ^ (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel)))),2);
        tracep->fullCData(oldp+110,((0x3fU & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2))),6);
        tracep->fullWData(oldp+111,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full),128);
        tracep->fullCData(oldp+115,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes),4);
        tracep->fullBit(oldp+116,((1U & ((IData)(vlSymsp->TOP__core.__PVT__exmem_funct3) 
                                         >> 2U))));
        tracep->fullSData(oldp+117,((0x7fffU & (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out))),15);
        tracep->fullBit(oldp+118,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem_busy));
        tracep->fullQData(oldp+119,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read),64);
        tracep->fullIData(oldp+121,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__i),32);
        tracep->fullIData(oldp+122,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__j),32);
        tracep->fullBit(oldp+123,((1U & ((8U & (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))
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
        tracep->fullQData(oldp+124,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__sext_mask),64);
        tracep->fullBit(oldp+126,((8U <= (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))));
        tracep->fullQData(oldp+127,(((1U & (((IData)(vlSymsp->TOP__core.__PVT__exmem_funct3) 
                                             >> 2U) 
                                            | (8U <= (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))))
                                      ? vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read
                                      : (vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                                         | vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__sext_mask))),64);
        tracep->fullCData(oldp+129,((0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr)),7);
        tracep->fullBit(oldp+130,((0x63U == (0x7fU 
                                             & vlSymsp->TOP__core.__PVT__ifid_instr))));
        tracep->fullBit(oldp+131,((0x6fU == (0x7fU 
                                             & vlSymsp->TOP__core.__PVT__ifid_instr))));
        tracep->fullBit(oldp+132,((0x67U == (0x7fU 
                                             & vlSymsp->TOP__core.__PVT__ifid_instr))));
        tracep->fullCData(oldp+133,((0x7fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                              >> 0x19U))),7);
        tracep->fullBit(oldp+134,(vlSymsp->TOP__core.__PVT__mem_stall));
        tracep->fullBit(oldp+135,(vlSymsp->TOP__core.__PVT__pipeline_stall));
        tracep->fullBit(oldp+136,(vlSymsp->TOP__core__id_stage_inst.__PVT__is_j));
        tracep->fullBit(oldp+137,(vlSymsp->TOP__core.__PVT__real_is_j));
        tracep->fullQData(oldp+138,(vlSymsp->TOP__core__id_stage_inst.__PVT__in1),64);
        tracep->fullQData(oldp+140,(vlSymsp->TOP__core__id_stage_inst.__PVT__in2),64);
        tracep->fullQData(oldp+142,(vlSymsp->TOP__core.__PVT__mem_out),64);
        tracep->fullBit(oldp+144,(vlSymsp->TOP__core.__Vcellinp__id_ex_reg_inst__flush));
        tracep->fullBit(oldp+145,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem_op));
        tracep->fullBit(oldp+146,(vlSymsp->TOP__core__id_stage_inst.__PVT__misprediction));
        tracep->fullBit(oldp+147,(vlTOPp->clk));
        tracep->fullBit(oldp+148,(vlTOPp->rst));
        tracep->fullQData(oldp+149,((((0x6fU == (0x7fU 
                                                 & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                      | (IData)(vlSymsp->TOP__core__id_stage_inst.__PVT__misprediction))
                                      ? (vlSymsp->TOP__core.__PVT__ifid_pc 
                                         + vlSymsp->TOP__core__id_stage_inst.__PVT__imm)
                                      : ((0x67U == 
                                          (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))
                                          ? (0xfffffffffffffffeULL 
                                             & (vlSymsp->TOP__core__id_stage_inst.__PVT__in1 
                                                + vlSymsp->TOP__core__id_stage_inst.__PVT__imm))
                                          : 0ULL))),64);
        tracep->fullQData(oldp+151,(((IData)(vlSymsp->TOP__core.__PVT__real_is_j)
                                      ? (((0x6fU == 
                                           (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                          | (IData)(vlSymsp->TOP__core__id_stage_inst.__PVT__misprediction))
                                          ? (vlSymsp->TOP__core.__PVT__ifid_pc 
                                             + vlSymsp->TOP__core__id_stage_inst.__PVT__imm)
                                          : ((0x67U 
                                              == (0x7fU 
                                                  & vlSymsp->TOP__core.__PVT__ifid_instr))
                                              ? (0xfffffffffffffffeULL 
                                                 & (vlSymsp->TOP__core__id_stage_inst.__PVT__in1 
                                                    + vlSymsp->TOP__core__id_stage_inst.__PVT__imm))
                                              : 0ULL))
                                      : (4ULL + vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr))),64);
        tracep->fullQData(oldp+153,(((0U == (0x1fU 
                                             & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                >> 0xfU)))
                                      ? 0ULL : (((IData)(vlSymsp->TOP__core.__PVT__memwb_reg_write) 
                                                 & ((0x1fU 
                                                     & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                        >> 0xfU)) 
                                                    == (IData)(vlSymsp->TOP__core.__PVT__memwb_rd)))
                                                 ? vlSymsp->TOP__core.__PVT__wb_data
                                                 : 
                                                vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file
                                                [(0x1fU 
                                                  & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                     >> 0xfU))]))),64);
        tracep->fullQData(oldp+155,(((0U == (0x1fU 
                                             & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                >> 0x14U)))
                                      ? 0ULL : (((IData)(vlSymsp->TOP__core.__PVT__memwb_reg_write) 
                                                 & ((0x1fU 
                                                     & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                        >> 0x14U)) 
                                                    == (IData)(vlSymsp->TOP__core.__PVT__memwb_rd)))
                                                 ? vlSymsp->TOP__core.__PVT__wb_data
                                                 : 
                                                vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file
                                                [(0x1fU 
                                                  & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                     >> 0x14U))]))),64);
        tracep->fullBit(oldp+157,(((0x4000U & vlSymsp->TOP__core.__PVT__ifid_instr)
                                    ? ((0x2000U & vlSymsp->TOP__core.__PVT__ifid_instr)
                                        ? ((0x1000U 
                                            & vlSymsp->TOP__core.__PVT__ifid_instr)
                                            ? (vlSymsp->TOP__core__id_stage_inst.__PVT__in1 
                                               >= vlSymsp->TOP__core__id_stage_inst.__PVT__in2)
                                            : (vlSymsp->TOP__core__id_stage_inst.__PVT__in1 
                                               < vlSymsp->TOP__core__id_stage_inst.__PVT__in2))
                                        : ((0x1000U 
                                            & vlSymsp->TOP__core.__PVT__ifid_instr)
                                            ? VL_GTES_IQQ(1,64,64, vlSymsp->TOP__core__id_stage_inst.__PVT__in1, vlSymsp->TOP__core__id_stage_inst.__PVT__in2)
                                            : VL_LTS_IQQ(1,64,64, vlSymsp->TOP__core__id_stage_inst.__PVT__in1, vlSymsp->TOP__core__id_stage_inst.__PVT__in2)))
                                    : ((~ (vlSymsp->TOP__core.__PVT__ifid_instr 
                                           >> 0xdU)) 
                                       & ((0x1000U 
                                           & vlSymsp->TOP__core.__PVT__ifid_instr)
                                           ? (vlSymsp->TOP__core__id_stage_inst.__PVT__in1 
                                              != vlSymsp->TOP__core__id_stage_inst.__PVT__in2)
                                           : (vlSymsp->TOP__core__id_stage_inst.__PVT__in1 
                                              == vlSymsp->TOP__core__id_stage_inst.__PVT__in2))))));
        tracep->fullQData(oldp+158,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[0]),64);
        tracep->fullQData(oldp+160,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[1]),64);
        tracep->fullQData(oldp+162,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[2]),64);
        tracep->fullQData(oldp+164,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[3]),64);
        tracep->fullQData(oldp+166,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[4]),64);
        tracep->fullQData(oldp+168,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[5]),64);
        tracep->fullQData(oldp+170,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[6]),64);
        tracep->fullQData(oldp+172,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[7]),64);
        tracep->fullQData(oldp+174,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[8]),64);
        tracep->fullQData(oldp+176,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[9]),64);
        tracep->fullQData(oldp+178,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[10]),64);
        tracep->fullQData(oldp+180,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[11]),64);
        tracep->fullQData(oldp+182,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[12]),64);
        tracep->fullQData(oldp+184,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[13]),64);
        tracep->fullQData(oldp+186,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[14]),64);
        tracep->fullQData(oldp+188,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[15]),64);
        tracep->fullQData(oldp+190,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[16]),64);
        tracep->fullQData(oldp+192,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[17]),64);
        tracep->fullQData(oldp+194,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[18]),64);
        tracep->fullQData(oldp+196,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[19]),64);
        tracep->fullQData(oldp+198,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[20]),64);
        tracep->fullQData(oldp+200,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[21]),64);
        tracep->fullQData(oldp+202,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[22]),64);
        tracep->fullQData(oldp+204,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[23]),64);
        tracep->fullQData(oldp+206,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[24]),64);
        tracep->fullQData(oldp+208,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[25]),64);
        tracep->fullQData(oldp+210,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[26]),64);
        tracep->fullQData(oldp+212,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[27]),64);
        tracep->fullQData(oldp+214,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[28]),64);
        tracep->fullQData(oldp+216,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[29]),64);
        tracep->fullQData(oldp+218,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[30]),64);
        tracep->fullQData(oldp+220,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[31]),64);
        tracep->fullIData(oldp+222,(0x40U),32);
        tracep->fullIData(oldp+223,(0x20U),32);
        tracep->fullIData(oldp+224,(5U),32);
        tracep->fullIData(oldp+225,(0xfU),32);
        tracep->fullQData(oldp+226,(0ULL),64);
        tracep->fullSData(oldp+228,(0U),15);
        tracep->fullCData(oldp+229,(0U),8);
        tracep->fullCData(oldp+230,(0U),5);
        tracep->fullIData(oldp+231,(0x13U),32);
        tracep->fullIData(oldp+232,(3U),32);
        tracep->fullIData(oldp+233,(7U),32);
        tracep->fullCData(oldp+234,(1U),2);
        tracep->fullCData(oldp+235,(2U),2);
        tracep->fullCData(oldp+236,(0U),2);
        tracep->fullIData(oldp+237,(2U),32);
        tracep->fullBit(oldp+238,(0U));
        tracep->fullIData(oldp+239,(8U),32);
        tracep->fullCData(oldp+240,(8U),4);
        tracep->fullCData(oldp+241,(0x63U),7);
    }
}
