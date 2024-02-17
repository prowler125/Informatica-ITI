/*Si crei la struttura libro, in cui ogni libro ha un codice numerico
(numero intero) che lo caratterizza, un numero di pagine e un costo.
Si memorizzino i dati di tre libri e si calcoli il costo medio per pagina
dei libri e si stampino i dati dei tre libri in ordine crescente di costo per pagina.*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct libro
{
    int codiceNum;
    int numPagine;
    int costo;
};

bool compareCostoPerPagina(const libro &a, const libro &b)
{
    double costoPerPaginaA = static_cast<double>(a.costo) / a.numPagine;
    double costoPerPaginaB = static_cast<double>(b.costo) / b.numPagine;
    return costoPerPaginaA < costoPerPaginaB;
}

int main()
{
    const int N = 3;
    vector<libro> dati(N);
    for (int i = 0; i < N; i++)
    {
        cout << "Dammi il Codice numerico del libro: ";
        cin >> dati[i].codiceNum;
        cout << "Dammi il numero di pagine totali che compongono il libro: ";
        cin >> dati[i].numPagine;
        cout << "Dammi il costo del libro: ";
        cin >> dati[i].costo;
    }

    sort(dati.begin(), dati.end(), compareCostoPerPagina);

    double costoMedioPerPagina = 0.0;
    for (const auto &libro : dati)
    {
        costoMedioPerPagina += static_cast<double>(libro.costo) / libro.numPagine;
    }
    costoMedioPerPagina /= N;

    cout << "Costo medio per pagina dei libri: " << costoMedioPerPagina << endl;

    cout << "Dati dei libri in ordine crescente di costo per pagina:" << endl;
    for (const auto &libro : dati)
    {
        cout << "Codice numerico: " << libro.codiceNum << endl;
        cout << "Numero di pagine: " << libro.numPagine << endl;
        cout << "Costo: " << libro.costo << endl;
        cout << endl;
    }

    return 0;
}
