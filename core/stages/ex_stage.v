module ex_stage #(
	parameter BUS_WIDTH = 64,
	parameter OPCODE_LEN = 7,
	parameter INSTR_WIDTH = 32,
	parameter REGFILE_LEN = 5,
	parameter ALU_SEL = 5
)(
	input wire [BUS_WIDTH-1:0] in1,
	input wire [BUS_WIDTH-1:0] in2,

	input wire [BUS_WIDTH-1:0] imm,
	input wire [ALU_SEL-1:0] alu_sel,
	input wire is_j,
	input wire is_lui,
	input wire is_auipc,
	input wire [REGFILE_LEN-1:0] idex_rs1,
	input wire [REGFILE_LEN-1:0] idex_rs2,
	input wire [REGFILE_LEN-1:0] exmem_rd,
	input wire [REGFILE_LEN-1:0] memwb_rd,
	input wire exmem_reg_write,
	input wire memwb_reg_write,

	input wire [BUS_WIDTH-1:0] exmem_op,
	input wire [BUS_WIDTH-1:0] memwb_op,

	input wire [BUS_WIDTH-1:0] pc,

	input wire alu_src,

	output wire [BUS_WIDTH-1:0] out,
	output wire [BUS_WIDTH-1:0] write_data
);

	wire [1:0] forward_A;
	wire [1:0] forward_B;

	forwarding_unit #(
		.REGFILE_LEN(REGFILE_LEN)
	) forwarding_unit_inst (
		.idex_rs1(idex_rs1),
		.idex_rs2(idex_rs2),
		.exmem_rd(exmem_rd),
		.memwb_rd(memwb_rd),
		.memwb_reg_write(memwb_reg_write),
		.exmem_reg_write(exmem_reg_write),
		.forward_A(forward_A),
		.forward_B(forward_B)
	);

	wire [BUS_WIDTH-1:0] in1_forwarded = (forward_A == 2'b10) ? exmem_op :
	                                     ((forward_A == 2'b01) ? memwb_op : in1);

	wire [BUS_WIDTH-1:0] in2_forwarded = (forward_B == 2'b10) ? exmem_op :
	                                     ((forward_B == 2'b01) ? memwb_op : in2);

	wire [BUS_WIDTH-1:0] alu_op;
	wire [BUS_WIDTH-1:0] alu_in1 = (is_lui) ? {BUS_WIDTH{1'b0}} : ((is_auipc) ? pc : in1_forwarded);
	wire [BUS_WIDTH-1:0] alu_in2 = (alu_src) ? imm : in2_forwarded;

	alu #(
		.BUS_WIDTH(BUS_WIDTH),
		.ALU_SEL(ALU_SEL)
	) alu_alu (
		.in1(alu_in1),
		.in2(alu_in2),
		.out(alu_op),
		.alu_sel(alu_sel)
	);

	assign out = (is_j) ? (pc + 4) : (alu_op);
	assign write_data = in2_forwarded;

endmodule
