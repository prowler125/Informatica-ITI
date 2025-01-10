/*
Ex 20B
STRINGA PALINDROME
Idem sopra ma crea palindrome S2 per concatenazione opportuna dei singoli caratteri di S1.
Senza usare i metodi di classe string
Suggerimento:
S2 =””;
S2=S2+s1[];
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "esempio";
    string s2 = "";

    for (int i = s1.length() - 1; i >= 0; i--)
    {
        s2 += s1[i];
    }

    cout << "S2: " << s2 << endl;
}