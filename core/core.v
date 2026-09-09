/*
* core.v — top-level unpipelined-datapath-with-pipeline-registers RV32/64 core
*
* Stage order: IF -> IF/ID -> ID -> ID/EX -> EX -> EX/MEM -> MEM -> MEM/WB -> WB
* WB writes back into the regfile inside ID stage (regfile physically lives
* in id_stage.v), so wb_data/wb_addr/wb_en loop back from wb_stage into id_stage.
*
* NOTE: no forwarding, no stall/hazard logic, no branch/jump support wired
* yet (ex_stage currently only produces LUI/AUIPC-correct ALU output).
* stall/rst ports on all pipeline registers are tied off (stall=0) since
* the hazard unit doesn't exist yet — back-to-back dependent instructions
* and loads-then-use will silently compute wrong results until forwarding
* is added. Fine for first bring-up with independent instructions.
*/

module core #(
        parameter BUS_WIDTH     = 64,
        parameter INSTR_WIDTH   = 32,
        parameter ALU_SEL       = 5,
        parameter REGFILE_LEN   = 5,
        parameter INSTR_MEM_LEN = 15,
        parameter DATA_MEM_LEN  = 15
)(
        input wire clk,
        input wire rst
);

        // Hazard/stall stub — tie off until hazard_unit exists
        wire stall = 1'b0;

        // ================================================================
        // IF stage
        // ================================================================
        wire [BUS_WIDTH-1:0]   if_pc;
        wire [INSTR_WIDTH-1:0] if_instr;

        // Wires routed back from ID stage for early branch resolution
        wire                   id_is_j;
        wire [BUS_WIDTH-1:0]   id_pc_dst;

        if_stage #(
                .BUS_WIDTH    (BUS_WIDTH),
                .INSTR_WIDTH  (INSTR_WIDTH),
                .INSTR_MEM_LEN(INSTR_MEM_LEN)
        ) if_stage_inst (
                .clk    (clk),
                .rst    (rst),
                .stall  (stall),
                .pc_jmp (id_is_j),     // Routed from ID
                .pc_dst (id_pc_dst),   // Routed from ID
                .pc     (if_pc),
                .instr  (if_instr)
        );

        // ================================================================
        // IF/ID pipeline register
        // ================================================================
        wire [BUS_WIDTH-1:0]   ifid_pc;
        wire [INSTR_WIDTH-1:0] ifid_instr;

        if_id_reg #(
                .BUS_WIDTH  (BUS_WIDTH),
                .INSTR_WIDTH(INSTR_WIDTH)
        ) if_id_reg_inst (
                .clk      (clk),
                .rst      (rst),
                .stall    (stall),
		.flush(id_is_j),

                .in_pc    (if_pc),
                .in_instr (if_instr),
                .out_pc   (ifid_pc),
                .out_instr(ifid_instr)
        );

        // ================================================================
        // ID stage
        // ================================================================
        wire [BUS_WIDTH-1:0]   id_in1, id_in2, id_imm;
        wire [ALU_SEL-1:0]     id_alu_sel;
        wire                   id_alu_src;
        wire [REGFILE_LEN-1:0] id_rd_addr;
        wire                   id_reg_write, id_mem_read, id_mem_write, id_mem_to_reg;
        wire                   id_is_lui, id_is_auipc;
        wire [2:0]             id_funct3;

        // WB loop-back (declared here, driven at bottom by wb_stage/mem_wb_reg)
        wire                   wb_en;
        wire [REGFILE_LEN-1:0] wb_addr;
        wire [BUS_WIDTH-1:0]   wb_data;

        id_stage #(
                .BUS_WIDTH  (BUS_WIDTH),
                .INSTR_WIDTH(INSTR_WIDTH),
                .ALU_SEL    (ALU_SEL)
        ) id_stage_inst (
                .clk        (clk),
                .rst        (rst),
                .instr      (ifid_instr),

                .wb_en      (wb_en),
                .wb_addr    (wb_addr),
                .wb_data    (wb_data),
                .pc         (ifid_pc),       // Passes pipelined PC to ID

                .in1        (id_in1),
                .in2        (id_in2),
                .imm        (id_imm),
                .alu_sel    (id_alu_sel),
                .alu_src   (id_alu_src),
                .rd_addr    (id_rd_addr),

                .reg_write  (id_reg_write),
                .mem_read   (id_mem_read),
                .mem_write  (id_mem_write),
                .mem_to_reg (id_mem_to_reg),
                .funct3     (id_funct3),

                .pc_dst     (id_pc_dst),     // Fixed typo and outputs target
                .is_j       (id_is_j),
                .is_lui     (id_is_lui),
                .is_auipc   (id_is_auipc)
        );

        // ================================================================
        // ID/EX pipeline register
        // ================================================================
        wire [INSTR_WIDTH-1:0] idex_instr;
        wire [BUS_WIDTH-1:0]   idex_pc, idex_imm, idex_in1, idex_in2, idex_write_data;
        wire                   idex_alu_src, idex_is_j, idex_is_lui, idex_is_auipc;
        wire [ALU_SEL-1:0]     idex_alu_sel;
        wire                   idex_mem_write, idex_mem_read, idex_reg_write, idex_mem_to_reg;
        wire [REGFILE_LEN-1:0] idex_rd;
        wire [2:0]             idex_funct3;

        id_ex_reg #(
                .BUS_WIDTH  (BUS_WIDTH),
                .INSTR_WIDTH(INSTR_WIDTH),
                .ALU_SEL    (ALU_SEL),
                .REGFILE_LEN(REGFILE_LEN)
        ) id_ex_reg_inst (
                .clk           (clk),
                .rst           (rst),
                .stall         (stall),

                .in_instr      (ifid_instr),
                .in_pc         (ifid_pc),
                .in_imm        (id_imm),
                .in_in1        (id_in1),
                .in_in2        (id_in2),
                .in_alu_src    (id_alu_src),
                .in_alu_sel    (id_alu_sel),
		.in_is_j(id_is_j),
                .in_is_lui     (id_is_lui),
                .in_is_auipc   (id_is_auipc),
                .in_funct3     (id_funct3),

                .in_mem_write  (id_mem_write),
                .in_mem_read   (id_mem_read),
                .in_write_data (id_in2),

                .in_rd         (id_rd_addr),
                .in_reg_write  (id_reg_write),
                .in_mem_to_reg (id_mem_to_reg),

                .out_instr     (idex_instr),
                .out_pc        (idex_pc),
                .out_imm       (idex_imm),
                .out_in1       (idex_in1),
                .out_in2       (idex_in2),
                .out_alu_src   (idex_alu_src),
                .out_alu_sel   (idex_alu_sel),
		.out_is_j (idex_is_j),
                .out_is_lui    (idex_is_lui),
                .out_is_auipc  (idex_is_auipc),
                .out_funct3    (idex_funct3),

                .out_mem_write (idex_mem_write),
                .out_mem_read  (idex_mem_read),
                .out_write_data(idex_write_data),

                .out_rd        (idex_rd),
                .out_reg_write (idex_reg_write),
                .out_mem_to_reg(idex_mem_to_reg)
        );

        // ================================================================
        // EX stage
        // ================================================================
        wire [BUS_WIDTH-1:0] ex_out;

        ex_stage #(
                .BUS_WIDTH(BUS_WIDTH),
                .ALU_SEL  (ALU_SEL)
        ) ex_stage_inst (
                .in1      (idex_in1),
                .in2      (idex_in2),
                .imm      (idex_imm),
                .alu_sel  (idex_alu_sel),
                .alu_src  (idex_alu_src),
		.is_j (idex_is_j),
                .is_lui   (idex_is_lui),
                .is_auipc (idex_is_auipc),
                .pc       (idex_pc),
                .out      (ex_out)
        );

        // ================================================================
        // EX/MEM pipeline register
        // ================================================================
        wire [2:0]             exmem_funct3;
        wire                   exmem_mem_write, exmem_mem_read;
        wire [BUS_WIDTH-1:0]   exmem_write_data, exmem_alu_out;
        wire [REGFILE_LEN-1:0] exmem_rd;
        wire                   exmem_reg_write, exmem_mem_to_reg;

        ex_mem_reg #(
                .BUS_WIDTH  (BUS_WIDTH),
                .REGFILE_LEN(REGFILE_LEN)
        ) ex_mem_reg_inst (
                .clk           (clk),
                .rst           (rst),
                .stall         (stall),

                .in_funct3     (idex_funct3),
                .in_mem_write  (idex_mem_write),
                .in_mem_read   (idex_mem_read),
                .in_write_data (idex_write_data),

                .in_alu_out    (ex_out),
                .in_rd         (idex_rd),
                .in_reg_write  (idex_reg_write),
                .in_mem_to_reg (idex_mem_to_reg),

                .out_funct3    (exmem_funct3),
                .out_mem_write (exmem_mem_write),
                .out_mem_read  (exmem_mem_read),
                .out_write_data(exmem_write_data),

                .out_alu_out   (exmem_alu_out),
                .out_rd        (exmem_rd),
                .out_reg_write (exmem_reg_write),
                .out_mem_to_reg(exmem_mem_to_reg)
        );

        // ================================================================
        // MEM stage
        // ================================================================
        wire [BUS_WIDTH-1:0] mem_out, mem_alu_out;

        mem_stage #(
                .BUS_WIDTH   (BUS_WIDTH),
                .DATA_MEM_LEN(DATA_MEM_LEN)
        ) mem_stage_inst (
                .clk       (clk),
                .rst       (rst),
                .mem_write (exmem_mem_write),
                .mem_read  (exmem_mem_read),
                .funct3    (exmem_funct3),
                .alu_op    (exmem_alu_out),
                .write_data(exmem_write_data),
                .addr      (exmem_alu_out),
                .mem_out   (mem_out),
                .alu_out   (mem_alu_out)
        );

        // ================================================================
        // MEM/WB pipeline register
        // ================================================================
        wire [BUS_WIDTH-1:0]   memwb_mem_out, memwb_alu_out;
        wire [REGFILE_LEN-1:0] memwb_rd;
        wire                   memwb_reg_write, memwb_mem_to_reg;

        mem_wb_reg #(
                .BUS_WIDTH  (BUS_WIDTH),
                .REGFILE_LEN(REGFILE_LEN)
        ) mem_wb_reg_inst (
                .clk           (clk),
                .rst           (rst),
                .stall         (stall),

                .in_mem_out    (mem_out),
                .in_alu_out    (mem_alu_out),
                .in_rd         (exmem_rd),
                .in_reg_write  (exmem_reg_write),
                .in_mem_to_reg (exmem_mem_to_reg),

                .out_mem_out   (memwb_mem_out),
                .out_alu_out   (memwb_alu_out),
                .out_rd        (memwb_rd),
                .out_reg_write (memwb_reg_write),
                .out_mem_to_reg(memwb_mem_to_reg)
        );

        // ================================================================
        // WB stage
        // ================================================================
        wb_stage #(
                .BUS_WIDTH(BUS_WIDTH)
        ) wb_stage_inst (
                .mem_to_reg (memwb_mem_to_reg),
                .mem_out    (memwb_mem_out),
                .alu_out    (memwb_alu_out),
                .wb_data    (wb_data)
        );

        assign wb_en   = memwb_reg_write;
        assign wb_addr = memwb_rd;

endmodule 
