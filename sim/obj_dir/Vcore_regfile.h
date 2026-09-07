// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef _VCORE_REGFILE_H_
#define _VCORE_REGFILE_H_  // guard

#include "verilated_heavy.h"
#include "Vcore__Dpi.h"

//==========

class Vcore__Syms;
class Vcore_VerilatedVcd;


//----------

VL_MODULE(Vcore_regfile) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__write_en,0,0);
    VL_IN8(__PVT__read_addr_1,4,0);
    VL_IN8(__PVT__read_addr_2,4,0);
    VL_IN8(__PVT__write_addr,4,0);
    VL_OUT64(__PVT__read_data_1,63,0);
    VL_OUT64(__PVT__read_data_2,63,0);
    VL_IN64(__PVT__write_data,63,0);
    
    // LOCAL SIGNALS
    QData/*63:0*/ reg_file[32];
    
    // INTERNAL VARIABLES
  private:
    Vcore__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcore_regfile);  ///< Copying not allowed
  public:
    Vcore_regfile(const char* name = "TOP");
    ~Vcore_regfile();
    
    // INTERNAL METHODS
    void __Vconfigure(Vcore__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__core__id_stage_inst__regfile_inst__1(Vcore__Syms* __restrict vlSymsp);
    static void _sequent__TOP__core__id_stage_inst__regfile_inst__2(Vcore__Syms* __restrict vlSymsp);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
