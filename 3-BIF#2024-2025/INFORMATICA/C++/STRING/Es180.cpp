/*
Ex. 180     Ricerca di una parola in una stringa

Usando i metodi della classe string procedi a:
    1. Leggi una stringa “frase” da tastiera;
    2. Calcola e Stampa la sua lunghezza;
    3. Leggi una parola x da tastiera;
    4. Calcola e stampa:
        4.1 Quante volte X appare in "FRASE";
        4.2 In quali posizioni appare.

*/

#include <iostream>
#include <string>
#include <string.h>
#include <math.h>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
    int N = 0;
    string X;
    cout << "Avvio della sezione di input dei dati..." << endl;
    cout << "Premere invio quando si e' pronti..." << endl;
    system("PAUSE");

    cout << "Si prega di inserire un valore per la grandezza di N: " << endl;
    cin >> N;
    cout << "Il valore di N e': " << N << endl;
    cout << "Questo valore e' corretto? " << endl;
    cout << "Se SI inserire 0..." << endl;
    cout << "In caso alternativo inserire 1. " << endl;
    int count = 0;
    cin >> count;
    do
    {
        cout << "S prega di reinserire il valore per la grandezza di N: " << endl;
        cin >> N;
    } while (count == 1);

    string frase;
    cout << "Si prega di inserire una FRASE, qui sotto: " << endl;
    getline(cin, frase);
    cout << "Inizio del calcolo della lunghezza della frase: " << frase << endl;
    cout << "Premere invio quando si e' pronti..." << endl;
    system("PAUSE");
    int length = frase.size();
    cout << "La lunghezza della FRASE: " << frase << " e': " << length << endl;
    cout << "Premere invio quando si e' pronti..." << endl;
    cout << "Si prega di inserire, senza Spazi, una PAROLA per X: " << endl;
    cin >> X;
    int pos = -1;
    int conta = 0, indice = 0, k = 0;
    // Ciclo FOR ricerca
    while (indice != string::npos)
    {
        indice = frase.find(X, k);
        k = indice + 1;
        if (indice != string::npos)
        {
            cout << "La posizione della PAROLA: " << X << " e': " << indice << endl;
            conta++;
        }
    }

    int C = frase.find(X, 0);

    return 0;
}