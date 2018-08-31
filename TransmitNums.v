`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:49:42 05/11/2018 
// Design Name: 
// Module Name:    TransmitNums 
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
module TransmitNums( input clk, 
							input rst, 
							input uBut1, 
							input decBut1, 
							input uBut2, 
							input decBut2,
							input transmit_en,
							output reg[6:0] disp, 
							output reg[3:0] segmentCount,
							output serial1,
							output serial2,
							output reg point
							);
	
	wire syncUnit1, syncUnit2, syncDecimal1, syncDecimal2, divClk;
	wire debU1, debU2, debDec1, debDec2;
	wire[6:0] reg_u_disp1, reg_u_disp2, reg_dec_disp1, reg_dec_disp2;
	wire[1:0] segC;
	wire[7:0] firstNum, secNum;
	wire active1, done1, active2, done2;

	
	reg[3:0] unitCounter1, decimalCounter1, unitCounter2, decimalCounter2;
	reg[7:0] data1, data2;
	
	//parameter [1:0] s_idle = 2'b00, s_sendFirst=2'b01, s_sendSec=2'b10, s_done=2'b11;
	//reg[1:0] s_next;
	initial begin
		data1 <= 0;
		data2 <= 0;
	end
	
	Clock_Divider dividedClock (divClk, clk, 1);
	
	SegmentCounter segCounter  (segC, divClk);
	
	Debouncer debouncer1(divClk, uBut1, debU1);
	Debouncer debouncer2(divClk, uBut2, debU2);
	Debouncer debouncer3(divClk, decBut1, debDec1);
	Debouncer debouncer4(divClk, decBut2, debDec2);
	
	Synchronizer Sync1 (debU1, clk, syncUnit1);
	Synchronizer Sync2 (debU2, clk, syncUnit2);
	Synchronizer Sync3 (debDec1, clk, syncDecimal1);
	Synchronizer Sync4 (debDec2, clk, syncDecimal2);
	
	RED RED1 (syncUnit1, rst, divClk, unit1);
	RED RED2 (syncUnit2, rst, divClk, unit2);
	RED RED3 (syncDecimal1, rst, divClk, decimal1);
	RED RED4 (syncDecimal2, rst, divClk, decimal2);
	
	
	Transmitter transmitter1(
   clk,
   transmit_en, // Input Control Signal that starts transmitting block of data
   data1, 	// Transmission Data
   active1, // Indicates whether transimitter is active or not
   serial1, // Transmission Line
   done1	// Indicates whether transmitter is done sending a block of data
   );
	
	Transmitter transmitter2(
   clk,
   transmit_en, // Input Control Signal that starts transmitting block of data
   data2, 	// Transmission Data
   active2, // Indicates whether transimitter is active or not
   serial2, // Transmission Line
   done2	// Indicates whether transmitter is done sending a block of data
   );
	
	always @(posedge divClk, posedge rst) begin 
		if(rst) begin
			unitCounter1 <= 4'b0000;
			unitCounter2 <= 4'b0000;
			decimalCounter1 <= 4'b0000;
			decimalCounter2 <= 4'b0000;
		end
		else begin
			if(unit1) begin
				if(unitCounter1 == 4'b1001)
					unitCounter1 <= 4'b0000;
				else
					unitCounter1 <= unitCounter1 +1;
			end
			else 
				unitCounter1 <= unitCounter1;
			
			if(unit2) begin
				if(unitCounter2 == 4'b1001)
					unitCounter2 <= 4'b0000;
				else
					unitCounter2 <= unitCounter2 +1;
			end
			else 
				unitCounter2 <= unitCounter2;
				
			if(decimal1) begin
				if(decimalCounter1 == 4'b1001)
					decimalCounter1 <= 4'b0000;
				else
					decimalCounter1 <= decimalCounter1 +1;
			end
			else 
				decimalCounter1 <= decimalCounter1;
			
			if(decimal2) begin
				if(decimalCounter2 == 4'b1001)
					decimalCounter2 <= 4'b0000;
				else
					decimalCounter2 <= decimalCounter2 +1;
			end
			else 
				decimalCounter2 <= decimalCounter2;
		end
	end
	
	bcdSevenSegment segment1 (divClk, unitCounter1, 1'b1, reg_u_disp1);
	bcdSevenSegment segment2 (divClk, unitCounter2, 1'b1, reg_u_disp2); 
	bcdSevenSegment segment3 (divClk, decimalCounter1, 1'b1, reg_dec_disp1);
	bcdSevenSegment segment4 (divClk, decimalCounter2, 1'b1, reg_dec_disp2);
	
	
	always @(posedge divClk) begin
		case(segC)
		2'b00: begin 
			segmentCount = 4'b0111;
			disp = reg_u_disp2; 
			point = 1;
		end
		2'b01: begin 
			segmentCount = 4'b1011;
			disp = reg_dec_disp2; 
			point = 1;
		end 
		2'b10: begin 
			segmentCount = 4'b1101;
			disp = reg_u_disp1;
			point = 0;
		end
		2'b11: begin 
			segmentCount = 4'b1110;
			disp = reg_dec_disp1;  
			point = 1;
		end
		endcase
	end
	
	
	// begin transmission
	assign firstNum = decimalCounter1 * 10 + unitCounter1;
	assign secNum = decimalCounter2 * 10 + unitCounter2;
	
	always @ (posedge divClk) begin
	if(rst) begin
			data1 <= 0;
			data2 <= 0;
	end
	else begin
		data1 <= firstNum;
		data2 <= secNum;
	end
	end
/*always @ (posedge divClk) begin
	if(rst)
			s_next <= s_idle;
	else begin
		case(s_next)
			s_idle:
				s_next <= (transmit_dv) ? s_sendFirst : s_idle;
				
			s_sendFirst: begin
				data <= firstNum;
				if(active)
					s_next <= s_sendFirst;
				else 
					s_next <= (done) ? s_sendSec : s_sendFirst;
			end
			s_sendSec: begin
				data <= secNum;
				if(active)
					s_next <= s_sendSec;
				else 
					s_next <= (done) ? s_done : s_sendSec;
			end
			
			s_done: begin		
			 	s_next <= s_idle;
			end
			
			default:
				s_next <= s_idle;
				
		endcase
	end
	end*/
endmodule

