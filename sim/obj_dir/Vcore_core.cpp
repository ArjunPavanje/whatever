// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore_core.h"
#include "Vcore__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vcore_core::_sequent__TOP__core__1(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core::_sequent__TOP__core__1\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__mem_stage_inst__DOT__mem_busy;
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
    __Vdly__mem_stage_inst__DOT__mem_busy = vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem_busy;
    __Vdlyvset__mem_stage_inst__DOT__mem__v0 = 0U;
    __Vdlyvset__mem_stage_inst__DOT__mem__v1 = 0U;
    __Vdlyvset__mem_stage_inst__DOT__mem__v2 = 0U;
    __Vdlyvset__mem_stage_inst__DOT__mem__v3 = 0U;
    __Vdlyvset__mem_stage_inst__DOT__mem__v4 = 0U;
    __Vdlyvset__mem_stage_inst__DOT__mem__v5 = 0U;
    __Vdlyvset__mem_stage_inst__DOT__mem__v6 = 0U;
    __Vdlyvset__mem_stage_inst__DOT__mem__v7 = 0U;
    if (((IData)(vlTOPp->rst) | (IData)(vlSymsp->TOP__core.__Vcellinp__id_ex_reg_inst__flush))) {
        vlSymsp->TOP__core.__PVT__idex_write_data = 0ULL;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__idex_write_data 
                = vlSymsp->TOP__core__id_stage_inst.__PVT__in2;
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlSymsp->TOP__core.__Vcellinp__id_ex_reg_inst__flush))) {
        vlSymsp->TOP__core.__PVT__idex_instr = 0x13U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__idex_instr = vlSymsp->TOP__core.__PVT__ifid_instr;
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlSymsp->TOP__core.__Vcellinp__id_ex_reg_inst__flush))) {
        vlSymsp->TOP__core.__PVT__idex_is_j = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__idex_is_j = vlSymsp->TOP__core__id_stage_inst.__PVT__is_j;
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlSymsp->TOP__core.__Vcellinp__id_ex_reg_inst__flush))) {
        vlSymsp->TOP__core.__PVT__idex_alu_sel = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__idex_alu_sel 
                = vlSymsp->TOP__core__id_stage_inst.__PVT__alu_sel;
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlSymsp->TOP__core.__Vcellinp__id_ex_reg_inst__flush))) {
        vlSymsp->TOP__core.__PVT__idex_imm = 0ULL;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__idex_imm = vlSymsp->TOP__core__id_stage_inst.__PVT__imm;
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlSymsp->TOP__core.__Vcellinp__id_ex_reg_inst__flush))) {
        vlSymsp->TOP__core.__PVT__idex_in1 = 0ULL;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__idex_in1 = vlSymsp->TOP__core__id_stage_inst.__PVT__in1;
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlSymsp->TOP__core.__Vcellinp__id_ex_reg_inst__flush))) {
        vlSymsp->TOP__core.__PVT__idex_alu_src = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__idex_alu_src 
                = ((((((0x13U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                       | (3U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                      | (0x23U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                     | (0x37U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                    | (0x17U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                   | (0x67U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr)));
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlSymsp->TOP__core.__Vcellinp__id_ex_reg_inst__flush))) {
        vlSymsp->TOP__core.__PVT__idex_is_lui = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__idex_is_lui = 
                (0x37U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr));
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlSymsp->TOP__core.__Vcellinp__id_ex_reg_inst__flush))) {
        vlSymsp->TOP__core.__PVT__idex_is_auipc = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__idex_is_auipc 
                = (0x17U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr));
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlSymsp->TOP__core.__Vcellinp__id_ex_reg_inst__flush))) {
        vlSymsp->TOP__core.__PVT__idex_pc = 0ULL;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__idex_pc = vlSymsp->TOP__core.__PVT__ifid_pc;
        }
    }
    if (vlTOPp->rst) {
        vlSymsp->TOP__core.__PVT__exmem_funct3 = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__exmem_funct3 
                = vlSymsp->TOP__core.__PVT__idex_funct3;
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlSymsp->TOP__core.__Vcellinp__id_ex_reg_inst__flush))) {
        vlSymsp->TOP__core.__PVT__idex_in2 = 0ULL;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__idex_in2 = vlSymsp->TOP__core__id_stage_inst.__PVT__in2;
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlSymsp->TOP__core.__Vcellinp__id_ex_reg_inst__flush))) {
        vlSymsp->TOP__core.__PVT__idex_rs1 = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__idex_rs1 = (0x1fU 
                                                  & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                     >> 0xfU));
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlSymsp->TOP__core.__Vcellinp__id_ex_reg_inst__flush))) {
        vlSymsp->TOP__core.__PVT__idex_rs2 = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__idex_rs2 = (0x1fU 
                                                  & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                     >> 0x14U));
        }
    }
    vlSymsp->TOP__core.__PVT__memwb_mem_out = (((IData)(vlTOPp->rst) 
                                                | (IData)(vlSymsp->TOP__core.__PVT__mem_stall))
                                                ? 0ULL
                                                : vlSymsp->TOP__core.__PVT__mem_out);
    vlSymsp->TOP__core.__PVT__memwb_mem_to_reg = ((~ 
                                                   ((IData)(vlTOPp->rst) 
                                                    | (IData)(vlSymsp->TOP__core.__PVT__mem_stall))) 
                                                  & (IData)(vlSymsp->TOP__core.__PVT__exmem_mem_to_reg));
    vlSymsp->TOP__core.__PVT__memwb_alu_out = (((IData)(vlTOPp->rst) 
                                                | (IData)(vlSymsp->TOP__core.__PVT__mem_stall))
                                                ? 0ULL
                                                : vlSymsp->TOP__core.__PVT__exmem_alu_out);
    if (vlTOPp->rst) {
        __Vdly__mem_stage_inst__DOT__mem_busy = 0U;
        vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read = 0ULL;
    } else {
        if (((IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem_op) 
             & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem_busy)))) {
            __Vdly__mem_stage_inst__DOT__mem_busy = 1U;
            if (vlSymsp->TOP__core.__PVT__exmem_mem_read) {
                vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__j = 8U;
                vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                    = ((0xffffffffffffff00ULL & vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read) 
                       | (IData)((IData)(((0U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))
                                           ? vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem
                                          [(0x7fffU 
                                            & (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out))]
                                           : 0U))));
                vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                    = ((0xffffffffffff00ffULL & vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read) 
                       | ((QData)((IData)(((1U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))
                                            ? vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem
                                           [(0x7fffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out)))]
                                            : 0U))) 
                          << 8U));
                vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                    = ((0xffffffffff00ffffULL & vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read) 
                       | ((QData)((IData)(((2U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))
                                            ? vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem
                                           [(0x7fffU 
                                             & ((IData)(2U) 
                                                + (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out)))]
                                            : 0U))) 
                          << 0x10U));
                vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                    = ((0xffffffff00ffffffULL & vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read) 
                       | ((QData)((IData)(((3U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))
                                            ? vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem
                                           [(0x7fffU 
                                             & ((IData)(3U) 
                                                + (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out)))]
                                            : 0U))) 
                          << 0x18U));
                vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                    = ((0xffffff00ffffffffULL & vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read) 
                       | ((QData)((IData)(((4U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))
                                            ? vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem
                                           [(0x7fffU 
                                             & ((IData)(4U) 
                                                + (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out)))]
                                            : 0U))) 
                          << 0x20U));
                vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                    = ((0xffff00ffffffffffULL & vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read) 
                       | ((QData)((IData)(((5U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))
                                            ? vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem
                                           [(0x7fffU 
                                             & ((IData)(5U) 
                                                + (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out)))]
                                            : 0U))) 
                          << 0x28U));
                vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                    = ((0xff00ffffffffffffULL & vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read) 
                       | ((QData)((IData)(((6U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))
                                            ? vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem
                                           [(0x7fffU 
                                             & ((IData)(6U) 
                                                + (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out)))]
                                            : 0U))) 
                          << 0x30U));
                vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                    = ((0xffffffffffffffULL & vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read) 
                       | ((QData)((IData)(((7U < (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))
                                            ? vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem
                                           [(0x7fffU 
                                             & ((IData)(7U) 
                                                + (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out)))]
                                            : 0U))) 
                          << 0x38U));
            }
            if (vlSymsp->TOP__core.__PVT__exmem_mem_write) {
                vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__i = 8U;
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
        } else {
            __Vdly__mem_stage_inst__DOT__mem_busy = 0U;
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
    vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem_busy 
        = __Vdly__mem_stage_inst__DOT__mem_busy;
    if (vlTOPp->rst) {
        vlSymsp->TOP__core.__PVT__ifid_pc = 0ULL;
    } else {
        if (vlSymsp->TOP__core.__PVT__real_is_j) {
            vlSymsp->TOP__core.__PVT__ifid_pc = 0ULL;
        } else {
            if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__pipeline_stall)))) {
                vlSymsp->TOP__core.__PVT__ifid_pc = vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr;
            }
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlSymsp->TOP__core.__Vcellinp__id_ex_reg_inst__flush))) {
        vlSymsp->TOP__core.__PVT__idex_funct3 = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__idex_funct3 = 
                (7U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                       >> 0xcU));
        }
    }
    vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes 
        = ((0U == (3U & (IData)(vlSymsp->TOP__core.__PVT__exmem_funct3)))
            ? 1U : ((1U == (3U & (IData)(vlSymsp->TOP__core.__PVT__exmem_funct3)))
                     ? 2U : ((2U == (3U & (IData)(vlSymsp->TOP__core.__PVT__exmem_funct3)))
                              ? 4U : 8U)));
    if (vlTOPp->rst) {
        vlSymsp->TOP__core.__PVT__exmem_mem_to_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__exmem_mem_to_reg 
                = vlSymsp->TOP__core.__PVT__idex_mem_to_reg;
        }
    }
    if (vlTOPp->rst) {
        vlSymsp->TOP__core.__PVT__exmem_mem_write = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__exmem_mem_write 
                = vlSymsp->TOP__core.__PVT__idex_mem_write;
        }
    }
    if (vlTOPp->rst) {
        vlSymsp->TOP__core.__PVT__exmem_mem_read = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__exmem_mem_read 
                = vlSymsp->TOP__core.__PVT__idex_mem_read;
        }
    }
    if (vlTOPp->rst) {
        vlSymsp->TOP__core.__PVT__exmem_write_data = 0ULL;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__exmem_write_data 
                = vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__in2_forwarded;
        }
    }
    if (vlTOPp->rst) {
        vlSymsp->TOP__core.__PVT__exmem_alu_out = 0ULL;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__exmem_alu_out 
                = vlSymsp->TOP__core.__PVT__ex_out;
        }
    }
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
    if (((IData)(vlTOPp->rst) | (IData)(vlSymsp->TOP__core.__Vcellinp__id_ex_reg_inst__flush))) {
        vlSymsp->TOP__core.__PVT__idex_mem_to_reg = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__idex_mem_to_reg 
                = (3U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr));
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlSymsp->TOP__core.__Vcellinp__id_ex_reg_inst__flush))) {
        vlSymsp->TOP__core.__PVT__idex_mem_write = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__idex_mem_write 
                = (0x23U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr));
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlSymsp->TOP__core.__Vcellinp__id_ex_reg_inst__flush))) {
        vlSymsp->TOP__core.__PVT__idex_mem_read = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__idex_mem_read 
                = (3U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr));
        }
    }
}

