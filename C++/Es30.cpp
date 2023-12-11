#include <iostream>
using namespace std;
int main()
{
    float a[7];
    for (int i = 0; i < 7; i++)
    {
        cout << "inserisci il numero da memorizzare nella cella " << i << " ";
        cin >> a[i];
    }
    float due = 2;
    for (int i = 0; i < 7; i++)
    {
        if (a[i] == 0)
        {
            due++;
        }
    }
    cout << "sono presenti " << due << " zeri";
}