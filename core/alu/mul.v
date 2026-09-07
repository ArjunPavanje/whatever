module mul #(
	parameter BUS_WIDTH = 64,
	parameter ALU_CNTRL_WIDTH = 2
)(
	input  [BUS_WIDTH-1:0]         in1,
	input  [BUS_WIDTH-1:0]         in2,
	input  [ALU_CNTRL_WIDTH-1:0]   alu_funct3,
	output reg [BUS_WIDTH-1:0]     out
);
	reg [2*BUS_WIDTH-1:0] product_full;
	always @(*) begin
		case(alu_funct3)
			// MUL / MULH : signed × signed
			2'b00, 2'b01: product_full = $signed({{BUS_WIDTH{in1[BUS_WIDTH-1]}}, in1})
			                           * $signed({{BUS_WIDTH{in2[BUS_WIDTH-1]}}, in2});
			// MULHSU : signed × unsigned
			2'b10: product_full = $signed({{BUS_WIDTH{in1[BUS_WIDTH-1]}}, in1})
			                    * {{BUS_WIDTH{1'b0}}, in2};
			// MULHU : unsigned × unsigned
			2'b11: product_full = {{BUS_WIDTH{1'b0}}, in1}
			                    * {{BUS_WIDTH{1'b0}}, in2};
			default: product_full = {(2*BUS_WIDTH){1'b0}};
		endcase

		if(alu_funct3 == 2'd0)
			out = product_full[BUS_WIDTH-1:0];         // MUL  : lower half
		else
			out = product_full[2*BUS_WIDTH-1:BUS_WIDTH]; // MULH/SU/U : upper half
	end
endmodule

