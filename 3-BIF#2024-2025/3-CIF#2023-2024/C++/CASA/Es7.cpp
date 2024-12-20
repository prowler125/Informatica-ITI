/*Scrivere un programma in grado di dichiarare un array di char grande 20.
Inizializzare questo array con i caratteri del proprio nome. L'utente deve poter
inserire il proprio nome da tastiera.
Calcolare (tramite una funzione esterna al main) quante vocali sono presenti
all'interno del proprio nome*/

#include <iostream>
#include <cstring>
#include <string.h>
#include <string>
#include <cmath>

using namespace std;

int vocali(const char *nome)
{
    int conteggio = 0;
    int lunghezza = strlen(nome);
    for (int i = 0; i < lunghezza; i++)
    {
        char carattere = tolower(nome[i]);
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
    char nome[N];
    cout << "Inserisci il tuo Nome: ";
    cin >> nome;
    int numeroVocali = vocali(nome);
    cout << "Il tuo nome contiene " << numeroVocali << " vocali." << endl;
    return 0;
}