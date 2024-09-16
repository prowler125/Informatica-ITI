/*Scrivere un programma che chiede all’utente di inserire una matrice 5X5, poi
(dopo aver terminato la fase di inserimento) copia gli elementi dispari in una
seconda matrice 5X5 senza lasciare buchi, se non in fondo. Gli elementi in
fondo (i &quot;buchi&quot;) siano messi a zero.*/

#include <iostream>
using namespace std;

int main(){
    int matrice[5][5];
    int matriceDispari[5][5];
    int i, j;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            cout << "Inserisci l'elemento [" << i << "][" << j << "]: ";
            cin >> matrice[i][j];
        }
    }
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(matrice[i][j]%2!=0){
                matriceDispari[i][j] = matrice[i][j];
            }else{
                matriceDispari[i][j] = 0;
            }
        }
    }
    return 0;
}