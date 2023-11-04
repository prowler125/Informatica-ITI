#include <iostream>
#include <cmath>
using namespace std;

int funz_Differenza(int a, int b, int c, int d, int num_Maggiore, int num_Minore)
{
    d = num_Maggiore - num_Minore;
    return d;
}

int main()
{
    int a = 0, b = 0, c = 0, d = 0, num_Maggiore = 0, num_Minore = 0;
    cout << "Dammi il 1 numero da tastiera, qui sotto:" << endl;
    cin >> a;
    cout << "Dammi il 2 numero da tastiera, qui sotto:" << endl;
    cin >> b;
    cout << "Dammi il 3 numero da tastiera, qui sotto:" << endl;
    cin >> c;
    if (a < b && a < c)
    {
        cout << "Il numero Maggiore è: " << a << endl;
    }
    else if (b < a && b < c)
    {
        cout << "Il numero Maggiore è: " << b << endl;
    }
    else if (c < b && c < a)
    {
        cout << "Il numero Maggiore è: " << c << endl;
    }
    if (a > b && a > c)
    {
        cout << "Il numero Minore è: " << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "Il numero Minore è: " << b << endl;
    }
    else if (c > b && c > a)
    {
        cout << "Il numero Minore è: " << c << endl;
    }
    cout << "La differenza tra il numero Maggiore " << num_Maggiore << " e il numero Minore " << num_Minore << " è: " << funz_Differenza << endl;
    return 0;
}