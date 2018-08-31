`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:24:50 05/10/2018 
// Design Name: 
// Module Name:    Clock_Divider 
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
module Clock_Divider #(parameter n = 50000000)( output reg outClock, input inClock, input select);
   reg [31:0] counter;

	initial begin
		counter = 0;
		outClock = 1'b0;
	end
	always @ (posedge inClock) begin
		if(select) begin
			if (counter == (n/400) - 1) begin
				 counter = 0;
				 outClock = ~outClock;
			end
			counter = counter + 1;
		end
		else begin
			if (counter == (n/2) - 1) begin
				 counter = 0;
				 outClock = ~outClock;
			end
			counter = counter + 1;
		end
	end
endmodule
