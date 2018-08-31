`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:59:59 05/16/2018
// Design Name:   testALU
// Module Name:   C:/Users/eidma/Desktop/Final Project/aluTest.v
// Project Name:  FinalProject
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: testALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module aluTest;

	// Inputs
	reg [7:0] A;
	reg [7:0] B;
	reg [2:0] ALUSel;
	reg clk;

	// Outputs
	wire [15:0] Result;
	wire [7:0] remainder;
	wire ZFlag;

	// Instantiate the Unit Under Test (UUT)
	testALU uut (
		.A(A), 
		.B(B), 
		.ALUSel(ALUSel), 
		.Result(Result), 
		.remainder(remainder), 
		.ZFlag(ZFlag), 
		.clk(clk)
	);
	
	always #20 clk = ~clk;
	
	initial begin
		// Initialize Inputs
		A = 9;
		B = 3;
		ALUSel = 3'b100;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

