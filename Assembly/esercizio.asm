name "esercizio boh"

org 100h



; (signed/unsigned)
mov ah, 4
mov al, 4
cmp ah, al
nop

; (signed/unsigned)
mov ah, 4
mov al, 3
cmp ah, al
nop

; -5 = 251 = 0fbh

; (signed)
mov ah, 1
mov al, -5
cmp ah, al
nop

; (unsigned)
mov ah, 1
mov al, 251
cmp ah, al
nop

; (signed)
mov ah, -3
mov al, -2
cmp ah, al
nop

; (signed)
mov ah, -2
mov al, -3
cmp ah, al
nop

; (unsigned)
mov ah, 255
mov al, 1
cmp ah, al
nop

; now a little game:
game:  mov dx, offset msg1
       mov ah, 9
       int 21h

       ; read character in al:
       mov ah, 1 
       int 21h

       cmp al, '0'
       jb stop

       cmp al, '9'
       ja stop

       cmp al, '5'
       jb below
       ja above
       mov dx, offset equal_5
       jmp print
below: mov dx, offset below_5     
       jmp print
above: mov dx, offset above_5
print: mov ah, 9
       int 21h
       jmp game 


stop: ret 


msg1 db "inserisci un numero :  $"
equal_5 db " e' cinque! (Uguale)", 0Dh,0Ah, "$"
below_5 db " e' minore di cinque!" , 0Dh,0Ah, "$"
above_5 db " e' maggiore di cinque!" , 0Dh,0Ah, "$"


