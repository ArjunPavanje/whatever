#!/usr/bin/env bash
# run_sim.sh — compile assembly, verilate, and run the simulation

set -e
REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
BUILD_DIR="${REPO_ROOT}/sim/obj_dir"
WAVES=1

echo "=== Compiling Assembly ==="
riscv64-unknown-elf-gcc -march=rv64i -mabi=lp64 -nostdlib -nostartfiles -Ttext=0 -o "${REPO_ROOT}/tests/test.elf" "${REPO_ROOT}/tests/test.S"
riscv64-unknown-elf-objcopy -O binary "${REPO_ROOT}/tests/test.elf" "${REPO_ROOT}/tests/test.bin"
xxd -e -c 4 -g 4 "${REPO_ROOT}/tests/test.bin" | awk '{print $2}' > "${REPO_ROOT}/tests/program.hex"

echo "=== Verilating ==="
verilator \
    --cc \
    --exe \
    --build \
    -DSIMULATION \
    --top-module core \
    -Wno-WIDTH \
    -Wno-CASEINCOMPLETE \
    -Wno-UNOPTFLAT \
    $([ $WAVES -eq 1 ] && echo "--trace") \
    -I"${REPO_ROOT}/core/alu" \
    -I"${REPO_ROOT}/core/regfile" \
    -I"${REPO_ROOT}/core/stages" \
    -I"${REPO_ROOT}/core/pipeline" \
    "${REPO_ROOT}/core/alu/add.v" \
    "${REPO_ROOT}/core/alu/sub.v" \
    "${REPO_ROOT}/core/alu/addsub.v" \
    "${REPO_ROOT}/core/alu/_and.v" \
    "${REPO_ROOT}/core/alu/_or.v" \
    "${REPO_ROOT}/core/alu/_xor.v" \
    "${REPO_ROOT}/core/alu/shift_left.v" \
    "${REPO_ROOT}/core/alu/shift_right.v" \
    "${REPO_ROOT}/core/alu/shift_right_arith.v" \
    "${REPO_ROOT}/core/alu/slt.v" \
    "${REPO_ROOT}/core/alu/sltu.v" \
    "${REPO_ROOT}/core/alu/mul.v" \
    "${REPO_ROOT}/core/alu/alu_cntrl.v" \
    "${REPO_ROOT}/core/alu/alu.v" \
    "${REPO_ROOT}/core/regfile/regfile.v" \
    "${REPO_ROOT}/core/stages/immgen.v" \
    "${REPO_ROOT}/core/stages/ex_stage.v" \
    "${REPO_ROOT}/core/stages/id_stage.v" \
    "${REPO_ROOT}/core/stages/if_stage.v" \
    "${REPO_ROOT}/core/stages/mem_stage.v" \
    "${REPO_ROOT}/core/stages/wb_stage.v" \
    "${REPO_ROOT}/core/pipeline/if_id_reg.v" \
    "${REPO_ROOT}/core/pipeline/id_ex_reg.v" \
    "${REPO_ROOT}/core/pipeline/ex_mem_reg.v" \
    "${REPO_ROOT}/core/pipeline/mem_wb_reg.v" \
    "${REPO_ROOT}/core/core.v" \
    "${REPO_ROOT}/sim/tb_core.cpp" \
    --Mdir "${BUILD_DIR}"

echo ""
echo "=== Running simulation ==="
cd "${REPO_ROOT}"
"${BUILD_DIR}/Vcore"
