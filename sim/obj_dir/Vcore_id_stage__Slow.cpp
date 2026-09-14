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

void Vcore_id_stage::_settle__TOP__core__id_stage_inst__2(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_id_stage::_settle__TOP__core__id_stage_inst__2\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlSymsp->TOP__core__id_stage_inst.__PVT__in2 = 
        (((((IData)(vlSymsp->TOP__core.__PVT__idex_reg_write) 
            & (~ (IData)(vlSymsp->TOP__core.__PVT__idex_mem_read))) 
           & (0U != (IData)(vlSymsp->TOP__core.__PVT__idex_rd))) 
          & ((IData)(vlSymsp->TOP__core.__PVT__idex_rd) 
             == (0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                          >> 0x14U)))) ? vlSymsp->TOP__core.__PVT__ex_out
          : (((((IData)(vlSymsp->TOP__core.__PVT__exmem_reg_write) 
                & (~ (IData)(vlSymsp->TOP__core.__PVT__exmem_mem_to_reg))) 
               & (0U != (IData)(vlSymsp->TOP__core.__PVT__exmem_rd))) 
              & ((IData)(vlSymsp->TOP__core.__PVT__exmem_rd) 
                 == (0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                              >> 0x14U)))) ? vlSymsp->TOP__core.__PVT__exmem_alu_out
              : (((((IData)(vlSymsp->TOP__core.__PVT__exmem_reg_write) 
                    & (IData)(vlSymsp->TOP__core.__PVT__exmem_mem_to_reg)) 
                   & (0U != (IData)(vlSymsp->TOP__core.__PVT__exmem_rd))) 
                  & ((IData)(vlSymsp->TOP__core.__PVT__exmem_rd) 
                     == (0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                  >> 0x14U)))) ? vlSymsp->TOP__core.__PVT__mem_out
                  : ((((IData)(vlSymsp->TOP__core.__PVT__memwb_reg_write) 
                       & (0U != (IData)(vlSymsp->TOP__core.__PVT__memwb_rd))) 
                      & ((IData)(vlSymsp->TOP__core.__PVT__memwb_rd) 
                         == (0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                      >> 0x14U)))) ? vlSymsp->TOP__core.__PVT__wb_data
                      : ((0U == (0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                          >> 0x14U)))
                          ? 0ULL : (((IData)(vlSymsp->TOP__core.__PVT__memwb_reg_write) 
                                     & ((0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                  >> 0x14U)) 
                                        == (IData)(vlSymsp->TOP__core.__PVT__memwb_rd)))
                                     ? vlSymsp->TOP__core.__PVT__wb_data
                                     : vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file
                                    [(0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                               >> 0x14U))]))))));
    vlSymsp->TOP__core__id_stage_inst.__PVT__in1 = 
        (((((IData)(vlSymsp->TOP__core.__PVT__idex_reg_write) 
            & (~ (IData)(vlSymsp->TOP__core.__PVT__idex_mem_read))) 
           & (0U != (IData)(vlSymsp->TOP__core.__PVT__idex_rd))) 
          & ((IData)(vlSymsp->TOP__core.__PVT__idex_rd) 
             == (0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                          >> 0xfU)))) ? vlSymsp->TOP__core.__PVT__ex_out
          : (((((IData)(vlSymsp->TOP__core.__PVT__exmem_reg_write) 
                & (~ (IData)(vlSymsp->TOP__core.__PVT__exmem_mem_to_reg))) 
               & (0U != (IData)(vlSymsp->TOP__core.__PVT__exmem_rd))) 
              & ((IData)(vlSymsp->TOP__core.__PVT__exmem_rd) 
                 == (0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                              >> 0xfU)))) ? vlSymsp->TOP__core.__PVT__exmem_alu_out
              : (((((IData)(vlSymsp->TOP__core.__PVT__exmem_reg_write) 
                    & (IData)(vlSymsp->TOP__core.__PVT__exmem_mem_to_reg)) 
                   & (0U != (IData)(vlSymsp->TOP__core.__PVT__exmem_rd))) 
                  & ((IData)(vlSymsp->TOP__core.__PVT__exmem_rd) 
                     == (0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                  >> 0xfU)))) ? vlSymsp->TOP__core.__PVT__mem_out
                  : ((((IData)(vlSymsp->TOP__core.__PVT__memwb_reg_write) 
                       & (0U != (IData)(vlSymsp->TOP__core.__PVT__memwb_rd))) 
                      & ((IData)(vlSymsp->TOP__core.__PVT__memwb_rd) 
                         == (0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                      >> 0xfU)))) ? vlSymsp->TOP__core.__PVT__wb_data
                      : ((0U == (0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                          >> 0xfU)))
                          ? 0ULL : (((IData)(vlSymsp->TOP__core.__PVT__memwb_reg_write) 
                                     & ((0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                  >> 0xfU)) 
                                        == (IData)(vlSymsp->TOP__core.__PVT__memwb_rd)))
                                     ? vlSymsp->TOP__core.__PVT__wb_data
                                     : vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file
                                    [(0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                               >> 0xfU))]))))));
    vlSymsp->TOP__core__id_stage_inst.__PVT__misprediction 
        = ((0x63U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr)) 
           & ((0x4000U & vlSymsp->TOP__core.__PVT__ifid_instr)
               ? ((0x2000U & vlSymsp->TOP__core.__PVT__ifid_instr)
                   ? ((0x1000U & vlSymsp->TOP__core.__PVT__ifid_instr)
                       ? (vlSymsp->TOP__core__id_stage_inst.__PVT__in1 
                          >= vlSymsp->TOP__core__id_stage_inst.__PVT__in2)
                       : (vlSymsp->TOP__core__id_stage_inst.__PVT__in1 
                          < vlSymsp->TOP__core__id_stage_inst.__PVT__in2))
                   : ((0x1000U & vlSymsp->TOP__core.__PVT__ifid_instr)
                       ? VL_GTES_IQQ(1,64,64, vlSymsp->TOP__core__id_stage_inst.__PVT__in1, vlSymsp->TOP__core__id_stage_inst.__PVT__in2)
                       : VL_LTS_IQQ(1,64,64, vlSymsp->TOP__core__id_stage_inst.__PVT__in1, vlSymsp->TOP__core__id_stage_inst.__PVT__in2)))
               : ((~ (vlSymsp->TOP__core.__PVT__ifid_instr 
                      >> 0xdU)) & ((0x1000U & vlSymsp->TOP__core.__PVT__ifid_instr)
                                    ? (vlSymsp->TOP__core__id_stage_inst.__PVT__in1 
                                       != vlSymsp->TOP__core__id_stage_inst.__PVT__in2)
                                    : (vlSymsp->TOP__core__id_stage_inst.__PVT__in1 
                                       == vlSymsp->TOP__core__id_stage_inst.__PVT__in2)))));
    vlSymsp->TOP__core__id_stage_inst.__PVT__is_j = 
        (((0x6fU == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr)) 
          | (0x67U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))) 
         | (IData)(vlSymsp->TOP__core__id_stage_inst.__PVT__misprediction));
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
    __PVT__idex_rd = VL_RAND_RESET_I(5);
    __PVT__idex_reg_write = VL_RAND_RESET_I(1);
    __PVT__idex_mem_read = VL_RAND_RESET_I(1);
    __PVT__ex_out = VL_RAND_RESET_Q(64);
    __PVT__exmem_rd = VL_RAND_RESET_I(5);
    __PVT__exmem_reg_write = VL_RAND_RESET_I(1);
    __PVT__exmem_mem_to_reg = VL_RAND_RESET_I(1);
    __PVT__exmem_alu_out = VL_RAND_RESET_Q(64);
    __PVT__mem_out = VL_RAND_RESET_Q(64);
    __PVT__in1 = VL_RAND_RESET_Q(64);
    __PVT__in2 = VL_RAND_RESET_Q(64);
    __PVT__imm = VL_RAND_RESET_Q(64);
    __PVT__alu_sel = VL_RAND_RESET_I(5);
    __PVT__alu_src = VL_RAND_RESET_I(1);
    __PVT__rd_addr = VL_RAND_RESET_I(5);
    __PVT__rs1_addr = VL_RAND_RESET_I(5);
    __PVT__rs2_addr = VL_RAND_RESET_I(5);
    __PVT__use_rs1 = VL_RAND_RESET_I(1);
    __PVT__use_rs2 = VL_RAND_RESET_I(1);
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
