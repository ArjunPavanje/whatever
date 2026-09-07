#include "Vcore.h"
#include "Vcore_core.h"
#include "Vcore_id_stage.h"
#include "Vcore_regfile.h"
#include "verilated.h"
#include <cstdio>

static uint64_t sim_time = 0;
static void tick(Vcore* dut) {
    dut->clk = 0; dut->eval(); sim_time++;
    dut->clk = 1; dut->eval(); sim_time++;
}
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vcore* dut = new Vcore;
    dut->rst = 1; dut->clk = 0;
    for (int i = 0; i < 5; i++) tick(dut);
    dut->rst = 0;
    for (int i = 0; i < 20; i++) {
        tick(dut);
        printf("C%d: PC=%lx instr=%08x wb_en=%d wb_addr=%d alu_out=%lx mem_out=%lx\n",
            i, 
            dut->core->__PVT__if_stage_inst__DOT__pc_curr,
            dut->core->__PVT__ifid_instr,
            dut->core->__PVT__memwb_reg_write,
            dut->core->__PVT__memwb_rd,
            dut->core->__PVT__memwb_alu_out,
            dut->core->__PVT__memwb_mem_out);
    }
    dut->final(); delete dut; return 0;
}
