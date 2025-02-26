/*
Es. n. A CONTA FRASE
Verifica 2° Quadrimestre
Informatica sui Files
Mancini Massimiliano
3° B-if 13/02/2025
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>
#include <string>
#include <string.h>
#include <cstdlib>
#include <ios>
using namespace std;

int main()
{

    int count = 0;
    string frase;
    ifstream file("93-ingresso.txt");

    if (file.fail())
    {
        cout << "Operazione di Apertura file FALLITA" << endl;
        return 1;
    }

    cout << "Dammi la frase da tastiera: " << endl;
    getline(cin, frase);

    string line;
    while (getline(file, line))
    {
        if (line.find(frase) != string::npos)
        {
            count++;
        }
    }
    file.close();

    cout << "Questo e' il numero delle volte in cui la parola e' stata trovata: " << count << endl;
    return 0;
}