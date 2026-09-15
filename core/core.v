/*
* core.v — top-level 5-stage pipelined RV32/64 core with Forwarding Unit & Hazard Detection Unit
*
* Stage order: IF -> IF/ID -> ID -> ID/EX -> EX -> EX/MEM -> MEM -> MEM/WB -> WB
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

        // ================================================================
        // BRAM interface wires
        // ── Port A (instruction fetch): core.v → if_stage ───────────────
        // ── Port B (data memory):       core.v ↔ mem_stage ─────────────
        // Declared here so both `ifndef/`else blocks and stage instantiations
        // can reference them regardless of compile mode.
        // ================================================================
        wire [63:0]            bram_douta;  // Port A read data  → if_stage.bram_douta
        wire [DATA_MEM_LEN-1:0] bram_addrb; // Port B address    ← mem_stage.bram_addr
        wire [BUS_WIDTH/8-1:0]  bram_web;   // Port B byte-WE    ← mem_stage.bram_web
        wire [BUS_WIDTH-1:0]    bram_wdata; // Port B write data ← mem_stage.bram_wdata
        wire [BUS_WIDTH-1:0]    bram_rdata; // Port B read data  → mem_stage.bram_rdata

        // ================================================================
        // Hazard Detection Unit & Stall Signals
        // ================================================================
        wire                   load_use_stall;
        wire                   mem_stall;
        wire                   pipeline_stall;
        wire [REGFILE_LEN-1:0] id_rs1_addr, id_rs2_addr, idex_rd;
        wire                   id_use_rs1, id_use_rs2, idex_mem_read;

        hazard_detecting_unit #(
                .REGFILE_LEN(REGFILE_LEN)
        ) hazard_detecting_unit_inst (
                .id_rs1       (id_rs1_addr),
                .id_rs2       (id_rs2_addr),
                .id_use_rs1   (id_use_rs1),
                .id_use_rs2   (id_use_rs2),
                .idex_rd      (idex_rd),
                .idex_mem_read(idex_mem_read),
                .stall        (load_use_stall)
        );

        assign pipeline_stall = load_use_stall | mem_stall;

        // Branch resolution control
        wire                 id_is_j;
        wire [BUS_WIDTH-1:0] id_pc_dst;
        wire                 real_is_j = id_is_j & !pipeline_stall;

        // ================================================================
        // IF stage
        // ================================================================
        wire [BUS_WIDTH-1:0]   if_pc;
        wire [INSTR_WIDTH-1:0] if_instr;

        if_stage #(
                .BUS_WIDTH    (BUS_WIDTH),
                .INSTR_WIDTH  (INSTR_WIDTH),
                .INSTR_MEM_LEN(INSTR_MEM_LEN)
        ) if_stage_inst (
                .clk       (clk),
                .rst       (rst),
                .stall     (pipeline_stall),
                .pc_jmp    (real_is_j),
                .pc_dst    (id_pc_dst),
                .bram_douta(bram_douta),   // Port A read data from bram_cell
                .pc        (if_pc),
                .instr     (if_instr)
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
                .stall    (pipeline_stall),
                .flush    (real_is_j),

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

        // Forwarding signals and outputs from subsequent stages
        wire [BUS_WIDTH-1:0]   ex_out;
        wire [REGFILE_LEN-1:0] exmem_rd, memwb_rd;
        wire                   exmem_reg_write, exmem_mem_to_reg, idex_reg_write;
        wire [BUS_WIDTH-1:0]   exmem_alu_out, mem_out, wb_data;
        wire                   wb_en;
        wire [REGFILE_LEN-1:0] wb_addr;

        id_stage #(
                .BUS_WIDTH  (BUS_WIDTH),
                .INSTR_WIDTH(INSTR_WIDTH),
                .ALU_SEL    (ALU_SEL)
        ) id_stage_inst (
                .clk             (clk),
                .rst             (rst),
                .instr           (ifid_instr),

                .wb_en           (wb_en),
                .wb_addr         (wb_addr),
                .wb_data         (wb_data),
                .pc              (ifid_pc),

                .idex_rd         (idex_rd),
                .idex_reg_write  (idex_reg_write),
                .idex_mem_read   (idex_mem_read),
                .ex_out          (ex_out),

                .exmem_rd        (exmem_rd),
                .exmem_reg_write (exmem_reg_write),
                .exmem_mem_to_reg(exmem_mem_to_reg),
                .exmem_alu_out   (exmem_alu_out),
                .mem_out         (mem_out),

                .in1             (id_in1),
                .in2             (id_in2),
                .imm             (id_imm),
                .alu_sel         (id_alu_sel),
                .alu_src         (id_alu_src),
                .rd_addr         (id_rd_addr),
                .rs1_addr        (id_rs1_addr),
                .rs2_addr        (id_rs2_addr),
                .use_rs1         (id_use_rs1),
                .use_rs2         (id_use_rs2),

                .reg_write       (id_reg_write),
                .mem_read        (id_mem_read),
                .mem_write       (id_mem_write),
                .mem_to_reg      (id_mem_to_reg),
                .funct3          (id_funct3),

                .pc_dst          (id_pc_dst),
                .is_j            (id_is_j),
                .is_lui          (id_is_lui),
                .is_auipc        (id_is_auipc)
        );

        // ================================================================
        // ID/EX pipeline register
        // ================================================================
        wire [INSTR_WIDTH-1:0] idex_instr;
        wire [BUS_WIDTH-1:0]   idex_pc, idex_imm, idex_in1, idex_in2, idex_write_data;
        wire                   idex_alu_src, idex_is_j, idex_is_lui, idex_is_auipc;
        wire [ALU_SEL-1:0]     idex_alu_sel;
        wire                   idex_mem_write, idex_mem_to_reg;
        wire [REGFILE_LEN-1:0] idex_rs1, idex_rs2;
        wire [2:0]             idex_funct3;

        id_ex_reg #(
                .BUS_WIDTH  (BUS_WIDTH),
                .INSTR_WIDTH(INSTR_WIDTH),
                .ALU_SEL    (ALU_SEL),
                .REGFILE_LEN(REGFILE_LEN)
        ) id_ex_reg_inst (
                .clk           (clk),
                .rst           (rst),
                .stall         (mem_stall),
                .flush         (load_use_stall & !mem_stall),

                .in_instr      (ifid_instr),
                .in_pc         (ifid_pc),
                .in_imm        (id_imm),
                .in_in1        (id_in1),
                .in_in2        (id_in2),
                .in_alu_src    (id_alu_src),
                .in_alu_sel    (id_alu_sel),
                .in_is_j       (id_is_j),
                .in_is_lui     (id_is_lui),
                .in_is_auipc   (id_is_auipc),
                .in_funct3     (id_funct3),

                .in_mem_write  (id_mem_write),
                .in_mem_read   (id_mem_read),
                .in_write_data (id_in2),

                .in_rd         (id_rd_addr),
                .in_rs1        (id_rs1_addr),
                .in_rs2        (id_rs2_addr),
                .in_reg_write  (id_reg_write),
                .in_mem_to_reg (id_mem_to_reg),

                .out_instr     (idex_instr),
                .out_pc        (idex_pc),
                .out_imm       (idex_imm),
                .out_in1       (idex_in1),
                .out_in2       (idex_in2),
                .out_alu_src   (idex_alu_src),
                .out_alu_sel   (idex_alu_sel),
                .out_is_j      (idex_is_j),
                .out_is_lui    (idex_is_lui),
                .out_is_auipc  (idex_is_auipc),
                .out_funct3    (idex_funct3),

                .out_mem_write (idex_mem_write),
                .out_mem_read  (idex_mem_read),
                .out_write_data(idex_write_data),

                .out_rd        (idex_rd),
                .out_rs1       (idex_rs1),
                .out_rs2       (idex_rs2),
                .out_reg_write (idex_reg_write),
                .out_mem_to_reg(idex_mem_to_reg)
        );

        // ================================================================
        // EX stage
        // ================================================================
        wire [BUS_WIDTH-1:0] ex_write_data;
        wire                 memwb_reg_write;

        ex_stage #(
                .BUS_WIDTH  (BUS_WIDTH),
                .ALU_SEL    (ALU_SEL),
                .REGFILE_LEN(REGFILE_LEN)
        ) ex_stage_inst (
                .in1            (idex_in1),
                .in2            (idex_in2),
                .imm            (idex_imm),
                .alu_sel        (idex_alu_sel),
                .alu_src        (idex_alu_src),
                .idex_rs1       (idex_rs1),
                .idex_rs2       (idex_rs2),
                .exmem_rd       (exmem_rd),
                .memwb_rd       (memwb_rd),
                .exmem_reg_write(exmem_reg_write),
                .memwb_reg_write(memwb_reg_write),
                .exmem_op       (exmem_alu_out),
                .memwb_op       (wb_data),
                .is_j           (idex_is_j),
                .is_lui         (idex_is_lui),
                .is_auipc       (idex_is_auipc),
                .pc             (idex_pc),
                .out            (ex_out),
                .write_data     (ex_write_data)
        );

        // ================================================================
        // EX/MEM pipeline register
        // ================================================================
        wire [2:0]             exmem_funct3;
        wire                   exmem_mem_write, exmem_mem_read;
        wire [BUS_WIDTH-1:0]   exmem_write_data;

        ex_mem_reg #(
                .BUS_WIDTH  (BUS_WIDTH),
                .REGFILE_LEN(REGFILE_LEN)
        ) ex_mem_reg_inst (
                .clk           (clk),
                .rst           (rst),
                .stall         (mem_stall),
                .flush         (1'b0),

                .in_funct3     (idex_funct3),
                .in_mem_write  (idex_mem_write),
                .in_mem_read   (idex_mem_read),
                .in_write_data (ex_write_data),

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
        wire [BUS_WIDTH-1:0] mem_alu_out;

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
                .alu_out   (mem_alu_out),
                .mem_stall (mem_stall),
                // BRAM Port B
                .bram_addr (bram_addrb),
                .bram_web  (bram_web),
                .bram_wdata(bram_wdata),
                .bram_rdata(bram_rdata)
        );

        // ================================================================
        // MEM/WB pipeline register
        // ================================================================
        wire [BUS_WIDTH-1:0]   memwb_mem_out, memwb_alu_out;
        wire                   memwb_mem_to_reg;

        mem_wb_reg #(
                .BUS_WIDTH  (BUS_WIDTH),
                .REGFILE_LEN(REGFILE_LEN)
        ) mem_wb_reg_inst (
                .clk           (clk),
                .rst           (rst),
                .stall         (1'b0),
                .flush         (mem_stall),

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

        // ================================================================
        // bram_cell instantiation
        //
        // Port A — Instruction fetch (read-only)
        //   Address strategy: present pc_next so that when pc_curr advances on
        //   the clock edge, douta is already valid for the new PC (READ_LATENCY=1).
        //   During stall or reset, re-present the current PC so the instruction
        //   stays available without advancing the prefetch.
        //
        // Port B — Data memory (read/write)
        //   Driven entirely by mem_stage via the bram_* wires above.
        // ================================================================
        `ifndef SIMULATION
                // pc_next mirrors the combinational pc_next inside if_stage
                wire [BUS_WIDTH-1:0] if_pc_next = real_is_j
                                                 ? id_pc_dst
                                                 : (if_pc + {{(BUS_WIDTH-3){1'b0}}, 3'd4});

                // Hold current PC on stall or rst so BRAM re-presents the same word;
                // otherwise prefetch the next PC.
                //wire [14:0] bram_addra = (pipeline_stall || rst)
                //                       ? if_pc[14:0]
                //                       : if_pc_next[14:0];
		wire [14:0] bram_addra = (pipeline_stall || rst)
                               ? {3'b000, if_pc[14:3]}
                               : {3'b000, if_pc_next[14:3]};	
                bram_cell mem_instance (
                        // ── Port A : Instruction fetch ──────────────────────────────
                        .clka  (clk),
                        .ena   (1'b1),
                        .wea   (8'h00),       // read-only
                        .addra (bram_addra),
                        .dina  (64'h0),
                        .douta (bram_douta),  // → if_stage.bram_douta

                        // ── Port B : Data memory ─────────────────────────────────────
                        .clkb  (clk),
                        .enb   (exmem_mem_read | exmem_mem_write),
                        .web   (bram_web),    // ← mem_stage.bram_web
                        .addrb (bram_addrb),  // ← mem_stage.bram_addr
                        .dinb  (bram_wdata),  // ← mem_stage.bram_wdata
                        .doutb (bram_rdata)   // → mem_stage.bram_rdata
                );
        `else
                // Simulation: if_stage and mem_stage use their own `ifdef SIMULATION
                // reg arrays.  Tie the BRAM output wires to 0 so the ports are driven.
                assign bram_douta = 64'b0;
                assign bram_rdata = {BUS_WIDTH{1'b0}};
        `endif

endmodule 
