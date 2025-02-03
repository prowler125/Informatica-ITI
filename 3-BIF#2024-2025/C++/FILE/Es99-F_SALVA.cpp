/*
Ex99-F_SALVA:
Funzione Salva Vettore su file
Seguendo istruzioni libro pag 225,
definire la funzione salvaVet, usando soliti standard di classe (nomi);
nel main() caricare e stampare il vettore con le funzioni note carVet e staVet,
quindi chiamare salvaVet e vedere contenuti del file vettore.txt
Ripetere questa volta aprendo il file in IOS:APP e chiamando due
volte salvaVet e controllare contenuti del file vettore .txt*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>
#include <string>
#include <string.h>
using namespace std;

int main(){

    ifstream file("");
    if (!file.is_open())
    {
        cerr << "Errore nell'apertura del file" << endl;
        return 1;
    }

    return 0;
}