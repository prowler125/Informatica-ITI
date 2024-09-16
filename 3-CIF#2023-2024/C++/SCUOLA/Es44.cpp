#include <iostream>
#include <string>
using namespace std;

void drawSquare(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void drawAsterisks(int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << "* ";
    }
    cout << endl;
}

int main()
{
    string input;
    int size;

    while (true)
    {
        cout << "Inserisci la dimensione del quadrato (o 'f' per uscire): ";
        cin >> input;

        if (input == "f")
        {
            break;
        }

        size = stoi(input);

        drawSquare(size);
        drawAsterisks(size);
    }

    return 0;
}