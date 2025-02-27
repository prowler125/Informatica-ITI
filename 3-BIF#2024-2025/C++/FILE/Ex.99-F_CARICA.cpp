/*
Ex99-F_CARICA:
Funzione carica vettore da file 
accertarsi di avere un file vettore.txt con dei dati
Seguendo istruzioni libro pag 225, definire la  funzione  caricaVet, usando soliti standard (nomi); 
Nel main chiamare caricaVet  quindi  stampare il vettore con la funzione staVet
*/

#include <iostream>
#include <fstream>
using namespace std;

const int MAX_SIZE = 100;

void caricaVet(int arr[], int& size) {
    ifstream file("vettore.txt");
    if (file.is_open()) {
        size = 0;
        while (file >> arr[size] && size < MAX_SIZE) {
            size++;
        }
        file.close();
    } else {
        cerr << "Unable to open file vettore.txt" << endl;
    }
}

void staVet(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[MAX_SIZE];
    int size;
    caricaVet(arr, size);
    staVet(arr, size);
    return 0;
}