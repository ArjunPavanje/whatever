// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore_regfile.h"
#include "Vcore__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vcore_regfile::_sequent__TOP__core__id_stage_inst__regfile_inst__1(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_regfile::_sequent__TOP__core__id_stage_inst__regfile_inst__1\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__reg_file__v0;
    CData/*0:0*/ __Vdlyvset__reg_file__v0;
    QData/*63:0*/ __Vdlyvval__reg_file__v0;
    // Body
    __Vdlyvset__reg_file__v0 = 0U;
    if (((IData)(vlSymsp->TOP__core.__PVT__memwb_reg_write) 
         & (0U != (IData)(vlSymsp->TOP__core.__PVT__memwb_rd)))) {
        __Vdlyvval__reg_file__v0 = vlSymsp->TOP__core.__PVT__wb_data;
        __Vdlyvset__reg_file__v0 = 1U;
        __Vdlyvdim0__reg_file__v0 = vlSymsp->TOP__core.__PVT__memwb_rd;
    }
    if (__Vdlyvset__reg_file__v0) {
        vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[__Vdlyvdim0__reg_file__v0] 
            = __Vdlyvval__reg_file__v0;
    }
    vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[0U] = 0ULL;
}
