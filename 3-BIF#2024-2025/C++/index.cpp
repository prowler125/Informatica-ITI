#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int sommSemplice()
{
    int n, m;
    cout << "Dammi i valori di m e n: " << endl;
    cin >> m;
    cin >> n;
    int somma = m + n;
    cout << "La somma è: " << somma << endl;
    return somma;
}

int sommComplex()
{
    int s, k;
    cout << "Dammi i valori di s e k: " << endl;
    cin >> s;
    cin >> k;
    int somma = (s + k) / 2;
    if (k != s)
    {
        cout << "La Somma è: " << somma << endl;
    }
    return somma;
}

int main()
{
    int result1 = sommSemplice();
    int result2 = sommComplex();
    return 0;
}