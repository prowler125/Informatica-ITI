.model small
.stack 100h
.data
  num1 db 50
  num2 db 250
  tot dw ?
.code
inizio:
   mov ax,@data
   mov ds,ax
 
   mov ax,0
   push ax   
   mov al, num2
   push ax         
   mov al, num1
   push ax         
   call addizione  
   pop ax
   pop ax
   pop tot
 
  
 
   mov ah,4Ch
   int 21h
addizione proc         
   push bp
   mov bp,sp
   par1 equ [bp+4]
   par2 equ [bp+6]
   par3 equ [bp+8]
 
   mov ax,par1
   add ax,par2
   mov par3,ax
 
   pop bp
   ret
addizione endp       
 
end inizio         