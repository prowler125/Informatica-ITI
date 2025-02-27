/*
Ex 23-R   MOLTIPLICAZIONE CON +

Definire una funzione ricorsiva MOLT(X,Y) che restituisce il risultato di una moltiplicazione X*Y
usando l’operando della somma.
Chiamare MOLT nel MAIN().
*/

#include <math.h>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
using namespace std;

int molt(int, int);

int main()
{
    int x = 5;
    int y = 3;
    cout << "Il risultato di " << x << " * " << y << " e': " << molt(x, y) << endl;
    return 0;
}

int molt(int x, int y)
{
    if (y == 0)
    {
        return 0;
    }
    else if (y > 0)
    {
        return x + molt(x, y - 1);
    }
    else
    {
        return -molt(x, -y);
    }
}