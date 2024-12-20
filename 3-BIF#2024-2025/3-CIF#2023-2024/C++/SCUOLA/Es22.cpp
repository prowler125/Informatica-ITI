<<<<<<< HEAD
/*Implementare un programma in C++, utiizzando Dev-C++
in grado di effettuare la conversione di un numero
intero da base 10 a base 2.*/

#include <iostream>
#include <cmath>
using namespace ;

int main()
{
=======
/*Creare una funzione che calcola e restituisce il valore assoluto di un numero
intero.*/

#include <iostream>
#include <cmath>
#include <string>
using namespace ;

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
>>>>>>> 5f8fa38493bf5ca88b33362fe07ab5966ef83f16
}