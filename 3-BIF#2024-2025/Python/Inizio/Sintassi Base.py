#Primo Esercizio in Python

"""
print("Prima Parte: ")
print(1, 2, 3, sep='|')
A=10
print(A)
print("Seconda Parte: ")
A=10 
B=12
C='ciao'
D=0,2345
print("Questo è A: ")
print("A =", A)
print("Questo è B: ")
print("B =", B)
B=A+1
print("Questo è B, dopo la modifica: ", B)
print("C =", C)
print("D =", D)
"""
"""
print("Terza Parte: ")
nome=input("Come ti chiami? ")
print("Ciao", nome)
print("Quarta Parte: ")
print("Somma Artmetica semplice")
A=input("Dammi il primo Numero A: ")
B=input("Dammi il primo Numero B: ")
S=int(A)+int(B)
print("Somma: ", S)
"""
"""
print("Quinta Parte:")
#Chiedo la temperatura all'Utente
temperatura=int(input("Immetti la temperatura: "))
if(temperatura>21):
    print("Fa caldo!")
elif(temperatura<10):
    print("Fa freddo!")
else:
    print("Si sta bene")
"""
print("Sesta Parte:")
#Confronto tra 3 numeri:
A=input("Immetti A: ")
B=input("Immetti B: ")
C=input("Immetti C: ")
if(A>B):
    #print(f"A = {A} è maggiore di B = {B}")
    if(A>C):
            print(f"A = {A} è maggiore di B = {B} ed è maggiore anche di C = {C}")
    else:
        print(f"A = {A} è maggiore di B = {B} ed è maggiore anche di C = {C}")
else:
    if(B>C):
        print(f"B = {B} è maggiore di A = {A} ed è maggiore anche di C = {C}")
    else:
        print(f"A = {C} è maggiore di B = {A} ed è maggiore anche di C = {B}")