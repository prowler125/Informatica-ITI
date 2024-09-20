#include <iostream>
using namespace std;

int sommSemplice(int n, int m)
{
    cout << "Dammi i valori di m e n: " << endl;
    cin >> m;
    cin >> n;
    int somma = m + n;
    cout << "La somma è: " << somma << endl;
    return somma;
}

int sommComplex(int s, int k)
{
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
    int result1 = sommSemplice(0, 0);
    int result2 = sommComplex(0, 0);
    return 0;
}