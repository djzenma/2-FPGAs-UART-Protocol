`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:35:32 05/16/2018 
// Design Name: 
// Module Name:    testRem 
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
module mod_div(
    input clk,
    input rst,
    input start,
    input  [7:0] num,
    input  [7:0] den,
    output [7:0] res,
    output [7:0] rem,
    output reg done
);
/* Registers to store the input arguments */
reg [7:0] num_r;
reg [7:0] den_r;
/* counts the number of times denominator fits in numerator */
reg [7:0] result_integer;
/* True if the algorithm is running */
reg working;


always @(posedge clk) begin
    if(rst == 1'b1)begin
        /* setting the working registers to 0 */
        num_r <= 8'b0;
        den_r <= 8'b0;
        working <= 1'b0;
        result_integer <= 'b0;
        done <= 'b0;
    end else if(start == 1'b1) begin
        /* Captures the parameters and starts the operation */
        num_r <= num;
        den_r <= den;
        working <= 1'b1;
        done <= 1'b0;
    end
    /* The actual algorithm */
    if (working == 1'b1 && start == 1'b0)begin
        if(num_r >= den_r) begin
            /* The division will give a proper fraction */
            num_r <= num_r - den_r;
            result_integer <= result_integer + 8'b1;
        end else begin
            working <= 'b0;
            done <= 1'b1;
        end
    end
end



/* The reminder of the division  */
assign rem = num_r;
/*The integer part is the number of times the divisor was substracted from the
* numerator*/
assign res = result_integer;

endmodule 