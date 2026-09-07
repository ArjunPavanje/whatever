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
            tracep->chgQData(oldp+3,(vlSymsp->TOP__core.__PVT__ifid_pc),64);
            tracep->chgIData(oldp+5,(vlSymsp->TOP__core.__PVT__ifid_instr),32);
            tracep->chgQData(oldp+6,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.__PVT__read_data_2),64);
            tracep->chgQData(oldp+8,(vlSymsp->TOP__core__id_stage_inst.__PVT__imm),64);
            tracep->chgCData(oldp+10,(vlSymsp->TOP__core__id_stage_inst.__PVT__alu_sel),5);
            tracep->chgBit(oldp+11,((((((0x13U == (0x7fU 
                                                   & vlSymsp->TOP__core.__PVT__ifid_instr)) 
                                        | (3U == (0x7fU 
                                                  & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                       | (0x23U == 
                                          (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                      | (0x17U == (0x7fU 
                                                   & vlSymsp->TOP__core.__PVT__ifid_instr))) 
                                     | (0x67U == (0x7fU 
                                                  & vlSymsp->TOP__core.__PVT__ifid_instr)))));
            tracep->chgCData(oldp+12,((0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                >> 7U))),5);
            tracep->chgBit(oldp+13,((((((((0x33U == 
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
            tracep->chgBit(oldp+14,((3U == (0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr))));
            tracep->chgBit(oldp+15,((0x23U == (0x7fU 
                                               & vlSymsp->TOP__core.__PVT__ifid_instr))));
            tracep->chgBit(oldp+16,((0x37U == (0x7fU 
                                               & vlSymsp->TOP__core.__PVT__ifid_instr))));
            tracep->chgBit(oldp+17,((0x17U == (0x7fU 
                                               & vlSymsp->TOP__core.__PVT__ifid_instr))));
            tracep->chgCData(oldp+18,((7U & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+19,(vlSymsp->TOP__core.__PVT__memwb_reg_write));
            tracep->chgCData(oldp+20,(vlSymsp->TOP__core.__PVT__memwb_rd),5);
            tracep->chgQData(oldp+21,(((IData)(vlSymsp->TOP__core.__PVT__memwb_mem_to_reg)
                                        ? vlSymsp->TOP__core.__PVT__memwb_mem_out
                                        : vlSymsp->TOP__core.__PVT__memwb_alu_out)),64);
            tracep->chgIData(oldp+23,(vlSymsp->TOP__core.__PVT__idex_instr),32);
            tracep->chgQData(oldp+24,(vlSymsp->TOP__core.__PVT__idex_pc),64);
            tracep->chgQData(oldp+26,(vlSymsp->TOP__core.__PVT__idex_imm),64);
            tracep->chgQData(oldp+28,(vlSymsp->TOP__core.__PVT__idex_in1),64);
            tracep->chgQData(oldp+30,(vlSymsp->TOP__core.__PVT__idex_in2),64);
            tracep->chgQData(oldp+32,(vlSymsp->TOP__core.__PVT__idex_write_data),64);
            tracep->chgBit(oldp+34,(vlSymsp->TOP__core.__PVT__idex_alu_src));
            tracep->chgBit(oldp+35,(vlSymsp->TOP__core.__PVT__idex_is_lui));
            tracep->chgBit(oldp+36,(vlSymsp->TOP__core.__PVT__idex_is_auipc));
            tracep->chgCData(oldp+37,(vlSymsp->TOP__core.__PVT__idex_alu_sel),5);
            tracep->chgBit(oldp+38,(vlSymsp->TOP__core.__PVT__idex_mem_write));
            tracep->chgBit(oldp+39,(vlSymsp->TOP__core.__PVT__idex_mem_read));
            tracep->chgBit(oldp+40,(vlSymsp->TOP__core.__PVT__idex_reg_write));
            tracep->chgBit(oldp+41,(vlSymsp->TOP__core.__PVT__idex_mem_to_reg));
            tracep->chgCData(oldp+42,(vlSymsp->TOP__core.__PVT__idex_rd),5);
            tracep->chgCData(oldp+43,(vlSymsp->TOP__core.__PVT__idex_funct3),3);
            tracep->chgQData(oldp+44,(((0x10U & (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel))
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
            tracep->chgCData(oldp+46,(vlSymsp->TOP__core.__PVT__exmem_funct3),3);
            tracep->chgBit(oldp+47,(vlSymsp->TOP__core.__PVT__exmem_mem_write));
            tracep->chgBit(oldp+48,(vlSymsp->TOP__core.__PVT__exmem_mem_read));
            tracep->chgQData(oldp+49,(vlSymsp->TOP__core.__PVT__exmem_write_data),64);
            tracep->chgQData(oldp+51,(vlSymsp->TOP__core.__PVT__exmem_alu_out),64);
            tracep->chgCData(oldp+53,(vlSymsp->TOP__core.__PVT__exmem_rd),5);
            tracep->chgBit(oldp+54,(vlSymsp->TOP__core.__PVT__exmem_reg_write));
            tracep->chgBit(oldp+55,(vlSymsp->TOP__core.__PVT__exmem_mem_to_reg));
            tracep->chgQData(oldp+56,(vlSymsp->TOP__core.__PVT__memwb_mem_out),64);
            tracep->chgQData(oldp+58,(vlSymsp->TOP__core.__PVT__memwb_alu_out),64);
            tracep->chgBit(oldp+60,(vlSymsp->TOP__core.__PVT__memwb_mem_to_reg));
            tracep->chgQData(oldp+61,((4ULL + vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr)),64);
            tracep->chgSData(oldp+63,((0x7fffU & (IData)(
                                                         (vlSymsp->TOP__core.__PVT__if_stage_inst__DOT__pc_curr 
                                                          >> 2U)))),15);
            tracep->chgQData(oldp+64,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1),64);
            tracep->chgQData(oldp+66,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2),64);
            tracep->chgQData(oldp+68,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                       + vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
            tracep->chgQData(oldp+70,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                       - vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
            tracep->chgQData(oldp+72,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                       ^ vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
            tracep->chgQData(oldp+74,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                       & vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
            tracep->chgQData(oldp+76,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                       | vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)),64);
            tracep->chgQData(oldp+78,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                       << (0x3fU & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
            tracep->chgQData(oldp+80,((vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                       >> (0x3fU & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
            tracep->chgQData(oldp+82,(VL_SHIFTRS_QQI(64,64,6, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1, 
                                                     (0x3fU 
                                                      & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
            tracep->chgQData(oldp+84,((QData)((IData)(
                                                      VL_LTS_IQQ(1,64,64, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1, vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
            tracep->chgQData(oldp+86,((QData)((IData)(
                                                      (vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in1 
                                                       < vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2)))),64);
            tracep->chgQData(oldp+88,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_out),64);
            tracep->chgCData(oldp+90,((3U & (2U ^ (IData)(vlSymsp->TOP__core.__PVT__idex_alu_sel)))),2);
            tracep->chgCData(oldp+91,((0x3fU & (IData)(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_in2))),6);
            tracep->chgWData(oldp+92,(vlSymsp->TOP__core.__PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full),128);
            tracep->chgCData(oldp+96,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes),4);
            tracep->chgBit(oldp+97,((1U & ((IData)(vlSymsp->TOP__core.__PVT__exmem_funct3) 
                                           >> 2U))));
            tracep->chgSData(oldp+98,((0x7fffU & (IData)(vlSymsp->TOP__core.__PVT__exmem_alu_out))),15);
            tracep->chgIData(oldp+99,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__i),32);
            tracep->chgQData(oldp+100,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read),64);
            tracep->chgBit(oldp+102,((1U & ((8U & (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))
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
            tracep->chgQData(oldp+103,(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__sext_mask),64);
            tracep->chgBit(oldp+105,((8U <= (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))));
            tracep->chgQData(oldp+106,(((1U & (((IData)(vlSymsp->TOP__core.__PVT__exmem_funct3) 
                                                >> 2U) 
                                               | (8U 
                                                  <= (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))))
                                         ? vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read
                                         : (vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                                            | vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__sext_mask))),64);
            tracep->chgCData(oldp+108,((0x7fU & vlSymsp->TOP__core.__PVT__ifid_instr)),7);
            tracep->chgCData(oldp+109,((0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+110,((0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+111,((0x7fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                                 >> 0x19U))),7);
        }
        tracep->chgBit(oldp+112,(vlTOPp->clk));
        tracep->chgBit(oldp+113,(vlTOPp->rst));
        tracep->chgQData(oldp+114,(((0U == (0x1fU & 
                                            (vlSymsp->TOP__core.__PVT__ifid_instr 
                                             >> 0xfU)))
                                     ? 0ULL : vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file
                                    [(0x1fU & (vlSymsp->TOP__core.__PVT__ifid_instr 
                                               >> 0xfU))])),64);
        tracep->chgQData(oldp+116,((((IData)(vlSymsp->TOP__core.__PVT__exmem_mem_read) 
                                     & (~ (IData)(vlTOPp->rst)))
                                     ? ((1U & (((IData)(vlSymsp->TOP__core.__PVT__exmem_funct3) 
                                                >> 2U) 
                                               | (8U 
                                                  <= (IData)(vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__access_bytes))))
                                         ? vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read
                                         : (vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__raw_read 
                                            | vlSymsp->TOP__core.__PVT__mem_stage_inst__DOT__sext_mask))
                                     : 0ULL)),64);
        tracep->chgQData(oldp+118,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[0]),64);
        tracep->chgQData(oldp+120,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[1]),64);
        tracep->chgQData(oldp+122,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[2]),64);
        tracep->chgQData(oldp+124,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[3]),64);
        tracep->chgQData(oldp+126,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[4]),64);
        tracep->chgQData(oldp+128,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[5]),64);
        tracep->chgQData(oldp+130,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[6]),64);
        tracep->chgQData(oldp+132,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[7]),64);
        tracep->chgQData(oldp+134,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[8]),64);
        tracep->chgQData(oldp+136,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[9]),64);
        tracep->chgQData(oldp+138,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[10]),64);
        tracep->chgQData(oldp+140,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[11]),64);
        tracep->chgQData(oldp+142,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[12]),64);
        tracep->chgQData(oldp+144,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[13]),64);
        tracep->chgQData(oldp+146,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[14]),64);
        tracep->chgQData(oldp+148,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[15]),64);
        tracep->chgQData(oldp+150,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[16]),64);
        tracep->chgQData(oldp+152,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[17]),64);
        tracep->chgQData(oldp+154,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[18]),64);
        tracep->chgQData(oldp+156,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[19]),64);
        tracep->chgQData(oldp+158,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[20]),64);
        tracep->chgQData(oldp+160,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[21]),64);
        tracep->chgQData(oldp+162,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[22]),64);
        tracep->chgQData(oldp+164,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[23]),64);
        tracep->chgQData(oldp+166,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[24]),64);
        tracep->chgQData(oldp+168,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[25]),64);
        tracep->chgQData(oldp+170,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[26]),64);
        tracep->chgQData(oldp+172,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[27]),64);
        tracep->chgQData(oldp+174,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[28]),64);
        tracep->chgQData(oldp+176,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[29]),64);
        tracep->chgQData(oldp+178,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[30]),64);
        tracep->chgQData(oldp+180,(vlSymsp->TOP__core__id_stage_inst__regfile_inst.reg_file[31]),64);
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
