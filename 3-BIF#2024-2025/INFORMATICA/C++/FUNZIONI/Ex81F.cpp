/*
Ex 81F
FUNZIONI SCAMBIA VAL e RIF
    A. Leggi da tastiera due numeri interi  X e Y ;
quindi stampa prima il loro valore, poi il loro indirizzo di memoria.

    B. Definisci una funzione scambiaVal  che legge due parametri  interi per
    valore e li scambia void scambiaval (int A,int B),
    chiama la funzione nel main su X ed Y, ristampa X ed Y

    C. Definisci una funzione scambiaRifche legge due parametri interi per
    riferimento e li scambia void scambia_rif (int& A,int & B),
    chiama la funzione nel main su X ed Y e ristampa X ed Y
*/

#include <iostream>
using namespace std;

void scambiaVal(int A, int B)
{
    int temp = A;
    A = B;
    B = temp;
}

void scambiaRif(int &A, int &B)
{
    int temp = A;
    A = B;
    B = temp;
}

int main()
{
    int X, Y;
    cout << "Inserisci due numeri interi X e Y: ";
    cin >> X >> Y;

    cout << "Valori iniziali: X = " << X << ", Y = " << Y << endl;
    cout << "Indirizzi di memoria: &X = " << &X << ", &Y = " << &Y << endl;

    scambiaVal(X, Y);
    cout << "Dopo scambiaVal: X = " << X << ", Y = " << Y << endl;

    scambiaRif(X, Y);
    cout << "Dopo scambiaRif: X = " << X << ", Y = " << Y << endl;

    return 0;
}