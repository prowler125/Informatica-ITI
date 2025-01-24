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
    ifstream file("C:\\Users\\mancini_ma\\Documents\\Informatica-ITI\\3-BIF#2024-2025\\C++\\FILE\\dati.txt");
    if (!file.is_open())
    {
        cerr << "Errore nell'apertura del file" << endl;
        return 1;
    }

    int N = 40;

    char *parola = new char[N + 1];
    delete[] parola;
    while (file >> parola)
    {
        for (int k = 0; k <= N; k++)
        {
            cout << parola[k] << endl;
        }
    }

    file.close();
    return 0;
}