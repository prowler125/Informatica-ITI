/*
Ex 62B- VETTORE CARATTERI ORDINA

1. Definisci una funzione ORDINAVETT che ordina un
vetttore di caratteri in modo decrescente;

2. Allo scopo ORDINAVETT usa una funzione SCAMBIAVETT.

3. Nel main, dopo le opportune dichiarazioni, procedi con:
	3.1 Carica il vetttore		CARICAVETT	(Carica caratteri a range  A - Z)
	3.2 Stampa il vetttore		STAMPAVETT
	3.3 Ordina  il vetttore in modo decrescente		ORDINAVETT & SCAMBIAVETT
	3.4 Stampa il vetttore ordinato 		STAMPAVETT
*/

#include <math.h>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
#include <iostream>

using namespace std;

// Funzione per stampare il vettore
void stampavett(char[], int);

// Funzione per caricare il vettore con caratteri casuali
void caricavett(char[], int);

// Funzione per ordinare il vettore in modo decrescente
void ordinavett(char[], int);

// Funzione per scambiare due caratteri
void scambia(char &, char &);

int main()
{
	const int N = 10;
	char vett[N];

	// Carica e stampa il vettore
	caricavett(vett, N);
	stampavett(vett, N);

	system("pause");

	// Ordina il vettore
	ordinavett(vett, N);

	// Stampa il vettore ordinato
	stampavett(vett, N);

	system("pause");
}

// Funzione per stampare il vettore
void stampavett(char vett[], int L)
{
	for (int k = 0; k < L; k++)
		cout << vett[k] << "\t";
	cout << endl;
}

// Funzione per caricare il vettore con caratteri casuali
void caricavett(char vett[], int L)
{
	srand(time(NULL));
	for (int k = 0; k < L; k++)
		vett[k] = rand() % 26 + 65;
}

// Funzione per ordinare il vettore in modo decrescente (Exchange Sort)
void ordinavett(char vett[], int L)
{
	for (int k = 0; k < L - 1; k++)
		for (int j = k + 1; j < L; j++)
			if (vett[k] < vett[j])
				scambia(vett[k], vett[j]);
}

// Funzione per scambiare due caratteri
void scambia(char &a, char &b)
{
	int t;
	t = a;
	a = b;
	b = t;
}
