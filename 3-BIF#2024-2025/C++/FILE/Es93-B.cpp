/*
Ex 93-B
File, conta 1 carattere dato
Scrivere un programma che chiede all’utente un carattere e conta quante
volte quel carattere compare nel file “93testo.txt” (prendi spunto da ex93)
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char character;
    cout << "Enter a character: ";
    cin >> character;

    ifstream inputFile("93testo.txt");
    if (!inputFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    int count = 0;
    char currentChar;
    while (inputFile.get(currentChar)) {
        if (currentChar == character) {
            count++;
        }
    }

    inputFile.close();

    cout << "The character '" << character << "' appears " << count << " times in the file." << endl;

    return 0;
}