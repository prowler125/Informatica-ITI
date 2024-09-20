#include <iostream>
using namespace std;

int sommSemplice(int n, int m)
{
    n = 0;
    m = 0;
    int somma = m + n;
    cout << "Dammi i valori di m e n: " << endl;
    cin >> m;
    cin >> n;
    cout << "La somma è: " << somma << endl;
}

int sommComplex(int s, int k)
{
    k = 1;
    s = 0;
    cout << "Dammi i valori di s e k: " << endl;
    cin >> s;
    cin >> k;
    if (k != s)
    {
        int somma = (s + k) / 2;
        cout << "La Somma è: " << somma << endl;
    }
}

int main()
{
}