/*
Ex. 152
Funzioni stringa ed istogrammi (classe string)


Definire le seguenti funzioni e poi  nel main dichiarare un vettore ( lungo 20) di
stringhe e chiamare le funzioni  per
stampare istogrammi orizzontali :


a.
caricavet: carica  il
vettore con stringhe vuote;

b.
stampavet: stampa ogni stringa del vettore su righe diverse;

c.
….BETA ( string [ ], int ,char) …. Opera sul vettore di stringhe ed espande ogni
stringa con il carattere char; ogni stringa del vettore avrà lunghezza diversa
(casuale tra 5 e 50) ;

d.
Nel main dopo avere definito il vettore di stringhe,
chiama caricavet e stampavet, poi BETA e stampavet.

NB: Per caricavet e stampavet modificare
opportunamente le analoghe funzioni già
fatte per vettori di numeri.

*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void caricavet(string v[], int N)
{
    for (int i = 0; i < N; ++i)
    {
        v[i] = "";
    }
}

void stampavet(const string v[], int N)
{
    for (int i = 0; i < N; ++i)
    {
        cout << v[i] << endl;
    }
}

void BETA(string v[], int N, char c)
{
    srand(time(0));
    for (int i = 0; i < N; ++i)
    {
        int length = rand() % 46 + 5;
        v[i] = string(length, c);
    }
}

int main()
{
    const int N = 20;
    string v[N];

    caricavet(v, N);
    stampavet(v, N);

    BETA(v, N, '*');
    stampavet(v, N);

    return 0;
}
