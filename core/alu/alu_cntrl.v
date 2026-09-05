/*
* ALU Operations
* 00000: ADD 
* 00001: SUB 
* 00010: XOR
* 00011: AND
* 00100: OR
* 00101: SLL
* 00110: SRL
* 00111: SRA
* 01000: SLT
* 01001: SLTU
* 01010: MUL
* 01011: MULH
* 01100: MULSU
* 01101: MULU
*/        

module alu_cntrl #(
        parameter BUS_WIDTH = 64,
        parameter INSTR_WIDTH = 32,
        parameter ALU_SEL = 5
)(
        input wire [INSTR_WIDTH-1:0] instr,

        output reg [ALU_SEL-1:0] alu_sel
);
        wire [6:0] opcode = instr[6:0];
        wire [2:0] funct3 = instr[14:12];
        wire [6:0] funct7 = instr[31:25];

        always @(*) begin
                casez({opcode, funct3, funct7})
                        {7'b0110011, 3'b000, 7'b0000000}: alu_sel = 5'd0;  // ADD
                        {7'b0110011, 3'b000, 7'b0100000}: alu_sel = 5'd1;  // SUB
                        {7'b0110011, 3'b100, 7'b0000000}: alu_sel = 5'd2;  // XOR
                        {7'b0110011, 3'b111, 7'b0000000}: alu_sel = 5'd3;  // AND
                        {7'b0110011, 3'b110, 7'b0000000}: alu_sel = 5'd4;  // OR
                        {7'b0110011, 3'b001, 7'b0000000}: alu_sel = 5'd5;  // SLL
                        {7'b0110011, 3'b101, 7'b0000000}: alu_sel = 5'd6;  // SRL
                        {7'b0110011, 3'b101, 7'b0100000}: alu_sel = 5'd7;  // SRA
                        {7'b0110011, 3'b010, 7'b0000000}: alu_sel = 5'd8;  // SLT
                        {7'b0110011, 3'b011, 7'b0000000}: alu_sel = 5'd9;  // SLTU

                        {7'b0110011, 3'b000, 7'b0000001}: alu_sel = 5'd10; // MUL
                        {7'b0110011, 3'b001, 7'b0000001}: alu_sel = 5'd11; // MULH
                        {7'b0110011, 3'b010, 7'b0000001}: alu_sel = 5'd12; // MULSU
                        {7'b0110011, 3'b011, 7'b0000001}: alu_sel = 5'd13; // MULU

                        {7'b0010011, 3'b000, 7'bzzzzzzz}: alu_sel = 5'd0;  // ADDI
                        {7'b0010011, 3'b100, 7'bzzzzzzz}: alu_sel = 5'd2;  // XORI
                        {7'b0010011, 3'b111, 7'bzzzzzzz}: alu_sel = 5'd3;  // ANDI
                        {7'b0010011, 3'b110, 7'bzzzzzzz}: alu_sel = 5'd4;  // ORI
                        {7'b0010011, 3'b001, 7'b0000000}: alu_sel = 5'd5;  // SLLI
                        {7'b0010011, 3'b101, 7'b0000000}: alu_sel = 5'd6;  // SRLI
                        {7'b0010011, 3'b101, 7'b0100000}: alu_sel = 5'd7;  // SRAI
                        {7'b0010011, 3'b010, 7'bzzzzzzz}: alu_sel = 5'd8;  // SLTI
                        {7'b0010011, 3'b011, 7'bzzzzzzz}: alu_sel = 5'd9;  // SLTIU

                        {7'b0000011, 3'bzzz, 7'bzzzzzzz}: alu_sel = 5'd0;  // LOAD
                        {7'b0100011, 3'bzzz, 7'bzzzzzzz}: alu_sel = 5'd0;  // STORE
                        {7'b1100111, 3'b000, 7'bzzzzzzz}: alu_sel = 5'd0;  // JALR
                        {7'b0010111, 3'bzzz, 7'bzzzzzzz}: alu_sel = 5'd0;  // AUIPC

                        default: alu_sel = 5'd0;
                endcase
        end
endmodule
