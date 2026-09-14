module forwarding_unit #(
	parameter REGFILE_LEN = 5
)(
	input wire [REGFILE_LEN-1:0] idex_rs1,
	input wire [REGFILE_LEN-1:0] idex_rs2,
	input wire [REGFILE_LEN-1:0] exmem_rd,
	input wire [REGFILE_LEN-1:0] memwb_rd,
	input wire memwb_reg_write,
	input wire exmem_reg_write,

	output wire [1:0] forward_A,
	output wire [1:0] forward_B
);
	localparam x0 = 5'd0;
	localparam MEM = 2'b01;
	localparam ALU_PREV = 2'b10;
	localparam REGFILE = 2'b00;
	// forward A: 
	// 00: Regfile
	// 01: From MEM/WB
	// 10: From EX/MEM
	
	wire from_memwb_A = (memwb_reg_write & (memwb_rd != x0) & (idex_rs1 == memwb_rd));
	wire from_exmem_A = (exmem_reg_write & (exmem_rd != x0) & (idex_rs1 == exmem_rd));
	assign forward_A = (from_exmem_A)?(ALU_PREV):((from_memwb_A)?(MEM):(REGFILE));
	
	// forward B: 
	// 00: Regfile
	// 01: From MEM/WB
	// 10: From EX/MEM
	
	wire from_memwb_B = (memwb_reg_write & (memwb_rd != x0) & (idex_rs2 == memwb_rd));
	wire from_exmem_B = (exmem_reg_write & (exmem_rd != x0) & (idex_rs2 == exmem_rd));
	assign forward_B = (from_exmem_B)?(ALU_PREV):((from_memwb_B)?(MEM):(REGFILE));

endmodule

