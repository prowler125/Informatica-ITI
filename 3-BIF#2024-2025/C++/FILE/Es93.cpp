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
    ifstream file("93_testo.txt");

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