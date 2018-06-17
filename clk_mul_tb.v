`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:07:38 06/03/2018
// Design Name:   clk_mul
// Module Name:   C:/Users/tate/Documents/School-UCT/4th Year/EEE4084F/workspace/cic_interpolator/clk_mul_tb.v
// Project Name:  cic_interpolator
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clk_mul
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module clk_mul_tb;

	// Inputs
	reg i_clk_100mhz;
	wire          i_clk, clk_for_ddr,clk2_unused, clk3_unused, clk4_unused, clk5_unused;
	wire		clk_feedback, clk_locked;
//----------------------

PLLE2_BASE #(
.BANDWIDTH("OPTIMIZED"), // OPTIMIZED, HIGH, LOW
.CLKFBOUT_MULT(8), // Multiply value for all CLKOUT, (2-64)
.CLKFBOUT_PHASE(0.0), // Phase offset in degrees of CLKFB, (-360.000-360.000).
.CLKIN1_PERIOD(10.0), // Input clock period in ns to ps resolution (i.e. 33.333 is 30 MHz).
// CLKOUT0_DIVIDE - CLKOUT5_DIVIDE: Divide amount for each CLKOUT (1-128)
.CLKOUT0_DIVIDE(1),
.CLKOUT1_DIVIDE(1),
.CLKOUT2_DIVIDE(1),
.CLKOUT3_DIVIDE(1),
.CLKOUT4_DIVIDE(1),
.CLKOUT5_DIVIDE(1),
// CLKOUT0_DUTY_CYCLE - CLKOUT5_DUTY_CYCLE: Duty cycle for each CLKOUT (0.001-0.999).
.CLKOUT0_DUTY_CYCLE(0.5),
.CLKOUT1_DUTY_CYCLE(0.5),
.CLKOUT2_DUTY_CYCLE(0.5),
.CLKOUT3_DUTY_CYCLE(0.5),
.CLKOUT4_DUTY_CYCLE(0.5),
.CLKOUT5_DUTY_CYCLE(0.5),
// CLKOUT0_PHASE - CLKOUT5_PHASE: Phase offset for each CLKOUT (-360.000-360.000).
.CLKOUT0_PHASE(0.0),
.CLKOUT1_PHASE(0.0),
.CLKOUT2_PHASE(0.0),
.CLKOUT3_PHASE(0.0),
.CLKOUT4_PHASE(0.0),
.CLKOUT5_PHASE(0.0),
.DIVCLK_DIVIDE(1), // Master division value, (1-56)
.REF_JITTER1(0.0), // Reference input jitter in UI, (0.000-0.999).
.STARTUP_WAIT("FALSE") // Delay DONE until PLL Locks, ("TRUE"/"FALSE")
)
PLLE2_BASE_inst (
        .CLKOUT0(i_clk),
        .CLKOUT1(clk_for_ddr),
        .CLKOUT2(clk2_unused),
        .CLKOUT3(clk3_unused),
        .CLKOUT4(clk4_unused),
        .CLKOUT5(clk5_unused),
        .CLKFBOUT(clk_feedback), // 1-bit output, feedback clock
        .LOCKED(clk_locked),
        .CLKIN1(i_clk_100mhz),
        .PWRDWN(1'b0),
        .RST(1'b0),
        .CLKFBIN(clk_feedback)    // 1-bit input, feedback clock
);
// End of PLLE2_BASE_inst instantiation

//-------------------
	 
	always #10 i_clk_100mhz  = ~i_clk_100mhz;
	
	initial begin
		// Initialize Inputs
		i_clk_100mhz = 0;
	end
      
endmodule

