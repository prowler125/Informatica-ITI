/*Ex02MMF
Massimo e Media tra 3 numeri con funzione.
Definire una funzione MM3 che calcola
e restituisce sia il massimo che la
media di 3 numeri interi.
Definire  per ogni parametro tipo
e passaggio, se per valore o riferimento*/

#include <iostream>
#include <math.h>
#include <cmath>
#include <string>
using namespace std;

int mm3(int, int, int, float &); // Definizione Prototipo di funzione tramite Firma

int main() // Definizione ed inizio della funzione principale
{
    int x = 0, y = 0, z = 0;
    int max = 0;
    float media = 0;
    cout << "Dammi i 3 valori: " << endl;
    cin >> x >> y >> z;
    max = mm3(x, y, z, media); // Calcolo attraverso Funzione
    cout << "Il valore massimo è: " << max << "\t";
    cout << "La media è: " << media << "\t" << endl;
    return 0;
}

int mm3(int a, int b, int c, float &m) // Defnizione completa Funzione
{
    m = (float)(a + b + c) / 3;
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}