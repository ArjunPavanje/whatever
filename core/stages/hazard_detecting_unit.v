module hazard_detecting_unit #(
	parameter REGFILE_LEN = 5
)(
	input wire [REGFILE_LEN-1:0] id_rs1,
	input wire [REGFILE_LEN-1:0] id_rs2,
	input wire id_use_rs1,
	input wire id_use_rs2,
	input wire [REGFILE_LEN-1:0] idex_rd,
	input wire idex_mem_read,

	output wire stall
);
	localparam x0 = 5'd0;

	// Load-use hazard detection logic:
	// If instruction in EX is a LOAD (idex_mem_read = 1)
	// and its destination register idex_rd (idex_rd != 0) matches
	// either source register (id_rs1 or id_rs2) used by the instruction currently in ID stage,
	// then stall the pipeline for 1 cycle.

	wire stall_rs1 = id_use_rs1 & (id_rs1 != x0) & (id_rs1 == idex_rd);
	wire stall_rs2 = id_use_rs2 & (id_rs2 != x0) & (id_rs2 == idex_rd);

	assign stall = idex_mem_read & (stall_rs1 | stall_rs2);

endmodule
