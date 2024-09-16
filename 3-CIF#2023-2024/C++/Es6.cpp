#include <iostream>
using namespace std;

int main()
{

    int anno;

    cout << "inserisci un anno " << endl;
    cin >> anno;

    if (anno / 4 == 0)
    {
        cout << "L'Anno e' Bisestile" << endl;
    }
    else if (/* condition */)
    {
        /* code */
    }
    
    {
        cout << "L'Anno NON e' Bisestile" << endl;
    }
}