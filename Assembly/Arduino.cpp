#define VERDE 0
#define GIALLO 1
#define ROSSO 2

int semaforoPrincipale[] = {8, 9, 10};
int semaforoPedonale[] = {5, 6, 7};

int ritardo = 4000;
int pulsantePin = 2;
int attesaChiamata = 3000;

void setup()
{
    for (int i = 0; i < 3; i++)
    {
        pinMode(semaforoPrincipale[i], OUTPUT);
        pinMode(semaforoPedonale[i], OUTPUT);
    }
    pinMode(pulsantePin, INPUT);
    digitalWrite(semaforoPrincipale, ROSSO);
    digitalWrite(semaforoPedonale, VERDE);
}
void loop()
{
    if (digitalRead(pulsantePin) == HIGH)
    {
        digitalWrite(semaforoPedonale, ROSSO);
        digitalWrite(semaforoPrincipale, VERDE);
        delay(ritardo);
        digitalWrite(semaforoPrincipale, GIALLO);
        delay(2000);
        digitalWrite(semaforoPrincipale, ROSSO);
        digitalWrite(semaforoPedonale, VERDE);
        delay(attesaChiamata);
        digitalWrite(semaforoPedonale, GIALLO);
        delay(2000);
        digitalWrite(semaforoPedonale, ROSSO);
    }
}
void cambiaLuce(int luce[], int stato)
{
    for (int i = 0; i < 3; i++)
    {
        if (i == luce)
        {
            stato = 1;
        }
        else
        {
            stato = 0;
        }

        digitalWrite(luce[i], stato);
    }
}