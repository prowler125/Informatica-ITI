/*Ex 46-F

Stampa vettore

Dichiara una funzione che ha come parametri un
vettore V di N elementi e la sua dimensione N.
Infine stampa il vettore*/

#include <iostream>
using namespace std;

int stampaVett(const int &, int &);

int main()
{
    const int N = 10;
    int vett[N];
    cout << "Dammi i valori del Vettore, da tastiera: " << endl;
    for (int i = 0; i <= N; i++)
    {
        cin >> vett[i];
    }
    return 0;
}

int stampaVett(const int &N, int *vett)
{
    cout << "Ecco il Vettore: " << vett[N];
}