/*
Ex. 126-C
Definire una classe Tria con metodi off-line
Attributi:
private:
        int cat1, cat2;
        string nome;
        float ipo, per,area;

Vedi sotto il costruttore
implementazione metodi off- line
    Tria ::Tria (int x, int y, string z){
        cat1 = x;
        cat2 = y;
        nome=z;
        ipo = sqrt( x*x+y*y);
        per= x+y+ipo;
        area= x*y/2;
         }
Aggiungere i seguenti metodi off-line
void setxy( int , int );
        void setx(int );
        void sety( int );
        void update ( );
        float getipo ();
        int getx ();
        int gety ();
        void view ();


Farne uso nel main.

Modificare tipo Cat1 e Cat2 in float, aggiungere i metodi seguenti:

        1. Copia (Tri t)        che copia i valori del triangolo parametro nel triangolo corrente;
        2. Somma (Tri t)        che somma  i valori del triangolo parametro al triangolo corrente;
        3. Scala (int k)        che aumenta o diminuisce di k i cateti del triangolo corrente.
*/