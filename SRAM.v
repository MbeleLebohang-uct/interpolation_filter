`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 15.05.2018 17:25:41
// Design Name: 
// Module Name: SRAM
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
//              Block RAM
// Dependencies: 
//          
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//  
//      This module takes the following inputs
//              Clk_100M    - the input clock
//              i_addr      - the address of the item to act on
//              i_write     - write enable (read data when false)
//              i_data      - input for writing data
//              o_data      - output for reading data
//
//      The parameters for this module are
//              ADDR_WIDTH  - address size in bits (default: 12)
//              DATA_WIDTH  - data size in bits (default: 8)
//              DEPTH       - number of items in the memory array (default: 4069)
//////////////////////////////////////////////////////////////////////////////////


module SRAM(
    clk, 
	 rst,
	 i_write_EN,
    i_data, 
    o_data
    );
    
//------------------------ Parameters --------------------------------
 parameter ADDR_WIDTH = 12,
			  DATA_WIDTH = 8,
			  DEPTH      = 4096;
			  

//------------------------ Inputs ------------------------------------
 input wire clk, rst, i_write_EN;
 input wire [DATA_WIDTH - 1:0] i_data; 

//------------------------ Outputs -----------------------------------
 output reg  [DATA_WIDTH - 1:0] o_data;
 
 
 //---------------------- Variables ----------------------------------
 integer Index;
 
 reg signed [DATA_WIDTH-1:0] memory_array [0:DEPTH-2];
 
//------------------- Register initialization ------------------------
	initial
	begin
		o_data   		<= 0;
		
		for(Index = 1; Index < DEPTH - 1; Index = Index + 1) begin
			memory_array[Index] <= 0;
		end
	end
//--------------------------------------------------------------------
    
    always @ (posedge clk)
    begin
        if(i_write_EN) begin
				if(rst) begin
					o_data   <= 0;
		
					for(Index = 1; Index < DEPTH - 1; Index = Index + 1) begin
						memory_array[Index] <= 0;
					end
				end else begin
					o_data <= memory_array[DEPTH-2];									// Output the M - 1 item.
					
					// Shift the memory
					for(Index = 1; Index < DEPTH - 1; Index = Index + 1) begin
						memory_array[Index] <= memory_array[Index - 1];
					end
					
					memory_array[0] <= i_data;	
				end
        end
        else begin
            o_data <= memory_array[DEPTH - 2];
        end     
    end
endmodule