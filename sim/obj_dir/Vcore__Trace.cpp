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
            tracep->chgBit(oldp+0,(vlSymsp->TOP__core.__PVT__load_use_stall));
            tracep->chgCData(oldp+1,((0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                               >> 0xfU))),5);
            tracep->chgCData(oldp+2,((0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                               >> 0x14U))),5);
            tracep->chgCData(oldp+3,(vlSymsp->TOP__core.__PVT__idex_rd),5);
            tracep->chgBit(oldp+4,(((((((0x33U == (0x7fU 
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
                                                 & vlSymsp->TOP__core.__PVT__ifid_instr)))));
            tracep->chgBit(oldp+5,((((0x33U == (0x7fU 
                                                & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                     | (0x23U == (0x7fU 
                                                  & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                    | (0x63U == (0x7fU 
                                                 & vlSymsp->TOP__core.__PVT__ifid_instr)))));
            tracep->chgBit(oldp+6,(vlSymsp->TOP__core.__PVT__idex_mem_read));
            tracep->chgQData(oldp+7,(vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr),64);
            tracep->chgIData(oldp+9,(vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__mem
                                     [(0x7fffU & (IData)(
                                                         (vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr 
                                                          >> 2U)))]),32);
            tracep->chgQData(oldp+10,(vlSymsp->TOP__core.__PVT__ifid_pc),64);
            tracep->chgIData(oldp+12,(vlSymsp->TOP__core.__PVT__ifid_instr),32);
            tracep->chgQData(oldp+13,(vlSymsp->TOP__core__id_stage_inst.__PVT__imm),64);
            tracep->chgCData(oldp+15,(vlSymsp->TOP__core__id_stage_inst.__PVT__alu_sel),5);
            tracep->chgBit(oldp+16,(((((((0x13U == 
                                          (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                         | (3U == (0x7fU 
                                                   & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                        | (0x23U == 
                                           (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                       | (0x37U == 
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
            tracep->chgQData(oldp+24,(vlSymsp->TOP__core.__PVT__ex_out),64);
            tracep->chgCData(oldp+26,(vlSymsp->TOP__core.__PVT__exmem_rd),5);
            tracep->chgCData(oldp+27,(vlSymsp->TOP__core.__PVT__memwb_rd),5);
            tracep->chgBit(oldp+28,(vlSymsp->TOP__core.__PVT__exmem_reg_write));
            tracep->chgBit(oldp+29,(vlSymsp->TOP__core.__PVT__exmem_mem_to_reg));
            tracep->chgBit(oldp+30,(vlSymsp->TOP__core.__PVT__idex_reg_write));
            tracep->chgQData(oldp+31,(vlSymsp->TOP__core.__PVT__exmem_alu_out),64);
            tracep->chgQData(oldp+33,(vlSymsp->TOP__core.__PVT__wb_data),64);
            tracep->chgBit(oldp+35,(vlSymsp->TOP__core.__PVT__memwb_reg_write));
            tracep->chgIData(oldp+36,(vlSymsp->TOP__core.__PVT__idex_instr),32);
            tracep->chgQData(oldp+37,(vlSymsp->TOP__core.__PVT__idex_pc),64);
            tracep->chgQData(oldp+39,(vlSymsp->TOP__core.__PVT__idex_imm),64);
            tracep->chgQData(oldp+41,(vlSymsp->TOP__core.__PVT__idex_in1),64);
            tracep->chgQData(oldp+43,(vlSymsp->TOP__core.__PVT__idex_in2),64);
            tracep->chgQData(oldp+45,(vlSymsp->TOP__core.__PVT__idex_write_data),64);
            tracep->chgBit(oldp+47,(vlSymsp->TOP__core.__PVT__idex_alu_src));
            tracep->chgBit(oldp+48,(vlSymsp->TOP__core.__PVT__idex_is_j));
            tracep->chgBit(oldp+49,(vlSymsp->TOP__core.__PVT__idex_is_lui));
            tracep->chgBit(oldp+50,(vlSymsp->TOP__core.__PVT__idex_is_auipc));
            tracep->chgCData(oldp+51,(vlSymsp->TOP__core.__PVT__idex_alu_sel),5);
            tracep->chgBit(oldp+52,(vlSymsp->TOP__core.__PVT__idex_mem_write));
            tracep->chgBit(oldp+53,(vlSymsp->TOP__core.__PVT__idex_mem_to_reg));
            tracep->chgCData(oldp+54,(vlSymsp->TOP__core.__PVT__idex_rs1),5);
            tracep->chgCData(oldp+55,(vlSymsp->TOP__core.__PVT__idex_rs2),5);
            tracep->chgCData(oldp+56,(vlSymsp->TOP__core.__PVT__idex_funct3),3);
            tracep->chgQData(oldp+57,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__in2_forwarded),64);
            tracep->chgCData(oldp+59,(vlSymsp->TOP__core.__PVT__exmem_funct3),3);
            tracep->chgBit(oldp+60,(vlSymsp->TOP__core.__PVT__exmem_mem_write));
            tracep->chgBit(oldp+61,(vlSymsp->TOP__core.__PVT__exmem_mem_read));
            tracep->chgQData(oldp+62,(vlSymsp->TOP__core.__PVT__exmem_write_data),64);
            tracep->chgQData(oldp+64,(vlSymsp->TOP__core.__PVT__memwb_mem_out),64);
            tracep->chgQData(oldp+66,(vlSymsp->TOP__core.__PVT__memwb_alu_out),64);
            tracep->chgBit(oldp+68,(vlSymsp->TOP__core.__PVT__memwb_mem_to_reg));
            tracep->chgBit(oldp+69,(((((((((0x33U == 
                                            (0x7fU 
                                             & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                           | (0x13U 
                                              == (0x7fU 
                                                  & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                          | (3U == 
                                             (0x7fU 
                                              & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                         | (0x23U == 
                                            (0x7fU 
                                             & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                        | (0x63U == 
                                           (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                       | (0x67U == 
                                          (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                      & (0U != (0x1fU 
                                                & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                   >> 0xfU)))) 
                                     & ((0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                  >> 0xfU)) 
                                        == (IData)(vlSymsp->TOP__core.__PVT__idex_rd)))));
            tracep->chgBit(oldp+70,((((((0x33U == (0x7fU 
                                                   & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                        | (0x23U == 
                                           (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                       | (0x63U == 
                                          (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                      & (0U != (0x1fU 
                                                & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                   >> 0x14U)))) 
                                     & ((0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                  >> 0x14U)) 
                                        == (IData)(vlSymsp->TOP__core.__PVT__idex_rd)))));
            tracep->chgSData(oldp+71,((0x7fffU & (IData)(
                                                         (vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr 
                                                          >> 2U)))),15);
            tracep->chgCData(oldp+72,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__forward_A),2);
            tracep->chgCData(oldp+73,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__forward_B),2);
            tracep->chgQData(oldp+74,(((2U == (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__forward_A))
                                        ? vlSymsp->TOP__core.__PVT__exmem_alu_out
                                        : ((1U == (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__forward_A))
                                            ? vlSymsp->TOP__core.__PVT__wb_data
                                            : vlSymsp->TOP__core.__PVT__idex_in1))),64);
            tracep->chgQData(oldp+76,(((0x10U & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
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
            tracep->chgQData(oldp+78,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1),64);
            tracep->chgQData(oldp+80,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2),64);
            tracep->chgBit(oldp+82,((((IData)(vlSymsp->TOP__core.__PVT__memwb_reg_write) 
                                      & (0U != (IData)(vlSymsp->TOP__core.__PVT__memwb_rd))) 
                                     & ((IData)(vlSymsp->TOP__core.__PVT__idex_rs1) 
                                        == (IData)(vlSymsp->TOP__core.__PVT__memwb_rd)))));
            tracep->chgBit(oldp+83,((((IData)(vlSymsp->TOP__core.__PVT__exmem_reg_write) 
                                      & (0U != (IData)(vlSymsp->TOP__core.__PVT__exmem_rd))) 
                                     & ((IData)(vlSymsp->TOP__core.__PVT__idex_rs1) 
                                        == (IData)(vlSymsp->TOP__core.__PVT__exmem_rd)))));
            tracep->chgBit(oldp+84,((((IData)(vlSymsp->TOP__core.__PVT__memwb_reg_write) 
                                      & (0U != (IData)(vlSymsp->TOP__core.__PVT__memwb_rd))) 
                                     & ((IData)(vlSymsp->TOP__core.__PVT__idex_rs2) 
                                        == (IData)(vlSymsp->TOP__core.__PVT__memwb_rd)))));
            tracep->chgBit(oldp+85,((((IData)(vlSymsp->TOP__core.__PVT__exmem_reg_write) 
                                      & (0U != (IData)(vlSymsp->TOP__core.__PVT__exmem_rd))) 
                                     & ((IData)(vlSymsp->TOP__core.__PVT__idex_rs2) 
                                        == (IData)(vlSymsp->TOP__core.__PVT__exmem_rd)))));
            tracep->chgQData(oldp+86,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                       + vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
            tracep->chgQData(oldp+88,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                       - vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
            tracep->chgQData(oldp+90,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                       ^ vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
            tracep->chgQData(oldp+92,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                       & vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
            tracep->chgQData(oldp+94,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                       | vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
            tracep->chgQData(oldp+96,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                       << (0x3fU & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
            tracep->chgQData(oldp+98,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                       >> (0x3fU & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
            tracep->chgQData(oldp+100,(VL_SHIFTRS_QQI(64,64,6, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1, 
                                                      (0x3fU 
                                                       & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
            tracep->chgQData(oldp+102,((QData)((IData)(
                                                       VL_LTS_IQQ(1,64,64, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
            tracep->chgQData(oldp+104,((QData)((IData)(
                                                       (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                        < vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
            tracep->chgQData(oldp+106,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_out),64);
            tracep->chgCData(oldp+108,((3U & (2U ^ (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel)))),2);
            tracep->chgCData(oldp+109,((0x3fU & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2))),6);
            tracep->chgWData(oldp+110,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full),128);
            tracep->chgCData(oldp+114,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes),4);
            tracep->chgBit(oldp+115,((1U & ((IData)(vlSymsp->TOP__core.__PVT__exmem_funct3) 
                                            >> 2U))));
            tracep->chgSData(oldp+116,((0x7fffU & (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out))),15);
            tracep->chgBit(oldp+117,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem_busy));
            tracep->chgQData(oldp+118,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read),64);
            tracep->chgIData(oldp+120,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__i),32);
            tracep->chgIData(oldp+121,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__j),32);
            tracep->chgBit(oldp+122,((1U & ((8U & (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))
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
            tracep->chgQData(oldp+123,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__sext_mask),64);
            tracep->chgBit(oldp+125,((8U <= (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))));
            tracep->chgQData(oldp+126,(((1U & (((IData)(vlSymsp->TOP__core.__PVT__exmem_funct3) 
                                                >> 2U) 
                                               | (8U 
                                                  <= (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))))
                                         ? vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read
                                         : (vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                                            | vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__sext_mask))),64);
            tracep->chgCData(oldp+128,((0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr)),7);
            tracep->chgBit(oldp+129,((0x63U == (0x7fU 
                                                & vlSymsp->TOP__core.__PVT__ifid_instr))));
            tracep->chgBit(oldp+130,((0x6fU == (0x7fU 
                                                & vlSymsp->TOP__core.__PVT__ifid_instr))));
            tracep->chgBit(oldp+131,((0x67U == (0x7fU 
                                                & vlSymsp->TOP__core.__PVT__ifid_instr))));
            tracep->chgCData(oldp+132,((0x7fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                 >> 0x19U))),7);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+133,(vlSymsp->TOP__core.__PVT__mem_stall));
            tracep->chgBit(oldp+134,(vlSymsp->TOP__core.__PVT__pipeline_stall));
            tracep->chgBit(oldp+135,(vlSymsp->TOP__core__id_stage_inst.__PVT__is_j));
            tracep->chgBit(oldp+136,(vlSymsp->TOP__core.__PVT__real_is_j));
            tracep->chgQData(oldp+137,(vlSymsp->TOP__core__id_stage_inst.__PVT__in1),64);
            tracep->chgQData(oldp+139,(vlSymsp->TOP__core__id_stage_inst.__PVT__in2),64);
            tracep->chgQData(oldp+141,(vlSymsp->TOP__core.__PVT__mem_out),64);
            tracep->chgBit(oldp+143,(vlSymsp->TOP__core.__Vcellinp__id_ex_reg_inst__flush));
            tracep->chgBit(oldp+144,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__mem_op));
            tracep->chgBit(oldp+145,(vlSymsp->TOP__core__id_stage_inst.__PVT__misprediction));
        }
        tracep->chgBit(oldp+146,(vlTOPp->clk));
        tracep->chgBit(oldp+147,(vlTOPp->rst));
        tracep->chgQData(oldp+148,((((0x6fU == (0x7fU 
                                                & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                     | (IData)(vlSymsp->TOP__core__id_stage_inst.__PVT__misprediction))
                                     ? (vlSymsp->TOP__core.__PVT__ifid_pc 
                                        + vlSymsp->TOP__core__id_stage_inst.__PVT__imm)
                                     : ((0x67U == (0x7fU 
                                                   & vlSymsp->TOP__core.__PVT__ifid_instr))
                                         ? (0xfffffffffffffffeULL 
                                            & (vlSymsp->TOP__core__id_stage_inst.__PVT__in1 
                                               + vlSymsp->TOP__core__id_stage_inst.__PVT__imm))
                                         : 0ULL))),64);
        tracep->chgQData(oldp+150,(((IData)(vlSymsp->TOP__core.__PVT__real_is_j)
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
        tracep->chgQData(oldp+152,(((0U == (0x1fU & 
                                            (vlSymsp->TOP__core.__PVT__ifid_instr 
                                             >> 0xfU)))
                                     ? 0ULL : (((IData)(vlSymsp->TOP__core.__PVT__memwb_reg_write) 
                                                & ((0x1fU 
                                                    & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                       >> 0xfU)) 
                                                   == (IData)(vlSymsp->TOP__core.__PVT__memwb_rd)))
                                                ? vlSymsp->TOP__core.__PVT__wb_data
                                                : vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file
                                               [(0x1fU 
                                                 & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                    >> 0xfU))]))),64);
        tracep->chgQData(oldp+154,(((0U == (0x1fU & 
                                            (vlSymsp->TOP__core.__PVT__ifid_instr 
                                             >> 0x14U)))
                                     ? 0ULL : (((IData)(vlSymsp->TOP__core.__PVT__memwb_reg_write) 
                                                & ((0x1fU 
                                                    & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                       >> 0x14U)) 
                                                   == (IData)(vlSymsp->TOP__core.__PVT__memwb_rd)))
                                                ? vlSymsp->TOP__core.__PVT__wb_data
                                                : vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file
                                               [(0x1fU 
                                                 & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                    >> 0x14U))]))),64);
        tracep->chgBit(oldp+156,(((0x4000U & vlSymsp->TOP__core.__PVT__ifid_instr)
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
                                      & ((0x1000U & vlSymsp->TOP__core.__PVT__ifid_instr)
                                          ? (vlSymsp->TOP__core__id_stage_inst.__PVT__in1 
                                             != vlSymsp->TOP__core__id_stage_inst.__PVT__in2)
                                          : (vlSymsp->TOP__core__id_stage_inst.__PVT__in1 
                                             == vlSymsp->TOP__core__id_stage_inst.__PVT__in2))))));
        tracep->chgQData(oldp+157,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[0]),64);
        tracep->chgQData(oldp+159,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[1]),64);
        tracep->chgQData(oldp+161,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[2]),64);
        tracep->chgQData(oldp+163,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[3]),64);
        tracep->chgQData(oldp+165,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[4]),64);
        tracep->chgQData(oldp+167,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[5]),64);
        tracep->chgQData(oldp+169,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[6]),64);
        tracep->chgQData(oldp+171,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[7]),64);
        tracep->chgQData(oldp+173,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[8]),64);
        tracep->chgQData(oldp+175,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[9]),64);
        tracep->chgQData(oldp+177,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[10]),64);
        tracep->chgQData(oldp+179,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[11]),64);
        tracep->chgQData(oldp+181,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[12]),64);
        tracep->chgQData(oldp+183,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[13]),64);
        tracep->chgQData(oldp+185,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[14]),64);
        tracep->chgQData(oldp+187,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[15]),64);
        tracep->chgQData(oldp+189,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[16]),64);
        tracep->chgQData(oldp+191,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[17]),64);
        tracep->chgQData(oldp+193,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[18]),64);
        tracep->chgQData(oldp+195,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[19]),64);
        tracep->chgQData(oldp+197,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[20]),64);
        tracep->chgQData(oldp+199,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[21]),64);
        tracep->chgQData(oldp+201,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[22]),64);
        tracep->chgQData(oldp+203,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[23]),64);
        tracep->chgQData(oldp+205,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[24]),64);
        tracep->chgQData(oldp+207,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[25]),64);
        tracep->chgQData(oldp+209,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[26]),64);
        tracep->chgQData(oldp+211,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[27]),64);
        tracep->chgQData(oldp+213,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[28]),64);
        tracep->chgQData(oldp+215,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[29]),64);
        tracep->chgQData(oldp+217,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[30]),64);
        tracep->chgQData(oldp+219,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[31]),64);
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
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
