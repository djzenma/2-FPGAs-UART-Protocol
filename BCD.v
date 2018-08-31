`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:04:53 05/18/2018 
// Design Name: 
// Module Name:    BCD 
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
module BCD(input clk, input [31:0] bin, output [31:0] units, output  [31:0] tens, output[31:0] hundreds, output [31:0] thousands);
	
	wire [31:0] thousandsRem, hundredsRem;
	
	// if number has thousands
	Divide divider1 (thousands, thousandsRem, ready1 ,bin, 1000, 0,clk, 0);
	Divide divider2 (hundreds, hundredsRem, ready2 ,thousandsRem, 100, 0,clk, 0);
	Divide divider3 (tens, units, ready3 ,hundredsRem, 10, 0,clk, 0);
	
endmodule
