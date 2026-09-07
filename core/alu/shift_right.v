module shift_right #(
    parameter BUS_WIDTH=64
)(
    input wire [(BUS_WIDTH - 1):0] in,
    input wire [($clog2(BUS_WIDTH) - 1):0] amt,
    output wire [(BUS_WIDTH - 1):0] out
);
    assign out = in >> amt;
endmodule
