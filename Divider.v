`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:09:49 05/16/2018 
// Design Name: 
// Module Name:    Divider 
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
module Divide(Result,Remainder, ready,dividend,divider,sign,clk, approx);
	input			approx;
   input         clk;
   input         sign;
   input [31:0]  dividend, divider;

   output        ready;
	output reg [31:0] Result, Remainder;


   reg [31:0]    quotient, quotient_temp;
   reg [63:0]    dividend_copy, divider_copy, diff;
   reg           negative_output;
   
   wire [31:0]   remainder = (!negative_output) ? 
                             dividend_copy[31:0] : 
                             ~dividend_copy[31:0] + 1'b1;

   reg [5:0]     bit; 
   wire          ready = !bit;

   initial bit = 0;
   initial negative_output = 0;

   always @( posedge clk ) begin

     if( ready ) begin

        bit = 6'd32;
        quotient = 0;
        quotient_temp = 0;
        dividend_copy = (!sign || !dividend[31]) ? 
                        {32'd0,dividend} : 
                        {32'd0,~dividend + 1'b1};
        divider_copy = (!sign || !divider[31]) ? 
                       {1'b0,divider,31'd0} : 
                       {1'b0,~divider + 1'b1,31'd0};

        negative_output = sign &&
                          ((divider[31] && !dividend[31]) 
                        ||(!divider[31] && dividend[31]));	
		// to stabilize the remainder
			Remainder = remainder;
        
     end 
     else if ( bit > 0 ) begin

        diff = dividend_copy - divider_copy;

        quotient_temp = quotient_temp << 1;

        if( !diff[63] ) begin

           dividend_copy = diff;
           quotient_temp[0] = 1'd1;

        end

        quotient = (!negative_output) ? 
                   quotient_temp : 
                   ~quotient_temp + 1'b1;


        divider_copy = divider_copy >> 1;
        bit = bit - 1'b1;

     end
	  // to stabilize the result to display
	  if (bit == 0 ) begin	
			if(remainder >= divider/2	&& approx)
				Result = quotient + 1;
			else
				Result = quotient;	
	  end
	  else if (approx)
			Result = 0;
	  
	end
endmodule
