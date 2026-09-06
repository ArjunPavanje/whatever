/*
* pc = PC of the fetched instruction
* instr = fetched 32-bit instruction word
*/
module if_id_reg#(
	parameter BUS_WIDTH = 64,
	parameter INSTR_WIDTH = 32
)(
	input wire clk,
	input wire rst,
	input wire stall,

	// From IF stage
	input wire [BUS_WIDTH-1:0] in_pc,
	input wire [INSTR_WIDTH-1:0] in_instr,

	// To ID stage
	output reg [BUS_WIDTH-1:0] out_pc,
	output reg [INSTR_WIDTH-1:0] out_instr
);
	always @(posedge clk) begin
                if(rst) begin
                        out_pc <= {BUS_WIDTH{1'b0}};
                        out_instr <= {INSTR_WIDTH{1'b0}};
                end
                else begin
                        out_pc <= in_pc;
                        out_instr <= in_instr;
                end
        end


endmodule
