/*Creare 10 rettangoli dove la  misura dei lati aumenta di una
unità per ogni rettangolo: vedere finestra di esecuzione*/

#include <iostream>
#include <vector>
using namespace std;

class rettangolo
{
public:
    int lunghezza;
    int altezza;

    rettangolo(int w, int h) : lunghezza(w), altezza(h) {}

    void funzStampa()
    {
        cout << "Lunghezza: " << lunghezza << ", Altezza: " << altezza << endl;
    }
};

int main()
{
    vector<rettangolo> rettangoli;

    for (int i = 0; i < 10; i++)
    {
        rettangoli.push_back(rettangolo(i + 1, i + 1));
        rettangoli[i].funzStampa();
    }

    return 0;
}
