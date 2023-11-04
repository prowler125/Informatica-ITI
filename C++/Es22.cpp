/*Creare una funzione che calcola e restituisce il valore assoluto di un numero
intero.*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int funz_Ritorno(int a, int r)
{
    r = a % 2 == 0;
    return r;
}
int main()
{
    int a = 0;
    cout << "Dammi il numero da tastiera, qui sotto:" << endl;
    cin >> a;
    cout << "Il valore assoluto del numero: " << a << " "
         << "è: " << funz_Ritorno(a) << endl;
    return 0;
}