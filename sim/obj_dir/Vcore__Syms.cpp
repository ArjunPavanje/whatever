// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcore__Syms.h"
#include "Vcore.h"
#include "Vcore_core.h"
#include "Vcore_id_stage.h"
#include "Vcore_regfile.h"



// FUNCTIONS
Vcore__Syms::Vcore__Syms(Vcore* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__core(Verilated::catName(topp->name(), "core"))
    , TOP__core__id_stage_inst(Verilated::catName(topp->name(), "core.id_stage_inst"))
    , TOP__core__id_stage_inst__regfile_inst(Verilated::catName(topp->name(), "core.id_stage_inst.regfile_inst"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->core = &TOP__core;
    TOPp->core->id_stage_inst = &TOP__core__id_stage_inst;
    TOPp->core->id_stage_inst->regfile_inst = &TOP__core__id_stage_inst__regfile_inst;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__core.__Vconfigure(this, true);
    TOP__core__id_stage_inst.__Vconfigure(this, true);
    TOP__core__id_stage_inst__regfile_inst.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_core__id_stage_inst__regfile_inst.configure(this, name(), "core.id_stage_inst.regfile_inst", "regfile_inst", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_core__id_stage_inst__regfile_inst.varInsert(__Vfinal,"reg_file", &(TOP__core__id_stage_inst__regfile_inst.reg_file), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,2 ,63,0 ,31,0);
    }
}
