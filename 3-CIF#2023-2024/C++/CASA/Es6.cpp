/*Scrivere un programma C che legga un vettore
di 100 elementi e stampi 1 se l'insieme
rappresentato contiene tutti i numeri di un
intervallo senza duplicati*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    const int N = 100;
    int vett[N];
    int x = 0, y = 0, a = 0, b = 0;
    cout << "Dammi l'intervallo di valori, da tastiera: ";
    for (int j = 0; j < N; j++)
    {
        cin >> a >> b;
        if (j <= a && j >= b)
        {
            cout << "Dammi i valori dell'array, da tastiera: ";
            for (int i = 0; i < N; i++)
            {
                cin >> vett[i];
            }
        }
        else if (j >= a && j <= b)
        {
            break;
        }
    }
    return 0;
}