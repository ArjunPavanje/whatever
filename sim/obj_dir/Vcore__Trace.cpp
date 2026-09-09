// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcore__Syms.h"


void Vcore::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vcore__Syms* __restrict vlSymsp = static_cast<Vcore__Syms*>(userp);
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vcore::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vcore__Syms* __restrict vlSymsp = static_cast<Vcore__Syms*>(userp);
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr),64);
            tracep->chgIData(oldp+2,(vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__mem
                                     [(0x7fffU & (IData)(
                                                         (vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr 
                                                          >> 2U)))]),32);
            tracep->chgBit(oldp+3,(vlSymsp->TOP__core__id_stage_inst.__PVT__is_j));
            tracep->chgQData(oldp+4,((((0x6fU == (0x7fU 
                                                  & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                       | (IData)(vlSymsp->TOP__core__id_stage_inst.__PVT__misprediction))
                                       ? (vlSymsp->TOP__core.__PVT__ifid_pc 
                                          + vlSymsp->TOP__core__id_stage_inst.__PVT__imm)
                                       : ((0x67U == 
                                           (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))
                                           ? (vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_1 
                                              + vlSymsp->TOP__core__id_stage_inst.__PVT__imm)
                                           : 0ULL))),64);
            tracep->chgQData(oldp+6,(vlSymsp->TOP__core.__PVT__ifid_pc),64);
            tracep->chgIData(oldp+8,(vlSymsp->TOP__core.__PVT__ifid_instr),32);
            tracep->chgQData(oldp+9,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_1),64);
            tracep->chgQData(oldp+11,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_2),64);
            tracep->chgQData(oldp+13,(vlSymsp->TOP__core__id_stage_inst.__PVT__imm),64);
            tracep->chgCData(oldp+15,(vlSymsp->TOP__core__id_stage_inst.__PVT__alu_sel),5);
            tracep->chgBit(oldp+16,((((((0x13U == (0x7fU 
                                                   & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                        | (3U == (0x7fU 
                                                  & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                       | (0x23U == 
                                          (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                      | (0x17U == (0x7fU 
                                                   & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                     | (0x67U == (0x7fU 
                                                  & vlSymsp->TOP__core.__PVT__ifid_instr)))));
            tracep->chgCData(oldp+17,((0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                >> 7U))),5);
            tracep->chgBit(oldp+18,((((((((0x33U == 
                                           (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                          | (0x13U 
                                             == (0x7fU 
                                                 & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                         | (3U == (0x7fU 
                                                   & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                        | (0x37U == 
                                           (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                       | (0x17U == 
                                          (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                      | (0x6fU == (0x7fU 
                                                   & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                     | (0x67U == (0x7fU 
                                                  & vlSymsp->TOP__core.__PVT__ifid_instr)))));
            tracep->chgBit(oldp+19,((3U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))));
            tracep->chgBit(oldp+20,((0x23U == (0x7fU 
                                               & vlSymsp->TOP__core.__PVT__ifid_instr))));
            tracep->chgBit(oldp+21,((0x37U == (0x7fU 
                                               & vlSymsp->TOP__core.__PVT__ifid_instr))));
            tracep->chgBit(oldp+22,((0x17U == (0x7fU 
                                               & vlSymsp->TOP__core.__PVT__ifid_instr))));
            tracep->chgCData(oldp+23,((7U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+24,(vlSymsp->TOP__core.__PVT__memwb_reg_write));
            tracep->chgCData(oldp+25,(vlSymsp->TOP__core.__PVT__memwb_rd),5);
            tracep->chgQData(oldp+26,(((IData)(vlSymsp->TOP__core.__PVT__memwb_mem_to_reg)
                                        ? vlSymsp->TOP__core.__PVT__memwb_mem_out
                                        : vlSymsp->TOP__core.__PVT__memwb_alu_out)),64);
            tracep->chgIData(oldp+28,(vlSymsp->TOP__core.__PVT__idex_instr),32);
            tracep->chgQData(oldp+29,(vlSymsp->TOP__core.__PVT__idex_pc),64);
            tracep->chgQData(oldp+31,(vlSymsp->TOP__core.__PVT__idex_imm),64);
            tracep->chgQData(oldp+33,(vlSymsp->TOP__core.__PVT__idex_in1),64);
            tracep->chgQData(oldp+35,(vlSymsp->TOP__core.__PVT__idex_in2),64);
            tracep->chgQData(oldp+37,(vlSymsp->TOP__core.__PVT__idex_write_data),64);
            tracep->chgBit(oldp+39,(vlSymsp->TOP__core.__PVT__idex_alu_src));
            tracep->chgBit(oldp+40,(vlSymsp->TOP__core.__PVT__idex_is_j));
            tracep->chgBit(oldp+41,(vlSymsp->TOP__core.__PVT__idex_is_lui));
            tracep->chgBit(oldp+42,(vlSymsp->TOP__core.__PVT__idex_is_auipc));
            tracep->chgCData(oldp+43,(vlSymsp->TOP__core.__PVT__idex_alu_sel),5);
            tracep->chgBit(oldp+44,(vlSymsp->TOP__core.__PVT__idex_mem_write));
            tracep->chgBit(oldp+45,(vlSymsp->TOP__core.__PVT__idex_mem_read));
            tracep->chgBit(oldp+46,(vlSymsp->TOP__core.__PVT__idex_reg_write));
            tracep->chgBit(oldp+47,(vlSymsp->TOP__core.__PVT__idex_mem_to_reg));
            tracep->chgCData(oldp+48,(vlSymsp->TOP__core.__PVT__idex_rd),5);
            tracep->chgCData(oldp+49,(vlSymsp->TOP__core.__PVT__idex_funct3),3);
            tracep->chgQData(oldp+50,(((IData)(vlSymsp->TOP__core.__PVT__idex_is_j)
                                        ? (4ULL + vlSymsp->TOP__core.__PVT__idex_pc)
                                        : ((0x10U & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                                            ? 0ULL : 
                                           ((8U & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                                             ? ((4U 
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
                                             : ((4U 
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
            tracep->chgCData(oldp+52,(vlSymsp->TOP__core.__PVT__exmem_funct3),3);
            tracep->chgBit(oldp+53,(vlSymsp->TOP__core.__PVT__exmem_mem_write));
            tracep->chgBit(oldp+54,(vlSymsp->TOP__core.__PVT__exmem_mem_read));
            tracep->chgQData(oldp+55,(vlSymsp->TOP__core.__PVT__exmem_write_data),64);
            tracep->chgQData(oldp+57,(vlSymsp->TOP__core.__PVT__exmem_alu_out),64);
            tracep->chgCData(oldp+59,(vlSymsp->TOP__core.__PVT__exmem_rd),5);
            tracep->chgBit(oldp+60,(vlSymsp->TOP__core.__PVT__exmem_reg_write));
            tracep->chgBit(oldp+61,(vlSymsp->TOP__core.__PVT__exmem_mem_to_reg));
            tracep->chgQData(oldp+62,(vlSymsp->TOP__core.__PVT__memwb_mem_out),64);
            tracep->chgQData(oldp+64,(vlSymsp->TOP__core.__PVT__memwb_alu_out),64);
            tracep->chgBit(oldp+66,(vlSymsp->TOP__core.__PVT__memwb_mem_to_reg));
            tracep->chgQData(oldp+67,(((IData)(vlSymsp->TOP__core__id_stage_inst.__PVT__is_j)
                                        ? (((0x6fU 
                                             == (0x7fU 
                                                 & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                            | (IData)(vlSymsp->TOP__core__id_stage_inst.__PVT__misprediction))
                                            ? (vlSymsp->TOP__core.__PVT__ifid_pc 
                                               + vlSymsp->TOP__core__id_stage_inst.__PVT__imm)
                                            : ((0x67U 
                                                == 
                                                (0x7fU 
                                                 & vlSymsp->TOP__core.__PVT__ifid_instr))
                                                ? (vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_1 
                                                   + vlSymsp->TOP__core__id_stage_inst.__PVT__imm)
                                                : 0ULL))
                                        : (4ULL + vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr))),64);
            tracep->chgSData(oldp+69,((0x7fffU & (IData)(
                                                         (vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr 
                                                          >> 2U)))),15);
            tracep->chgQData(oldp+70,(((0x10U & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
                                        ? 0ULL : ((8U 
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
                                                      + vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2))))))),64);
            tracep->chgQData(oldp+72,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1),64);
            tracep->chgQData(oldp+74,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2),64);
            tracep->chgQData(oldp+76,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                       + vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
            tracep->chgQData(oldp+78,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                       - vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
            tracep->chgQData(oldp+80,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                       ^ vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
            tracep->chgQData(oldp+82,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                       & vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
            tracep->chgQData(oldp+84,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                       | vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
            tracep->chgQData(oldp+86,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                       << (0x3fU & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
            tracep->chgQData(oldp+88,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                       >> (0x3fU & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
            tracep->chgQData(oldp+90,(VL_SHIFTRS_QQI(64,64,6, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1, 
                                                     (0x3fU 
                                                      & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
            tracep->chgQData(oldp+92,((QData)((IData)(
                                                      VL_LTS_IQQ(1,64,64, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
            tracep->chgQData(oldp+94,((QData)((IData)(
                                                      (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                       < vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
            tracep->chgQData(oldp+96,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_out),64);
            tracep->chgCData(oldp+98,((3U & (2U ^ (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel)))),2);
            tracep->chgCData(oldp+99,((0x3fU & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2))),6);
            tracep->chgWData(oldp+100,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full),128);
            tracep->chgCData(oldp+104,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes),4);
            tracep->chgBit(oldp+105,((1U & ((IData)(vlSymsp->TOP__core.__PVT__exmem_funct3) 
                                            >> 2U))));
            tracep->chgSData(oldp+106,((0x7fffU & (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out))),15);
            tracep->chgIData(oldp+107,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__i),32);
            tracep->chgQData(oldp+108,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read),64);
            tracep->chgBit(oldp+110,((1U & ((8U & (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))
                                             ? ((~ 
                                                 ((IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes) 
                                                  >> 2U)) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes) 
                                                     >> 1U)) 
                                                   & ((~ (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes)) 
                                                      & (IData)(
                                                                (vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                                                                 >> 0x3fU)))))
                                             : ((4U 
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
                                                             >> 7U)))))))));
            tracep->chgQData(oldp+111,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__sext_mask),64);
            tracep->chgBit(oldp+113,((8U <= (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))));
            tracep->chgQData(oldp+114,(((1U & (((IData)(vlSymsp->TOP__core.__PVT__exmem_funct3) 
                                                >> 2U) 
                                               | (8U 
                                                  <= (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))))
                                         ? vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read
                                         : (vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                                            | vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__sext_mask))),64);
            tracep->chgCData(oldp+116,((0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr)),7);
            tracep->chgCData(oldp+117,((0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+118,((0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                 >> 0x14U))),5);
            tracep->chgBit(oldp+119,(((0x4000U & vlSymsp->TOP__core.__PVT__ifid_instr)
                                       ? ((0x2000U 
                                           & vlSymsp->TOP__core.__PVT__ifid_instr)
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
            tracep->chgBit(oldp+120,((0x63U == (0x7fU 
                                                & vlSymsp->TOP__core.__PVT__ifid_instr))));
            tracep->chgBit(oldp+121,(vlSymsp->TOP__core__id_stage_inst.__PVT__misprediction));
            tracep->chgBit(oldp+122,((0x6fU == (0x7fU 
                                                & vlSymsp->TOP__core.__PVT__ifid_instr))));
            tracep->chgBit(oldp+123,((0x67U == (0x7fU 
                                                & vlSymsp->TOP__core.__PVT__ifid_instr))));
            tracep->chgCData(oldp+124,((0x7fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                 >> 0x19U))),7);
        }
        tracep->chgBit(oldp+125,(vlTOPp->clk));
        tracep->chgBit(oldp+126,(vlTOPp->rst));
        tracep->chgQData(oldp+127,((((IData)(vlSymsp->TOP__core.__PVT__exmem_mem_read) 
                                     & (~ (IData)(vlTOPp->rst)))
                                     ? ((1U & (((IData)(vlSymsp->TOP__core.__PVT__exmem_funct3) 
                                                >> 2U) 
                                               | (8U 
                                                  <= (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))))
                                         ? vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read
                                         : (vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                                            | vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__sext_mask))
                                     : 0ULL)),64);
        tracep->chgQData(oldp+129,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[0]),64);
        tracep->chgQData(oldp+131,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[1]),64);
        tracep->chgQData(oldp+133,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[2]),64);
        tracep->chgQData(oldp+135,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[3]),64);
        tracep->chgQData(oldp+137,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[4]),64);
        tracep->chgQData(oldp+139,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[5]),64);
        tracep->chgQData(oldp+141,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[6]),64);
        tracep->chgQData(oldp+143,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[7]),64);
        tracep->chgQData(oldp+145,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[8]),64);
        tracep->chgQData(oldp+147,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[9]),64);
        tracep->chgQData(oldp+149,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[10]),64);
        tracep->chgQData(oldp+151,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[11]),64);
        tracep->chgQData(oldp+153,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[12]),64);
        tracep->chgQData(oldp+155,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[13]),64);
        tracep->chgQData(oldp+157,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[14]),64);
        tracep->chgQData(oldp+159,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[15]),64);
        tracep->chgQData(oldp+161,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[16]),64);
        tracep->chgQData(oldp+163,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[17]),64);
        tracep->chgQData(oldp+165,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[18]),64);
        tracep->chgQData(oldp+167,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[19]),64);
        tracep->chgQData(oldp+169,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[20]),64);
        tracep->chgQData(oldp+171,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[21]),64);
        tracep->chgQData(oldp+173,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[22]),64);
        tracep->chgQData(oldp+175,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[23]),64);
        tracep->chgQData(oldp+177,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[24]),64);
        tracep->chgQData(oldp+179,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[25]),64);
        tracep->chgQData(oldp+181,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[26]),64);
        tracep->chgQData(oldp+183,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[27]),64);
        tracep->chgQData(oldp+185,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[28]),64);
        tracep->chgQData(oldp+187,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[29]),64);
        tracep->chgQData(oldp+189,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[30]),64);
        tracep->chgQData(oldp+191,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[31]),64);
    }
}

void Vcore::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vcore__Syms* __restrict vlSymsp = static_cast<Vcore__Syms*>(userp);
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
