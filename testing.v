`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:17:03 05/15/2018 
// Design Name: 
// Module Name:    testing 
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
module testing(input clk,
			output reg [6:0]disp,
			output reg [3:0]segmentCount
			);
			
wire divClk;
wire[1:0] segC;
wire[6:0] w_units, w_tens, w_hundreds, w_thousands;

Clock_Divider dividedClock (divClk, clk);
SegmentCounter segCounter  (segC, divClk);




endmodule
