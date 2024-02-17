/*Scrivere un programma che chieda di inserire n numeri, se sono negativi devono
essere trasformati in positivi, dopo di ché per ogni numero bisogna verificare se sa
pari o dispari, alla fine bisogna visualizzare la somma dei numeri pari/dispari e il loro
numero. Il tutto deve essere gestito con funzioni separate. Una volta risolto il
problema di partenza suddividere il file in più file diversi dove la funzione main deve
essere inserita in un file separato dal resto delle funzioni create.*/

#include <iostream>
using namespace std;

int trasformaPositivo(int numero)
{
    if (numero < 0)
    {
        return -numero;
    }
    else
    {
        return numero;
    }
}

bool isPari(int numero)
{
    if (numero % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout << "Inserisci il numero di numeri da inserire: ";
    cin >> n;

    int sommaPari = 0;
    int sommaDispari = 0;
    int numPari = 0;
    int numDispari = 0;

    for (int i = 0; i < n; i++)
    {
        int numero;
        cout << "Inserisci il numero: ";
        cin >> numero;

        numero = trasformaPositivo(numero);

        if (isPari(numero))
        {
            sommaPari += numero;
            numPari++;
        }
        else
        {
            sommaDispari += numero;
            numDispari++;
        }
    }

    cout << "Somma dei numeri pari: " << sommaPari << endl;
    cout << "Numero dei numeri pari: " << numPari << endl;
    cout << "Somma dei numeri dispari: " << sommaDispari << endl;
    std::cout << "Numero dei numeri dispari: " << numDispari << std::endl;

    return 0;
}