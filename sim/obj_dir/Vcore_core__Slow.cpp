// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore_core.h"
#include "Vcore__Syms.h"

#include "verilated_dpi.h"

//==========
QData/*63:0*/ Vcore_core::__Vtable1___PVT__mem_stage_inst__DOT__sext_mask[32];

VL_CTOR_IMP(Vcore_core) {
    VL_CELL(id_stage_inst, Vcore_id_stage);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcore_core::__Vconfigure(Vcore__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vcore_core::~Vcore_core() {
}

void Vcore_core::_initial__TOP__core__1(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core::_initial__TOP__core__1\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp1[4];
    WData/*159:0*/ __Vtemp2[5];
    // Body
    __Vtemp1[0U] = 0x2e686578U;
    __Vtemp1[1U] = 0x64617461U;
    __Vtemp1[2U] = 0x7374732fU;
    __Vtemp1[3U] = 0x7465U;
    VL_READMEM_N(true, 8, 32768, 0, VL_CVT_PACK_STR_NW(4, __Vtemp1)
                 , vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem
                 , 0, ~0ULL);
    __Vtemp2[0U] = 0x2e686578U;
    __Vtemp2[1U] = 0x6772616dU;
    __Vtemp2[2U] = 0x2f70726fU;
    __Vtemp2[3U] = 0x65737473U;
    __Vtemp2[4U] = 0x74U;
    VL_READMEM_N(true, 32, 32768, 0, VL_CVT_PACK_STR_NW(5, __Vtemp2)
                 , vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__mem
                 , 0, ~0ULL);
}

void Vcore_core::_settle__TOP__core__5(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core::_settle__TOP__core__5\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp16[4];
    WData/*127:0*/ __Vtemp17[4];
    WData/*127:0*/ __Vtemp18[4];
    WData/*127:0*/ __Vtemp19[4];
    WData/*127:0*/ __Vtemp20[4];
    WData/*127:0*/ __Vtemp21[4];
    WData/*127:0*/ __Vtemp24[4];
    WData/*127:0*/ __Vtemp25[4];
    WData/*127:0*/ __Vtemp26[4];
    // Body
    vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2 
        = ((IData)(vlSymsp->TOP__core.__PVT__idex_alu_src)
            ? vlSymsp->TOP__core.__PVT__idex_imm : vlSymsp->TOP__core.__PVT__idex_in2);
    vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes 
        = ((0U == (3U & (IData)(vlSymsp->TOP__core.__PVT__exmem_funct3)))
            ? 1U : ((1U == (3U & (IData)(vlSymsp->TOP__core.__PVT__exmem_funct3)))
                     ? 2U : ((2U == (3U & (IData)(vlSymsp->TOP__core.__PVT__exmem_funct3)))
                              ? 4U : 8U)));
    vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
        = ((IData)(vlSymsp->TOP__core.__PVT__idex_is_lui)
            ? 0ULL : ((IData)(vlSymsp->TOP__core.__PVT__idex_is_auipc)
                       ? vlSymsp->TOP__core.__PVT__idex_pc
                       : vlSymsp->TOP__core.__PVT__idex_in1));
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
    VL_EXTEND_WQ(128,64, __Vtemp16, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1);
    VL_EXTEND_WQ(128,64, __Vtemp17, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2);
    VL_MUL_W(4, __Vtemp18, __Vtemp16, __Vtemp17);
    __Vtemp19[0U] = (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1);
    __Vtemp19[1U] = (IData)((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                             >> 0x20U));
    __Vtemp19[2U] = (IData)((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                           >> 0x3fU)))))));
    __Vtemp19[3U] = (IData)(((- (QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                            >> 0x3fU)))))) 
                             >> 0x20U));
    VL_EXTEND_WQ(128,64, __Vtemp20, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2);
    VL_MUL_W(4, __Vtemp21, __Vtemp19, __Vtemp20);
    __Vtemp24[0U] = (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1);
    __Vtemp24[1U] = (IData)((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                             >> 0x20U));
    __Vtemp24[2U] = (IData)((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                           >> 0x3fU)))))));
    __Vtemp24[3U] = (IData)(((- (QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                            >> 0x3fU)))))) 
                             >> 0x20U));
    __Vtemp25[0U] = (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2);
    __Vtemp25[1U] = (IData)((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2 
                             >> 0x20U));
    __Vtemp25[2U] = (IData)((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2 
                                                           >> 0x3fU)))))));
    __Vtemp25[3U] = (IData)(((- (QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2 
                                                            >> 0x3fU)))))) 
                             >> 0x20U));
    VL_MULS_WWW(128,128,128, __Vtemp26, __Vtemp24, __Vtemp25);
    if ((1U & (1U ^ ((IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel) 
                     >> 1U)))) {
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[0U] 
            = ((1U & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                ? __Vtemp18[0U] : __Vtemp21[0U]);
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[1U] 
            = ((1U & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                ? __Vtemp18[1U] : __Vtemp21[1U]);
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[2U] 
            = ((1U & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                ? __Vtemp18[2U] : __Vtemp21[2U]);
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[3U] 
            = ((1U & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                ? __Vtemp18[3U] : __Vtemp21[3U]);
    } else {
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[0U] 
            = __Vtemp26[0U];
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[1U] 
            = __Vtemp26[1U];
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[2U] 
            = __Vtemp26[2U];
        vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[3U] 
            = __Vtemp26[3U];
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
}

void Vcore_core::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    __PVT__ifid_pc = VL_RAND_RESET_Q(64);
    __PVT__ifid_instr = VL_RAND_RESET_I(32);
    __PVT__idex_instr = VL_RAND_RESET_I(32);
    __PVT__idex_pc = VL_RAND_RESET_Q(64);
    __PVT__idex_imm = VL_RAND_RESET_Q(64);
    __PVT__idex_in1 = VL_RAND_RESET_Q(64);
    __PVT__idex_in2 = VL_RAND_RESET_Q(64);
    __PVT__idex_write_data = VL_RAND_RESET_Q(64);
    __PVT__idex_alu_src = VL_RAND_RESET_I(1);
    __PVT__idex_is_j = VL_RAND_RESET_I(1);
    __PVT__idex_is_lui = VL_RAND_RESET_I(1);
    __PVT__idex_is_auipc = VL_RAND_RESET_I(1);
    __PVT__idex_alu_sel = VL_RAND_RESET_I(5);
    __PVT__idex_mem_write = VL_RAND_RESET_I(1);
    __PVT__idex_mem_read = VL_RAND_RESET_I(1);
    __PVT__idex_reg_write = VL_RAND_RESET_I(1);
    __PVT__idex_mem_to_reg = VL_RAND_RESET_I(1);
    __PVT__idex_rd = VL_RAND_RESET_I(5);
    __PVT__idex_funct3 = VL_RAND_RESET_I(3);
    __PVT__exmem_funct3 = VL_RAND_RESET_I(3);
    __PVT__exmem_mem_write = VL_RAND_RESET_I(1);
    __PVT__exmem_mem_read = VL_RAND_RESET_I(1);
    __PVT__exmem_write_data = VL_RAND_RESET_Q(64);
    __PVT__exmem_alu_out = VL_RAND_RESET_Q(64);
    __PVT__exmem_rd = VL_RAND_RESET_I(5);
    __PVT__exmem_reg_write = VL_RAND_RESET_I(1);
    __PVT__exmem_mem_to_reg = VL_RAND_RESET_I(1);
    __PVT__memwb_mem_out = VL_RAND_RESET_Q(64);
    __PVT__memwb_alu_out = VL_RAND_RESET_Q(64);
    __PVT__memwb_rd = VL_RAND_RESET_I(5);
    __PVT__memwb_reg_write = VL_RAND_RESET_I(1);
    __PVT__memwb_mem_to_reg = VL_RAND_RESET_I(1);
    __PVT__if_stage_inst__DOT__pc_curr = VL_RAND_RESET_Q(64);
    __PVT__if_stage_inst__DOT__pc_next = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<32768; ++__Vi0) {
            __PVT__if_stage_inst__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__ex_stage_inst__DOT__alu_in1 = VL_RAND_RESET_Q(64);
    __PVT__ex_stage_inst__DOT__alu_in2 = VL_RAND_RESET_Q(64);
    __PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_out = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, __PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full);
    __PVT__mem_stage_inst__DOT__access_bytes = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<32768; ++__Vi0) {
            __PVT__mem_stage_inst__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __PVT__mem_stage_inst__DOT__i = VL_RAND_RESET_I(32);
    __PVT__mem_stage_inst__DOT__raw_read = VL_RAND_RESET_Q(64);
    __PVT__mem_stage_inst__DOT__sext_mask = VL_RAND_RESET_Q(64);
    __Vtableidx1 = 0;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[0] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[1] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[2] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[3] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[4] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[5] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[6] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[7] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[8] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[9] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[10] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[11] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[12] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[13] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[14] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[15] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[16] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[17] = 0xffffffffffffff00ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[18] = 0xffffffffffff0000ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[19] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[20] = 0xffffffff00000000ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[21] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[22] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[23] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[24] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[25] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[26] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[27] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[28] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[29] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[30] = 0ULL;
    __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[31] = 0ULL;
}
