`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:08:03 05/18/2018
// Design Name:   BCD
// Module Name:   C:/Users/eidma/Desktop/Final Project/testBCD.v
// Project Name:  FinalProject
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BCD
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testBCD;

	// Inputs
	reg clk;
	reg [31:0] bin;

	// Outputs
	wire [31:0] units;
	wire [31:0] tens;
	wire [31:0] hundreds;
	wire [31:0] thousands;

	// Instantiate the Unit Under Test (UUT)
	BCD uut (
		.clk(clk), 
		.bin(bin), 
		.units(units), 
		.tens(tens), 
		.hundreds(hundreds), 
		.thousands(thousands)
	);
	always #20 clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		bin = 1234;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

