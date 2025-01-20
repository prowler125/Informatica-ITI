/*
Ex07S-F Quadrato con MENU
Come ex 07-F ma, dopo avere letto numero N e carattere X,
per mezzo di uno switch si ha un menu con le varie opzioni:
quadrato, cornice, diagonali, angoli, centro ,uscita.
Le opzioni richiamano le funzioni necessarie
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <time.h>
#include <math.h>
using namespace std;
void quad(int, char);
void cornice(int, char);
void interno(int, char);
void diag1(int, char);
void diag2(int, char);
void centro(int, char);
void angoli(int, char);

int main()
{
    int num, k, j;
    char x;
    do
    {
        cout << "Inserisci numero (< di 80): ";
        cin >> num;
    } while (num < 1 || num > 80);

    cout << "Inserisci carattere: ";
    cin >> x;
    int choice;
    do {
        cout << "Menu:\n";
        cout << "1. Quadrato\n";
        cout << "2. Cornice\n";
        cout << "3. Diagonali\n";
        cout << "4. Angoli\n";
        cout << "5. Centro\n";
        cout << "6. Uscita\n";
        cout << "Scegli un'opzione: ";
        cin >> choice;

        switch (choice) {
        case 1:
            quad(num, x);
            system("PAUSE");
            break;
        case 2:
            cornice(num, x);
            system("PAUSE");
            break;
        case 3:
            diag1(num, x);
            diag2(num, x);
            system("PAUSE");
            break;
        case 4:
            angoli(num, x);
            system("PAUSE");
            break;
        case 5:
            centro(num, x);
            system("PAUSE");
            break;
        case 6:
            cout << "Uscita...\n";
            break;
        default:
            cout << "Opzione non valida!\n";
        }
    } while (choice != 6);
    return 0;
}

void quad(int num, char x)
{
    for (int k = 1; k <= num; k++)
    {
        for (int j = 1; j <= num; j++)
            cout << x << " ";
        cout << endl;
    }
}

void cornice(int num, char x)
{
    for (int k = 1; k <= num; k++)
    {
        for (int j = 1; j <= num; j++)
            if (k == 1 || k == num || j == 1 || j == num)
                cout << x << " ";
            else
                cout << "  ";
        cout << endl;
    }
    cout << endl;
}

// F. stampa interno
void interno(int num, char x)
{
    // ciclo di stampa
    for (int k = 1; k <= num; k++)
    {
        for (int j = 1; j <= num; j++)
            if (!(k == 1 || k == num || j == 1 || j == num))
                cout << x << " ";
            else
                cout << "  ";
        cout << endl;
    }
    cout << endl;
}

void diag1(int num, char x)
{
    for (int k = 1; k <= num; k++)
    {
        for (int j = 1; j <= num; j++)
            if (k == j)
                cout << x << " ";
            else
                cout << "  ";
        cout << endl;
    }
    cout << endl;
}

void diag2(int num, char x)
{
    for (int k = 1; k <= num; k++)
    {
        for (int j = 1; j <= num; j++)
            if (k + j == num + 1)
                cout << x << " ";
            else
                cout << "  ";
        cout << endl;
    }
}

void centro(int num, char x)
{
    if (num % 2 == 0)
        cout << " lato pari, non ho centro" << endl;
    else
    {
        for (int k = 1; k <= num; k++)
        {
            for (int j = 1; j <= num; j++)
                if (k == j && k + j == num + 1)
                    cout << x << " ";
                else
                    cout << "  ";
            cout << endl;
        }
    }
}

void angoli(int num, char x)
{
    for (int k = 1; k <= num; k++)
    {
        for (int j = 1; j <= num; j++)
            if ((k == 1 or k == num) && (j == 1 or j == num))
                cout << x << " ";
            else
                cout << "  ";
        cout << endl;
    }
}