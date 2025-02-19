"""
Terzo Esercizio in python del Corso I.A.
"""

# Prima Parte: primo uso delle Liste

print("Prima Parte: primo uso delle Liste")

# Prima Lista creata!
numeri = [10, 20, 14]
nomi = ["Massimiliano", "Mario", "Paolo"]
mista = [2, "mele", 2.4, 4, "banane", 0, 99]

"""Utilizziamo "len()" in Python per conoscere
il numero degli elementi in una lista"""
n = len(numeri)
print("La lista contiene ", n, "elementi")


"""
Per estrarre e stampare un elemento
dobbiamo conoscere la sua posizione.
Quindi per estrarre il 1° elemento
dalla Lista NUMERI, scriveremo:
"""
print(numeri[0])

"""
Questa struttura è
composta nel seguente modo:

'PRINT()'   ==      la classica istruzione per STAMPARE;
'numeri'    ==      la Lista Numeri;
'[0]'       ==      l'indice del 1° elemento
"""

"""
Per stampare l'INTERO contenuto di
una lista, scriveremo semplicemente:
"""

print(numeri)
print(nomi)
print(mista)

elenco_amici = []
print("Questa è una lista vuota")
print(elenco_amici)

elenco_amici.append(1)
elenco = ["foo", "bar"]

elenco_amici.append(elenco)
