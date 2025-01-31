/*
Ex89 File leggi parole
Vedi libro pag 222
Leggi parole una alla volta da un file
dati.txt e stampale andando a capo ogni volta
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
    ifstream file("C:\\Users\\mancini_ma\\Documents\\Informatica-ITI\\3-BIF#2024-2025\\C++\\FILE\\.TXT\\dati.txt");
    if (!file.is_open())
    {
        cerr << "Errore nell'apertura del file" << endl;
        return 1;
    }

    string parola;
    while (file >> parola)
    {
        cout << parola << endl;
    }

    file.close();
    return 0;
}