#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int N;
    cout << "Inserisci la dimensione della matrice NxN: ";
    cin >> N;

    vector<vector<int>> matrice(N, vector<int>(N));

    unordered_set<int> numeriInseriti;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int elemento;
            bool numeroDuplicato;

            do
            {
                cout << "Inserisci l'elemento [" << i << "][" << j << "]: ";
                cin >> elemento;

                numeroDuplicato = numeriInseriti.count(elemento) > 0;

                if (numeroDuplicato)
                {
                    cout << "Errore: numero duplicato! Inserisci un numero diverso." << endl;
                }
            } while (numeroDuplicato);

            matrice[i][j] = elemento;
            numeriInseriti.insert(elemento);
        }
    }

    cout << "Matrice inserita:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}