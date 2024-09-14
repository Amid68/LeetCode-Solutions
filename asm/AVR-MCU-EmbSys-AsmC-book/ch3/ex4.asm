// Write a simple program to toggle the I/O register of PORT B continuously forever.


    LDI R20, 0x55   ; R20 = 0x55 (01010101)
    OUT PORTB, R20  ; move R20 to PORTB SFR (PB = 0x55)
L1: COM R20         ; complement R20 (01010101 <-> 10101010)
    OUT PORTB, R20  ; move R20 to PORTB SFR
    JMP L1


