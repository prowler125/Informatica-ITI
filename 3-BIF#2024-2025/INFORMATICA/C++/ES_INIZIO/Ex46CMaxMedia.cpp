/*Ex 46C
Max e Media vettore
Dichiara un vettore di N elementi. Caricalo come sopra,
stampa vettore, calcola  e stampa elemento massimo e
la media elementi del vettore*/

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    const int N = 10;
    int vett[N];
    int media = 0;
    cout << "Dammi i valori del vettore, da tastiera: " << endl;
    int max = 0;
    for (int i = 0; i <= N; i++)
    {
        cin >> vett[i];
        if (vett[i] > max)
        {
            max = vett[i];
        }
        media = (media + vett[i]) / 2;
    }
    cout << "Il massimo e': " << max << endl;
    cout << "La media e': " << media << endl;

    return 0;
}