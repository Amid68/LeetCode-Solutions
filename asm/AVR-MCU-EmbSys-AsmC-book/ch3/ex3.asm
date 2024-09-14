// Write a program to get data from the PINB and send it to the I/O register of PORT C continuously.


Again:  IN  R16, PINB    ; bring data from PortB into R16
        OUT PORTC, R16   ; send it to Port C
        JMP AGAIN        ; endless loop
 
