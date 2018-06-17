`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:38:30 06/17/2018 
// Design Name: 
// Module Name:    Intergrator 
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
`timescale 1ns/1ns
//////////////////////////////////////////////////////////////////////////////////
// Company: University of Cape Town
// Engineer: Mbele Lebohang
// 
// Create Date:    12:12:16 05/29/2018 
// Design Name: 
// Module Name:    Integrator
// Project Name: 	Interpolation Filter
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
module Intergrator		(input wire 	   			clk,
								 input wire 	   			rst,
								 input wire signed [31:0] 	d_in,
								 output reg signed [31:0] 	d_out);

//-------------- Register initialization --------------
	initial
	begin
		d_out <= 32'd0;
	end
//-----------------------------------------------------	
	
	always @(posedge clk)  
	begin
		if (rst)
		begin
			d_out <= 32'd0;
		end else
		begin
			// Integrator stage -> y[n] = x[n] + y[n - 1]
			d_out		<= d_out + d_in;
		end
	end								
endmodule

