/*
Ex. 115: Classe cronometrometro:

time(0) fornisce tempo attuale
Definire i metodi in line

    // classe
        class cronometro {
            private:
                int t1;
                int t2;
            public :         // prototipi
                void start();    // avvia il cronometro
                void stop();    // ferma il cronometro
                int getsec();  // fa il tempo misurato

preparare un menu
MENU... ( con switch)

cout << "1] start\n";
cout << "2] stop\n";
cout << "3] print\n";
cout << "4] exit\n";
};
*/

#include <iostream>
#include <ctime>
using namespace std;
class cronometro
{
private:
    time_t t1;
    time_t t2;

public:
    void start()
    {
        t1 = time(0);
    }
    void stop()
    {
        t2 = time(0);
    }
    int getsec()
    {
        return difftime(t2, t1);
    }
};

int main()
{
    cronometro cronometro;
    int choice;
    do
    {
        cout << "1] Inizia\n";
        cout << "2] Ferma\n";
        cout << "3] Stampa\n";
        cout << "4] Esci\n";
        cout << "Inserisca la Sua scelta: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cronometro.start();
            cout << "Cronometrometro Inziato.\n";
            break;
        case 2:
            cronometro.stop();
            cout << "Cronometro Fermato.\n";
            break;
        case 3:
            cout << "Tempo Trascorso :" << cronometro.getsec() << " secondi.\n";
            break;
        case 4:
            cout << "Uscita...\n";
            break;
        default:
            cout << "Scelta non riconosciuta. Perfavore riprovi\n";
        }
    } while (choice != 4);

    return 0;
}