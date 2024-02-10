#include <iostream>
using namespace std;

int main()
{
    int x1, y1, x2, y2;

    cout << "Inserisci le coordinate del primo punto (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Inserisci le coordinate del secondo punto (x2 y2): ";
    cin >> x2 >> y2;

    cout << "Coordinate del primo punto: (" << x1 << ", " << y1 << ")" << endl;
    cout << "Coordinate del secondo punto: (" << x2 << ", " << y2 << ")" << endl;

    return 0;
}