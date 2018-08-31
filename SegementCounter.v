`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:08:27 05/11/2018 
// Design Name: 
// Module Name:    SegementCounter 
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
module SegmentCounter(output reg[1:0] counter, input clk);

initial
	counter = 2'b00;
	
always @ (posedge clk) begin
	counter = counter + 1;
end


endmodule
