`timescale 1ns/1ns
////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:16:07 05/29/2018
// Design Name:   CIC
// Module Name:   C:/Users/tate/Documents/School-UCT/4th Year/EEE4084F/workspace/cic_interpolator/cic_tb.v
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

module Intergrator_tb;
	reg               clk;	
	reg               rst;
	reg signed [31:0]  d_in;
	wire signed [31:0]  d_out;
	
	integer x_in_file, x_out_file, file_read;
	
	Intergrator uut(.clk(clk),
						   .rst(rst),
						   .d_in(d_in),
						   .d_out(d_out));
		   
	always #1 clk   = ~clk;

	// Write the results at every negative edge of the clock
	always @(negedge clk)
	begin
		$fwrite(x_out_file,"%d\n",d_out);
	end 
	
	initial
	begin
		clk 			<= 1'b0;
		rst 			<= 1'b0;
		d_in 			<= 13'b0;
		x_in_file 	<= $fopen("data.txt","r");
		x_out_file 	= $fopen("data_out.txt","w");
	end 
	
	
	initial
	begin
		repeat(10) @(posedge clk);
		rst <= 1'b1;
		@(posedge clk);
		rst <= 1'b0;
		repeat(5) @(posedge clk);
		while (!$feof(x_in_file))
		begin
			file_read <= $fscanf(x_in_file,"%d\n",d_in);
			@(posedge clk);
		end
		repeat(100) @(posedge clk);
		$fclose(x_in_file);
		$fclose(x_out_file);
		$stop;
	end
endmodule

