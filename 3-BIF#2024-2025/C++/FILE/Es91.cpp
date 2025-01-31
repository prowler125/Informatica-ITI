/*
Ex 91
File stampare Quadrati e Cubi
si legge da tastiera un nr intero N, quindi scrivere sul file di output (tabellina.txt)
con valori di X che variano da 1 ad N
X         X2        X3
Non serve la riga di intestazione
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int N;
    cout << "Inserisci un numero intero N: ";
    cin >> N;

    ofstream outputFile("tabellina.txt");
    if (outputFile.is_open())
    {
        for (int X = 1; X <= N; X++)
        {
            outputFile << X << "\t" << X * X << "\t" << X * X * X << "\n";
        }
        outputFile.close();
        cout << "Dati scritti su tabellina.txt con successo." << endl;
    }
    else
    {
        cout << "Impossibile aprire il file." << endl;
    }

    return 0;
}