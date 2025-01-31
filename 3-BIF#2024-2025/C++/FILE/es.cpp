/*
Ex 93
File, conta caratteri
Scrivere un programma che conta quanti
caratteri ci sono nel file â€œ93_testo.txtâ€.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    int count = 0;
    char ch;
    ifstream file("93_testo.txt");

    if (file.fail())
    {
        cout << "Operazione di Apertura file FALLITA" << endl;
        return 1;
    }

    while (!file.eof())
    {
        file.get(ch);
        count++;
    }

    file.close();

    cout << "Questo Ã¨ il numero dei caratteri trovati: " << count << endl;
    return 0;
}