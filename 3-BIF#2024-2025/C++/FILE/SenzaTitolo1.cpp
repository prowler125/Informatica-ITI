/*
Ex 93-C
File Conta 2 caratteri
Scrivere un programma che, ricevuto in ingresso un file chiamato “input.txt” e
un carattere digitato da tastiera dall’utente restituisca tramite la
console quante volte quel carattere compare per due volte
consecutive nel file “input.txt”.
*/
#include <iostream>
#include <fstream>
using namespace std;

int contaCaratteriConsecutivi(const string &filename, char targetChar)
{
    ifstream inputFile(filename);
    if (!inputFile)
    {
        cerr << "Impossibile aprire il file." << endl;
        return -1;
    }

    char prevChar = '\0';
    char currentChar;
    int count = 0;

    while (inputFile.get(currentChar))
    {
        if (currentChar == targetChar && currentChar == prevChar)
        {
            count++;
        }
        prevChar = currentChar;
    }

    inputFile.close();
    return count;
}

int main()
{
    string filename = "input.txt";
    char targetChar;

    cout << "Inserisci un carattere: ";
    cin >> targetChar;

    int conteggioConsecutivo = contaCaratteriConsecutivi(filename, targetChar);
    cout << "Il carattere '" << targetChar << "' appare consecutivamente "
         << conteggioConsecutivo << " volte nel file." << endl;

    return 0;
}

