`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:22:59 05/19/2018 
// Design Name: 
// Module Name:    Adder 
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
module Adder(
	input[7:0] A,
	input[7:0] B,
	output[31:0] result);
	
wire cout1, cout2, cout3, cout4, cout5, cout6, cout7;
	
FA fa1 (A[0], B[0], 0, result[0], cout1);
FA fa2 (A[1], B[1], cout1, result[1], cout2);
FA fa3 (A[2], B[2], cout2, result[2], cout3);
FA fa4 (A[3], B[3], cout3, result[3], cout4);
FA fa5 (A[4], B[4], cout4, result[4], cout5);
FA fa6 (A[5], B[5], cout5, result[5], cout6);
FA fa7 (A[6], B[6], cout6, result[6], cout7);
FA fa8 (A[7], B[7], cout7, result[7], cout8);


endmodule

