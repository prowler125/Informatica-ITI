/*
Ex 58A-F RICERCA SEQUENZIALE in VETTORE NON ORDINATO:
definire una funzione cercaVet che dato un vettore di interi VET già caricato
(random da 1 a 10) di 20 elementi, ed un numero X lo cerca nel vettore e restituisce
l'ndice della prima posizione in cui appare;
se il numero non e' presente restituisce -1.

NB: si ferma alla prima occorenza di X ignorando le eventuali seguenti.
Usa le funzioni.
caricaVet e stampaVet.

Modifica caricaVet perche' abbia come parametro anche il valore TOP
per generare numeri a caso tra 1 e TOP

Nel main() procedi come segue:
    1. Leggi il numero X da cercare da tastiera;
    2. Carica e stampa il vettore;
    Stampa l’esito della ricerca e la posizione se X viene trovato.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void caricaVet(int VET[], int size, int TOP)
{
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        VET[i] = rand() % TOP + 1;
    }
}

void stampaVet(int VET[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << VET[i] << " ";
    }
    cout << endl;
}

int cercaVet(int VET[], int size, int X)
{
    for (int i = 0; i < size; i++)
    {
        if (VET[i] == X)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    const int size = 20;
    int VET[size];
    int TOP = 10;
    int X;

    cout << "Inserisci il numero da cercare: ";
    cin >> X;

    caricaVet(VET, size, TOP);
    stampaVet(VET, size);

    int posizione = cercaVet(VET, size, X);
    if (posizione != -1)
    {
        cout << "Numero trovato in posizione: " << posizione << endl;
    }
    else
    {
        cout << "Numero non trovato" << endl;
    }

    return 0;
}