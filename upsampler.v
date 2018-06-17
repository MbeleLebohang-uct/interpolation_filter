`timescale 1ns/1ns
//////////////////////////////////////////////////////////////////////////////////
// Company: University of Cape Town
// Engineer: Mbele Lebohang
// 
// Create Date:    12:12:16 05/29/2018 
// Design Name: 
// Module Name:    upsampler
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
module upsampler  (input wire 	   			clk,
						 input wire 	   			rst,
						 input wire signed [31:0] 	d_in,
						 output reg signed [31:0] 	d_out);
						 
//------------------------Parameters--------------------
	parameter R = 2;
//------------------------------------------------------

reg [7:0] zero_counter;

//-----------------Register initialization--------------
	initial
	begin
		d_out = 32'd0;
		zero_counter <= 8'd0;
	end
//------------------------------------------------------	

	always @(posedge clk)  
	begin
		if (rst)
		begin
			d_out = 32'd0;
		end else
		begin
			if(zero_counter < R) begin
				// R - 1 Zero Stuffing
				d_out = 32'd0;
				zero_counter <= zero_counter + 1'b1;
			end 
			else begin
				d_out = d_in;
				zero_counter <= 1'b0;
			end
		end
	end	
endmodule
