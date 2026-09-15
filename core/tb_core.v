`timescale 1ns / 1ps

module tb_core();

    reg clk;
    reg rst;

    // Instantiate your RISC-V core
    core uut (
        .clk(clk),
        .rst(rst)
    );

    // Generate a 100MHz Clock (10ns period)
    always #5 clk = ~clk;

    initial begin
        // Initialize signals
        clk = 0;
        rst = 1;

        // Hold reset for a few cycles to clear all pipeline registers
        #25; 
        rst = 0;

        // Let the CPU run for 1000ns (100 clock cycles)
        #1000;
        
        // Stop simulation
        $finish;
    end

endmodule
