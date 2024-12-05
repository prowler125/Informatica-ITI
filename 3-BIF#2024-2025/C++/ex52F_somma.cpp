// Ex52-F  somma di 2 vettori
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <iomanip>

using namespace std;
// prototipi
void caricaVet  ( int [],int);
void  stampaVet ( int [],int);
void  sommaVet ( int  [], int[],int [],int);
void  molVet ( int  [], int[],int [],int);
int main()
	{
	const int N = 6;
	int v1[N] = { 100,101,102,103,104,105};
	int v2[N], v3[N],k;
	srand(time(NULL));
	// carico   
	caricaVet ( v1,N);
 	caricaVet ( v2,N); 
	// stampa i vettori
	stampaVet ( v1,N);
	stampaVet ( v2,N); 
	   
	// sommo i due vettori
	sommaVet (v1,v2,v3,N);
	cout<< endl;
	stampaVet ( v3,N);
	molVet (v1,v2,v3,N);
	cout<< endl;
	stampaVet ( v3,N);
	return 0;
	}

// funzione  carica vettore
void caricaVet ( int vet [],int L)
	{
	for (int k=0; k< L; k++)
			vet [ k ]= rand() %10 +1;
	}
// funzione stampa vettore
void  stampaVet ( int  vet [],int L)
	{
	for ( int k=0; k< L; k++)
		cout <<  vet [ k ] << "\t";
 	cout << endl;
	}
// funzione somma vettori	
void  sommaVet ( int a[],int b[],int c[], int L )
	{
	for ( int  k=0; k< L ; k++)
		c[k]= a[k]+b[k];
	}
	// funzione moltiplica 2 vettori	
void  molVet ( int a[],int b[],int c[], int L )
	{
	for ( int  k=0; k< L ; k++)
		c[k]= a[k]*b[k];
	}
