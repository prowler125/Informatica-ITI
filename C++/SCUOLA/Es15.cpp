/*1)Scrivi un programma che verifichi che il quadrato di un numero sia uguale alla
somma dei primi n numeri dispari(per esempio: per num= 5, è
5X5=25=1+3+5+7+9.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Dammi il numero da tastiera" << endl;
    cin >> n;
    do
    {
        cout << "Il numero " << n << " e' uguale alla somma dei primi dumeri dispari fino a 9." << endl;
    } while ((n ^ 2) == (1 + 3 + 5 + 7 + 9));
    return 0;
}