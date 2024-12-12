/*EX33-F:
MCD scrivere una funzione che ha come parametri due numeri interi
e restituisce il Massimo Comune Denominatore dei due numeri, ma con funzione ricorsiva
ex33-R  MCD:
Chiamarla più volte nel main*/

#include <iostream>
using namespace std;
int mcd(int, int);

int main()
{
    int num1, num2;

    cout << "Immetti 2 valori interi ";
    cin >> num1 >> num2;

    int gcd = mcd(num1, num2);
    cout << "L'MCD di " << num1 << " e " << num2 << " è: " << gcd << endl;
    return 0;
}

int mcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return mcd(b, a % b);
}