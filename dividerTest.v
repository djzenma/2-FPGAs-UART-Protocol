`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:46:35 05/16/2018
// Design Name:   testD
// Module Name:   C:/Users/eidma/Desktop/Final Project/dividerTest.v
// Project Name:  FinalProject
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: testD
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module dividerTest;

	// Inputs
	reg clk;

	// Outputs
	wire [7:0] result;

	// Instantiate the Unit Under Test (UUT)
	testD uut (
		.result(result), 
		.clk(clk)
	);
	
	always #20 clk = ~clk;
	
	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
	end
      
endmodule

