// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore_core.h"
#include "Vcore__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vcore_core::_sequent__TOP__core__2(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core::_sequent__TOP__core__2\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvval__mem_stage_inst__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__mem_stage_inst__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__mem_stage_inst__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__mem_stage_inst__DOT__mem__v1;
    CData/*7:0*/ __Vdlyvval__mem_stage_inst__DOT__mem__v2;
    CData/*0:0*/ __Vdlyvset__mem_stage_inst__DOT__mem__v2;
    CData/*7:0*/ __Vdlyvval__mem_stage_inst__DOT__mem__v3;
    CData/*0:0*/ __Vdlyvset__mem_stage_inst__DOT__mem__v3;
    CData/*7:0*/ __Vdlyvval__mem_stage_inst__DOT__mem__v4;
    CData/*0:0*/ __Vdlyvset__mem_stage_inst__DOT__mem__v4;
    CData/*7:0*/ __Vdlyvval__mem_stage_inst__DOT__mem__v5;
    CData/*0:0*/ __Vdlyvset__mem_stage_inst__DOT__mem__v5;
    CData/*7:0*/ __Vdlyvval__mem_stage_inst__DOT__mem__v6;
    CData/*0:0*/ __Vdlyvset__mem_stage_inst__DOT__mem__v6;
    CData/*7:0*/ __Vdlyvval__mem_stage_inst__DOT__mem__v7;
    CData/*0:0*/ __Vdlyvset__mem_stage_inst__DOT__mem__v7;
    SData/*14:0*/ __Vdlyvdim0__mem_stage_inst__DOT__mem__v0;
    SData/*14:0*/ __Vdlyvdim0__mem_stage_inst__DOT__mem__v1;
    SData/*14:0*/ __Vdlyvdim0__mem_stage_inst__DOT__mem__v2;
    SData/*14:0*/ __Vdlyvdim0__mem_stage_inst__DOT__mem__v3;
    SData/*14:0*/ __Vdlyvdim0__mem_stage_inst__DOT__mem__v4;
    SData/*14:0*/ __Vdlyvdim0__mem_stage_inst__DOT__mem__v5;
    SData/*14:0*/ __Vdlyvdim0__mem_stage_inst__DOT__mem__v6;
    SData/*14:0*/ __Vdlyvdim0__mem_stage_inst__DOT__mem__v7;
    // Body
    if (((~ (IData)(vlTOPp->rst)) & (IData)(vlSymsp->TOP__core.__PVT__exmem_mem_write))) {
        vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__i = 8U;
    }
    __Vdlyvset__mem_stage_inst__DOT__mem__v0 = 0U;
    __Vdlyvset__mem_stage_inst__DOT__mem__v1 = 0U;
    __Vdlyvset__mem_stage_inst__DOT__mem__v2 = 0U;
    __Vdlyvset__mem_stage_inst__DOT__mem__v3 = 0U;
    __Vdlyvset__mem_stage_inst__DOT__mem__v4 = 0U;
    __Vdlyvset__mem_stage_inst__DOT__mem__v5 = 0U;
    __Vdlyvset__mem_stage_inst__DOT__mem__v6 = 0U;
    __Vdlyvset__mem_stage_inst__DOT__mem__v7 = 0U;
    if (vlTOPp->rst) {
        vlSymsp->TOP__core.__PVT__idex_imm = 0ULL;
        vlSymsp->TOP__core.__PVT__idex_in2 = 0ULL;
        vlSymsp->TOP__core.__PVT__idex_instr = 0U;
        vlSymsp->TOP__core.__PVT__idex_pc = 0ULL;
    } else {
        vlSymsp->TOP__core.__PVT__idex_imm = vlSymsp->TOP__core__id_stage_inst.__PVT__imm;
        vlSymsp->TOP__core.__PVT__idex_in2 = vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_2;
        vlSymsp->TOP__core.__PVT__idex_instr = vlSymsp->TOP__core.__PVT__ifid_instr;
        vlSymsp->TOP__core.__PVT__idex_pc = vlSymsp->TOP__core.__PVT__ifid_pc;
    }
    vlSymsp->TOP__core.__PVT__idex_alu_src = ((~ (IData)(vlTOPp->rst)) 
                                              & (((((0x13U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                                    | (3U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                                   | (0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                                  | (0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                                 | (0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSymsp->TOP__core.__PVT__ifid_instr))));
    vlSymsp->TOP__core.__PVT__idex_is_lui = ((~ (IData)(vlTOPp->rst)) 
                                             & (0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSymsp->TOP__core.__PVT__ifid_instr)));
    vlSymsp->TOP__core.__PVT__idex_is_auipc = ((~ (IData)(vlTOPp->rst)) 
                                               & (0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSymsp->TOP__core.__PVT__ifid_instr)));
    vlSymsp->TOP__core.__PVT__idex_in1 = ((IData)(vlTOPp->rst)
                                           ? 0ULL : 
                                          ((0U == (0x1fU 
                                                   & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                      >> 0xfU)))
                                            ? 0ULL : 
                                           vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file
                                           [(0x1fU 
                                             & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                >> 0xfU))]));
    if (((~ (IData)(vlTOPp->rst)) & (IData)(vlSymsp->TOP__core.__PVT__exmem_mem_write))) {
        if ((0U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))) {
            __Vdlyvval__mem_stage_inst__DOT__mem__v0 
                = (0xffU & (IData)(vlSymsp->TOP__core.__PVT__exmem_write_data));
            __Vdlyvset__mem_stage_inst__DOT__mem__v0 = 1U;
            __Vdlyvdim0__mem_stage_inst__DOT__mem__v0 
                = (0x7fffU & (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out));
        }
        if ((1U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))) {
            __Vdlyvval__mem_stage_inst__DOT__mem__v1 
                = (0xffU & (IData)((vlSymsp->TOP__core.__PVT__exmem_write_data 
                                    >> 8U)));
            __Vdlyvset__mem_stage_inst__DOT__mem__v1 = 1U;
            __Vdlyvdim0__mem_stage_inst__DOT__mem__v1 
                = (0x7fffU & ((IData)(1U) + (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out)));
        }
        if ((2U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))) {
            __Vdlyvval__mem_stage_inst__DOT__mem__v2 
                = (0xffU & (IData)((vlSymsp->TOP__core.__PVT__exmem_write_data 
                                    >> 0x10U)));
            __Vdlyvset__mem_stage_inst__DOT__mem__v2 = 1U;
            __Vdlyvdim0__mem_stage_inst__DOT__mem__v2 
                = (0x7fffU & ((IData)(2U) + (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out)));
        }
        if ((3U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))) {
            __Vdlyvval__mem_stage_inst__DOT__mem__v3 
                = (0xffU & (IData)((vlSymsp->TOP__core.__PVT__exmem_write_data 
                                    >> 0x18U)));
            __Vdlyvset__mem_stage_inst__DOT__mem__v3 = 1U;
            __Vdlyvdim0__mem_stage_inst__DOT__mem__v3 
                = (0x7fffU & ((IData)(3U) + (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out)));
        }
        if ((4U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))) {
            __Vdlyvval__mem_stage_inst__DOT__mem__v4 
                = (0xffU & (IData)((vlSymsp->TOP__core.__PVT__exmem_write_data 
                                    >> 0x20U)));
            __Vdlyvset__mem_stage_inst__DOT__mem__v4 = 1U;
            __Vdlyvdim0__mem_stage_inst__DOT__mem__v4 
                = (0x7fffU & ((IData)(4U) + (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out)));
        }
        if ((5U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))) {
            __Vdlyvval__mem_stage_inst__DOT__mem__v5 
                = (0xffU & (IData)((vlSymsp->TOP__core.__PVT__exmem_write_data 
                                    >> 0x28U)));
            __Vdlyvset__mem_stage_inst__DOT__mem__v5 = 1U;
            __Vdlyvdim0__mem_stage_inst__DOT__mem__v5 
                = (0x7fffU & ((IData)(5U) + (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out)));
        }
        if ((6U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))) {
            __Vdlyvval__mem_stage_inst__DOT__mem__v6 
                = (0xffU & (IData)((vlSymsp->TOP__core.__PVT__exmem_write_data 
                                    >> 0x30U)));
            __Vdlyvset__mem_stage_inst__DOT__mem__v6 = 1U;
            __Vdlyvdim0__mem_stage_inst__DOT__mem__v6 
                = (0x7fffU & ((IData)(6U) + (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out)));
        }
        if ((7U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))) {
            __Vdlyvval__mem_stage_inst__DOT__mem__v7 
                = (0xffU & (IData)((vlSymsp->TOP__core.__PVT__exmem_write_data 
                                    >> 0x38U)));
            __Vdlyvset__mem_stage_inst__DOT__mem__v7 = 1U;
            __Vdlyvdim0__mem_stage_inst__DOT__mem__v7 
                = (0x7fffU & ((IData)(7U) + (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out)));
        }
    }
    if (__Vdlyvset__mem_stage_inst__DOT__mem__v0) {
        vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem[__Vdlyvdim0__mem_stage_inst__DOT__mem__v0] 
            = __Vdlyvval__mem_stage_inst__DOT__mem__v0;
    }
    if (__Vdlyvset__mem_stage_inst__DOT__mem__v1) {
        vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem[__Vdlyvdim0__mem_stage_inst__DOT__mem__v1] 
            = __Vdlyvval__mem_stage_inst__DOT__mem__v1;
    }
    if (__Vdlyvset__mem_stage_inst__DOT__mem__v2) {
        vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem[__Vdlyvdim0__mem_stage_inst__DOT__mem__v2] 
            = __Vdlyvval__mem_stage_inst__DOT__mem__v2;
    }
    if (__Vdlyvset__mem_stage_inst__DOT__mem__v3) {
        vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem[__Vdlyvdim0__mem_stage_inst__DOT__mem__v3] 
            = __Vdlyvval__mem_stage_inst__DOT__mem__v3;
    }
    if (__Vdlyvset__mem_stage_inst__DOT__mem__v4) {
        vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem[__Vdlyvdim0__mem_stage_inst__DOT__mem__v4] 
            = __Vdlyvval__mem_stage_inst__DOT__mem__v4;
    }
    if (__Vdlyvset__mem_stage_inst__DOT__mem__v5) {
        vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem[__Vdlyvdim0__mem_stage_inst__DOT__mem__v5] 
            = __Vdlyvval__mem_stage_inst__DOT__mem__v5;
    }
    if (__Vdlyvset__mem_stage_inst__DOT__mem__v6) {
        vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem[__Vdlyvdim0__mem_stage_inst__DOT__mem__v6] 
            = __Vdlyvval__mem_stage_inst__DOT__mem__v6;
    }
    if (__Vdlyvset__mem_stage_inst__DOT__mem__v7) {
        vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem[__Vdlyvdim0__mem_stage_inst__DOT__mem__v7] 
            = __Vdlyvval__mem_stage_inst__DOT__mem__v7;
    }
    if (vlTOPp->rst) {
        vlSymsp->TOP__core.__PVT__ifid_pc = 0ULL;
        vlSymsp->TOP__core.__PVT__exmem_write_data = 0ULL;
    } else {
        vlSymsp->TOP__core.__PVT__ifid_pc = vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr;
        vlSymsp->TOP__core.__PVT__exmem_write_data 
            = vlSymsp->TOP__core.__PVT__idex_write_data;
    }
    vlSymsp->TOP__core.__PVT__exmem_mem_write = ((~ (IData)(vlTOPp->rst)) 
                                                 & (IData)(vlSymsp->TOP__core.__PVT__idex_mem_write));
    vlSymsp->TOP__core.__PVT__idex_write_data = ((IData)(vlTOPp->rst)
                                                  ? 0ULL
                                                  : vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_2);
    vlSymsp->TOP__core.__PVT__idex_mem_write = ((~ (IData)(vlTOPp->rst)) 
                                                & (0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSymsp->TOP__core.__PVT__ifid_instr)));
}

