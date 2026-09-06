/*
* mem_write = write TO memory
* mem_read = read FROM memory
* write_data = data to be written to memory
*
* alu_out = EX stage output
* rd = destination register in the event of regfile write
* reg_write = 1 implies write to regfile (0 otherwise)
* mem_to_reg = 1 implies regfile write data from MEM not ALU (0 ALU)
*/
module ex_mem_reg#(
	parameter BUS_WIDTH = 64,
	parameter REGFILE_LEN = 5
)(
	input wire clk,
	input wire rst,
	input wire stall,

	// From EX stage
	input wire in_mem_write,
	input wire in_mem_read,
	input wire [BUS_WIDTH-1:0] in_write_data,
	
	input wire [BUS_WIDTH-1:0] in_alu_out,
	input wire [REGFILE_LEN-1:0] in_rd,
	input wire in_reg_write,
        input wire in_mem_to_reg,

	// To MEM stage
	output reg out_mem_write,
	output reg out_mem_read,
	output reg [BUS_WIDTH-1:0] out_write_data,
	
	output reg [BUS_WIDTH-1:0] out_alu_out,
	output reg [REGFILE_LEN-1:0] out_rd,
	output reg out_reg_write,
        output reg out_mem_to_reg

);
	always @(posedge clk) begin
                if(rst) begin
                        out_mem_write  <= 1'b0;
                        out_mem_read   <= 1'b0;
                        out_write_data <= {BUS_WIDTH{1'b0}};
                        
                        out_alu_out    <= {BUS_WIDTH{1'b0}};
                        out_rd         <= {REGFILE_LEN{1'b0}};
                        out_reg_write  <= 1'b0;
                        out_mem_to_reg <= 1'b0;
                end
                else begin
                        out_mem_write  <= in_mem_write;
                        out_mem_read   <= in_mem_read;
                        out_write_data <= in_write_data;
                        
                        out_alu_out    <= in_alu_out;
                        out_rd         <= in_rd;
                        out_reg_write  <= in_reg_write;
                        out_mem_to_reg <= in_mem_to_reg;
                end
        end


endmodule
