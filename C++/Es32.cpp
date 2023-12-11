#include <iostream>
#include <string>
using namespace std;

int main()
{
    char s[10];
    cout << "Dammi la parola da tastiera: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> s[i];
    }
    return 0;
}