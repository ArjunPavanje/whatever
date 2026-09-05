module alu #(
    parameter BUS_WIDTH = 64,
    parameter ALU_SEL   = 5
)(
    input  wire [BUS_WIDTH-1:0] in1,
    input  wire [BUS_WIDTH-1:0] in2,
    input  wire [ALU_SEL-1:0]   alu_sel,
    output reg  [BUS_WIDTH-1:0] out
);

    // Internal wires for individual sub-module outputs
    wire [BUS_WIDTH-1:0] add_out;
    wire [BUS_WIDTH-1:0] sub_out;
    wire [BUS_WIDTH-1:0] xor_out;
    wire [BUS_WIDTH-1:0] and_out;
    wire [BUS_WIDTH-1:0] or_out;
    wire [BUS_WIDTH-1:0] sll_out;
    wire [BUS_WIDTH-1:0] srl_out;
    wire [BUS_WIDTH-1:0] sra_out;
    wire [BUS_WIDTH-1:0] slt_out;
    wire [BUS_WIDTH-1:0] sltu_out;
    wire [BUS_WIDTH-1:0] mul_out;
    wire [BUS_WIDTH-1:0] mulh_out;
    wire [BUS_WIDTH-1:0] mulsu_out;
    wire [BUS_WIDTH-1:0] mulu_out;

    // Standard Arithmetic and Logic Sub-modules
    add #(
        .BUS_WIDTH(BUS_WIDTH)
    ) add_alu (
        .in1(in1),
        .in2(in2),
        .out(add_out)
    );

    sub #(
        .BUS_WIDTH(BUS_WIDTH)
    ) sub_alu (
        .in1(in1),
        .in2(in2),
        .out(sub_out)
    );

    _xor #(
        .BUS_WIDTH(BUS_WIDTH)
    ) xor_alu (
        .in1(in1),
        .in2(in2),
        .out(xor_out)
    );

    _and #(
        .BUS_WIDTH(BUS_WIDTH)
    ) and_alu (
        .in1(in1),
        .in2(in2),
        .out(and_out)
    );

    _or #(
        .BUS_WIDTH(BUS_WIDTH)
    ) or_alu (
        .in1(in1),
        .in2(in2),
        .out(or_out)
    );

    // Shift Sub-modules
    shift_left #(
        .BUS_WIDTH(BUS_WIDTH)
    ) sll_alu (
        .in(in1),
        .amt(in2[$clog2(BUS_WIDTH)-1:0]),
        .out(sll_out)
    );

    shift_right #(
        .BUS_WIDTH(BUS_WIDTH)
    ) srl_alu (
        .in(in1),
        .amt(in2[$clog2(BUS_WIDTH)-1:0]),
        .out(srl_out)
    );

    shift_right_arith #(
        .BUS_WIDTH(BUS_WIDTH)
    ) sra_alu (
        .in(in1),
        .amt(in2[$clog2(BUS_WIDTH)-1:0]),
        .out(sra_out)
    );

    // Set-Less-Than Sub-modules
    slt #(
        .BUS_WIDTH(BUS_WIDTH)
    ) slt_alu (
        .in1(in1),
        .in2(in2),
        .out(slt_out)
    );

    sltu #(
        .BUS_WIDTH(BUS_WIDTH)
    ) sltu_alu (
        .in1(in1),
        .in2(in2),
        .out(sltu_out)
    );

    // M-Extension Multiplier Sub-modules
    mul #(
        .BUS_WIDTH(BUS_WIDTH)
    ) mul_alu (
        .in1(in1),
        .in2(in2),
        .out(mul_out)
    );

    mulh #(
        .BUS_WIDTH(BUS_WIDTH)
    ) mulh_alu (
        .in1(in1),
        .in2(in2),
        .out(mulh_out)
    );

    mulsu #(
        .BUS_WIDTH(BUS_WIDTH)
    ) mulsu_alu (
        .in1(in1),
        .in2(in2),
        .out(mulsu_out)
    );

    mulu #(
        .BUS_WIDTH(BUS_WIDTH)
    ) mulu_alu (
        .in1(in1),
        .in2(in2),
        .out(mulu_out)
    );

    // Output MUX mapping alu_sel control codes to selected result
    always @(*) begin
        case (alu_sel)
            5'd0:  out = add_out;
            5'd1:  out = sub_out;
            5'd2:  out = xor_out;
            5'd3:  out = and_out;
            5'd4:  out = or_out;
            5'd5:  out = sll_out;
            5'd6:  out = srl_out;
            5'd7:  out = sra_out;
            5'd8:  out = slt_out;
            5'd9:  out = sltu_out;
            5'd10: out = mul_out;
            5'd11: out = mulh_out;
            5'd12: out = mulsu_out;
            5'd13: out = mulu_out;
            default: out = {BUS_WIDTH{1'b0}};
        endcase
    end

endmodule
