`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:53:03 05/10/2018
// Design Name:   Clock_Divider
// Module Name:   C:/Users/eidma/Final Project/clk_tst.v
// Project Name:  FinalProject
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Clock_Divider
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module clk_tst;

	// Inputs
	reg inClock;

	// Outputs
	wire outClock;

	// Instantiate the Unit Under Test (UUT)
	Clock_Divider uut (
		.outClock(outClock), 
		.inClock(inClock)
	);
	
	always
		#20 inClock = ~inClock;
		
	
	initial begin
		// Initialize Inputs
		inClock = 0;

		// Wait 100 ns for global reset to finish
        
		// Add stimulus here

	end
      
endmodule

