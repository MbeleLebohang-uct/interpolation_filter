`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:28:27 06/03/2018 
// Design Name: 
// Module Name:    clk_mul 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module clk_mul(input wire	CLK,
					 input wire RST,
					output wire	CLK_OUT);

reg CLKFBOUT, CLKFBIN;
reg CLKOUT1, CLKOUT2, CLKOUT3, CLKOUT4, CLKOUT5;
reg LOCKED;


PLL_BASE #(
.BANDWIDTH("OPTIMIZED"), 							// "HIGH", "LOW" or "OPTIMIZED"
.CLKFBOUT_MULT(2), 									// Multiplication factor for all output clocks
.CLKFBOUT_PHASE(0.0), 								// Phase shift (degrees) of all output clocks
.CLKIN_PERIOD(0.000), 								// Clock period (ns) of input clock on CLKIN
.CLKOUT0_DIVIDE(1), 									// Division factor for CLKOUT0 (1 to 128)
.CLKOUT0_DUTY_CYCLE(0.5), 							// Duty cycle for CLKOUT0 (0.01 to 0.99)
.CLKOUT0_PHASE(0.0), 								// Phase shift (degrees) for CLKOUT0 (0.0 to 360.0)
.CLKOUT1_DIVIDE(1), 									// Division factor for CLKOUT1 (1 to 128)
.CLKOUT1_DUTY_CYCLE(0.5), 							// Duty cycle for CLKOUT1 (0.01 to 0.99)
.CLKOUT1_PHASE(0.0), 								// Phase shift (degrees) for CLKOUT1 (0.0 to 360.0)
.CLKOUT2_DIVIDE(1), 									// Division factor for CLKOUT2 (1 to 128)
.CLKOUT2_DUTY_CYCLE(0.5), 							// Duty cycle for CLKOUT2 (0.01 to 0.99)
.CLKOUT2_PHASE(0.0), 								// Phase shift (degrees) for CLKOUT2 (0.0 to 360.0)
.CLKOUT3_DIVIDE(1), 									// Division factor for CLKOUT3 (1 to 128)
.CLKOUT3_DUTY_CYCLE(0.5), 							// Duty cycle for CLKOUT3 (0.01 to 0.99)
.CLKOUT3_PHASE(0.0), 								// Phase shift (degrees) for CLKOUT3 (0.0 to 360.0)
.CLKOUT4_DIVIDE(1), 									// Division factor for CLKOUT4 (1 to 128)
.CLKOUT4_DUTY_CYCLE(0.5), 							// Duty cycle for CLKOUT4 (0.01 to 0.99)
.CLKOUT4_PHASE(0.0), 								// Phase shift (degrees) for CLKOUT4 (0.0 to 360.0)
.CLKOUT5_DIVIDE(1), 									// Division factor for CLKOUT5 (1 to 128)
.CLKOUT5_DUTY_CYCLE(0.5), 							// Duty cycle for CLKOUT5 (0.01 to 0.99)
.CLKOUT5_PHASE(0.0), 								// Phase shift (degrees) for CLKOUT5 (0.0 to 360.0)
.COMPENSATION("SYSTEM_SYNCHRONOUS"), 			// "SYSTEM_SYNCHRONOUS",
															// "SOURCE_SYNCHRONOUS", "INTERNAL", "EXTERNAL",
															// "DCM2PLL", "PLL2DCM"
.DIVCLK_DIVIDE(1), 									// Division factor for all clocks (1 to 52)
.REF_JITTER(0.100), 									// Input reference jitter (0.000 to 0.999 UI%)
.CLKIN_PERIOD(2) 										// Input period in ns to the PLL CLKIN input
) PLL_BASE_inst (
.CLKFBOUT(CLKFBOUT), 								// General output feedback signal
.CLKOUT0(CLK_OUT), 									// One of six general clock output signals
.CLKOUT1(CLKOUT1), 									// One of six general clock output signals
.CLKOUT2(CLKOUT2), 									// One of six general clock output signals
.CLKOUT3(CLKOUT3), 									// One of six general clock output signals
.CLKOUT4(CLKOUT4), 									// One of six general clock output signals
.CLKOUT5(CLKOUT5), 									// One of six general clock output signals
.LOCKED(LOCKED), 										// Active high PLL lock signal
.CLKFBIN(CLKFBIN), 									// Clock feedback input
.CLKIN(CLK), 											// Clock input
.RST(RST) 												// Asynchronous PLL reset
);
// End of PLL_BASE_inst instantiation
endmodule
