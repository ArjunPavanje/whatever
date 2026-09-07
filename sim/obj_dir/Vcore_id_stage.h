// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef _VCORE_ID_STAGE_H_
#define _VCORE_ID_STAGE_H_  // guard

#include "verilated_heavy.h"
#include "Vcore__Dpi.h"

//==========

class Vcore__Syms;
class Vcore_VerilatedVcd;
class Vcore_regfile;


//----------

VL_MODULE(Vcore_id_stage) {
  public:
    // CELLS
    Vcore_regfile* regfile_inst;
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__wb_en,0,0);
    VL_IN8(__PVT__wb_addr,4,0);
    VL_OUT8(__PVT__alu_sel,4,0);
    VL_OUT8(__PVT__alu_src,0,0);
    VL_OUT8(__PVT__rd_addr,4,0);
    VL_OUT8(__PVT__reg_write,0,0);
    VL_OUT8(__PVT__mem_read,0,0);
    VL_OUT8(__PVT__mem_write,0,0);
    VL_OUT8(__PVT__mem_to_reg,0,0);
    VL_OUT8(__PVT__funct3,2,0);
    VL_OUT8(__PVT__is_lui,0,0);
    VL_OUT8(__PVT__is_auipc,0,0);
    VL_IN(__PVT__instr,31,0);
    VL_IN64(__PVT__wb_data,63,0);
    VL_OUT64(__PVT__in1,63,0);
    VL_OUT64(__PVT__in2,63,0);
    VL_OUT64(__PVT__imm,63,0);
    
    // INTERNAL VARIABLES
  private:
    Vcore__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcore_id_stage);  ///< Copying not allowed
  public:
    Vcore_id_stage(const char* name = "TOP");
    ~Vcore_id_stage();
    
    // INTERNAL METHODS
    void __Vconfigure(Vcore__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__core__id_stage_inst__1(Vcore__Syms* __restrict vlSymsp);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
