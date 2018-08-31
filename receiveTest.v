`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:52:48 05/18/2018
// Design Name:   ReceiveNums
// Module Name:   C:/Users/eidma/Desktop/Final Project/receiveTest.v
// Project Name:  FinalProject
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ReceiveNums
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module receiveTest;

	// Inputs
	reg rst;
	reg serial;
	reg clk;
	reg addBut;
	reg subBut;
	reg multBut;
	reg divBut;

	// Outputs
	wire [31:0] result;
	wire [6:0] disp;
	wire [3:0] segmentCount;

	// Instantiate the Unit Under Test (UUT)
	ReceiveNums uut (
		.result(result), 
		.disp(disp), 
		.segmentCount(segmentCount), 
		.rst(rst), 
		.serial(serial), 
		.clk(clk), 
		.addBut(addBut), 
		.subBut(subBut), 
		.multBut(multBut), 
		.divBut(divBut)
	);
	always #20 clk = ~clk;
	initial begin
		// Initialize Inputs
		rst = 1;
		serial = 0;
		clk = 0;
		addBut = 0;
		subBut = 0;
		multBut = 0;
		divBut = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		rst = 0;
		serial = 1;
		divBut = 1;
        
		// Add stimulus here

	end
      
endmodule