VL_INLINE_OPT void Vcore_core::_sequent__TOP__core__2(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core::_sequent__TOP__core__2\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp1[4];
    WData/*127:0*/ __Vtemp2[4];
    WData/*127:0*/ __Vtemp3[4];
    WData/*127:0*/ __Vtemp4[4];
    WData/*127:0*/ __Vtemp5[4];
    WData/*127:0*/ __Vtemp6[4];
    WData/*127:0*/ __Vtemp9[4];
    WData/*127:0*/ __Vtemp10[4];
    WData/*127:0*/ __Vtemp11[4];
    // Body
    vlSymsp->TOP__core.__PVT__wb_data = ((IData)(vlSymsp->TOP__core.__PVT__memwb_mem_to_reg)
                                          ? vlSymsp->TOP__core.__PVT__memwb_mem_out
                                          : vlSymsp->TOP__core.__PVT__memwb_alu_out);
    vlSymsp->TOP__core.__PVT__memwb_reg_write = ((~ 
                                                  ((IData)(vlTOPp->rst) 
                                                   | (IData)(vlSymsp->TOP__core.__PVT__mem_stall))) 
                                                 & (IData)(vlSymsp->TOP__core.__PVT__exmem_reg_write));
    vlSymsp->TOP__core.__PVT__memwb_rd = (((IData)(vlTOPp->rst) 
                                           | (IData)(vlSymsp->TOP__core.__PVT__mem_stall))
                                           ? 0U : (IData)(vlSymsp->TOP__core.__PVT__exmem_rd));
    if (vlTOPp->rst) {
        vlSymsp->TOP__core.__PVT__exmem_reg_write = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__exmem_reg_write 
                = vlSymsp->TOP__core.__PVT__idex_reg_write;
        }
    }
    if (vlTOPp->rst) {
        vlSymsp->TOP__core.__PVT__exmem_rd = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__exmem_rd = vlSymsp->TOP__core.__PVT__idex_rd;
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlSymsp->TOP__core.__Vcellinp__id_ex_reg_inst__flush))) {
        vlSymsp->TOP__core.__PVT__idex_reg_write = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__idex_reg_write 
                = (((((((0x33U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                        | (0x13U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                       | (3U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                      | (0x37U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                     | (0x17U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                    | (0x6fU == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                   | (0x67U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr)));
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlSymsp->TOP__core.__Vcellinp__id_ex_reg_inst__flush))) {
        vlSymsp->TOP__core.__PVT__idex_rd = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)))) {
            vlSymsp->TOP__core.__PVT__idex_rd = (0x1fU 
                                                 & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                    >> 7U));
        }
    }
    vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__forward_A 
        = ((((IData)(vlSymsp->TOP__core.__PVT__exmem_reg_write) 
             & (0U != (IData)(vlSymsp->TOP__core.__PVT__exmem_rd))) 
            & ((IData)(vlSymsp->TOP__core.__PVT__idex_rs1) 
               == (IData)(vlSymsp->TOP__core.__PVT__exmem_rd)))
            ? 2U : ((((IData)(vlSymsp->TOP__core.__PVT__memwb_reg_write) 
                      & (0U != (IData)(vlSymsp->TOP__core.__PVT__memwb_rd))) 
                     & ((IData)(vlSymsp->TOP__core.__PVT__idex_rs1) 
                        == (IData)(vlSymsp->TOP__core.__PVT__memwb_rd)))
                     ? 1U : 0U));
    vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__forward_B 
        = ((((IData)(vlSymsp->TOP__core.__PVT__exmem_reg_write) 
             & (0U != (IData)(vlSymsp->TOP__core.__PVT__exmem_rd))) 
            & ((IData)(vlSymsp->TOP__core.__PVT__idex_rs2) 
               == (IData)(vlSymsp->TOP__core.__PVT__exmem_rd)))
            ? 2U : ((((IData)(vlSymsp->TOP__core.__PVT__memwb_reg_write) 
                      & (0U != (IData)(vlSymsp->TOP__core.__PVT__memwb_rd))) 
                     & ((IData)(vlSymsp->TOP__core.__PVT__idex_rs2) 
                        == (IData)(vlSymsp->TOP__core.__PVT__memwb_rd)))
                     ? 1U : 0U));
    vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
        = ((IData)(vlSymsp->TOP__core.__PVT__idex_is_lui)
            ? 0ULL : ((IData)(vlSymsp->TOP__core.__PVT__idex_is_auipc)
                       ? vlSymsp->TOP__core.__PVT__idex_pc
                       : ((2U == (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__forward_A))
                           ? vlSymsp->TOP__core.__PVT__exmem_alu_out
                           : ((1U == (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__forward_A))
                               ? vlSymsp->TOP__core.__PVT__wb_data
                               : vlSymsp->TOP__core.__PVT__idex_in1))));
    vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__in2_forwarded 
        = ((2U == (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__forward_B))
            ? vlSymsp->TOP__core.__PVT__exmem_alu_out
            : ((1U == (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__forward_B))
                ? vlSymsp->TOP__core.__PVT__wb_data
                : vlSymsp->TOP__core.__PVT__idex_in2));
    if (vlTOPp->rst) {
        vlSymsp->TOP__core.__PVT__ifid_instr = 0x13U;
    } else {
        if (vlSymsp->TOP__core.__PVT__real_is_j) {
            vlSymsp->TOP__core.__PVT__ifid_instr = 0x13U;
        } else {
            if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__pipeline_stall)))) {
                vlSymsp->TOP__core.__PVT__ifid_instr 
                    = vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__mem
                    [(0x7fffU & (IData)((vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr 
                                         >> 2U)))];
            }
        }
    }
    vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2 
        = ((IData)(vlSymsp->TOP__core.__PVT__idex_alu_src)
            ? vlSymsp->TOP__core.__PVT__idex_imm : vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__in2_forwarded);
    VL_EXTEND_WQ(128,64, __Vtemp1, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1);
    VL_EXTEND_WQ(128,64, __Vtemp2, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2);
    VL_MUL_W(4, __Vtemp3, __Vtemp1, __Vtemp2);
    __Vtemp4[0U] = (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1);
    __Vtemp4[1U] = (IData)((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                            >> 0x20U));
    __Vtemp4[2U] = (IData)((- (QData)((IData)((1U & (IData)(
                                                            (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                             >> 0x3fU)))))));
    __Vtemp4[3U] = (IData)(((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                           >> 0x3fU)))))) 
                            >> 0x20U));
    VL_EXTEND_WQ(128,64, __Vtemp5, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2);
    VL_MUL_W(4, __Vtemp6, __Vtemp4, __Vtemp5);
    __Vtemp9[0U] = (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1);
    __Vtemp9[1U] = (IData)((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                            >> 0x20U));
    __Vtemp9[2U] = (IData)((- (QData)((IData)((1U & (IData)(
                                                            (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                             >> 0x3fU)))))));
    __Vtemp9[3U] = (IData)(((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                           >> 0x3fU)))))) 
                            >> 0x20U));
    __Vtemp10[0U] = (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2);
    __Vtemp10[1U] = (IData)((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2 
                             >> 0x20U));
    __Vtemp10[2U] = (IData)((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2 
                                                           >> 0x3fU)))))));
    __Vtemp10[3U] = (IData)(((- (QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2 
                                                            >> 0x3fU)))))) 
                             >> 0x20U));
    VL_MULS_WWW(128,128,128, __Vtemp11, __Vtemp9, __Vtemp10);
    if ((1U & (1U ^ ((IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel) 
                     >> 1U)))) {
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[0U] 
            = ((1U & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                ? __Vtemp3[0U] : __Vtemp6[0U]);
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[1U] 
            = ((1U & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                ? __Vtemp3[1U] : __Vtemp6[1U]);
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[2U] 
            = ((1U & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                ? __Vtemp3[2U] : __Vtemp6[2U]);
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[3U] 
            = ((1U & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                ? __Vtemp3[3U] : __Vtemp6[3U]);
    } else {
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[0U] 
            = __Vtemp11[0U];
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[1U] 
            = __Vtemp11[1U];
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[2U] 
            = __Vtemp11[2U];
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[3U] 
            = __Vtemp11[3U];
    }
    vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_out 
        = ((0U == (3U & (2U ^ (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))))
            ? (((QData)((IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[1U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[0U])))
            : (((QData)((IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[3U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[2U]))));
    if (vlTOPp->rst) {
        vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr = 0ULL;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__pipeline_stall)))) {
            vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr 
                = vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_next;
        }
    }
    vlSymsp->TOP__core.__PVT__load_use_stall = ((IData)(vlSymsp->TOP__core.__PVT__idex_mem_read) 
                                                & (((((((((0x33U 
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
                                                        | (0x23U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                                       | (0x63U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                                      | (0x67U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                                     & (0U 
                                                        != 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                            >> 0xfU)))) 
                                                    & ((0x1fU 
                                                        & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                           >> 0xfU)) 
                                                       == (IData)(vlSymsp->TOP__core.__PVT__idex_rd))) 
                                                   | (((((0x33U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                                         | (0x23U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                                        | (0x63U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                                       & (0U 
                                                          != 
                                                          (0x1fU 
                                                           & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                              >> 0x14U)))) 
                                                      & ((0x1fU 
                                                          & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                             >> 0x14U)) 
                                                         == (IData)(vlSymsp->TOP__core.__PVT__idex_rd)))));
    vlSymsp->TOP__core.__PVT__ex_out = ((IData)(vlSymsp->TOP__core.__PVT__idex_is_j)
                                         ? (4ULL + vlSymsp->TOP__core.__PVT__idex_pc)
                                         : ((0x10U 
                                             & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                                             ? 0ULL
                                             : ((8U 
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
}

VL_INLINE_OPT void Vcore_core::_settle__TOP__core__5(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core::_settle__TOP__core__5\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__core.__PVT__real_is_j = ((IData)(vlSymsp->TOP__core__id_stage_inst.__PVT__is_j) 
                                           & (~ (IData)(vlSymsp->TOP__core.__PVT__pipeline_stall)));
    vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_next 
        = ((IData)(vlSymsp->TOP__core.__PVT__real_is_j)
            ? (((0x6fU == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                | (IData)(vlSymsp->TOP__core__id_stage_inst.__PVT__misprediction))
                ? (vlSymsp->TOP__core.__PVT__ifid_pc 
                   + vlSymsp->TOP__core__id_stage_inst.__PVT__imm)
                : ((0x67U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))
                    ? (0xfffffffffffffffeULL & (vlSymsp->TOP__core__id_stage_inst.__PVT__in1 
                                                + vlSymsp->TOP__core__id_stage_inst.__PVT__imm))
                    : 0ULL)) : (4ULL + vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr));
}

VL_INLINE_OPT void Vcore_core::_combo__TOP__core__6(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core::_combo__TOP__core__6\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem_op 
        = (((IData)(vlSymsp->TOP__core.__PVT__exmem_mem_read) 
            | (IData)(vlSymsp->TOP__core.__PVT__exmem_mem_write)) 
           & (~ (IData)(vlTOPp->rst)));
    vlSymsp->TOP__core.__PVT__mem_out = (((IData)(vlSymsp->TOP__core.__PVT__exmem_mem_read) 
                                          & (~ (IData)(vlTOPp->rst)))
                                          ? ((1U & 
                                              (((IData)(vlSymsp->TOP__core.__PVT__exmem_funct3) 
                                                >> 2U) 
                                               | (8U 
                                                  <= (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))))
                                              ? vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read
                                              : (vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                                                 | vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__sext_mask))
                                          : 0ULL);
    vlSymsp->TOP__core.__PVT__mem_stall = ((IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem_op) 
                                           & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem_busy)));
    vlSymsp->TOP__core.__Vcellinp__id_ex_reg_inst__flush 
        = ((IData)(vlSymsp->TOP__core.__PVT__load_use_stall) 
           & (~ (IData)(vlSymsp->TOP__core.__PVT__mem_stall)));
    vlSymsp->TOP__core.__PVT__pipeline_stall = ((IData)(vlSymsp->TOP__core.__PVT__load_use_stall) 
                                                | (IData)(vlSymsp->TOP__core.__PVT__mem_stall));
}
