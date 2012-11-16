stdioId .equ $03

; Commands
cmdNone .equ 0
cmdPrintChar .equ 1
cmdPrintString .equ 2
cmdPrintLine .equ 3
cmdClearTerminal .equ 4

; Routines
registerThread .equ 6
releaseThread .equ 9
readCommand .equ 12
printChar .equ 15
printString .equ 18
printLine .equ 21
clearTerminal .equ 24