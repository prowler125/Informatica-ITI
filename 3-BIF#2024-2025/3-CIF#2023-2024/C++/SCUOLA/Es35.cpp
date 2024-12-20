/*Scrivere un programma che legga un array di interi di 10 posizioni e dica se in
tutte le posizioni pari dell’array è memorizzato un numero pari*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int N = 10;
    int vett[N];
    cout << "Dammi valori dell'Array, da tastiera: ";
    for (int i = 0; i <= 10; i++)
    {
        cin >> vett[i];
        if (i % 2 == 0)
        {
            if (vett[i] % 2 == 0)
            {
                cout << "Nella cella N° " << i << " è stato memorizzato il numero: " << vett[i] << " il quale è PARI.";
            }
        }
        else if (i % 2 == 1)
        {
            cout << "Non è una cella con Indice Pari: NON eseguo il Controllo.";
        }
    }

    return 0;
}