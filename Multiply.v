`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:10:49 05/19/2018 
// Design Name: 
// Module Name:    Multiply 
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
module Multiply(a,b,result);

input [7:0] a;
input [7:0] b;
output [15:0] result;
wire [15:0] a1,a2,a3,a4,a5,a6,a7,a8;

assign a1=(b[0]==1'b1) ? {8'b00000000 ,a } : 16'b0000000000000000;
assign a2=(b[1]==1'b1) ? {7'b0000000 , a , 1'b0} : 16'b0000000000000000;
assign a3=(b[2]==1'b1) ? {6'b000000 , a , 2'b00} : 16'b0000000000000000;
assign a4=(b[3]==1'b1) ? {5'b00000 , a , 3'b000} : 16'b0000000000000000;
assign a5=(b[4]==1'b1) ? {4'b0000 , a , 4'b0000} : 16'b0000000000000000;
assign a6=(b[5]==1'b1) ? {3'b000 , a , 5'b00000} : 16'b0000000000000000;
assign a7=(b[6]==1'b1) ? {2'b00 , a , 6'b000000} : 16'b0000000000000000;
assign a8=(b[7]==1'b1) ? {1'b0 , a , 7'b0000000} : 16'b0000000000000000;
assign result = a1+a2+a3+a4+a5+a6+a7+a8;

endmodule
