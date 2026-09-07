// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore_id_stage.h"
#include "Vcore__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vcore_id_stage::_sequent__TOP__core__id_stage_inst__1(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_id_stage::_sequent__TOP__core__id_stage_inst__1\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__core__id_stage_inst.__PVT__imm = 
        ((0x40U & vlSymsp->TOP__core.__PVT__ifid_instr)
          ? ((0x20U & vlSymsp->TOP__core.__PVT__ifid_instr)
              ? ((0x10U & vlSymsp->TOP__core.__PVT__ifid_instr)
                  ? ((8U & vlSymsp->TOP__core.__PVT__ifid_instr)
                      ? 0ULL : ((4U & vlSymsp->TOP__core.__PVT__ifid_instr)
                                 ? 0ULL : ((2U & vlSymsp->TOP__core.__PVT__ifid_instr)
                                            ? ((1U 
                                                & vlSymsp->TOP__core.__PVT__ifid_instr)
                                                ? (
                                                   (0xfffffffffffff000ULL 
                                                    & ((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                              >> 0x1fU))))) 
                                                       << 0xcU)) 
                                                   | (QData)((IData)(
                                                                     (0xfffU 
                                                                      & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                         >> 0x14U)))))
                                                : 0ULL)
                                            : 0ULL)))
                  : ((8U & vlSymsp->TOP__core.__PVT__ifid_instr)
                      ? ((4U & vlSymsp->TOP__core.__PVT__ifid_instr)
                          ? ((2U & vlSymsp->TOP__core.__PVT__ifid_instr)
                              ? ((1U & vlSymsp->TOP__core.__PVT__ifid_instr)
                                  ? ((0xffffffffffe00000ULL 
                                      & ((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                >> 0x1fU))))) 
                                         << 0x15U)) 
                                     | (QData)((IData)(
                                                       ((0x100000U 
                                                         & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                            >> 0xbU)) 
                                                        | ((0xff000U 
                                                            & vlSymsp->TOP__core.__PVT__ifid_instr) 
                                                           | ((0x800U 
                                                               & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                  >> 9U)) 
                                                              | (0x7feU 
                                                                 & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                    >> 0x14U))))))))
                                  : 0ULL) : 0ULL) : 0ULL)
                      : ((4U & vlSymsp->TOP__core.__PVT__ifid_instr)
                          ? ((2U & vlSymsp->TOP__core.__PVT__ifid_instr)
                              ? ((1U & vlSymsp->TOP__core.__PVT__ifid_instr)
                                  ? ((0xfffffffffffff000ULL 
                                      & ((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                >> 0x1fU))))) 
                                         << 0xcU)) 
                                     | (QData)((IData)(
                                                       (0xfffU 
                                                        & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                           >> 0x14U)))))
                                  : 0ULL) : 0ULL) : 
                         ((2U & vlSymsp->TOP__core.__PVT__ifid_instr)
                           ? ((1U & vlSymsp->TOP__core.__PVT__ifid_instr)
                               ? ((0xffffffffffffe000ULL 
                                   & ((- (QData)((IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                             >> 0x1fU))))) 
                                      << 0xdU)) | (QData)((IData)(
                                                                  ((0x1000U 
                                                                    & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                       >> 0x13U)) 
                                                                   | ((0x800U 
                                                                       & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                          << 4U)) 
                                                                      | ((0x7e0U 
                                                                          & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                             >> 0x14U)) 
                                                                         | (0x1eU 
                                                                            & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                               >> 7U))))))))
                               : 0ULL) : 0ULL)))) : 0ULL)
          : ((0x20U & vlSymsp->TOP__core.__PVT__ifid_instr)
              ? ((0x10U & vlSymsp->TOP__core.__PVT__ifid_instr)
                  ? ((8U & vlSymsp->TOP__core.__PVT__ifid_instr)
                      ? 0ULL : ((4U & vlSymsp->TOP__core.__PVT__ifid_instr)
                                 ? ((2U & vlSymsp->TOP__core.__PVT__ifid_instr)
                                     ? ((1U & vlSymsp->TOP__core.__PVT__ifid_instr)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                            >> 0x1fU)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (0xfffff000U 
                                                               & vlSymsp->TOP__core.__PVT__ifid_instr))))
                                         : 0ULL) : 0ULL)
                                 : 0ULL)) : ((8U & vlSymsp->TOP__core.__PVT__ifid_instr)
                                              ? 0ULL
                                              : ((4U 
                                                  & vlSymsp->TOP__core.__PVT__ifid_instr)
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & vlSymsp->TOP__core.__PVT__ifid_instr)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__core.__PVT__ifid_instr)
                                                    ? 
                                                   ((0xfffffffffffff000ULL 
                                                     & ((- (QData)((IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                               >> 0x1fU))))) 
                                                        << 0xcU)) 
                                                    | (QData)((IData)(
                                                                      ((0xfe0U 
                                                                        & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                           >> 0x14U)) 
                                                                       | (0x1fU 
                                                                          & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                             >> 7U))))))
                                                    : 0ULL)
                                                   : 0ULL))))
              : ((0x10U & vlSymsp->TOP__core.__PVT__ifid_instr)
                  ? ((8U & vlSymsp->TOP__core.__PVT__ifid_instr)
                      ? 0ULL : ((4U & vlSymsp->TOP__core.__PVT__ifid_instr)
                                 ? ((2U & vlSymsp->TOP__core.__PVT__ifid_instr)
                                     ? ((1U & vlSymsp->TOP__core.__PVT__ifid_instr)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                            >> 0x1fU)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (0xfffff000U 
                                                               & vlSymsp->TOP__core.__PVT__ifid_instr))))
                                         : 0ULL) : 0ULL)
                                 : ((2U & vlSymsp->TOP__core.__PVT__ifid_instr)
                                     ? ((1U & vlSymsp->TOP__core.__PVT__ifid_instr)
                                         ? ((0xfffffffffffff000ULL 
                                             & ((- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                       >> 0x1fU))))) 
                                                << 0xcU)) 
                                            | (QData)((IData)(
                                                              (0xfffU 
                                                               & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                  >> 0x14U)))))
                                         : 0ULL) : 0ULL)))
                  : ((8U & vlSymsp->TOP__core.__PVT__ifid_instr)
                      ? 0ULL : ((4U & vlSymsp->TOP__core.__PVT__ifid_instr)
                                 ? 0ULL : ((2U & vlSymsp->TOP__core.__PVT__ifid_instr)
                                            ? ((1U 
                                                & vlSymsp->TOP__core.__PVT__ifid_instr)
                                                ? (
                                                   (0xfffffffffffff000ULL 
                                                    & ((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                              >> 0x1fU))))) 
                                                       << 0xcU)) 
                                                   | (QData)((IData)(
                                                                     (0xfffU 
                                                                      & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                         >> 0x14U)))))
                                                : 0ULL)
                                            : 0ULL))))));
    vlSymsp->TOP__core__id_stage_inst.__PVT__alu_sel 
        = (((((((((0xcc00U == ((0x1fc00U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                            << 0xaU)) 
                               | ((0x380U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                             >> 5U)) 
                                  | (0x7fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                              >> 0x19U))))) 
                  | (0xcc20U == ((0x1fc00U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                              << 0xaU)) 
                                 | ((0x380U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                               >> 5U)) 
                                    | (0x7fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                >> 0x19U)))))) 
                 | (0xce00U == ((0x1fc00U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                             << 0xaU)) 
                                | ((0x380U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                              >> 5U)) 
                                   | (0x7fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                               >> 0x19U)))))) 
                | (0xcf80U == ((0x1fc00U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                            << 0xaU)) 
                               | ((0x380U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                             >> 5U)) 
                                  | (0x7fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                              >> 0x19U)))))) 
               | (0xcf00U == ((0x1fc00U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                           << 0xaU)) 
                              | ((0x380U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                            >> 5U)) 
                                 | (0x7fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                             >> 0x19U)))))) 
              | (0xcc80U == ((0x1fc00U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                          << 0xaU)) 
                             | ((0x380U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                           >> 5U)) 
                                | (0x7fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                            >> 0x19U)))))) 
             | (0xce80U == ((0x1fc00U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                         << 0xaU)) 
                            | ((0x380U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                          >> 5U)) | 
                               (0x7fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                         >> 0x19U)))))) 
            | (0xcea0U == ((0x1fc00U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                        << 0xaU)) | 
                           ((0x380U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                       >> 5U)) | (0x7fU 
                                                  & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                     >> 0x19U))))))
            ? ((0xcc00U == ((0x1fc00U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                         << 0xaU)) 
                            | ((0x380U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                          >> 5U)) | 
                               (0x7fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                         >> 0x19U)))))
                ? 0U : ((0xcc20U == ((0x1fc00U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                  << 0xaU)) 
                                     | ((0x380U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                   >> 5U)) 
                                        | (0x7fU & 
                                           (vlSymsp->TOP__core.__PVT__ifid_instr 
                                            >> 0x19U)))))
                         ? 1U : ((0xce00U == ((0x1fc00U 
                                               & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                  << 0xaU)) 
                                              | ((0x380U 
                                                  & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                     >> 5U)) 
                                                 | (0x7fU 
                                                    & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                       >> 0x19U)))))
                                  ? 2U : ((0xcf80U 
                                           == ((0x1fc00U 
                                                & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                   << 0xaU)) 
                                               | ((0x380U 
                                                   & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                      >> 5U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                        >> 0x19U)))))
                                           ? 3U : (
                                                   (0xcf00U 
                                                    == 
                                                    ((0x1fc00U 
                                                      & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                         << 0xaU)) 
                                                     | ((0x380U 
                                                         & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                            >> 5U)) 
                                                        | (0x7fU 
                                                           & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                              >> 0x19U)))))
                                                    ? 4U
                                                    : 
                                                   ((0xcc80U 
                                                     == 
                                                     ((0x1fc00U 
                                                       & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                          << 0xaU)) 
                                                      | ((0x380U 
                                                          & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                             >> 5U)) 
                                                         | (0x7fU 
                                                            & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                               >> 0x19U)))))
                                                     ? 5U
                                                     : 
                                                    ((0xce80U 
                                                      == 
                                                      ((0x1fc00U 
                                                        & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                           << 0xaU)) 
                                                       | ((0x380U 
                                                           & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                              >> 5U)) 
                                                          | (0x7fU 
                                                             & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                >> 0x19U)))))
                                                      ? 6U
                                                      : 7U)))))))
            : (((((((((0xcd00U == ((0x1fc00U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                << 0xaU)) 
                                   | ((0x380U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                 >> 5U)) 
                                      | (0x7fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                  >> 0x19U))))) 
                      | (0xcd80U == ((0x1fc00U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                  << 0xaU)) 
                                     | ((0x380U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                   >> 5U)) 
                                        | (0x7fU & 
                                           (vlSymsp->TOP__core.__PVT__ifid_instr 
                                            >> 0x19U)))))) 
                     | (0xcc01U == ((0x1fc00U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                 << 0xaU)) 
                                    | ((0x380U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                  >> 5U)) 
                                       | (0x7fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                   >> 0x19U)))))) 
                    | (0xcc81U == ((0x1fc00U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                << 0xaU)) 
                                   | ((0x380U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                 >> 5U)) 
                                      | (0x7fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                  >> 0x19U)))))) 
                   | (0xcd01U == ((0x1fc00U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                               << 0xaU)) 
                                  | ((0x380U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                >> 5U)) 
                                     | (0x7fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                 >> 0x19U)))))) 
                  | (0xcd81U == ((0x1fc00U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                              << 0xaU)) 
                                 | ((0x380U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                               >> 5U)) 
                                    | (0x7fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                >> 0x19U)))))) 
                 | (0x4c00U == (0x1ff80U & ((0x1fc00U 
                                             & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                << 0xaU)) 
                                            | ((0x380U 
                                                & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                   >> 5U)) 
                                               | (0x7fU 
                                                  & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                     >> 0x19U))))))) 
                | (0x4e00U == (0x1ff80U & ((0x1fc00U 
                                            & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                               << 0xaU)) 
                                           | ((0x380U 
                                               & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                  >> 5U)) 
                                              | (0x7fU 
                                                 & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                    >> 0x19U)))))))
                ? ((0xcd00U == ((0x1fc00U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                             << 0xaU)) 
                                | ((0x380U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                              >> 5U)) 
                                   | (0x7fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                               >> 0x19U)))))
                    ? 8U : ((0xcd80U == ((0x1fc00U 
                                          & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                             << 0xaU)) 
                                         | ((0x380U 
                                             & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                >> 5U)) 
                                            | (0x7fU 
                                               & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                  >> 0x19U)))))
                             ? 9U : ((0xcc01U == ((0x1fc00U 
                                                   & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                      << 0xaU)) 
                                                  | ((0x380U 
                                                      & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                         >> 5U)) 
                                                     | (0x7fU 
                                                        & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                           >> 0x19U)))))
                                      ? 0xaU : ((0xcc81U 
                                                 == 
                                                 ((0x1fc00U 
                                                   & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                      << 0xaU)) 
                                                  | ((0x380U 
                                                      & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                         >> 5U)) 
                                                     | (0x7fU 
                                                        & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                           >> 0x19U)))))
                                                 ? 0xbU
                                                 : 
                                                ((0xcd01U 
                                                  == 
                                                  ((0x1fc00U 
                                                    & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                       << 0xaU)) 
                                                   | ((0x380U 
                                                       & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                          >> 5U)) 
                                                      | (0x7fU 
                                                         & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                            >> 0x19U)))))
                                                  ? 0xcU
                                                  : 
                                                 ((0xcd81U 
                                                   == 
                                                   ((0x1fc00U 
                                                     & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                        << 0xaU)) 
                                                    | ((0x380U 
                                                        & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                           >> 5U)) 
                                                       | (0x7fU 
                                                          & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                             >> 0x19U)))))
                                                   ? 0xdU
                                                   : 
                                                  ((0x4c00U 
                                                    == 
                                                    (0x1ff80U 
                                                     & ((0x1fc00U 
                                                         & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                            << 0xaU)) 
                                                        | ((0x380U 
                                                            & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                               >> 5U)) 
                                                           | (0x7fU 
                                                              & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                 >> 0x19U))))))
                                                    ? 0U
                                                    : 2U)))))))
                : (((((((((0x4f80U == (0x1ff80U & (
                                                   (0x1fc00U 
                                                    & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                       << 0xaU)) 
                                                   | ((0x380U 
                                                       & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                          >> 5U)) 
                                                      | (0x7fU 
                                                         & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                            >> 0x19U)))))) 
                          | (0x4f00U == (0x1ff80U & 
                                         ((0x1fc00U 
                                           & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                              << 0xaU)) 
                                          | ((0x380U 
                                              & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                   >> 0x19U))))))) 
                         | (0x4c80U == ((0x1fc00U & 
                                         (vlSymsp->TOP__core.__PVT__ifid_instr 
                                          << 0xaU)) 
                                        | ((0x380U 
                                            & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                               >> 5U)) 
                                           | (0x7fU 
                                              & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                 >> 0x19U)))))) 
                        | (0x4e80U == ((0x1fc00U & 
                                        (vlSymsp->TOP__core.__PVT__ifid_instr 
                                         << 0xaU)) 
                                       | ((0x380U & 
                                           (vlSymsp->TOP__core.__PVT__ifid_instr 
                                            >> 5U)) 
                                          | (0x7fU 
                                             & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                >> 0x19U)))))) 
                       | (0x4ea0U == ((0x1fc00U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                   << 0xaU)) 
                                      | ((0x380U & 
                                          (vlSymsp->TOP__core.__PVT__ifid_instr 
                                           >> 5U)) 
                                         | (0x7fU & 
                                            (vlSymsp->TOP__core.__PVT__ifid_instr 
                                             >> 0x19U)))))) 
                      | (0x4d00U == (0x1ff80U & ((0x1fc00U 
                                                  & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                     << 0xaU)) 
                                                 | ((0x380U 
                                                     & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                        >> 5U)) 
                                                    | (0x7fU 
                                                       & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                          >> 0x19U))))))) 
                     | (0x4d80U == (0x1ff80U & ((0x1fc00U 
                                                 & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                    << 0xaU)) 
                                                | ((0x380U 
                                                    & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                       >> 5U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                         >> 0x19U))))))) 
                    | (0xc00U == (0x1fc00U & ((0x1fc00U 
                                               & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                  << 0xaU)) 
                                              | ((0x380U 
                                                  & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                     >> 5U)) 
                                                 | (0x7fU 
                                                    & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                       >> 0x19U)))))))
                    ? ((0x4f80U == (0x1ff80U & ((0x1fc00U 
                                                 & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                    << 0xaU)) 
                                                | ((0x380U 
                                                    & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                       >> 5U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                         >> 0x19U))))))
                        ? 3U : ((0x4f00U == (0x1ff80U 
                                             & ((0x1fc00U 
                                                 & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                    << 0xaU)) 
                                                | ((0x380U 
                                                    & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                       >> 5U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                         >> 0x19U))))))
                                 ? 4U : ((0x4c80U == 
                                          ((0x1fc00U 
                                            & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                               << 0xaU)) 
                                           | ((0x380U 
                                               & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                  >> 5U)) 
                                              | (0x7fU 
                                                 & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                    >> 0x19U)))))
                                          ? 5U : ((0x4e80U 
                                                   == 
                                                   ((0x1fc00U 
                                                     & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                        << 0xaU)) 
                                                    | ((0x380U 
                                                        & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                           >> 5U)) 
                                                       | (0x7fU 
                                                          & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                             >> 0x19U)))))
                                                   ? 6U
                                                   : 
                                                  ((0x4ea0U 
                                                    == 
                                                    ((0x1fc00U 
                                                      & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                         << 0xaU)) 
                                                     | ((0x380U 
                                                         & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                            >> 5U)) 
                                                        | (0x7fU 
                                                           & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                              >> 0x19U)))))
                                                    ? 7U
                                                    : 
                                                   ((0x4d00U 
                                                     == 
                                                     (0x1ff80U 
                                                      & ((0x1fc00U 
                                                          & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                             << 0xaU)) 
                                                         | ((0x380U 
                                                             & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                >> 5U)) 
                                                            | (0x7fU 
                                                               & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                  >> 0x19U))))))
                                                     ? 8U
                                                     : 
                                                    ((0x4d80U 
                                                      == 
                                                      (0x1ff80U 
                                                       & ((0x1fc00U 
                                                           & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                              << 0xaU)) 
                                                          | ((0x380U 
                                                              & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                 >> 5U)) 
                                                             | (0x7fU 
                                                                & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                                   >> 0x19U))))))
                                                      ? 9U
                                                      : 0U)))))))
                    : 0U)));
}
