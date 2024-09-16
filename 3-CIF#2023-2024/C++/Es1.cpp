/*Scrivere un programma che, dato un array di dimensione 10, inserisca
automaticamente zero nelle posizioni caratterizzate da un indice pari ed un in
quelle caratterizzate da un indice dispari (N.B. l’array deve contenere i
seguenti numeri 0, 1, 0, 1, 0, 1, 0, 1, 0, 1).*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int N = 10;
    int vett[N];
    for (int i = 0; i < N; i++)
    {
        if (vett[i] % 2 == 0)
        {
            vett[i] = 0;
        }
        else if (vett[i] % 2 == 1)
        {
            vett[i] = 1;
        }
        cout << vett[i] << endl;
    }
    return 0;
}