`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:23:20 05/16/2018 
// Design Name: 
// Module Name:    testD 
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

module testBCD(input clk, input [15:0] bin, output [3:0] units, output  [3:0] tens, output[3:0] hundreds, output [3:0] thousands);
	
	wire en_thousands, en_hundreds, en_tens;
	wire [7:0] thousandsRem, hundredsRem, hundreds1, hundreds2, tens1, tens2, tens3, units1, units2, units3;
	


	
	// if number has thousands
	Divider divider1 (thousands, thousandsRem, bin, 		  1000, clk, 1);
	Divider divider2 (hundreds, hundredsRem,  thousandsRem, 100,  clk, 1);
	Divider divider3 (tens, 	 units, 			hundredsRem,  10,   clk, 1);
	
	
	
endmodule