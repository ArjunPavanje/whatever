module regfile #(
	parameter BUS_WIDTH = 64,
	parameter NUM_REGS = 32
)(
	input wire clk,
	input wire write_en,

	// Read Port 1
	input wire [4:0] read_addr_1,
	output wire [BUS_WIDTH-1:0] read_data_1,
	
	// Read Port 2
	input wire [4:0] read_addr_2,
	output wire [BUS_WIDTH-1:0] read_data_2,

	// Write Port 1
	input wire [4:0] write_addr,
	input wire [BUS_WIDTH-1:0] write_data
);
	localparam ZERO = {BUS_WIDTH{1'b0}};

	reg [BUS_WIDTH-1:0] reg_file [NUM_REGS-1:0];

	always @(posedge clk) begin
		if(write_en & (write_addr != 0)) begin
			reg_file[write_addr] <= write_data;
		end
		reg_file[0] <= ZERO;
	end

	assign read_data_1 = (read_addr_1 == 0) ? (ZERO) : (reg_file[read_addr_1]);
	assign read_data_2 = (read_addr_2 == 0) ? (ZERO) : (reg_file[read_addr_2]);
endmodule
