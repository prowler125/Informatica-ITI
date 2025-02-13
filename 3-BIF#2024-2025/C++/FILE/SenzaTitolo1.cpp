/*
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
    string x;
    ifstream file("Z://Informatica-ITI//3-BIF#2024-2025//C++//FILE//TXT//93_ingresso.txt");

    if (file.fail())
    {
        cout << "Operazione di Apertura file FALLITA" << endl;
        return 1;
    }

    while (!file.eof())
    {
        getline(file, x);
        count++;
    }

    file.close();

    cout << "Questo è il numero delle volte in cui la parola è stata trovata: " << count << endl;
    return 0;
}
