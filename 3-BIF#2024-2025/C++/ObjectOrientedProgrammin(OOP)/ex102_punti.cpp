/*
Es. 102

Classe per la gestione di punti cartesiani

Obiettivo: Creare una classe che rappresenti punti cartesiani e permetta di calcolare la distanza tra due punti, il punto medio e di stampare le coordinate dei punti.

 Istruzioni:

 1. Definire una classe chiamata `Punti` che rappresenti due punti cartesiani (p1 e p2) e il loro punto medio.
 2. La classe deve avere i seguenti attributi privati:
	- `float x1, y1;` per le coordinate del primo punto (p1).
	- `float x2, y2;` per le coordinate del secondo punto (p2).
	- `float mx, my;` per le coordinate del punto medio tra p1 e p2.
 3. Implementare i seguenti metodi pubblici:
	- Un costruttore che accetti quattro parametri (le coordinate di p1 e p2) e calcoli il punto medio.
	- Un costruttore di default che inizializzi p1 a (0,0) e p2 a (1,1).
	- Un metodo `float distance()` che calcoli e ritorni la distanza tra p1 e p2.
	- Un metodo `void setp1(int x, int y)` per impostare le coordinate di p1.
	- Un metodo `void setp2(int x, int y)` per impostare le coordinate di p2.
	- Un metodo `void pm()` per aggiornare le coordinate del punto medio.
	- Un metodo `void stampaPuntoMedio()` per stampare le coordinate del punto medio.
	- Un metodo `void stampaCoppia()` per stampare le coordinate di p1 e p2.
 4. Nel `main`, creare tre oggetti della classe `Punti` e utilizzare i metodi definiti per mostrare il funzionamento della classe.
*/
#include <string.h>
#include <iostream>
#include <math.h>
using namespace std;
// Classe punti cartesiani
class Punti
{
	// attributi
private:
	float x1, y1; // p1
	float x2, y2; // p2
	float mx, my; // punto medio
				  // metodi
public:
	// costruttore
	Punti(float ax, float ay, float bx, float by)
	{
		x1 = ax;
		y1 = ay;
		x2 = bx;
		y2 = by;
		mx = (x1 + x2) / 2;
		my = (y1 + y2) / 2;
	}
	// costruttore default
	Punti()
	{
		x1 = y1 = 0;
		x2 = y2 = 1;
		mx = my = 0;
	}
	//  distanza tra 2 punti
	float distance()
	{
		float d;
		d = sqrt(pow(x1 - x2, 2) + pow(y2 - y1, 2));
		return d;
	}
	//  set P1
	void setp1(int x, int y)
	{
		x1 = x;
		y1 = y;
	}
	//  et P2
	void setp2(int x, int y)
	{
		x2 = x;
		y2 = y;
	}
	//  update  punto medio
	void pm()
	{
		mx = (x1 + x2) / 2;
		my = (y1 + y2) / 2;
		;
	}
	//  stampa  punto medio
	void stampaPuntoMedio()
	{
		cout << "punto medio =: " << mx << ", " << my << endl;
	}
	//  stampa  coppia
	void stampaCoppia()
	{
		cout << x1 << " , " << y1 << endl;
		cout << x2 << " , " << y2 << endl;
		cout << "-----------------------------" << endl;
	}
};

// utilizzo nel main
int main()
{
	// istanzio un oggetto di nome a
	Punti a(2, 0, 5, 4);
	a.stampaCoppia();
	a.stampaPuntoMedio();
	cout << "distanza= " << a.distance() << endl;
	system("pause");
	// istanzio un oggetto di nome b
	Punti b(0, 0, 10, 10);
	b.stampaCoppia();
	b.stampaPuntoMedio();
	cout << "distanza= " << b.distance() << endl;
	system("pause");

	// istanzio un oggetto di nome c
	Punti c;
	c.stampaCoppia();
	c.stampaPuntoMedio();
	c.setp1(3, 0);
	c.setp2(0, 4);
	c.stampaCoppia();
	cout << "distanza= " << c.distance() << endl;
	return 0;
}
