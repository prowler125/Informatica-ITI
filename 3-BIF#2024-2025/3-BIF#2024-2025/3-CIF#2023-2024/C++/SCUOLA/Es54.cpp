/* Si definisca una struct tavolo per memorizzare i tavoli prodotti da un
artigiano; per ogni tavolo si memorizzino il numero massimo di persone che ci
possono stare sedute intorno, le dimensioni (altezza da terra, lunghezza e
larghezza del piano) in metri.

Si memorizzino i dati di quattro tavoli e si
dica il numero totali di posti tra i quattro tavoli e la superficie di tavolo
media a persona per ognuno dei quattro tavoli e quella media a persona in
totale tra i quattro tavoli*/

#include <iostream>
using namespace std;
struct tavolo
{
    int numPersone;
    float altezza;
    float lunghezza;
    float larghezza;
};

int main()
{
    tavolo tavolo1;
    tavolo1.numPersone = 4;
    tavolo1.altezza = 0.75;
    tavolo1.lunghezza = 1.2;
    tavolo1.larghezza = 0.8;

    tavolo tavolo2;
    tavolo2.numPersone = 6;
    tavolo2.altezza = 0.8;
    tavolo2.lunghezza = 1.5;
    tavolo2.larghezza = 0.9;

    tavolo tavolo3;
    tavolo3.numPersone = 2;
    tavolo3.altezza = 0.6;
    tavolo3.lunghezza = 1.0;
    tavolo3.larghezza = 0.6;

    tavolo tavolo4;
    tavolo4.numPersone = 8;
    tavolo4.altezza = 0.9;
    tavolo4.lunghezza = 1.8;
    tavolo4.larghezza = 1.0;

    int totalPosti = tavolo1.numPersone + tavolo2.numPersone + tavolo3.numPersone + tavolo4.numPersone;
    float mediaTavolo1 = (tavolo1.lunghezza * tavolo1.larghezza) / tavolo1.numPersone;
    float mediaTavolo2 = (tavolo2.lunghezza * tavolo2.larghezza) / tavolo2.numPersone;
    float mediaTavolo3 = (tavolo3.lunghezza * tavolo3.larghezza) / tavolo3.numPersone;
    float mediaTavolo4 = (tavolo4.lunghezza * tavolo4.larghezza) / tavolo4.numPersone;
    float mediaTotale = (mediaTavolo1 + mediaTavolo2 + mediaTavolo3 + mediaTavolo4) / 4;

    return 0;
}
