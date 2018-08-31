`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:26:44 04/10/2018 
// Design Name: 
// Module Name:    sevensgment 
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
module bcdSevenSegment (input clk, input[3:0] in, input en, output reg [6:0] Y);

always @(posedge clk) begin
	if (en) begin
		case ( in )                   
		4'b0000:  Y = 7'b0000001;
		4'b0001:  Y = 7'b1001111;
		4'b0010:  Y = 7'b0010010;
		4'b0011:  Y = 7'b0000110;
		4'b0100:  Y = 7'b1001100;
		4'b0101:  Y = 7'b0100100;
		4'b0110:  Y = 7'b0100000;
		4'b0111:  Y = 7'b0001111;
		4'b1000:  Y = 7'b0000000;
		4'b1001:  Y = 7'b0000100;
		4'b1010:  Y = 7'b1111110;		// negative
		4'b1011:  Y = 7'b1111110;
		default:
			Y = 7'b0110000;				// ERROR
		endcase
	end
	else
		Y = 7'b0110000;
end
endmodule






