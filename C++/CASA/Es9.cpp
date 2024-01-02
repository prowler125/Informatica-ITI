/*Scrivere un programma che permetta di dichiarare una variabile nome di tipo
string.
Inizializzare la stringa con il proprio nome. L'utente deve poter inserire il proprio
nome da tastiera.
Utilizzando la funzione replace della libreria string eliminare tutte le vocali dalla
stringa contenente il nome.
Mostrare a schermo la stringa contenente il nome senza vocali.*/

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    string nome;
    cout << "Inserisci il tuo nome, da tastiera: ";
    getline(cin, nome);
    for (char &c : nome)
    {
        switch (c)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            c = ' ';
            break;
        default:
            break;
        }
    }
    cout << "Il tuo Nome senza vocali è: " << nome << endl;
}