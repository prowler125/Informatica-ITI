/*
Ex. 46C-F
Massimo e Media Vettore
Dichiara e definisci una funzione max ed una media
che hanno come parametri un vettore Vett di N elementi
la sua dimensione N.
Nel main usa le varie funzioni poi stampa la media e il massimo del Vettore
*/
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int maxVett(int[], int);
int mediaVett(int[], int);

int main()
{
    const int N = 10;
    int vett[N];
    cout << "Dammi i valori del Vettore, da tastiera:" << endl;
    for (int i = 0; i <= N; i++)
    {
        cout << "Dammi il valore dell'indice: " << i << endl;
        cin >> vett[i];
    }
    cout << "La Media del Vettore e': " << mediaVett(vett, N) << " mentre il valore più altoe': " << maxVett(vett, N) << endl;
    return 0;
}

int mediaVett(int vett[], int N)
{
    N = 10;
    int vett[N];
    int meVett = 0;
    for (int i = 0; i <= N; i++)
    {
        meVett = (meVett + vett[i]) / N;
    }
    cout << meVett << endl;
}

int maxVett(int vett[], int N)
{
    N = 10;
    int vett[N];
    int maVett = 0;
    for (int i = 0; i <= N; i++)
    {
        if (vett[i] > maVett)
        {
            maVett = vett[i];
        }
    }
}