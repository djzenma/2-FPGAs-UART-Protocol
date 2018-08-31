`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:20:53 05/18/2018
// Design Name:   mod_div
// Module Name:   C:/Users/eidma/Desktop/Final Project/divTest.v
// Project Name:  FinalProject
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mod_div
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module division(
input clk, 
input [15:0] Dividend, 
input [15:0] Divisor, 
output reg[15:0] Q, 
output [15:0] R, 
output ready);

reg[31:0] Dividend_copy, Divisor_copy, diff;

wire [15:0] remainder = Dividend_copy[15:0];

reg [31:0] bit;
wire ready = !bit;

initial bit = 0;

always @ (posedge clk) begin
	if(ready) begin
		bit = 16;
		Q=0;
		Dividend_copy = {16'd0,Dividend};
		Divisor_copy = {1'b0, Divisor, 15'd0};
	end
	else begin
		diff = Dividend_copy - Divisor_copy;
		Q = Q << 1;
		
		if ( !diff[31] ) begin
			Dividend_copy = diff;
			Q[0] = 1'd1;
		end
		
		Divisor_copy = Divisor_copy >> 1;
		bit = bit - 1;
		
	end
end

endmodule
