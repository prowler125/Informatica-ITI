#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Studente
{
    int matricola;
    string nome;
    string cognome;
};

struct Voto
{
    int matricola;
    string esame;
    int voto;
};

int main()
{
    vector<Studente> M(3);
    vector<Voto> V(7);

    for (int i = 0; i < M.size(); i++)
    {
        cout << "Inserisci la matricola dello studente " << i + 1 << ": ";
        cin >> M[i].matricola;
        cout << "Inserisci il nome dello studente " << i + 1 << ": ";
        cin >> M[i].nome;
        cout << "Inserisci il cognome dello studente " << i + 1 << ": ";
        cin >> M[i].cognome;
    }

    for (int i = 0; i < V.size(); i++)
    {
        cout << "Inserisci la matricola dello studente per l'esame " << i + 1 << ": ";
        cin >> V[i].matricola;
        cout << "Inserisci il nome dell'esame " << i + 1 << ": ";
        cin >> V[i].esame;
        cout << "Inserisci il voto dell'esame " << i + 1 << ": ";
        cin >> V[i].voto;
    }

    for (const auto &studente : M)
    {
        int sommaVoti = 0;
        for (const auto &voto : V)
        {
            if (voto.matricola == studente.matricola)
            {
                sommaVoti += voto.voto;
            }
        }
        cout << "La somma dei voti dello studente con matricola " << studente.matricola << " e' " << sommaVoti << endl;
    }

    return 0;
}