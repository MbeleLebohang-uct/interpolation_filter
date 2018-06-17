`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: University of Cape Town
// Engineer: Mbele Lebohang
// 
// Create Date:    08:19:56 06/17/2018 
// Design Name: 
// Module Name:    CIC_Interpolator 
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
module CIC_Interpolator 			(input wire 	   			clk,
								 			 input wire 	   			rst,
											 input wire signed [31:0] 	d_in,
											 output reg signed [31:0] 	d_out);

parameter M = 2,
			 R = 2;


reg sclk;								//slower clk running at clk/R
reg [7:0] clk_scaler_counter;

//------------------ Comb section ------------------------------
wire [31:0] comb_out1, comb_out2, comb_out3, comb_out;
//--------------------------------------------------------------

//------------------ Intergrator section -----------------------
wire [31:0] integ_out1, integ_out2, integ_out3, integ_out;
//--------------------------------------------------------------

initial
begin
	sclk 					 <= 1'b0;
	clk_scaler_counter <= 8'd0;
end

// Scaling down 100Mhz for the cascaded combs
always @(posedge clk)
begin
	clk_scaler_counter <= clk_scaler_counter + 1'b1;
	// Basically wait for Upsampler to output R-1 zeros before clocking the combs
	// This is basically delaying the comb to allow the upsampler to stuff zeros between samples
	
	if(clk_scaler_counter >= R) begin
		sclk <= 1'b1;
		clk_scaler_counter <= 8'd0;
	end
	else begin
		sclk <= 1'b0;
	end

end

//---------------- 4 Cascaded Comb filters ----------------------slow
Comb  #(.M(M)) comb1(sclk,rst, d_in, 		comb_out1);
Comb  #(.M(M)) comb2(sclk,rst, comb_out1, comb_out2);
Comb  #(.M(M)) comb3(sclk,rst, comb_out2, comb_out3);
Comb  #(.M(M)) comb4(sclk,rst, comb_out3, comb_out);

//---------------------- R upsampler ----------------------------
upsampler  #(.R(R)) Upsample(clk, rst, comb_out, upsampler_out);

//---------------- 4 Cascaded Integrators -----------------------
Intergrator	integrator1	(sclk,rst,upsampler_out,integ_out1);
Intergrator	integrator2	(sclk,rst,integ_out1,integ_out2);
Intergrator	integrator3	(sclk,rst,integ_out2,integ_out3);
Intergrator	integrator4	(sclk,rst,integ_out3,integ_out);

always begin
	d_out = integ_out;
end
endmodule
