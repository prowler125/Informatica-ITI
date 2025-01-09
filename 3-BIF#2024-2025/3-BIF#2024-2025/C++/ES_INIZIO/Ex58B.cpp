/*Ex 58B-F
RICERCA SEQUENZIALE in VETTORE NON ORDINATO:
partendo da ex58A-F, definire una funzione cercaVet che dato un vettore di interi   VET già caricato  ( random da 1 a 10 ) di 20 elementi, ed un  numero X ,  cerca  X nel vettore e restituisce:
- il conteggio di quante volte X appare nel vettore
-  gli indici di TUTTE le posizioni in cui eventualmente X  appare;
Suggerimento: usa un vettore INDEX per memorizzare le posizioni di X
Usa le funzioni.  caricaVet e stampaVet.
Modifica caricaVet perchè abbia come parametro anche  il valore TOP per generare numeri a caso tra 1 e TOP
Modifica stampaVet perchèstampi solo valori >= 0;
 Nel main () procedi come segue:
 leggi il numero  X  da cercare da tastiera
 carica e stampa il vettore
- chiama cercaVet
stampa   l’esito della ricerca
S esito positivo stampa  le posizioni   in cui  X  viene trovato*/

#include <iostream>
#include <vector>
using namespace std;

void caricaVet(vector<int> &VET, int TOP)
{
    for (int i = 0; i < VET.size(); i++)
    {
        VET[i] = rand() % TOP + 1;
    }
}

void stampaVet(const vector<int> &VET)
{
    for (int i = 0; i < VET.size(); i++)
    {
        if (VET[i] >= 0)
        {
            cout << VET[i] << " ";
        }
    }
    cout << endl;
}

void cercaVet(const vector<int> &VET, int X, vector<int> &INDEX)
{
    int count = 0;
    for (int i = 0; i < VET.size(); i++)
    {
        if (VET[i] == X)
        {
            INDEX.push_back(i);
            count++;
        }
    }
    cout << "Numero di occorrenze di " << X << ": " << count << endl;
    cout << "Posizioni in cui " << X << " appare: ";
    for (int i = 0; i < INDEX.size(); i++)
    {
        cout << INDEX[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> VET(20);
    int TOP = 10;
    int X;

    cout << "Inserisci il numero da cercare: ";
    cin >> X;

    caricaVet(VET, TOP);
    stampaVet(VET);

    vector<int> INDEX;
    cercaVet(VET, X, INDEX);

    return 0;
}