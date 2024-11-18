/*Ex07F
Stampa quadrato

Definire una funzione stampaQUAD che ha per parametri un numero N ed un carattere X,
che stampa un quadrato di lato N fatto di caratteri X.
Chiamarla nel main su numeri che vanno da 1 ad N con N letto da tastiera*/

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

void stampaQuad(int, char); // Definizione del Prototipo della Funzione

int main() // Funzione principale del programma.
{
    int N = 0;
    char c;
    do // Richiede all'utente di inserire il valore del lato di un quadrato e il carattere preferito.
    {
        cout << "Inserisca il valore del lato, da tastiera: " << endl;
        cin >> N;
    } while (N < 0);
    cout << "Inserisca il carattere preferito, da tastiera: " << endl;
    cin >> c;
    stampaQuad(N, c);

    return 0;
}
void stampaQuad(int N, char c) // Funzione che stampa il quadrato utilizzando il valore del lato e il carattere specificato.
{
    for (int k = 1; k <= N; k++)
    {
        for (int i = 1; i <= N; i++)
            cout << c << " ";
        cout << endl;
    }
}