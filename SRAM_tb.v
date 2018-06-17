`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   05:18:33 06/03/2018
// Design Name:   SRAM
// Module Name:   C:/Users/tate/Documents/School-UCT/4th Year/EEE4084F/workspace/cic_interpolator/SRAM_tb.v
// Project Name:  cic_interpolator
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SRAM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SRAM_tb;

	// Inputs
	reg clk;
	reg rst;
	reg i_write_EN;
	reg [31:0] i_data;

	// Outputs
	wire [31:0] o_data;

	// Instantiate the Unit Under Test (UUT)
	SRAM #(.ADDR_WIDTH(8), .DATA_WIDTH(32), .DEPTH(2)) uut (
																				.clk(clk), 
																				.i_write_EN(i_write_EN), 
																				.i_data(i_data), 
																				.o_data(o_data)
																			  );
														
	integer x_in_file, file_read;														
	
	always #1 clk   = ~clk;

	initial
	begin
		// Initialize Inputs
		clk = 1'b0;
		i_write_EN = 1'b0;
		rst = 1'b0;
		i_data = 0;
		x_in_file 	<= $fopen("data.txt","r");
	end 

	initial begin
		repeat(10) @(posedge clk);
		rst <= 1'b1;
		@(posedge clk);
		rst <= 1'b0;
		i_write_EN = 1'b1;
		repeat(5) @(posedge clk);
		while (!$feof(x_in_file))
		begin
			file_read <= $fscanf(x_in_file,"%d\n",i_data);
			@(posedge clk);
		end
		repeat(100) @(posedge clk);
		$fclose(x_in_file);
		$stop;
	end
      
endmodule

