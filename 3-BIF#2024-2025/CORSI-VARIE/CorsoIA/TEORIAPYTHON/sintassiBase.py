'''
Primo Esercizio in Python del Corso I.A.
'''


#Prima Parte: uso Sintassi Base

print('Prima Parte:')
print('Utilizzo della Sintassi Base come il "print()"')
print('Hello World!')
print(1, 2, 3, sep='|')
A=10
print(A)
input("Premi un tasto per continuare...")


#Seconda Parte: primo uso delle Variabili

print('Seconda Parte:')
print('Primo uso delle Variabili')

#Il tipo di Variabile in Python NON esiste: viene associato AUTOMATICAMENTE.
print('Il tipo di Variabile in Python NON esiste: viene associato AUTOMATICAMENTE.')

A=10
print(f'Scritto sopra vi è, infatti, un esempio di Variabile intera: ', end="")
print(f'A = {A}')

C='Ciao'
print(f'Scritto sopra vi è, invece, un esempio di Stringa: ', end="")
print(f'C = {C}')

D=0,2345
print(f'Ancora, scritto sopra troviamo, un esempio di Float: ', end="")
print(f'D = {D}')


#Terza parte: uso di Input("") e operazioni Aritmetiche semplici

print('Terza Parte')
print('Uso di "input("")" e prime Operazioni Aritmetiche semplici')

#Uso di input("")
nome=(input("Come ti chiami? "))
print("Ciao", nome)

#Prime operazioni Aritmetiche semplici
print('Prime operazioni Aritmetiche semplici')
print('Somma Aritmetica semplice')
A=input("Dammi il primo numero A: ")
B=input("Dammi il primo numero B: ")
somma=int(A)+int(B)
print(f'La Somma è: ', {somma})

