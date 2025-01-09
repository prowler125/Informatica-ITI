#include <iostream>
#include <cmath>
using namespace ;

int inserimentoDati(int x = 0, int y = 0)
{
    cout << "Inserisci estremo inferiore intervallo: ";
    cin >> x;
    cout << "Inserisci estremo superiore intervallo: ";
    cin >> y;
    do
    {
        cout << "Inserisci estremo inferiore intervallo: ";
        cin >> x;
        cout << "Inserisci estremo superiore intervallo: ";
        cin >> y;
    } while (x != 0 || y != 0);
    return 0;
}
int main()
{
    int x = 0, y = 0;
    inserimentoDati(x, y);
    return 0;
}