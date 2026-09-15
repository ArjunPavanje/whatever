/*
* MEM Stage
*/

module mem_stage #(
    	parameter BUS_WIDTH    = 64,
    	parameter DATA_MEM_LEN = 15   
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
    	output wire [BUS_WIDTH-1:0] alu_out,
    	output wire mem_stall,

    	// ── BRAM Port B interface ─────────────────────────────────────────────
    	// Driven/consumed by synthesis block; tied to 0 by simulation block.
    	// core.v connects these directly to bram_cell ports .addrb/.web/.dinb/.doutb
    	output wire [DATA_MEM_LEN-1:0] bram_addr,   // byte address → addrb
    	output wire [BUS_WIDTH/8-1:0]  bram_web,    // byte write-enables → web
    	output wire [BUS_WIDTH-1:0]    bram_wdata,  // store data (lane-shifted) → dinb
    	input  wire [BUS_WIDTH-1:0]    bram_rdata   // load data ← doutb
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

	// So memory access takes two clock cycles
	// BRAM access happens on a clock posedge 
	// hence the extra clock cycle
	// So we define mem_stall, mem_busy
	
	// Say a load/store instruction arrives
	// mem_busy being 0, mem_op being 1 sets mem_stall to 1
	// This freezes the pipeline (IF, ID, EX stages)
	// The next cycle, BRAM read/write happens, mem_stall toggles
	// This unfreezes the pipeline
	
    	wire mem_op = (mem_read | mem_write) & !rst;
    	reg  mem_busy;
    	assign mem_stall = mem_op & !mem_busy;


	// For Verilator Simulation
	`ifdef SIMULATION
    		reg [7:0] mem [0:(1<<DATA_MEM_LEN)-1];

    		initial begin
        		$readmemh("tests/data.hex", mem);
    		end

		reg [BUS_WIDTH-1:0] raw_read;
		integer i, j;

		// Synchronous BRAM model: read/write latch on posedge clk
		always @(posedge clk) begin
			if (rst) begin
				mem_busy <= 1'b0;
				raw_read <= {BUS_WIDTH{1'b0}};
			end else begin
				if (mem_op && !mem_busy) begin
					mem_busy <= 1'b1;
					if (mem_write) begin
						for (i = 0; i < NUM_BYTES; i = i + 1) begin
							if (i < access_bytes) mem[byte_addr + i] <= write_data[i*8 +: 8];
						end
					end
					if (mem_read) begin
						for (j = 0; j < NUM_BYTES; j = j + 1) begin
							if (j < access_bytes) raw_read[j*8 +: 8] <= mem[byte_addr + j];
							else raw_read[j*8 +: 8] <= 8'h00;
						end
					end
				end else begin
					mem_busy <= 1'b0;
				end
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
		localparam [3:0] FULL_BYTES = NUM_BYTES[3:0];
		wire is_fullwidth = (access_bytes >= FULL_BYTES);

		wire [BUS_WIDTH-1:0] extended = (is_unsigned || is_fullwidth)
				     ? raw_read
				     : (raw_read | sext_mask);

		assign mem_out = (mem_read && !rst) ? extended : {BUS_WIDTH{1'b0}};

	// Tie BRAM outputs to 0 — simulation uses the reg array above
		assign bram_addr  = {DATA_MEM_LEN{1'b0}};
		assign bram_web   = {(BUS_WIDTH/8){1'b0}};
		assign bram_wdata = {BUS_WIDTH{1'b0}};

	// Actual BRAM part
	`else
		// ── Synthesis: interface to bram_cell Port B ──────────────────────────

		// ── Byte offset of addr within its 64-bit BRAM word ──────────────────
		wire [2:0] byte_off = addr[2:0];

		// ── Address: pass byte address straight to BRAM ───────────────────────
		//assign bram_addr = addr[DATA_MEM_LEN-1:0];
		assign bram_addr = {3'b000, addr[DATA_MEM_LEN-1:3]};

		// ── Write-enable: one bit per byte lane, generated from funct3 ────────
		// Shift a mask into the correct byte-lane position using byte_off.
		reg [BUS_WIDTH/8-1:0] web_r;
		always @(*) begin
			web_r = {(BUS_WIDTH/8){1'b0}};
			if (mem_write) begin
				case (funct3[1:0])
					2'b00: web_r = {{(BUS_WIDTH/8-1){1'b0}}, 1'b1} << byte_off;              // SB: 1 byte
					2'b01: web_r = {{(BUS_WIDTH/8-2){1'b0}}, 2'b11} << {byte_off[2:1],1'b0}; // SH: 2 bytes
					2'b10: web_r = {{(BUS_WIDTH/8-4){1'b0}}, 4'hF} << {byte_off[2],2'b0};    // SW: 4 bytes
					2'b11: web_r = {(BUS_WIDTH/8){1'b1}};                                     // SD: 8 bytes
					default: web_r = {(BUS_WIDTH/8){1'b0}};
				endcase
			end
		end
		assign bram_web = web_r;

		// ── Write data: shift rs2 into the correct byte lane ─────────────────
		// e.g. SB at byte_off=3 → write_data[7:0] lands in bits [31:24]
		assign bram_wdata = write_data << {byte_off, 3'b000};

		// ── 1-cycle stall: identical to behavioral model ──────────────────────
		always @(posedge clk) begin
			if (rst) mem_busy <= 1'b0;
			else if (mem_op && !mem_busy) mem_busy <= 1'b1;
			else mem_busy <= 1'b0;
		end

		// ── Read data: extract the requested sub-word from the 64-bit BRAM word
		// Variable right-shift brings the target bytes down to [N-1:0].
		// Vivado synthesises variable shifts to LUT-based barrel shifters.
		wire [7:0]  rd_b = bram_rdata >> {byte_off,         3'b0}; // any byte
		wire [15:0] rd_h = bram_rdata >> {byte_off[2:1],    4'b0}; // aligned halfword
		wire [31:0] rd_w = bram_rdata >> {byte_off[2],      5'b0}; // aligned word

		// Sign-extend (or zero-extend for unsigned) to BUS_WIDTH
		reg [BUS_WIDTH-1:0] mem_out_r;
		always @(*) begin
			case (funct3)
				3'b000: mem_out_r = {{(BUS_WIDTH-8) {rd_b[7]}},  rd_b}; // LB
				3'b001: mem_out_r = {{(BUS_WIDTH-16){rd_h[15]}}, rd_h}; // LH
				3'b010: mem_out_r = {{(BUS_WIDTH-32){rd_w[31]}}, rd_w}; // LW
				3'b011: mem_out_r = bram_rdata;                          // LD  (RV64)
				3'b100: mem_out_r = {{(BUS_WIDTH-8) {1'b0}},     rd_b}; // LBU
				3'b101: mem_out_r = {{(BUS_WIDTH-16){1'b0}},     rd_h}; // LHU
				3'b110: mem_out_r = {{(BUS_WIDTH-32){1'b0}},     rd_w}; // LWU (RV64)
				default: mem_out_r = bram_rdata;
			endcase
		end

		// mem_busy goes high one cycle after the request, exactly when bram_rdata is valid
		assign mem_out = (mem_read && mem_busy && !rst) ? mem_out_r : {BUS_WIDTH{1'b0}};

	`endif

endmodule	
