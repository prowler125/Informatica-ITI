/*Ex06 XF
Letto un numero N (<=80), crea un ciclo che stampi
alternativamente (a mezzo di 2 for annidati):

    1.  Un TRIANGOLO Crescente (k da 1 a N), dove per ogni riga k ci sono J  colonne (con j che va da 1 a k)
    2.  Un TRIANGOLO Decrescente (k da N a 1), dove per ogni riga k ci sono J colonne (con j che va da 1 a k)

Fare si che il for esterno sia in loop infinito
Creare inoltre una funzione che stampa caratteri a caso*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <cmath>
using namespace std;

void printRandomCharacter()
{
    srand(time(NULL));
    char randomChar = 'A' + rand() % 26;
    cout << randomChar;
}

int main()
{
    int N = 0;
    char X;
    cout << "Inserisca il valore di N: ";
    cin >> N;
    srand(time(NULL));
    X = 'A' + rand() % 26;

    while (true)
    {
        for (int k = 1; k <= N; k++)
        {
            for (int j = 1; j <= k; j++)
            {
                printRandomCharacter();
            }
            cout << endl;
        }

        for (int k = N; k >= 1; k--)
        {
            for (int j = 1; j <= k; j++)
            {
                cout << X;
            }
            cout << endl;
        }
    }
    return 0;
}
