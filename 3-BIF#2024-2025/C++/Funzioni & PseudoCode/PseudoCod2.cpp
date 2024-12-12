#include <iostream>
using namespace std;

int main()
{
    int c = 1;
    int m = 0;
    int n = 0;
    cout << "Dammi il valore di m: ";
    cin >> m;
    cout << "Dammi il valore di n: ";
    cin >> n;
    while (m != n)
    {
        if (m > n)
        {
            m = m - n;
        }
        else if (n > m)
        {
            n = n - m;
        }
        cout << n << endl;
    }
    return 0;
}