// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef _VCORE_CORE_H_
#define _VCORE_CORE_H_  // guard

#include "verilated_heavy.h"
#include "Vcore__Dpi.h"

//==========

class Vcore__Syms;
class Vcore_VerilatedVcd;
class Vcore_id_stage;


//----------

VL_MODULE(Vcore_core) {
  public:
    // CELLS
    Vcore_id_stage* id_stage_inst;
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__idex_alu_src;
    CData/*0:0*/ __PVT__idex_is_lui;
    CData/*0:0*/ __PVT__idex_is_auipc;
    CData/*4:0*/ __PVT__idex_alu_sel;
    CData/*0:0*/ __PVT__idex_mem_write;
    CData/*0:0*/ __PVT__idex_mem_read;
    CData/*0:0*/ __PVT__idex_reg_write;
    CData/*0:0*/ __PVT__idex_mem_to_reg;
    CData/*4:0*/ __PVT__idex_rd;
    CData/*2:0*/ __PVT__idex_funct3;
    CData/*2:0*/ __PVT__exmem_funct3;
    CData/*0:0*/ __PVT__exmem_mem_write;
    CData/*0:0*/ __PVT__exmem_mem_read;
    CData/*4:0*/ __PVT__exmem_rd;
    CData/*0:0*/ __PVT__exmem_reg_write;
    CData/*0:0*/ __PVT__exmem_mem_to_reg;
    CData/*4:0*/ __PVT__memwb_rd;
    CData/*0:0*/ __PVT__memwb_reg_write;
    CData/*0:0*/ __PVT__memwb_mem_to_reg;
    CData/*3:0*/ __PVT__mem_stage_inst__DOT__access_bytes;
    IData/*31:0*/ __PVT__ifid_instr;
    IData/*31:0*/ __PVT__idex_instr;
    WData/*127:0*/ __PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_alu__DOT__product_full[4];
    IData/*31:0*/ __PVT__mem_stage_inst__DOT__i;
    QData/*63:0*/ __PVT__ifid_pc;
    QData/*63:0*/ __PVT__idex_pc;
    QData/*63:0*/ __PVT__idex_imm;
    QData/*63:0*/ __PVT__idex_in1;
    QData/*63:0*/ __PVT__idex_in2;
    QData/*63:0*/ __PVT__idex_write_data;
    QData/*63:0*/ __PVT__exmem_write_data;
    QData/*63:0*/ __PVT__exmem_alu_out;
    QData/*63:0*/ __PVT__memwb_mem_out;
    QData/*63:0*/ __PVT__memwb_alu_out;
    QData/*63:0*/ __PVT__if_stage_inst__DOT__pc_curr;
    QData/*63:0*/ __PVT__if_stage_inst__DOT__pc_next;
    QData/*63:0*/ __PVT__ex_stage_inst__DOT__alu_in1;
    QData/*63:0*/ __PVT__ex_stage_inst__DOT__alu_in2;
    QData/*63:0*/ __PVT__ex_stage_inst__DOT__alu_alu__DOT__mul_out;
    QData/*63:0*/ __PVT__mem_stage_inst__DOT__raw_read;
    QData/*63:0*/ __PVT__mem_stage_inst__DOT__sext_mask;
    IData/*31:0*/ __PVT__if_stage_inst__DOT__mem[32768];
    CData/*7:0*/ __PVT__mem_stage_inst__DOT__mem[32768];
    
    // LOCAL VARIABLES
    CData/*4:0*/ __Vtableidx1;
    static QData/*63:0*/ __Vtable1___PVT__mem_stage_inst__DOT__sext_mask[32];
    
    // INTERNAL VARIABLES
  private:
    Vcore__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcore_core);  ///< Copying not allowed
  public:
    Vcore_core(const char* name = "TOP");
    ~Vcore_core();
    
    // INTERNAL METHODS
    void __Vconfigure(Vcore__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__core__1(Vcore__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__core__2(Vcore__Syms* __restrict vlSymsp);
    static void _sequent__TOP__core__3(Vcore__Syms* __restrict vlSymsp);
    static void _settle__TOP__core__4(Vcore__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
