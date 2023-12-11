%include “io.inc”

section .data

max dd 0

section .text

global CMAIN

CMAIN:

mov ebp, esp

GET_DEC 4, eax

GET_DEC 4, edx

cmp eax, edx

jg else

PRINT_STRING “x è più piccolo di y”

mov [max], edx

jmp fuoridallif 

else: 
PRINT_STRING “x è più grande di y”

mov [max], eax

fuoridallif:

NEWLINE

PRINT_DEC 4, max

xor eax, eax

ret