/*
Ex89B File leggi righe
Come Ex 89, ma leggi una riga alla volta e stampala andando a capo
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
    ifstream file("C:\\Users\\mancini_ma\\Documents\\Informatica-ITI\\3-BIF#2024-2025\\C++\\FILE\\dati.txt");
    if (!file.is_open())
    {
        cerr << "Errore nell'apertura del file" << endl;
        return 1;
    }

    string parola;
    while (file >> parola)
    {
        cout << parola << " ";
    }

    file.close();
    return 0;
}