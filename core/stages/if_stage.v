/*
* IF Stage
*/

module if_stage#(
	parameter BUS_WIDTH = 64,
	parameter INSTR_WIDTH = 32,
	parameter INSTR_MEM_LEN = 15
)(
	input wire clk,
	input wire stall,
	input wire rst,
	input wire pc_jmp, 
	input wire [BUS_WIDTH-1:0] pc_dst,

	input wire [63:0] bram_douta,

	output wire [INSTR_WIDTH-1:0] instr,
	output wire [BUS_WIDTH-1:0] pc 
);
	localparam ZERO = {BUS_WIDTH{1'b0}};	
	reg [BUS_WIDTH-1:0] pc_curr;
	wire [BUS_WIDTH-1:0] pc_next;

	// Normally, pc = pc + 4
	// If jump statement is encountered, jump to destination PC 
	// Destination PC comes from ID stage
	assign pc_next = (pc_jmp) ? (pc_dst) : (pc_curr+4);
	assign pc = pc_curr;

	always @(posedge clk) begin
		if(rst) pc_curr <= ZERO;
		else if(~stall) pc_curr <= pc_next; 
	end

	wire [INSTR_MEM_LEN-1:0] word_addr = pc_curr[INSTR_MEM_LEN+1:2];

	`ifdef SIMULATION
	    	// Async reg array for Verilator Simulations 
	    	reg [INSTR_WIDTH-1:0] mem [0:(1<<INSTR_MEM_LEN)-1];
		initial $readmemh("tests/program.hex", mem);
	    	assign instr = mem[word_addr];
	`else
		// So the thing is, I have defined BRAM to be 64 bits wide
		// This means that 1 row holds 2 instructions
		// So based on pc_curr[2] bit either upper or lower 32 bits
		// are chosen
	    	assign instr = pc_curr[2] ? bram_douta[63:32] : bram_douta[31:0];
	`endif

endmodule
