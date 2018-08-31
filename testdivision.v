`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:49:25 05/18/2018
// Design Name:   divide
// Module Name:   C:/Users/eidma/Desktop/Final Project/testdivision.v
// Project Name:  FinalProject
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: divide
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testdivision;

	// Inputs
	reg [31:0] dividend;
	reg [31:0] divider;
	reg sign;
	reg clk;

	// Outputs
	wire [31:0] Result;
	wire [31:0] Remainder;
	wire ready;

	// Instantiate the Unit Under Test (UUT)
	divide uut (
		.Result(Result), 
		.Remainder(Remainder), 
		.ready(ready), 
		.dividend(dividend), 
		.divider(divider), 
		.sign(sign), 
		.clk(clk)
	);
	always #20 clk = ~clk;
	initial begin
		// Initialize Inputs
		dividend = 17;
		divider = 3;
		sign = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

