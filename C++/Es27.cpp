#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int d = 0, b, i = 0;

    cout << "Inserisci il numero binario da convertire: ";
    cin >> b;

    while (b > 0)
    {
        if (b % 10 != 0)
        {
            d = d + pow(2, i);
        }
        b = b / 10;
        i++;
    }

    cout << "Il numero in decimale vale: " << d;
    return 0;
}