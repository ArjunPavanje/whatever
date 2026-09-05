module ex_stage #(
	parameter BUS_WIDTH = 64,
	parameter ALU_SEL = 5
)(
	input wire [BUS_WIDTH-1:0] in1,
	input wire [BUS_WIDTH-1:0] in2,

	input wire [BUS_WIDTH-1:0] imm,
	input wire [ALU_SEL-1:0] alu_sel,

	input wire alu_src,
	input wire rst,

	output wire [BUS_WIDTH-1:0] out 
);

	wire [BUS_WIDTH-1:0] alu_op;
	wire [BUS_WIDTH-1:0] alu_in2 = (alu_src) ? (imm) : (in2);
	alu #(
		.BUS_WIDTH(BUS_WIDTH),
		.ALU_SEL(ALU_SEL)
	) alu_alu (
		.in1(in1),
		.in2(alu_in2),
		.out(alu_op),
		.alu_sel(alu_sel)
	);

	assign out = alu_op;
endmodule

