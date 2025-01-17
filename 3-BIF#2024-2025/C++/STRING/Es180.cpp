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
    char X;
    cout << "Avvio della sezione di input dei dati..." << endl;
    cout << "Premere invio quando si è pronti..." << endl;
    system("PAUSE");

    cout << "Si prega di inserire un valore per la grandezza di N: " << endl;
    cin >> N;
    cout << "Il valore di N è: " << N << endl;
    cout << "Questo valore è corretto? " << endl;
    cout << "Se SI inserire 0..." << endl;
    cout << "In caso alternativo inserire 1. " << endl;
    int count = 0;
    cin >> count;
    do
    {
        cout << "S prega di reinserire il valore per la grandezza di N: " << endl;
        cin >> N;
    } while (count == 1);
    char frase[N];
    cout << "Si prega di inserire una FRASE, qui sotto: " << endl;
    cin.getline(frase, N);
    cout << "Inizio del calcolo della lunghezza della frase: " << frase << endl;
    cout << "Premere invio quando si è pronti..." << endl;
    system("PAUSE");
    int length = strlen(frase);
    cout << "La lunghezza della FRASE: " << frase << " è: " << length << endl;
    cout << "Premere invio quando si è pronti..." << endl;
    cout << "Si prega di inserire, senza Spazi, una PAROLA per X: " << endl;
    cin >> X;
    
    return 0;
}