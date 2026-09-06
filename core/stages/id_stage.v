module id_stage #(
	parameter BUS_WIDTH   = 64,
	parameter INSTR_WIDTH = 32,
    	parameter ALU_SEL     = 5
)(
    	input  wire clk,
    	input  wire rst,
    	input  wire [INSTR_WIDTH-1:0] instr,

    	// Writeback Interface from WB Stage
    	input  wire wb_en,
    	input  wire [4:0] wb_addr,
    	input  wire [BUS_WIDTH-1:0] wb_data,

    	// Outputs to EX Stage
    	output wire [BUS_WIDTH-1:0] in1,
    	output wire [BUS_WIDTH-1:0] in2,
    	output wire [BUS_WIDTH-1:0] imm,
    	output wire [ALU_SEL-1:0] alu_sel,
    	output wire alu_src,
	output wire [4:0] rd_addr,

    	output wire reg_write,
	output wire mem_read,
	output wire mem_write,
	output wire mem_to_reg,

	output wire is_lui,
	output wire is_auipc
);

    	// Instruction Field Extraction
    	wire [6:0] opcode = instr[6:0];
    	wire [4:0] rs1_addr = instr[19:15];
    	wire [4:0] rs2_addr = instr[24:20];
    	assign rd_addr = instr[11:7];

	assign reg_write  = (opcode == 7'b0110011) || // R-type
                    (opcode == 7'b0010011) || // I-type ALU
                    (opcode == 7'b0000011) || // Load
                    (opcode == 7'b0110111) || // LUI
                    (opcode == 7'b0010111) || // AUIPC
                    (opcode == 7'b1101111) || // JAL
                    (opcode == 7'b1100111);   // JALR

	assign mem_read   = (opcode == 7'b0000011);  // Load
	assign mem_write  = (opcode == 7'b0100011);  // Store
	assign mem_to_reg = (opcode == 7'b0000011);  // Load only

        assign is_lui = (opcode == 7'b0110111);   
        assign is_auipc = (opcode == 7'b0010111);

	assign alu_src = (opcode == 7'b0010011) || // I-type ALU
                 (opcode == 7'b0000011) || // Load
                 (opcode == 7'b0100011) || // Store
                 (opcode == 7'b0010111) || // AUIPC
                 (opcode == 7'b0110111) || // LUI  ← missing
                 (opcode == 7'b1100111);   // JALR

    	// Register File Instance
    	regfile #(
    	    .BUS_WIDTH(BUS_WIDTH),
        	.NUM_REGS(32)
    	) regfile_inst (
        	.clk(clk),
        	.write_en(wb_en),
        	.read_addr_1(rs1_addr),
        	.read_data_1(in1),
        	.read_addr_2(rs2_addr),
        	.read_data_2(in2),
        	.write_addr(wb_addr),
        	.write_data(wb_data)
    	);

    	// Immediate Generator Instance
    	immgen #(
        	.BUS_WIDTH(BUS_WIDTH),
        	.INSTR_WIDTH(INSTR_WIDTH)
    	) immgen_inst (
        	.instr(instr),
        	.imm(imm)
    	);

    	// ALU Decoder Instance
    	alu_cntrl #(
        	.BUS_WIDTH(BUS_WIDTH),
        	.INSTR_WIDTH(INSTR_WIDTH),
        	.ALU_SEL(ALU_SEL)
    	) alu_cntrl_inst (
        	.instr(instr),
        	.alu_sel(alu_sel)
    	);

    	// ALU Source Control (1 = Immediate, 0 = Register rs2)
    	assign alu_src = (opcode == 7'b0010011) || // I-type ALU
                     (opcode == 7'b0000011) || // Load
                     (opcode == 7'b0100011) || // Store
                     (opcode == 7'b0010111) || // AUIPC
                     (opcode == 7'b1100111);   // JALR

endmodule
