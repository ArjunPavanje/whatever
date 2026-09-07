#include "Vcore.h"
#include "Vcore_core.h"
#include "Vcore_id_stage.h"
#include "Vcore_regfile.h"
#include "verilated.h"
#if VM_TRACE
#include <verilated_vcd_c.h>
#endif
#include <cstdio>
#include <cstdint>
#include <cstring>

static uint64_t sim_time = 0;
#if VM_TRACE
static VerilatedVcdC* tfp = nullptr;
#endif

static void tick(Vcore* dut) {
    dut->clk = 0; dut->eval(); 
#if VM_TRACE
    if (tfp) tfp->dump(sim_time);
#endif
    sim_time++;
    
    dut->clk = 1; dut->eval(); 
#if VM_TRACE
    if (tfp) tfp->dump(sim_time);
#endif
    sim_time++;
}

static uint64_t read_reg(Vcore* dut, int idx) {
    return dut->core->id_stage_inst->regfile_inst->reg_file[idx];
}

static uint8_t read_dmem(Vcore* dut, int byte_idx) {
    return dut->core->__PVT__mem_stage_inst__DOT__mem[byte_idx];
}

static int pass_count = 0, fail_count = 0;

static void check(const char* name, uint64_t got, uint64_t expected) {
    if (got == expected) {
        printf("[PASS] %-20s  got=0x%016llX\n", name, (unsigned long long)got);
        pass_count++;
    } else {
        printf("[FAIL] %-20s  got=0x%016llX  expected=0x%016llX\n",
               name,
               (unsigned long long)got,
               (unsigned long long)expected);
        fail_count++;
    }
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    Vcore* dut = new Vcore;

#if VM_TRACE
    Verilated::traceEverOn(true);
    tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("sim/core_trace.vcd");
#endif

    dut->rst = 1;
    dut->clk = 0;
    for (int i = 0; i < 5; i++) tick(dut);
    dut->rst = 0;

    for (int i = 0; i < 60; i++) tick(dut);

    printf("\n=== Register file checks ===\n");
    check("x1 (10)",         read_reg(dut, 1), 10);
    check("x2 (20)",         read_reg(dut, 2), 20);
    check("x3 (10+20)",      read_reg(dut, 3), 30);
    check("x4 (10-20)",      read_reg(dut, 4), 0xFFFFFFFFFFFFFFF6ULL);
    check("x5 (10<<20)",     read_reg(dut, 5), 10485760);
    check("x6 (30+10)",      read_reg(dut, 6), 40);
    check("x7 (LD 10<<20)",  read_reg(dut, 7), 10485760);

    printf("\n=== Summary: %d passed, %d failed ===\n\n", pass_count, fail_count);

    dut->final();
#if VM_TRACE
    if (tfp) {
        tfp->close();
        delete tfp;
    }
#endif
    delete dut;
    return (fail_count > 0) ? 1 : 0;
}
