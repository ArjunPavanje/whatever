module branch_unit #(
    	parameter BUS_WIDTH = 64
)(
    	input  wire [6:0] opcode, 
    	input  wire [2:0] funct3,
    	input  wire [BUS_WIDTH-1:0] in1,
    	input  wire [BUS_WIDTH-1:0] in2,

    	output reg branch_taken,   
	output wire is_branch
);
	localparam OPCODE_B = 7'b1100011;
	assign is_branch = (opcode == OPCODE_B);
	always @(*) begin
		case(funct3)
			// beq
			3'd0: branch_taken = ($signed(in1) == $signed(in2));

			// bne
			3'd1: branch_taken = ($signed(in1) != $signed(in2));

			// blt
			3'd4: branch_taken = ($signed(in1) < $signed(in2));

			// bge
			3'd5: branch_taken = ($signed(in1) >= $signed(in2));

			// bltu
			3'd6: branch_taken = ($unsigned(in1) < $unsigned(in2));

			// bgeu 
			3'd7: branch_taken = ($unsigned(in1) >= $unsigned(in2));

			default: branch_taken = 1'b0;
		endcase

	end
endmodule
