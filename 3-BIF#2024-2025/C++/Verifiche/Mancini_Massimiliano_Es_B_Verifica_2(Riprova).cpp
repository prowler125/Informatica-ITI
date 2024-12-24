/*

Verifica di Informatica: riprova a casa
Mancini Massimiliano

Ex. B:

Scrivere un programma C++ che legge un valore X in euro (due decimali),
quindi scrive quante monete occorrono da:

                1 €,
                0,10 cent,
                0,01 cent,

per avere tale importo X, considerando di usare sempre le monete di taglio maggiore.

Esempio:
INPUT valore X: 7.45, allora ho in OUTPUT le seguenti monete:
moneta    e/c        nr
1        euro        7
10        cent        4
1        cent        5
NB:
fare attenzione a tipi dato, Commenti, Nomi, Indentazione.
*/

#include <iostream>
#include <cmath>
#include <math.h>
#include <string>

using namespace std;
int main() {
    double X;
    cout << "Inserisci il valore in euro (due decimali): ";
    cin >> X;

    int euro = static_cast<int>(X);
    int cent = round((X - euro) * 100);

    int monete1Euro = euro;
    int monete10Cent = cent / 10;
    int monete1Cent = cent % 10;

    cout << "moneta\te/c\tnr" << endl;
    cout << "1\teuro\t" << monete1Euro << endl;
    cout << "10\tcent\t" << monete10Cent << endl;
    cout << "1\tcent\t" << monete1Cent << endl;

    return 0;
}