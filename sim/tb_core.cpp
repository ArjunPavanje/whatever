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
#include <fstream>
#include <iostream>
#include <vector>
#include <string>

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

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    Vcore* dut = new Vcore;

#if VM_TRACE
    Verilated::traceEverOn(true);
    tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("sim/core_trace.vcd");
#endif

    // Load expected register values generated dynamically from reference simulation
    std::vector<uint64_t> expected_regs(32, 0);
    std::ifstream hex_in("tests/expected_regs.hex");
    if (hex_in.is_open()) {
        std::string line;
        int idx = 0;
        while (std::getline(hex_in, line) && idx < 32) {
            if (!line.empty()) {
                expected_regs[idx] = std::stoull(line, nullptr, 16);
                idx++;
            }
        }
        hex_in.close();
    }

    dut->rst = 1;
    dut->clk = 0;
    for (int i = 0; i < 5; i++) tick(dut);
    dut->rst = 0;

    // Run simulation until PC halts (self-loop) or max cycle count reached
    uint64_t prev_pc = 0xFFFFFFFFFFFFFFFFULL;
    int same_pc_count = 0;
    int max_cycles = 500;

    for (int i = 0; i < max_cycles; i++) {
        tick(dut);
        uint64_t curr_pc = dut->core->__PVT__ifid_pc;
        if (curr_pc == prev_pc) {
            same_pc_count++;
            if (same_pc_count >= 10) {
                // Program reached infinite self-loop / halt
                break;
            }
        } else {
            same_pc_count = 0;
            prev_pc = curr_pc;
        }
    }

    int pass_count = 0, fail_count = 0;
    printf("\n============================ Register File State (x0 - x31) ============================\n");
    printf("%-6s  %-20s  %-20s  %-8s\n", "Reg", "Hardware Value", "Expected Value", "Status");
    printf("----------------------------------------------------------------------------------------\n");

    for (int i = 0; i < 32; i++) {
        uint64_t got = read_reg(dut, i);
        uint64_t exp = expected_regs[i];
        bool ok = (got == exp);
        if (ok) pass_count++;
        else fail_count++;

        printf("x%-5d  0x%016llX    0x%016llX    [%s]\n",
               i,
               (unsigned long long)got,
               (unsigned long long)exp,
               ok ? "PASS" : "FAIL");
    }

    printf("========================================================================================\n");
    printf("Summary: %d passed, %d failed out of 32 registers\n\n", pass_count, fail_count);

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
