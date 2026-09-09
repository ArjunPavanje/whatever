/*
* instr = full 32-bit instruction word
* pc = PC of this instruction
* imm = sign-extended immediate from immgen
* in1 = rs1 value read from regfile
* in2 = rs2 value read from regfile
* is_lui, is_auipc = indicates if instruction is LUI or AUIPC respectively
* is_j = indicates if instruction is JAL or JALR
*
* alu_src = 1 selects imm as ALU in2, 0 selects rs2
* alu_sel = ALU operation select from control unit
* mem_write = write TO memory
* mem_read = read FROM memory
* write_data = data to be written to memory
* funct3 = funct3 from instruction
* rd = destination register in the event of regfile write
* reg_write = 1 implies write to regfile (0 otherwise)
* mem_to_reg = 1 implies regfile write data from MEM not ALU (0 ALU)
*/
module id_ex_reg#(
	parameter BUS_WIDTH = 64,
	parameter INSTR_WIDTH = 32,
	parameter ALU_SEL = 5,
	parameter FUNCT3 = 3,
	parameter REGFILE_LEN = 5
)(
	input wire clk,
	input wire rst,
	input wire stall,

	// From ID stage
	input wire [INSTR_WIDTH-1:0] in_instr,
	input wire [FUNCT3-1:0] in_funct3,
	input wire [BUS_WIDTH-1:0] in_pc,
	input wire [BUS_WIDTH-1:0] in_imm,
	input wire [BUS_WIDTH-1:0] in_in1,
	input wire [BUS_WIDTH-1:0] in_in2,
	input wire in_alu_src,
	input wire [ALU_SEL-1:0] in_alu_sel,
	input wire in_is_j,
	input wire in_is_lui,
	input wire in_is_auipc,

	input wire in_mem_write,
	input wire in_mem_read,
	input wire [BUS_WIDTH-1:0] in_write_data,

	input wire [REGFILE_LEN-1:0] in_rd,
	input wire in_reg_write,
	input wire in_mem_to_reg,

	// To EX stage
	output reg [INSTR_WIDTH-1:0] out_instr,
	output reg [FUNCT3-1:0] out_funct3,
	output reg [BUS_WIDTH-1:0] out_pc,
	output reg [BUS_WIDTH-1:0] out_imm,
	output reg [BUS_WIDTH-1:0] out_in1,
	output reg [BUS_WIDTH-1:0] out_in2,
	output reg out_alu_src,
	output reg [ALU_SEL-1:0] out_alu_sel,
	output reg out_is_j,
	output reg out_is_lui,
	output reg out_is_auipc,

	output reg out_mem_write,
	output reg out_mem_read,
	output reg [BUS_WIDTH-1:0] out_write_data,

	output reg [REGFILE_LEN-1:0] out_rd,
	output reg out_reg_write,
	output reg out_mem_to_reg
);
	always @(posedge clk) begin
                if(rst) begin
                        out_instr <= {INSTR_WIDTH{1'b0}};
			out_funct3 <= 3'd0;
                        out_pc <= {BUS_WIDTH{1'b0}};
                        out_imm <= {BUS_WIDTH{1'b0}};
                        out_in1 <= {BUS_WIDTH{1'b0}};
                        out_in2 <= {BUS_WIDTH{1'b0}};
                        out_alu_src <= 1'b0;
                        out_alu_sel <= {ALU_SEL{1'b0}};
			out_is_j <= 1'b0;
			out_is_lui <= 1'b0;
			out_is_auipc <= 1'b0;

                        out_mem_write <= 1'b0;
                        out_mem_read <= 1'b0;
                        out_write_data <= {BUS_WIDTH{1'b0}};

                        out_rd <= {REGFILE_LEN{1'b0}};
                        out_reg_write <= 1'b0;
                        out_mem_to_reg <= 1'b0;
                end
                else begin
                        out_instr <= in_instr;
			out_funct3 <= in_funct3;
                        out_pc <= in_pc;
                        out_imm <= in_imm;
                        out_in1 <= in_in1;
                        out_in2 <= in_in2;
                        out_alu_src <= in_alu_src;
                        out_alu_sel <= in_alu_sel;
			out_is_j <= in_is_j;
			out_is_lui <= in_is_lui;
			out_is_auipc <= in_is_auipc;


                        out_mem_write <= in_mem_write;
                        out_mem_read <= in_mem_read;
                        out_write_data <= in_write_data;

                        out_rd <= in_rd;
                        out_reg_write <= in_reg_write;
                        out_mem_to_reg <= in_mem_to_reg;
                end
        end
endmodule
