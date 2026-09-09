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

	output wire [INSTR_WIDTH-1:0] instr,
	output wire [BUS_WIDTH-1:0] pc 
);
	localparam ZERO = {BUS_WIDTH{1'b0}};	
	reg [BUS_WIDTH-1:0] pc_curr;
	wire [BUS_WIDTH-1:0] pc_next;

	assign pc_next = (pc_jmp) ? (pc_dst) : (pc_curr+4);
	assign pc = pc_curr;

	always @(posedge clk) begin
		if(rst) pc_curr <= ZERO;
		else if(~stall) pc_curr <= pc_next; 
	end

	wire [INSTR_MEM_LEN-1:0] word_addr = pc_curr[INSTR_MEM_LEN+1:2];

	`ifdef SIMULATION
	    // Async reg array for Verilator — no latency, easy to debug
	    reg [INSTR_WIDTH-1:0] mem [0:(1<<INSTR_MEM_LEN)-1];
	    initial $readmemh("tests/program.hex", mem);
	    assign instr = mem[word_addr];
	`else
	    // Placeholder: synthesisable BRAM port will be connected here.
	    assign instr = {INSTR_WIDTH{1'b0}};
	`endif

endmodule
