`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:46:47 04/24/2018 
// Design Name: 
// Module Name:    ALU 
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

module ALU(A, B, ALUSel, Result, remainder, ZFlag, clk, negative);

	input [7:0] A, B;
	input [2:0] ALUSel;
	input clk;
	output reg [31:0] Result;
	output ZFlag;
	wire [7:0] divResult; 
	wire [31:0] add;
	wire [7:0] sub;
	wire [15:0] mult;
	output [7:0] remainder;
	output[3:0] negative;

	
	assign ZFlag = (Result==16'b0);
	

	always @ (*) begin
		case (ALUSel)
			3'b000: Result = add; // addition
			3'b001: Result = sub; // subtraction
			3'b010: Result = mult; // subtraction
			3'b011: Result = 0 ;
			3'b100: Result = divResult;	// division
			3'b101: Result = 0; 		
			3'b110: Result = 0; 
			3'b111: Result = 0; 
		endcase
	end
	
	Divide divider (divResult, remainder, ready, A, B, 0, clk, 1);
	Adder adder  (A, B, add);
	Substractor sub1 (A, B, sub, negative);
	Multiply mult1 (A, B, mult);

endmodule
