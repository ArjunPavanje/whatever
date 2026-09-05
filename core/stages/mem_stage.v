module mem_stage #(
	parameter BUS_WIDTH = 64,
	parameter DATA_MEM_LEN = 15
)(
	input wire clk,
	input wire rst,
	input wire mem_write,
	input wire mem_read,
	input wire [BUS_WIDTH-1:0] alu_op,
	input wire [BUS_WIDTH-1:0] write_data,
	input wire [BUS_WIDTH-1:0] addr,

	output wire [BUS_WIDTH-1:0] mem_out,
	output wire [BUS_WIDTH-1:0] alu_out
);
	
	assign alu_out = alu_op;

	wire [DATA_MEM_LEN-1:0] word_addr = addr[DATA_MEM_LEN+1:2];
	`ifdef SIMULATION
		// Async reg array for Verilator simulation matching if_stage behavior
		reg [BUS_WIDTH-1:0] mem [0:(1<<DATA_MEM_LEN)-1];

		initial begin
			$readmemh("tests/data.hex", mem);
		end

		// Synchronous Memory Write
		always @(posedge clk) begin
			if (mem_write && !rst) begin
				mem[word_addr] <= write_data;
			end
		end

		// Combinational Read (Gated by reset and read enable)
		assign mem_out = (mem_read && !rst) ? mem[word_addr] : {BUS_WIDTH{1'b0}};
	`endif
endmodule
