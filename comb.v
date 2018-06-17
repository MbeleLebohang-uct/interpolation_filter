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
//			- The M value of this module cannot be less than 2 due to the memory shif implementation.
//			- The delay if this module is M + 1, i.e. x[n - M - 1]
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Comb         (input wire 	   				clk,
							input wire 	   				rst,
							input wire signed [31:0] 	d_in,
							output reg signed [31:0] 	d_out);
							
//------------------------ Parameters --------------------------------
parameter M = 2;
				  
//------------------------ Variable ------------------------------------				  
reg  [7:0] mem_addr;
reg   mem_write_EN;
reg  [31:0] mem_write;    
wire [31:0] mem_read;

// Memory to store the delayed data for the comb filter
SRAM #(.ADDR_WIDTH(8), .DATA_WIDTH(32), .DEPTH(M)) memory(clk, rst, mem_write_EN, mem_write, mem_read);

//------------------------------------- Register initialization ---------------------------------------------
	initial
	begin
		mem_write_EN 	<= 1'd1;
		mem_write		<= 31'd0;
		mem_addr			<= 8'd0;
		d_out 			<= 32'd0;
	end
//----------------------------------------------------------------------------------------------------------	
	
	always @(posedge clk)  
	begin
		mem_write_EN 	<= 1'd1;
	
		if (rst)
		begin
			d_out <= 32'd0;
		end else
		begin
			// Integrator stage - y[n] = x[n] - x[n - M - 1]
			mem_write <= d_in;
			d_out		<= d_in - mem_read;
		end
	end								
endmodule
