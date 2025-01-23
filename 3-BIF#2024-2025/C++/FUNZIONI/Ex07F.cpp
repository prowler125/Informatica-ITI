/*
Ex07-F
Triangolo Equilatero
Dati un numero intero N (con 5<=N<=15 ) ed un char X, relativamente ad un triangolo
equilatero” di lato N (che qui si stampa approssimato come fosse anche rettangolo),
formato dal carattere contenuto in X, definire le seguenti funzioni:

1.  triangolo : stampa  tutto il triangolo
2.  cornice :         stampa solo la  Cornice  del  triangolo
3.  interno:           stampa solo interno del   triangolo
4.  dispari:           ritorna se un numero è dispari o meno
5.  altezza:           stampa   l’altezza relativa all’ ipotenusa“” assieme alla cornice, solo se N è dispari -  usa   funzione dispari (N) .
6.  angoli:            stampa soli gli angoli del triangolo
7.  casuale:         stampa tutto il  triangolo formato da  caratteri generati  a caso  all’interno della tabella ASCII ( es.33-255).
Nel main ( ), dopo avere letto N ed X
-      chiamare le funzioni sopra indicate.
-      Usare system( “pause”) per agevolare le  rappresentazioni a video delle varie funzioni
-      contare e stampare il numero totale di  volte che viene visualizzato  il carattere X.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void triangolo(int N, char X)
{
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << X;
        }
        cout << endl;
    }
}

void cornice(int N, char X)
{
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            if (i == N || j == 1 || j == i)
            {
                cout << X;
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
}

void interno(int N, char X)
{
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            if (i == N || j == 1 || j == i)
            {
                cout << X;
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
}

bool dispari(int N)
{
    return N % 2 != 0;
}

void altezza(int N, char X)
{
    if (dispari(N))
    {
        cornice(N, X);
        cout << "Altezza: " << N << endl;
    }
}

void angoli(int N, char X)
{
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            if ((i == 1 && j == 1) || (i == N && j == 1) || (i == N && j == N))
            {
                cout << X;
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
}

void casuale(int N)
{
    srand(time(0));
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << (char)(33 + rand() % (255 - 33 + 1));
        }
        cout << endl;
    }
}

int main()
{
    int N;
    char X;
    cout << "Inserisci un numero intero N (5 <= N <= 15): ";
    cin >> N;
    cout << "Inserisci un carattere X: ";
    cin >> X;

    int countX = 0;

    triangolo(N, X);
    system("pause");

    cornice(N, X);
    system("pause");

    interno(N, X);
    system("pause");

    altezza(N, X);
    system("pause");

    angoli(N, X);
    system("pause");

    casuale(N);
    system("pause");

    for (int i = 1; i <= N; ++i)
    {
        countX += i;
    }
    cout << "Il carattere " << X << " è stato visualizzato " << countX << " volte." << endl;

    return 0;
}
