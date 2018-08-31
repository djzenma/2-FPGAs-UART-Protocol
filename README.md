# Engineers: Mazen Amr and Khaled Soliman

# 2-FPGAs-UART-Protocol

**Objectives:**

Implement 2 FPGAs:
The first FPGA is a transmitter which takes 2 numbers as input and sends them to a receiver FPGA.
The second FPGA acts as an ALU with the following operations: addition, subtraction, multiplication and division on the two numbers sent from the first FPGA.

**Description:**

  On the transmitter side, the user has 4 buttons: first button is for the units of the first number, the second one is for the tens of the first number, the third button is for the units of the second number and finally the fourth number is for the tens of the second number. The two numbers are separated by a dot in the middle. We proceed by sending the two numbers by rising a switch that starts the UART operations. We then receive the two numbers on the receiving side which is the second FPGA. The user has also 4 buttons: first button is for addition, second one is for subtraction, third one is for multiplication and the last one is for division.

  Each of the transmitter and the receiver contain reset switches that reset all the operations and numbers stored in them to 0 value and stops all operations. As for the transmitter it also possesses another switch for transmission enabling that continuously transmits the two displayed numbers on the 7 segment display to the receiver unit. As for the receiver it continuously receives the data from the serial pins on the FPGA indicated as serial1 and serial2 in the code and connected to the pins A9, C6 respectively. The transmission enable input switch is connected to E2 pin on the FPGA and is indicated by transmit_en in the code. Reset buttons are connected to pins N3 on both FPGAs. After 30 seconds of not receiving new data the receiver resets its display to 0.

  The UART protocol for transmission follows a specified behavior of sending a start bit indicating the start of a transmission followed by a specified number of bits in our case 8 bits then a stop bit indicating the end of transmission. The receiver unit awaits the data as per the behavior described in the transmission unit. It is important to note that both the units were built on Finite State Machines indicating their current state of operation e.g.: idle, start bit, and so forth. The transmitter always awaits a period of half a bit sending period after the start bit to make sure it starts sending stable data.
  
  P.S: The reason why there are so much C and HTML files (way more than the actual Verilog files) is that we used Xilinx CAD tool to make this project.
