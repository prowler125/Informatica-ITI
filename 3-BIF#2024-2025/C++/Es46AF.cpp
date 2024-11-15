/*Ex 46A-F
Carica  vettore
Dichiara una funzione caricaVet che ha come parametri un vettore
V di N elementi la sua dimensione N. Infine Carica il vettore
(con numeri a caso o con un ciclo for) con stampa vettore con stampaVet*/

/*Ex 46-F

Stampa vettore

Dichiara una funzione che ha come parametri un
vettore V di N elementi e la sua dimensione N.
Infine stampa il vettore*/

#include <iostream>
using namespace std;

void stampaVett(int[], int);
void caricaVett(int[], int);
int main()
{
    const int N = 10;
    int vett[N];
    cout << "Dammi i valori del Vettore, da tastiera: " << endl;
    for (int i = 0; i < N; i++)
    {
        vett[i] = i * 5;
    }
    stampaVett(vett, N);
    return 0;
}

void stampaVett(int vett[], int N)
{
    cout << "Ecco il Vettore: ";
    for (int i = 0; i < N; i++)
    {
        cout << vett[i] << "\t";
    }
}

void caricaVett(int vett[], int N)
{
    for (int i = 0; i < N; i++)
    {
        vett[i] = i * 5;
    }
}