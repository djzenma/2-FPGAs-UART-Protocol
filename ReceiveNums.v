`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:58:12 05/11/2018 
// Design Name: 
// Module Name:    ReceiveNums 
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
module ReceiveNums(
			output reg [7:0] led,
			output reg [6:0]disp,
			output reg [3:0]segmentCount,
			input rst,
			input serial1,
			input serial2,
			input clk,
			input addBut,
			input subBut,
			input multBut,
			input divBut
			);
			
wire divClk, divClk1Hz, dv1, dv2;
wire [7:0] rdata1, rdata2;
wire debAdd, debSub, debMult, debDiv, syncAdd, syncSub, syncMult, syncDiv, add, sub, mult, div;
wire[1:0] segC;
wire[6:0] w_units, w_tens, w_hundreds, w_thousands, w_negative;
wire[6:0] units_seg, tens_seg, hundreds_seg, thousands_seg;
wire[31:0] units, tens, hundreds, thousands;
wire w_validResult;
wire [31:0] result;
wire [3:0] negative;
wire [3:0] calc;

reg[2:0] aluSel;
reg[7:0] data1;
reg[7:0] data2;
reg[11:0] counter;
reg[4:0] ledCount;
reg r_reset;
parameter [6:0] fail = 7'b0111000;
//parameter [2:0] s_idle = 3'b000, s_takeFirst=3'b001, s_waitSec = 3'b010, s_takeSec=3'b011, s_done=3'b100;
//reg[1:0] s_next;

initial begin
	ledCount = 0;
	r_reset = 0;
	data1 = 0;
	data2 = 0;
	counter = 0;
	aluSel = 3'b101;
end

Clock_Divider dividedClock1 (divClk, clk, 1);
Clock_Divider dividedClock2 (divClk1Hz, clk, 0);

SegmentCounter segCounter  (segC, divClk);

Debouncer debouncer1(divClk, addBut, debAdd);
Debouncer debouncer2(divClk, subBut, debSub);
Debouncer debouncer3(divClk, multBut, debMult);
Debouncer debouncer4(divClk, divBut, debDiv);

Synchronizer Sync1 (debAdd, clk, syncAdd);
Synchronizer Sync2 (debSub, clk, syncSub);
Synchronizer Sync3 (debMult, clk, syncMult);
Synchronizer Sync4 (debDiv, clk, syncDiv);

RED RED1 (syncAdd, rst, divClk, add);
RED RED2 (syncSub, rst, divClk, sub);
RED RED3 (syncMult, rst, divClk, mult);
RED RED4 (syncDiv, rst, divClk, div);

Receiver receiver1(
clk,
serial1, // Receiver Line
done1, // Control Line
rdata1 // Data Recieved
);

Receiver receiver2(
clk,
serial2, // Receiver Line
done2, // Control Line
rdata2 // Data Recieved
);

always @ (posedge divClk) begin
	if(rst || r_reset) begin
		data1 = 0;
		data2 = 0;
	end
	else begin
		if(done1)
			data1 = rdata1;
		else
			data1 = data1;
		if(done2)
			data2 = rdata2;
		else
			data2 = data2;
	end	
end

always @ (posedge divClk) begin
	if (add)
		aluSel = 3'b000;
	else if (sub)
		aluSel = 3'b001;
	else if (mult)
		aluSel = 3'b010;
	else if (div)
		aluSel = 3'b100;
end

ALU alu (data1, data2, aluSel, result, remainder, ZFlag, clk, negative);


// DISPLAY 
BCD converter( clk,
   result,
   units,
	tens,
	hundreds,
	thousands
 ); //BATEEEEE2 FASH5555

assign units_seg = units[3:0];
assign tens_seg = tens[3:0];
assign hundreds_seg = hundreds[3:0];
assign thousands_seg = thousands[3:0];

bcdSevenSegment segment1(divClk, units_seg, 1'b1, w_units);
bcdSevenSegment segment2(divClk, tens_seg, 1'b1, w_tens);
bcdSevenSegment segment3(divClk, hundreds_seg, 1'b1, w_hundreds);
bcdSevenSegment segment4(divClk, thousands_seg, 1'b1, w_thousands);

bcdSevenSegment segment5(divClk, negative, 1'b1, w_negative);


always @(posedge divClk) begin
	case(segC)
	2'b00: begin // units
		segmentCount = 4'b0111;
		disp = w_validResult ? w_units: fail;
	end
	2'b01: begin // tens
		segmentCount = 4'b1011;
		disp = w_validResult ? w_tens : fail;
	end 
	2'b10: begin // hundreds
		segmentCount = 4'b1101;
		disp = w_validResult ? ((negative != 0 && aluSel==3'b001) ? w_negative : w_hundreds) : fail;
	end
	2'b11: begin // thousands
		segmentCount = (negative != 0 && aluSel==3'b001) ? 4'b1111 : 4'b1110;
		disp = w_validResult ? w_thousands : fail;
	end
	endcase
end

assign w_validResult = (result <= 9999);

always @ (posedge divClk) begin
	if(done1 || done2)
		counter = 0;
	else  begin
		counter = counter + 1;
		if (counter == 3000) begin
			counter = 0;
			r_reset = 1;
		end
		else
			r_reset = 0;
	end
end

always @ (posedge divClk1Hz) begin
if(ledCount == 8)
			ledCount = 0;
		case (ledCount)
			0: led = 8'b10000000;
			1: led = 8'b11000000;
			2: led = 8'b11100000;
			3: led = 8'b11110000;
			4: led = 8'b11111000;
			5: led = 8'b11111100;
			6: led = 8'b11111110;
			7: led = 8'b11111111;
		endcase
		ledCount = ledCount + 1;
end

endmodule

