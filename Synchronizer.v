`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:36:15 05/10/2018 
// Design Name: 
// Module Name:    Synchronizer 
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
module Debouncer(clk, x, z);

input clk, x;
output z;
reg q1, q2, q3;

always @ (posedge clk) begin
	q1 <= x;
	q2 <= q1;
	q3 <= q2;
end	

assign z = q1&q2&q3;

endmodule


module Synchronizer(sig, clk, sig1);
input sig, clk;
output sig1;
reg sig1, metastable;

always @ (posedge clk) begin
	metastable <= sig;
	sig1 <= metastable;
end


endmodule


module RED(level, rst, clk, tick);

input level, clk, rst;
output tick;

reg [1:0] state, nextState;

parameter[1:0] zero = 2'b00 , edg =2'b01 , one=2'b10;

always @ (level or state) begin
	case (state)
	zero: 
		if (level) 
			nextState = edg;
		else 
			nextState = zero;
	edg:
		if (level) 
			nextState = one;
		else 
			nextState = zero;
	one: 
		if (level) 
			nextState = one;
		else 
			nextState = zero;
	default:
		nextState = zero;
	endcase
end
// Update state FF's with the triggering edge of the clock
always @ (posedge clk, posedge rst) begin
	if(rst) 
		state <= zero;
	else 
		state <= nextState;
end
// output generation
assign tick = (state == edg);


endmodule
