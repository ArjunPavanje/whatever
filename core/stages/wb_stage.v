module wb_stage #(
	parameter BUS_WIDTH = 64
)(
    	input wire mem_to_reg,
    	input wire [BUS_WIDTH-1:0] mem_out,
    	input wire [BUS_WIDTH-1:0] alu_out,
    	output wire [BUS_WIDTH-1:0] wb_data 
);
    	assign wb_data = mem_to_reg ? mem_out : alu_out;
endmodule
