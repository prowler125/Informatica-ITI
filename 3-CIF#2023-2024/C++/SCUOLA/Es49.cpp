/*Scrivere un programma c++ che:
 contenga una funzione leggi che legge da tastiera un vettore di interi
 contenga una funzione stampa che stampa su video un vettore di interi
 contenga una funzione leggi_d che legge da tastiera un vettore di double
 contenga una funzione stampa_d che stampa su video un vettore di double
Risolvere l’esercizio utilizzando più file: uno che contiene l’implementazione delle
funzioni, uno le dichiarazioni e il main.*/

#ifndef VETTORE_H
#define VETTORE_H

#include <vector>
using namespace std;

void leggi(vector<int> &v);
void stampa(const vector<int> &v);
void leggi_d(vector<double> &v);
void stampa_d(const vector<double> &v);

#endif