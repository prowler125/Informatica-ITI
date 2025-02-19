/*Crea un programma o uno script da utilizzare
in seguito nel modo più semplice possibile in
python che dato un file .cpp, .txt o anche .py,
chieda tramite un menu se:

    1. Cambiare da MAIUSCOLE a minuscole e
    viceversa automaticamente. Ovviamente
    il carattere deve essere chiesto da tastiera;
    2. Riformattare il testo automaticamente di
    un file di qualsiasi estensione
*/

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
void toUpperCase(std::string &str)
{
    transform(str.begin(), str.end(), str.begin(), ::toupper);
}

void toLowerCase(std::string &str)
{
    transform(str.begin(), str.end(), str.begin(), ::tolower);
}

void toggleCase(std::string &str)
{
    for (char &c : str)
    {
        if (isupper(c))
        {
            c = tolower(c);
        }
        else if (islower(c))
        {
            c = toupper(c);
        }
    }
}

void reformatText(std::string &str)
{
    // Example reformatting: trim leading/trailing spaces and replace multiple spaces with a single space
    str.erase(str.begin(), find_if(str.begin(), str.end(), [](unsigned char ch)
                                   { return !isspace(ch); }));
    str.erase(find_if(str.rbegin(), str.rend(), [](unsigned char ch)
                      { return !isspace(ch); })
                  .base(),
              str.end());
    std::string::iterator new_end = unique(str.begin(), str.end(), [](char lhs, char rhs)
                                           { return (lhs == rhs) && (lhs == ' '); });
    str.erase(new_end, str.end());
}

void processFile(const string &filename, int option)
{
    ifstream inputFile(filename);
    if (!inputFile)
    {
        cerr << "Error opening file: " << filename << endl;
        return;
    }

    string line;
    string content;
    while (getline(inputFile, line))
    {
        content += line + "\n";
    }
    inputFile.close();

    switch (option)
    {
    case 1:
        toggleCase(content);
        break;
    case 2:
        reformatText(content);
        break;
    default:
        cerr << "Invalid option" << endl;
        return;
    }

    ofstream outputFile(filename);
    if (!outputFile)
    {
        cerr << "Error opening file for writing: " << filename << endl;
        return;
    }
    outputFile << content;
    outputFile.close();
}

int main()
{
    string filename;
    int option;

    cout << "Enter the filename: ";
    cin >> filename;
    cout << "Choose an option:\n1. Toggle case\n2. Reformat text\n";
    cin >> option;

    processFile(filename, option);

    return 0;
}