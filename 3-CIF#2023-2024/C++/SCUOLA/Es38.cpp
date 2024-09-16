#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string filename = "Storia dell'Impero Romano.txt";

    ifstream file(filename);
    if (file.is_open())
    {
        string line;
        while (getline(file, line))
        {
            cout << line << endl;
        }
        file.close();
    }
    else
    {
        cout << "Impossibile aprire il File" << filename << endl;
    }

    return 0;
}