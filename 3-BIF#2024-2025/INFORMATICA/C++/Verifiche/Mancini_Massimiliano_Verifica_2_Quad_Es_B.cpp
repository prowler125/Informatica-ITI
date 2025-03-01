/*
Es. n. B CONTA CARATTERI
Verifica 2° Quadrimestre
Informatica sui Files
Mancini Massimiliano
3° B-if 13/02/2025
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int contaCar(const string &, char);
const string FILE_PATH = "93-ingresso.txt";

int main()
{
    string filename = "93-ingresso.txt";
    char targetChar;

    cout << "Inserisci un carattere: ";
    cin >> targetChar;

    int conteggioConsecutivo = contaCar(filename, targetChar);
    cout << "Il carattere " << targetChar << " appare "
         << conteggioConsecutivo << " volte nel file." << endl;

    return 0;
}

int contaCar(const string &filename, char targetChar)
{
    ifstream inputFile("93-ingresso.txt");
    if (inputFile.fail())
    {
        cerr << "Impossibile aprire il file." << endl;
        return -1;
    }

    char currentChar;
    int count = 0;

    while (inputFile.get(currentChar))
    {
        if (currentChar == targetChar)
        {
            count++;
        }
    }

    inputFile.close();
    return count;
}