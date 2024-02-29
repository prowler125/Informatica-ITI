/*Scrivi un programma C++ che copi il contenuto di un file di testo in un altro file*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    string line;

    if (input.is_open() && output.is_open())
    {
        while (getline(input, line))
        {
            output << line << endl;
        }
        input.close();
        output.close();
        cout << "File copiato con successo!" << endl;
    }
    else
    {
        cout << "Impossibile aprire il file." << endl;
    }
}