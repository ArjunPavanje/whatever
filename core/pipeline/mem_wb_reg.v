/*
* mem_out = MEM stage output
* alu_out = EX stage output
* reg_write = 1 implies write to regfile (0 otherwise)
* mem_to_reg = 1 implies regfile write data from MEM not ALU (0 ALU)
* rd = destination register in the event of regfile write
*/

module mem_wb_reg#(
	parameter BUS_WIDTH = 64,
	parameter REGFILE_LEN = 5
)(
	input wire clk,
	input wire rst,
	input wire stall,

	// From MEM Stage
	input wire [BUS_WIDTH-1:0] in_mem_out, 
	input wire [BUS_WIDTH-1:0] in_alu_out,
	input wire in_reg_write,
	input wire in_mem_to_reg,
	input wire [REGFILE_LEN-1:0] in_rd,

	// To WB Stage
	output reg [BUS_WIDTH-1:0] out_mem_out,
	output reg [BUS_WIDTH-1:0] out_alu_out,
	output reg out_reg_write,
	output reg out_mem_to_reg,
	output reg [REGFILE_LEN-1:0] out_rd 
);
	always @(posedge clk) begin
		if(rst) begin
			out_mem_out <= {BUS_WIDTH{1'b0}};
			out_alu_out <= {BUS_WIDTH{1'b0}};
			out_reg_write <= 1'b0;
			out_mem_to_reg <= 1'b0;
			out_rd <= {REGFILE_LEN{1'b0}};
		end
		else begin
			out_mem_out <= in_mem_out;
			out_alu_out <= in_alu_out;
			out_reg_write <= in_reg_write;
			out_mem_to_reg <= in_mem_to_reg;
			out_rd <= in_rd;

		end
	end
endmodule
