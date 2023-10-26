/*Scrivere un programma che effettui il conto alla rovescia a partire da un valore >=0,
pertanto bisogna gestire l'inserimento di numeri errati.*/

#include <iostream>
using namespace std;

int main(){
    int x;
    for(int i = 0; i < x; i--){
        do {
            cout<<"Dammi il valore di X"<<endl;
            cin>>x;
            cout<<i<<endl;
        } while(i<=x);
    }
    return 0;
}