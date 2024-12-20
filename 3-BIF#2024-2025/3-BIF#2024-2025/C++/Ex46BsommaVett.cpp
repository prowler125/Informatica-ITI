/*Ex 46B

Somma Vettore

Dichiara un vettore di N elementi.
Caricalo come sopra, stampa vettore
calcola  e stampa la somma degli elementi del vettore.*/

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    const int N = 5; // Dichiarazione ed Inizializzazione Variabili.
    int vett[N];
    int sommaVett = 0;

    cout << "Dammi i Valori del Vettore, da tastiera." << endl;

    for (int i = 0; i <= N; i++) // Inizio Ciclo For per lettura Valori del Vettore.
    {
        cin >> vett[i];
        sommaVett = sommaVett + vett[i];
    }
    cout << "La somma del vettore è: " << sommaVett << endl;

    return 0;
}
