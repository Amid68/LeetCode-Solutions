// Write a program to (a) clear R20, then (b) add 3 to R20 ten times, and
// (c) send the sum to PORTB. Use the zero flag and BRNE.

.INCLUDE "M32DEF.INC"
        LDI  R16, 10    ; R16 = 10
        LDI  R20, 0     ; R20 = 0
        LDI  R21, 3     ; R21 = 3
AGAIN:  ADD  R20, R21   ; add 3 to R20
        DEC  R16        ; R16--
        BRNE AGAIN      ; repeat until COUNT = 0 
        OUT  PORTB, R20 ; send sum to PORTB



