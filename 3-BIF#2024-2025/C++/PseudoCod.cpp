// Pseudo Codice

/*Inizio procedimento
    leggi il valore di m e di n
    c = 1
        finché (c ≤ m) && (c ≤ n) esegui
            inizio operazione
                se (c divide m) && (c divide n)
                    allora r == c
                c == c + 1
            Fine Operazione
        Scrivi il valore di r
    Fine Procedimento*/

#include <iostream>
using namespace std;

int main()
{
    int m = 0;
    int r = 0;
    int n = 0;
    int c = 1;
    cout << "Dammi il valore di M: ";
    cin >> m;
    cout << "Dammi il valore di N: ";
    cin >> n;
    while ((c <= m) && (c <= n))
    {
        if ((m % c == 0) && (n % c == 0))
        {
            r = c;
        }
        c = c + 1;
        cout << r << endl;
    }
    return 0;
}