#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

void scriviFrasi(const string &nomeFile)
{
    ofstream file(nomeFile);
    if (file.is_open())
    {
        file << "Nel mezzo del cammin di nostra vita\n";
        file << "mi ritrovai per una selva oscura,\n";
        file << "ché la diritta via era smarrita.\n";
        file.close();
        cout << "Le frasi sono state scritte nel file " << nomeFile << endl;
    }
    else
    {
        cout << "Impossibile aprire il file " << nomeFile << endl;
    }
}

int contaParole(const string &nomeFile)
{
    ifstream file(nomeFile);
    if (file.is_open())
    {
        string linea;
        int conteggio = 0;
        while (getline(file, linea))
        {
            stringstream ss(linea);
            string parola;
            while (ss >> parola)
            {
                conteggio++;
            }
        }
        file.close();
        return conteggio;
    }
    else
    {
        cout << "Impossibile aprire il file " << nomeFile << endl;
        return -1;
    }
}

int main()
{
    string nomeFile = "divina_commedia.txt";
    scriviFrasi(nomeFile);
    int numeroParole = contaParole(nomeFile);
    cout << "Il numero di parole nel file " << nomeFile << " è: " << numeroParole << endl;
    return 0;
}