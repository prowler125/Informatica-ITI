/*
Ex 96-F
File: funzione Copia file
Definisci una funzione copiaFileC che ha come parametri formali due oggetti file passati per riferimento:
    1. F1 di ingresso;
    2. F2 di uscita.
La funzione copia per carattere i dati letti da F1 nel file F2.
Poi definisci una funzione copiaFileR analoga alla precedente, ma che copia i dati per righe.
Chiama nel main le due funzioni e verifica i risultati sui file fisici: in.txt, Z://Informatica-ITI//3-BIF#2024-2025//C++//FILE//TXT//out.txt, Z://Informatica-ITI//3-BIF#2024-2025//C++//FILE//TXT//outR.txt.
*/

// Z://Informatica-ITI//3-BIF#2024-2025//C++//FILE//TXT//input.txt

#include <iostream>
#include <fstream>
using namespace std;
void copiaFileC(ifstream &F1, ofstream &F2)
{
    char ch;
    while (F1.get(ch))
    {
        F2.put(ch);
    }
}

void copiaFileR(ifstream &F1, ofstream &F2)
{
    string line;
    while (getline(F1, line))
    {
        F2 << line << endl;
    }
}

int main()
{
    ifstream inputFile("Z://Informatica-ITI//3-BIF#2024-2025//C++//FILE//TXT//in.txt");
    ofstream outputFile("Z://Informatica-ITI//3-BIF#2024-2025//C++//FILE//TXT//out.txt");
    ofstream outputRFile("Z://Informatica-ITI//3-BIF#2024-2025//C++//FILE//TXT//outR.txt");

    if (inputFile && outputFile && outputRFile)
    {
        copiaFileC(inputFile, outputFile);
        inputFile.close();
        outputFile.close();

        inputFile.open("in.txt");
        copiaFileR(inputFile, outputRFile);
        inputFile.close();
        outputRFile.close();

        cout << "File copiato con successo." << endl;
    }
    else
    {
        cout << "Impossibile aprire i file." << endl;
    }

    return 0;
}