VL_INLINE_OPT void Vcore_core::_sequent__TOP__core__3(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core::_sequent__TOP__core__3\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp3[4];
    WData/*127:0*/ __Vtemp4[4];
    WData/*127:0*/ __Vtemp5[4];
    WData/*127:0*/ __Vtemp6[4];
    WData/*127:0*/ __Vtemp7[4];
    WData/*127:0*/ __Vtemp8[4];
    WData/*127:0*/ __Vtemp11[4];
    WData/*127:0*/ __Vtemp12[4];
    WData/*127:0*/ __Vtemp13[4];
    // Body
    vlSymsp->TOP__core.__PVT__memwb_reg_write = ((~ (IData)(vlTOPp->rst)) 
                                                 & (IData)(vlSymsp->TOP__core.__PVT__exmem_reg_write));
    vlSymsp->TOP__core.__PVT__memwb_rd = ((IData)(vlTOPp->rst)
                                           ? 0U : (IData)(vlSymsp->TOP__core.__PVT__exmem_rd));
    vlSymsp->TOP__core.__PVT__memwb_mem_to_reg = ((~ (IData)(vlTOPp->rst)) 
                                                  & (IData)(vlSymsp->TOP__core.__PVT__exmem_mem_to_reg));
    if (vlTOPp->rst) {
        vlSymsp->TOP__core.__PVT__memwb_alu_out = 0ULL;
        vlSymsp->TOP__core.__PVT__memwb_mem_out = 0ULL;
    } else {
        vlSymsp->TOP__core.__PVT__memwb_alu_out = vlSymsp->TOP__core.__PVT__exmem_alu_out;
        vlSymsp->TOP__core.__PVT__memwb_mem_out = (
                                                   ((IData)(vlSymsp->TOP__core.__PVT__exmem_mem_read) 
                                                    & (~ (IData)(vlTOPp->rst)))
                                                    ? 
                                                   ((1U 
                                                     & (((IData)(vlSymsp->TOP__core.__PVT__exmem_funct3) 
                                                         >> 2U) 
                                                        | (8U 
                                                           <= (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))))
                                                     ? vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read
                                                     : 
                                                    (vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                                                     | vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__sext_mask))
                                                    : 0ULL);
    }
    vlSymsp->TOP__core.__PVT__exmem_reg_write = ((~ (IData)(vlTOPp->rst)) 
                                                 & (IData)(vlSymsp->TOP__core.__PVT__idex_reg_write));
    vlSymsp->TOP__core.__PVT__exmem_rd = ((IData)(vlTOPp->rst)
                                           ? 0U : (IData)(vlSymsp->TOP__core.__PVT__idex_rd));
    vlSymsp->TOP__core.__PVT__exmem_mem_to_reg = ((~ (IData)(vlTOPp->rst)) 
                                                  & (IData)(vlSymsp->TOP__core.__PVT__idex_mem_to_reg));
    vlSymsp->TOP__core.__PVT__exmem_alu_out = ((IData)(vlTOPp->rst)
                                                ? 0ULL
                                                : (
                                                   (0x10U 
                                                    & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
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
                                                        + vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))))));
    vlSymsp->TOP__core.__PVT__exmem_mem_read = ((~ (IData)(vlTOPp->rst)) 
                                                & (IData)(vlSymsp->TOP__core.__PVT__idex_mem_read));
    vlSymsp->TOP__core.__PVT__exmem_funct3 = ((IData)(vlTOPp->rst)
                                               ? 0U
                                               : (IData)(vlSymsp->TOP__core.__PVT__idex_funct3));
    vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2 
        = ((IData)(vlSymsp->TOP__core.__PVT__idex_alu_src)
            ? vlSymsp->TOP__core.__PVT__idex_imm : vlSymsp->TOP__core.__PVT__idex_in2);
    vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
        = ((IData)(vlSymsp->TOP__core.__PVT__idex_is_lui)
            ? 0ULL : ((IData)(vlSymsp->TOP__core.__PVT__idex_is_auipc)
                       ? vlSymsp->TOP__core.__PVT__idex_pc
                       : vlSymsp->TOP__core.__PVT__idex_in1));
    vlSymsp->TOP__core.__PVT__idex_reg_write = ((~ (IData)(vlTOPp->rst)) 
                                                & (((((((0x33U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                                        | (0x13U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                                       | (3U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                                      | (0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                                     | (0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                                    | (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                                   | (0x67U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSymsp->TOP__core.__PVT__ifid_instr))));
    vlSymsp->TOP__core.__PVT__idex_rd = ((IData)(vlTOPp->rst)
                                          ? 0U : (0x1fU 
                                                  & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                     >> 7U)));
    vlSymsp->TOP__core.__PVT__idex_mem_to_reg = ((~ (IData)(vlTOPp->rst)) 
                                                 & (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSymsp->TOP__core.__PVT__ifid_instr)));
    vlSymsp->TOP__core.__PVT__idex_alu_sel = ((IData)(vlTOPp->rst)
                                               ? 0U
                                               : (IData)(vlSymsp->TOP__core__id_stage_inst.__PVT__alu_sel));
    vlSymsp->TOP__core.__PVT__idex_mem_read = ((~ (IData)(vlTOPp->rst)) 
                                               & (3U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSymsp->TOP__core.__PVT__ifid_instr)));
    vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes 
        = ((0U == (3U & (IData)(vlSymsp->TOP__core.__PVT__exmem_funct3)))
            ? 1U : ((1U == (3U & (IData)(vlSymsp->TOP__core.__PVT__exmem_funct3)))
                     ? 2U : ((2U == (3U & (IData)(vlSymsp->TOP__core.__PVT__exmem_funct3)))
                              ? 4U : 8U)));
    vlSymsp->TOP__core.__PVT__idex_funct3 = ((IData)(vlTOPp->rst)
                                              ? 0U : 
                                             (7U & 
                                              (vlSymsp->TOP__core.__PVT__ifid_instr 
                                               >> 0xcU)));
    vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read = 0ULL;
    if ((0U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))) {
        vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
            = ((0xffffffffffffff00ULL & vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read) 
               | (IData)((IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem
                                 [(0x7fffU & (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out))])));
    }
    if ((1U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))) {
        vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
            = ((0xffffffffffff00ffULL & vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read) 
               | ((QData)((IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem
                                  [(0x7fffU & ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out)))])) 
                  << 8U));
    }
    if ((2U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))) {
        vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
            = ((0xffffffffff00ffffULL & vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read) 
               | ((QData)((IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem
                                  [(0x7fffU & ((IData)(2U) 
                                               + (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out)))])) 
                  << 0x10U));
    }
    if ((3U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))) {
        vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
            = ((0xffffffff00ffffffULL & vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read) 
               | ((QData)((IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem
                                  [(0x7fffU & ((IData)(3U) 
                                               + (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out)))])) 
                  << 0x18U));
    }
    if ((4U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))) {
        vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
            = ((0xffffff00ffffffffULL & vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read) 
               | ((QData)((IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem
                                  [(0x7fffU & ((IData)(4U) 
                                               + (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out)))])) 
                  << 0x20U));
    }
    if ((5U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))) {
        vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
            = ((0xffff00ffffffffffULL & vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read) 
               | ((QData)((IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem
                                  [(0x7fffU & ((IData)(5U) 
                                               + (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out)))])) 
                  << 0x28U));
    }
    if ((6U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))) {
        vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
            = ((0xff00ffffffffffffULL & vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read) 
               | ((QData)((IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem
                                  [(0x7fffU & ((IData)(6U) 
                                               + (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out)))])) 
                  << 0x30U));
    }
    if ((7U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))) {
        vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
            = ((0xffffffffffffffULL & vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read) 
               | ((QData)((IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem
                                  [(0x7fffU & ((IData)(7U) 
                                               + (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out)))])) 
                  << 0x38U));
    }
    VL_EXTEND_WQ(128,64, __Vtemp3, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1);
    VL_EXTEND_WQ(128,64, __Vtemp4, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2);
    VL_MUL_W(4, __Vtemp5, __Vtemp3, __Vtemp4);
    __Vtemp6[0U] = (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1);
    __Vtemp6[1U] = (IData)((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                            >> 0x20U));
    __Vtemp6[2U] = (IData)((- (QData)((IData)((1U & (IData)(
                                                            (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                             >> 0x3fU)))))));
    __Vtemp6[3U] = (IData)(((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                           >> 0x3fU)))))) 
                            >> 0x20U));
    VL_EXTEND_WQ(128,64, __Vtemp7, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2);
    VL_MUL_W(4, __Vtemp8, __Vtemp6, __Vtemp7);
    __Vtemp11[0U] = (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1);
    __Vtemp11[1U] = (IData)((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                             >> 0x20U));
    __Vtemp11[2U] = (IData)((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                           >> 0x3fU)))))));
    __Vtemp11[3U] = (IData)(((- (QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                            >> 0x3fU)))))) 
                             >> 0x20U));
    __Vtemp12[0U] = (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2);
    __Vtemp12[1U] = (IData)((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2 
                             >> 0x20U));
    __Vtemp12[2U] = (IData)((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2 
                                                           >> 0x3fU)))))));
    __Vtemp12[3U] = (IData)(((- (QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2 
                                                            >> 0x3fU)))))) 
                             >> 0x20U));
    VL_MULS_WWW(128,128,128, __Vtemp13, __Vtemp11, __Vtemp12);
    if ((1U & (1U ^ ((IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel) 
                     >> 1U)))) {
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[0U] 
            = ((1U & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                ? __Vtemp5[0U] : __Vtemp8[0U]);
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[1U] 
            = ((1U & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                ? __Vtemp5[1U] : __Vtemp8[1U]);
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[2U] 
            = ((1U & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                ? __Vtemp5[2U] : __Vtemp8[2U]);
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[3U] 
            = ((1U & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                ? __Vtemp5[3U] : __Vtemp8[3U]);
    } else {
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[0U] 
            = __Vtemp13[0U];
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[1U] 
            = __Vtemp13[1U];
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[2U] 
            = __Vtemp13[2U];
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[3U] 
            = __Vtemp13[3U];
    }
    vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_out 
        = ((0U == (3U & (2U ^ (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))))
            ? (((QData)((IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[1U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[0U])))
            : (((QData)((IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[3U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[2U]))));
    vlSymsp->TOP__core.__Vtableidx1 = ((0x10U & (((8U 
                                                   & (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))
                                                   ? 
                                                  ((~ 
                                                    ((IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes) 
                                                     >> 2U)) 
                                                   & ((~ 
                                                       ((IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes) 
                                                        >> 1U)) 
                                                      & ((~ (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes)) 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                                                                    >> 0x3fU)))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))
                                                    ? 
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes) 
                                                      >> 1U)) 
                                                    & ((~ (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes)) 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                                                                  >> 0x1fU))))
                                                    : 
                                                   ((2U 
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
                                                                >> 7U)))))) 
                                                 << 4U)) 
                                       | (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes));
    vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__sext_mask 
        = vlSymsp->TOP__core.__Vtable1___PVT__mem_stage_inst__DOT__sext_mask
        [vlSymsp->TOP__core.__Vtableidx1];
    if (vlTOPp->rst) {
        vlSymsp->TOP__core.__PVT__ifid_instr = 0U;
        vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr = 0ULL;
    } else {
        vlSymsp->TOP__core.__PVT__ifid_instr = vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__mem
            [(0x7fffU & (IData)((vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr 
                                 >> 2U)))];
        vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr 
            = vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_next;
    }
    vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_next 
        = (4ULL + vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr);
}
