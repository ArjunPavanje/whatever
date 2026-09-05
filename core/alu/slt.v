module slt #(
	parameter BUS_WIDTH = 64
)(
	input [BUS_WIDTH-1:0] in1,
	input [BUS_WIDTH-1:0] in2,

	output [BUS_WIDTH-1:0] out
);
	assign out = {{(BUS_WIDTH - 1){1'b0}}, $signed(in1) < $signed(in2)};;
endmodule
