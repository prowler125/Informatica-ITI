/*Scrivere un programma in grado di dichiarare un array di char grande 20.
Inizializzare questo array con una sola parola da tastiera.
Calcolare (tramite una funzione esterna al main) se tale parola inserita contiene
tutte le 5 vocali della lingua italiana.
*/

#include <iostream>
#include <string>Es9.cpp
#include <string.h>
#include <cmath>
using namespace std;

int vocali(const char *parola)
{
    int conteggio = 0;
    int lunghezza = strlen(parola);
    for (int i = 0; i < lunghezza; i++)
    {
        char carattere = tolower(parola[i]);
        if (carattere == 'a' || carattere == 'e' || carattere == 'i' || carattere == 'o' || carattere == 'u')
        {
            conteggio++;
        }
    }
    return conteggio;
}
int main()
{
    const int N = 20;
    char parola[N];
    cout << "Inserisci una parola: ";
    cin >> parola;
    int numeroVocali = vocali(parola);
    cout << "Il tuo nome contiene " << numeroVocali << " vocali." << endl;
    return 0;
}