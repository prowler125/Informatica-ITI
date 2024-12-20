#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void startGame()
{
    srand(time(0));
    int score = 0;
    int level = 1;
    char input;

    while (true)
    {
        cout << "Livello " << level << ": Premi 'a' per saltare, 'd' per scivolare, 'q' per uscire: ";
        cin >> input;

        if (input == 'q')
        {
            cout << "Hai scelto di uscire. Punteggio finale: " << score << endl;
            break;
        }
        else if (input == 'a' || input == 'd')
        {
            int event = rand() % 2; // 0 for obstacle, 1 for ring
            if (event == 0)
            {
                if (input == 'a')
                {
                    cout << "Hai saltato un ostacolo!" << endl;
                    score += 10;
                }
                else
                {
                    cout << "Hai colpito un ostacolo!" << endl;
                    score -= 5;
                }
            }
            else
            {
                if (input == 'd')
                {
                    cout << "Hai raccolto un anello!" << endl;
                    score += 20;
                }
                else
                {
                    cout << "Hai perso un anello!" << endl;
                    score -= 10;
                }
            }
            level++;
        }
        else
        {
            cout << "Comando non riconosciuto. Riprova." << endl;
        }
    }
}

int main()
{
    cout << "Benvenuto nel gioco in stile Sonic!" << endl;
    cout << "Premi 'q' per uscire dal gioco." << endl;

    char input;
    while (true)
    {
        cout << "Inserisci un comando: ";
        cin >> input;

        if (input == 'q')
        {
            cout << "Grazie per aver giocato!" << endl;
            break;
        }
        else
        {
            cout << "Comando non riconosciuto. Riprova." << endl;
        }
    }
    cout << "Vuoi giocare di nuovo? (s/n): ";
    cin >> input;

    if (input == 's')
    {
        startGame(); // Start the detailed game
    }
    else
    {
        cout << "Arrivederci!" << endl;
    }

    return 0;
}