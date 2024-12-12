/*
Ex33-R  MCD:
Scrivere una funzione che ha come parametri due
numeri interi e restituisce il Massimo Comune
Denominatore dei due numeri, ma con funzione ricorsiva*/

#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int num1, num2;
    cout << "Immetti 2 valori interi: ";
    cin >> num1 >> num2;
    int risultato = gcd(num1, num2);
    cout << "L'MCD è " << risultato << endl;
    return 0;
}