/*Scrivere un programma che legga un array di interi di 10 posizioni e dica se in
tutte le posizioni pari dell’array è memorizzato un numero pari*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int N = 10;
    int vett[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Inserisci i valori dell'Array da tastiera: " << endl;
        cin >> vett[i];
        if (vett[i] % 2 == 0)
        {
            cout << "Il numero " << vett[i] << " e' pari" << endl;
        }
        else
        {
            cout << "Il numero " << vett[i] << " e' dispari" << endl;
        }
    }

    return 0;
}