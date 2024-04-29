#include <iostream>                // Permette operazioni di input/output
#include <fstream>                 // Permette operazioni su file
#include <limits>                  // Fornisce informazioni sui limiti numerici
#include <cstdlib>                 // Fornisce funzioni generali
#define rubricaSize 5              // Definisce la dimensione massima della rubrica
using namespace std;               // Permette l'uso di nomi nel namespace std senza qualificazione
static int rubricaCurrentSize = 0; // Contatore per la dimensione corrente della rubrica

// Funzione per mettere in pausa e pulire la console
void pauseClear()
{
    cout << "Press enter to continue...";                // Stampa un messaggio
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora l'input fino a quando non viene premuto invio
    system("clear");                                     // Pulisce la console
}

// Classe Rubrica
class Rubrica
{
    // Membri privati per l'incapsulamento
private:
    string cognome;   // Variabile per il cognome
    string nome;      // Variabile per il nome
    string telFisso;  // Variabile per il telefono fisso
    string telMobile; // Variabile per il telefono mobile

public:
    // Metodi pubblici per l'incapsulamento
    // Restituisce il valore del nome
    string nomeValue()
    {
        return this->nome;
    }
    // Restituisce il valore del cognome
    string cognomeValue()
    {
        return this->cognome;
    }
    // Restituisce il valore del telefono fisso
    string telFissoValue()
    {
        return this->telFisso;
    }
    string telMobileValue(){
        return this->telMobile;
    }
     void setNome(string nome){
        this->nome = nome;
    }
    void setCognome(string cognome){
        this->cognome = cognome;
    }
    void setTelFisso(string telFisso){
        this->telFisso = telFisso;
    }
    void setTelMobile(string telMobile){
        this->telMobile = telMobile;
    }
    Rubrica(){
        cognome = "";
        nome = "";
        telFisso = "";
        telMobile = "";
    }
    // overloading
    Rubrica(string cognome , string nome ,string telFisso , string telMobile){
        this->cognome = cognome;
        this->nome = nome;
        this->telFisso = telFisso;
        this->telMobile = telMobile;
    }
    void inserisciVoce(Rubrica rubrica [rubricaSize]){
       string cognome, nome, telFisso, telMobile;
        cout<<"Inserisci il cognome: ";
        cin>>cognome;
        cout<<"Inserisci il nome: ";
        cin>>nome;
        cout<<"Inserisci il numero di telefono fisso: ";
        cin>>telFisso;
        cout<<"Inserisci il numero di telefono mobile: ";
        cin>>telMobile;
        
        for(int i = 0; i < rubricaSize; i++){
            if(rubrica[i].nome == nome && rubrica[i].cognome == cognome){
                pauseClear();

                cout<<"la voce esiste"<<endl;
                
                pauseClear();
                return;
            }
        }
        
        for(int i = 0; i < rubricaSize; i++){
            if(rubrica[i].nome == "" && rubrica[i].cognome == ""){
                rubrica[i] = Rubrica(cognome, nome, telFisso, telMobile);
                pauseClear();
                rubricaCurrentSize++;
                return;
            }
        }
        pauseClear();
        
        cout<<"Rubrica piena"<<endl;
        pauseClear();
       

    }
    void stampaVoce(){
        cout<<"Cognome:\t"<<cognome<<endl<<"Nome:\t\t"<<nome<<endl<<"Tel_fisso:\t"<<telFisso<<endl<<"Tel_mobile:\t"<<telMobile<<endl<<endl;
        cout<<"---------------------------------------------------------------------------------------------------------"<<endl<<endl;
    }
};
void stampaRubrica(Rubrica rubrica [rubricaSize]){
    for(int i = 0;i<rubricaCurrentSize;i++){

        rubrica[i].stampaVoce();
         
    }
    pauseClear();
}
void cercaVoce(Rubrica rubrica [rubricaSize]){
        string voceCerca ;
        cout<<"insersci nome o cognome: ";
        cin>>voceCerca;
        
        pauseClear();
        bool found = false;
        for(int i = 0;i<rubricaCurrentSize;i++){
            if(voceCerca == rubrica[i].nomeValue() || voceCerca == rubrica[i].cognomeValue()){
                rubrica[i].stampaVoce();
                found = true;
                
            }
        }
        if(!found){
            cout<<"la voce non esiste"<<endl;
        }
        pauseClear();
    }
void stampaVoceInFile(Rubrica rubrica [rubricaSize]){
        string nomeCerca,cognomeCerca,nomeFile;
        cout<<"insersci nome: ";
        cin>>nomeCerca;
        cout<<"insersci cognome: ";
        cin>>cognomeCerca;
        cout<<"insersci il nome del file: ";
        cin>>nomeFile;
        fstream file;
        bool found = false;
         
        
        for(int i = 0;i<rubricaCurrentSize;i++){
            if(nomeCerca == rubrica[i].nomeValue() && cognomeCerca == rubrica[i].cognomeValue()){
                pauseClear();
                file.open(nomeFile+".txt",ios::out);
                file<<"Cognome:\t"<<rubrica[i].cognomeValue()<<endl<<"Nome:\t\t"<<rubrica[i].nomeValue()<<endl<<"Tel_fisso:\t"<<rubrica[i].telFissoValue()<<endl<<"Tel_mobile:\t"<<rubrica[i].telMobileValue()<<endl<<endl;
                file<<"---------------------------------------------------------------------------------------------------------"<<endl<<endl;
                found = true;
                cout<<"voce stampata in "<<nomeFile<<".txt con successo."<<endl;
                pauseClear();

                return;
            }

        }
        pauseClear();
        if(!found){
            cout<<"la voce non esiste"<<endl;
        }
        pauseClear();
}

