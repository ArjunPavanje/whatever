module mem_stage #(
    	parameter BUS_WIDTH    = 64,
    	parameter DATA_MEM_LEN = 15   // # of BYTE-address bits; mem is 2^DATA_MEM_LEN bytes
)(
    	input wire clk,
    	input wire rst,
    	input wire mem_write,
    	input wire mem_read,
    	input wire [2:0] funct3,      
    	input wire [BUS_WIDTH-1:0] alu_op,
    	input wire [BUS_WIDTH-1:0] write_data,
    	input wire [BUS_WIDTH-1:0] addr,
    	output wire [BUS_WIDTH-1:0] mem_out,
    	output wire [BUS_WIDTH-1:0] alu_out
);

    	localparam NUM_BYTES = BUS_WIDTH/8;

    	assign alu_out = alu_op;

    	// funct3[1:0]: 00=byte 01=half 10=word 11=double (RV64 only)
    	// funct3[2]  : 0=signed 1=unsigned (LBU/LHU/LWU)
    	wire [3:0] access_bytes = (funct3[1:0] == 2'b00) ? 4'd1 :
                               (funct3[1:0] == 2'b01) ? 4'd2 :
                               (funct3[1:0] == 2'b10) ? 4'd4 :
                               (NUM_BYTES >= 8)        ? 4'd8 : 4'd4; // guard LD on RV32
    	wire is_unsigned  = funct3[2];
	
    	wire [DATA_MEM_LEN-1:0] byte_addr = addr[DATA_MEM_LEN-1:0];

	`ifdef SIMULATION
    		reg [7:0] mem [0:(1<<DATA_MEM_LEN)-1];

    		initial begin
        		$readmemh("tests/data.hex", mem);
    		end

		// NOTE: read happens unconditionally every cycle (harmless for a plain
		// reg array). If this is ever swapped for a BRAM primitive with real
		// read-enable semantics, gate byte_addr itself on mem_read, not just
		// the output mux below.
		integer i;
		always @(posedge clk) begin
			if (!rst && mem_write) begin
				for (i = 0; i < NUM_BYTES; i = i + 1) begin
				    if (i < access_bytes) mem[byte_addr + i] <= write_data[i*8 +: 8];
				end
			end
		end

		reg [BUS_WIDTH-1:0] raw_read;
		integer j;
		always @(*) begin
			raw_read = {BUS_WIDTH{1'b0}};
			for (j = 0; j < NUM_BYTES; j = j + 1) begin
				if (j < access_bytes) raw_read[j*8 +: 8] = mem[byte_addr + j];
			end
		end

		// Extract sign bit via case — non-constant bit-selects upset Verilator
		reg sign_bit;
		always @(*) begin
			case (access_bytes)
				4'd1: sign_bit = raw_read[7];
				4'd2: sign_bit = raw_read[15];
				4'd4: sign_bit = raw_read[31];
				4'd8: sign_bit = raw_read[63];
				default: sign_bit = 1'b0;
			endcase
		end

		// Sign-extend mask: fill upper bits with sign_bit
		// Guard: when access_bytes*8 >= BUS_WIDTH the field already fills the bus.
		reg [BUS_WIDTH-1:0] sext_mask;
		always @(*) begin
			case (access_bytes)
				4'd1: sext_mask = {{(BUS_WIDTH-8) {sign_bit}}, {8{1'b0}}};
				4'd2: sext_mask = {{(BUS_WIDTH-16){sign_bit}}, {16{1'b0}}};
				4'd4: sext_mask = (BUS_WIDTH > 32) ? {{(BUS_WIDTH-32){sign_bit}}, {32{1'b0}}} : {BUS_WIDTH{1'b0}};
				default: sext_mask = {BUS_WIDTH{1'b0}}; // 8-byte / full width: no extension needed
			endcase
		end

		// is_fullwidth: true when the access already covers the entire bus
		// (e.g. 8-byte LD on RV64, or 4-byte LW on RV32).
		// Use localparam so the comparison stays purely constant.
		localparam [3:0] FULL_BYTES = NUM_BYTES[3:0];
		wire is_fullwidth = (access_bytes >= FULL_BYTES);

		wire [BUS_WIDTH-1:0] extended = (is_unsigned || is_fullwidth)
				     ? raw_read
				     : (raw_read | sext_mask);

		assign mem_out = (mem_read && !rst) ? extended : {BUS_WIDTH{1'b0}};
	`else
    		// Vivado Block Memory Generator IP goes here.
    		// Stub to keep mem_out driven until the IP is instantiated.
    		assign mem_out = {BUS_WIDTH{1'b0}};
	`endif

endmodule
