// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore_regfile.h"
#include "Vcore__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vcore_regfile) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcore_regfile::__Vconfigure(Vcore__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vcore_regfile::~Vcore_regfile() {
}

void Vcore_regfile::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_regfile::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__write_en = VL_RAND_RESET_I(1);
    __PVT__read_addr_1 = VL_RAND_RESET_I(5);
    __PVT__read_data_1 = VL_RAND_RESET_Q(64);
    __PVT__read_addr_2 = VL_RAND_RESET_I(5);
    __PVT__read_data_2 = VL_RAND_RESET_Q(64);
    __PVT__write_addr = VL_RAND_RESET_I(5);
    __PVT__write_data = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            reg_file[__Vi0] = VL_RAND_RESET_Q(64);
    }}
}
