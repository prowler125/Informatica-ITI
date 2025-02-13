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
    ifstream file("Z://Informatica-ITI//3-BIF#2024-2025//C++//FILE//93-ingresso.txt");

    if (file.fail())
    {
        cout << "Operazione di Apertura file FALLITA" << endl;
        return 1;
    }

    cout << "Dammi la frase da tastiera: " << endl;
    int i = 0;
    while (i < 1)
    {
        getline(cin, frase);
        count++;
        i++;
    }
    file.close();

    cout << "Questo è il numero delle volte in cui la parola è stata trovata: " << count << endl;
    return 0;
}