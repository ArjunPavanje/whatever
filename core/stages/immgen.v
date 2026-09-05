module immgen #(
    parameter BUS_WIDTH   = 64,
    parameter INSTR_WIDTH = 32
)(
    input  wire [INSTR_WIDTH-1:0] instr,
    output reg  [BUS_WIDTH-1:0]   imm
);

    localparam OPCODE_SIZE = 7;
    wire [OPCODE_SIZE-1:0] opcode = instr[OPCODE_SIZE-1:0];

    always @(*) begin
        case (opcode)

            // I-type
	    // imm[11:0] = instr[31:20]
            // 0010011 logical operations
	    // 0000011 load            
	    // 1100111 jalr
            // 1110011 ecall, ebreak
            7'b0010011, 7'b0000011, 7'b1100111, 7'b1110011: imm = {{(BUS_WIDTH-12){instr[31]}}, instr[31:20]};

            // S-type
	    // imm[11:5] = instr[31:25]
            // imm[4:0]  = instr[11:7]
            7'b0100011: imm = {{(BUS_WIDTH-12){instr[31]}}, instr[31:25], instr[11:7]};

            // B-type
            // imm[12]   = instr[31]
            // imm[11]   = instr[7]
            // imm[10:5] = instr[30:25]
            // imm[4:1]  = instr[11:8]
            // imm[0]    = 0 (branches always 2-byte aligned)
            7'b1100011: imm = {{(BUS_WIDTH-13){instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0};

            // U-type
	    // 0110111 lui 
            // 0010111 auipc 
            7'b0110111,
            7'b0010111: imm = {{(BUS_WIDTH-32){instr[31]}}, instr[31:12], 12'b0};

            // J-type
            // imm[20]    = instr[31]
            // imm[19:12] = instr[19:12] 
            // imm[11]    = instr[20]
            // imm[10:1]  = instr[30:21]
            // imm[0]     = 0 (jumps always 2-byte aligned)
            7'b1101111: imm = {{(BUS_WIDTH-21){instr[31]}}, instr[31], instr[19:12], instr[20], instr[30:21], 1'b0};

            default: imm = {BUS_WIDTH{1'b0}};

        endcase
    end

endmodule 
