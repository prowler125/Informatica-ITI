/*Ex06 XF
Letto un numero N (<=80), ed un carattere X, crea un
ciclo che  stampi alternativamente (a mezzo di 2 for annidati):

    1.  Un TRIANGOLO Crescente (k da 1 a N) di X, dove per ogni riga k ci sono J  colonne (con j che va da 1 a k)
    2.  Un TRIANGOLO Decrescente (k da N a 1) di X, dove per ogni riga k ci sono J colonne (con j che va da 1 a k)

Fare si che il for esterno sia in loop infinito
Creare inoltre una funzione che stampa caratteri a caso*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <cmath>
using namespace std;

int charCasual(int, char);
int cresceTriang(int, char);
int decresTriang(int, char);
int main()
{
    return 0;
}
int charCasual(int N, char X)
{
    N = 0;
    cout << "Inserisca il valore di N: ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        /* code */
    }
}