void backup(Rubrica rubrica [rubricaSize]){
    fstream file;
    file.open("backup.txt",ios::out);
     
    if(file.is_open()){
        for(int i =0;i<rubricaCurrentSize;i++){
            file<<rubrica[i].cognomeValue()<<endl;
            file<<rubrica[i].nomeValue()<<endl;
            file<<rubrica[i].telMobileValue()<<endl;
            file<<rubrica[i].telFissoValue()<<endl;

        }
        cout<<"backup fatto con successo."<<endl;
        pauseClear();
    }else{
        cout<<"backup fallito."<<endl;
        pauseClear();
    }
}

void cancellaVoce(Rubrica rubrica [rubricaSize]){
    string nomeCerca,cognomeCerca;
    cout<<"insersci nome: ";
    cin>>nomeCerca;
    cout<<"insersci cognome: ";
    cin>>cognomeCerca;
    bool found = false;
    for(int i = 0;i<rubricaSize;i++){
        if(nomeCerca == rubrica[i].nomeValue() && cognomeCerca == rubrica[i].cognomeValue()){
            found = true;
            

             
            for(int j = i; j < rubricaSize - 1; j++){
                rubrica[j] = rubrica[j + 1];
            }
 
            rubrica[rubricaSize - 1] = Rubrica();
            rubricaCurrentSize--;
            pauseClear();
            cout << "Voce cancellata con successo!" << endl;
            
            break;
        }
    }
    if(!found){
        pauseClear();
        cout << "La voce non esiste." << endl;
        pauseClear();

        return;
    }
    fstream file ;
    file.open("backup.txt",ios::out);
    
    pauseClear();
    if(file.is_open()){
         for(int i =0;i<rubricaCurrentSize;i++){
            file<<rubrica[i].cognomeValue()<<endl;
            file<<rubrica[i].nomeValue()<<endl;
            file<<rubrica[i].telMobileValue()<<endl;
            file<<rubrica[i].telFissoValue()<<endl;

        }
        return;
    }
} 


void restore(Rubrica rubrica [rubricaSize]){
    fstream file;
    file.open("backup.txt",ios::in);
    string line;

    if(file.is_open()){
        int i =0;
        while(getline(file,line)){
        
            rubrica[i].setCognome(line);
            getline(file,line);
            rubrica[i].setNome(line);
            getline(file,line);
            rubrica[i].setTelMobile(line);
            getline(file,line);
            rubrica[i].setTelFisso(line);
            
            i++;
        }
       
        cout<<"Restore fatto con successo."<<endl;
        pauseClear();
        rubricaCurrentSize = i;
        
    }else{
        pauseClear();
        cout<<"non c'e nessun backup."<<endl;
        
    }
}
// quick sort
int partition(Rubrica rubrica[], int low, int high) {
    string pivot = rubrica[high].cognomeValue();
    int i = low;

    for (int j = low; j < high; j++) {
        if (rubrica[j].cognomeValue() < pivot) {
            if (i != j) {
                Rubrica temp = rubrica[i];
                rubrica[i] = rubrica[j];
                rubrica[j] = temp;
            }
            i++;
        }
    }
    Rubrica temp = rubrica[i];
    rubrica[i] = rubrica[high];
    rubrica[high] = temp;
    return i;
}
 
void quickSort(Rubrica rubrica[], int low, int high) {
    if (low < high) {
        int pi = partition(rubrica, low, high);

        quickSort(rubrica, low, pi - 1);
        quickSort(rubrica, pi + 1, high);
    }
}

void ordinaRubricaPerCognome(Rubrica rubrica[]) {
    quickSort(rubrica, 0, rubricaCurrentSize - 1);
    cout << "Rubrica ordinata per cognome." << endl;
    pauseClear();
}

int main(){
     
    int scelta;
    
    Rubrica rubrica [rubricaSize];

   do{
        cout <<endl<< "----------------------------------------------- Menu ----------------------------------------------------" << endl;
        cout << "|                                                                                                       |" << endl;
        cout << "|  1 Inserisci voce.                                                                                    |" << endl;
        cout << "|  2 Cerca voce.                                                                                        |" << endl;
        cout << "|  3 Stampa voce in un file TXT.                                                                        |" << endl;
        cout << "|  4 Cancella voce.                                                                                     |" << endl;
        cout << "|  5 Stampa rubrica.                                                                                    |" << endl;
        cout << "|  6 Backup: Salva l'intera rubrica in backup.txt.                                                      |" << endl;
        cout << "|  7 Restore: Carica il backup da backup.txt.                                                           |" << endl;
        cout << "|  8 Ordina rubrica per cognome.                                                                        |" << endl;
        cout << "|  9 Uscire.                                                                                            |" << endl;
        cout << "|                                                                                                       |" << endl;
        cout << "---------------------------------------------------------------------------------------------------------" << endl << endl;
        cout << "Inserisci la tua scelta: ";

        cin>>scelta;
        pauseClear();
        
        switch(scelta){
            case 1:
                rubrica[rubricaCurrentSize].inserisciVoce(rubrica);
             
                break;
            case 2:
                cercaVoce(rubrica);
                break;
            case 3:
                stampaVoceInFile(rubrica);
                break;  
            case 4: 
                cancellaVoce(rubrica);
                
                break;
            case 5:
                stampaRubrica(rubrica);
                break;
            case 6:
                backup(rubrica);
                break;
            case 7:
                restore(rubrica);
                break;
            case 8:
                ordinaRubricaPerCognome(rubrica);

        }
        
    }while(scelta !=9);
}
