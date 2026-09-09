// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore_id_stage.h"
#include "Vcore__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vcore_id_stage) {
    VL_CELL(regfile_inst, Vcore_regfile);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcore_id_stage::__Vconfigure(Vcore__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vcore_id_stage::~Vcore_id_stage() {
}

void Vcore_id_stage::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_id_stage::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__instr = VL_RAND_RESET_I(32);
    __PVT__wb_en = VL_RAND_RESET_I(1);
    __PVT__wb_addr = VL_RAND_RESET_I(5);
    __PVT__wb_data = VL_RAND_RESET_Q(64);
    __PVT__pc = VL_RAND_RESET_Q(64);
    __PVT__in1 = VL_RAND_RESET_Q(64);
    __PVT__in2 = VL_RAND_RESET_Q(64);
    __PVT__imm = VL_RAND_RESET_Q(64);
    __PVT__alu_sel = VL_RAND_RESET_I(5);
    __PVT__alu_src = VL_RAND_RESET_I(1);
    __PVT__rd_addr = VL_RAND_RESET_I(5);
    __PVT__reg_write = VL_RAND_RESET_I(1);
    __PVT__mem_read = VL_RAND_RESET_I(1);
    __PVT__mem_write = VL_RAND_RESET_I(1);
    __PVT__mem_to_reg = VL_RAND_RESET_I(1);
    __PVT__funct3 = VL_RAND_RESET_I(3);
    __PVT__pc_dst = VL_RAND_RESET_Q(64);
    __PVT__is_j = VL_RAND_RESET_I(1);
    __PVT__is_lui = VL_RAND_RESET_I(1);
    __PVT__is_auipc = VL_RAND_RESET_I(1);
    __PVT__misprediction = VL_RAND_RESET_I(1);
}
