module sltu #(
	parameter BUS_WIDTH = 64
)(
	input [BUS_WIDTH-1:0] in1,
	input [BUS_WIDTH-1:0] in2,

	output [BUS_WIDTH-1:0] out
);
	assign out = {{(BUS_WIDTH - 1){1'b0}}, $unsigned(in1) < $unsigned(in2)};;
endmodule
