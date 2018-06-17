`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:01:46 05/30/2018
// Design Name:   CIC
// Module Name:   C:/Users/tate/Documents/School-UCT/4th Year/EEE4084F/workspace/cic_interpolator/cic_testbench.v
// Project Name:  cic_interpolator
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CIC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cic_testbench;

	// Inputs
	reg clk;
	reg rst;
	reg [15:0] L;
	reg [7:0] d_in;

	// Outputs
	wire [7:0] d_out;

	// Instantiate the Unit Under Test (UUT)
	CIC uut (
		.clk(clk), 
		.rst(rst), 
		.L(L), 
		.d_in(d_in), 
		.d_out(d_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		L = 0;
		d_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

