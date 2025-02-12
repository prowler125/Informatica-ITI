'''Secondo Esercizio in Python del Corso I.A.'''


#Prima Parte: utilizzo di if, else ed elif
print('Prima Parte: utilizzo di if, else ed elif')
A=input("Immetti A: ")
B=input("Immetti B: ")
C=input("Immetti C: ")
if(A>B):
    if(A>C):
        print(f'A = {A} è maggiore di B = {B} ed è maggiore anche di C = {C}')
    else:
        print(f'A = {A} è maggiore SOLO di B = {B}')