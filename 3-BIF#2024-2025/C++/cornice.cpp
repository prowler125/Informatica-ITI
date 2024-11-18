/*Definire una funzione QCORNICE
che ha per parametri un numero
N ed un carattere X, che stampa
solo cornice esterna di un
quadrato di lato N fatto di
caratteri X.

Chiamarla nel main su numeri che
vanno da 1 ad N con N letto da tastiera*/
#include <iostream>
using namespace std;

void qCornice(int, char);

int main()
{
    int N;
    cout << "Immetti il valore di N ";
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        qCornice(i, 'X');
        cout << endl;
    }

    return 0;
}

void qCornice(int N, char c)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i == 1 || i == N || j == 1 || j == N)
                cout << c << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}