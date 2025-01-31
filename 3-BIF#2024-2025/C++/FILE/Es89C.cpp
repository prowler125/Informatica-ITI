/*
Ex89C File leggi caratteri
Tipo 89 ma leggi un carattere alla
volta e stampa senza andare a capo
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
    char c;
    fstream f1("C:\\Users\\mancini_ma\\Documents\\Informatica-ITI\\3-BIF#2024-2025\\C++\\FILE\\.TXT\\dati.txt", ios::in);

    if (f1.fail())
    {
        return 1;
    }
    system("CLS");

    cout << "Il contenuto del file è riportato qui di seguito: " << endl;
    while (!f1.eof())
    {
        c = f1.get();
        cout << c << endl;
    }

    return 0;
}