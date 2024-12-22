/*Ex 46     Carica vettore
Dichiara un vettore V  di N elementi interi.
Caricalo con numeri (da tastiera, random
oppure con indice  di un ciclo for);
stampa il vettore*/

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    const int N = 20;
    int vett[N];
    cout << "Dammi il Valore dell'indice: 0" << endl;
    for (int i = 0; i <= N; i++)
    {
        cout << "Indice: " << i << endl;
        cin >> vett[i];
    }
    return 0;
}