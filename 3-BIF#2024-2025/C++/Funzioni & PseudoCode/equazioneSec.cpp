/*Ex 15-EQ2F	Equazione di 2° grado
Definire una funzione di 2° grado con
coefficienti interi a, b, c, dove i
coefficienti sono passati come parametri
per valore  e:
    1.	se delta >=0		restituisce  0 e stampa le soluzioni
    2.	se delta < 0		restituisce 99 e stampa “impossibile”
Dove delta = b2-4ac
*/

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

// Prototipo di funzione EQUAZ

int equaz(int, int, int, int &, int &, float &, float &, float &);

// Funzione MAIN Principale

int main()
{
    int a = 0, b = 0, c = 0, x1 = 0, x2 = 0;
    float delta = 0, s1 = 0, s2 = 0;
    cout << "Dammi i valori di A, di B e di C: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    s1 = equaz(a, b, c, x1, x2, delta, s1, s2);
    cout << "Le incognite dell'equazione risolta sono: X1=" << x1 << " e X2=" << x2 << endl;
    return 0;
}

// Funzione EQUAZ completa

int equaz(int a, int b, int c, int &x1, int &x2, float &delta, float &s1, float &s2)
{
    delta = pow(b, 2) - 4 * (a) * (c);
    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / a * 2;
        x2 = (-b - sqrt(delta)) / a * 2;
        return 0;
    }
    if (delta < 0)
    {
        cout << "Questa Equazione è IMPOSSIBILE" << endl;
        return 99;
    }
}