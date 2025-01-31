/*
Ex 93
File, conta caratteri
Scrivere un programma che conta quanti
caratteri ci sono nel file “93_testo.txt”.
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    ifstream file("C:\\Users\\mancini_ma\\Documents\\Informatica-ITI\\3-BIF#2024-2025\\C++\\FILE\\.TXT\\\\93_testo.txt");

    if (!file.is_open())
    {
        cout << "Operazione di Apertura file FALLITA" << endl;
        return 1;
    }

    int count = 0;
    char ch;
    while (file.get(ch))
    {
        count++;
    }

    file.close();

    cout << "Questo è il numero dei caratteri trovati: " << count << endl;
    return 0;
}