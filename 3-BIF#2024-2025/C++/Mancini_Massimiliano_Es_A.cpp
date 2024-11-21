/*
Ex. A   Triangolo Equilatero
Mancini Massimiliano
III^B if
21-11-2024
*/

/*
Variabili:
    N == INTERO;    5<=N<=15
    X == CHAR;
*/

/*
Funzioni:
    TRIANGOLO == stampa TUTTO il triangolo;
    CORNICE == stampa la CORNICE del triangolo;
    INTERNO == stampa l'INTERNO del triangolo;
    DISPARI == ritorna se il NUMERO è Dispari/Pari
    ALTEZZA == stampa l'ALTEZZA dell'Ipotenusa e la CORNICE, se N%2==1;
    ANGOLI == stampa gli ANGOLI del triangolo;
    CASUALE == stampa TUTTO il triangolo con caratteri CASUALI dall'ASCII;
*/

#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
using namespace std;

// Definizione del Prototipo delle varie funzioni con i Tipi di variabili

void triangolo(int, char);
void cornice(int, char);
void interno(int, char);
int dispari(int, char);
int altezza(int, char);
void angoli(int, char);
void casuale(int, char);

int main()
{
    int N = 0;
    char X;
    cout << "Dammi il valore di N, da tastiera: " << endl;
    cin >> N;
    if (5>=N>=15)
    {
        cout << "Il Valore inserito risulta essere errato, riprovare: " << endl;
        cin >> N;
    }
    cout << "Dammi anche un carattere di tipo Char, da tastiera: " << endl;
    cin >> X;
    triangolo(N, X);
    return 0;
}

void triangolo(int N, char X)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i == 1 || j == 1)
            {
                cout << X << " ";
            }
            else
            {
                cout << " ";
            }
        }
    }
}
void cornice(int N, char X)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i == 1 || i == N || j == 1 || j == N)
                cout << X << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void interno()
{
}
int dispari()
{
    return 0;
}
int altezza()
{
    return 0;
}
void angoli()
{
}
void casuale()
{
}