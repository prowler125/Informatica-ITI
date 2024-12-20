#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("Storia dell'Impero Romano.txt");
    if (file.is_open())
    {
        file << "L'Impero romano fu lo Stato romano consolidatosi nell'area euro-mediterranea tra il I secolo a.C. e il XV secolo; in questa voce si tratta il periodo che va dalla sua fondazione, generalmente indicata con il 27 a.C. (primo anno del principato di Augusto), al 395, quando, dopo la morte di Teodosio I, l'Impero fu suddiviso dal punto di vista amministrativo ma non politico in una pars occidentalis e in una pars orientalis. L'Impero romano d'Occidente si fa terminare per convenzione nel 476, anno in cui Odoacre depone l'ultimo imperatore, Romolo Augusto, mentre l'Impero romano d'Oriente (indicato talvolta come Impero bizantino nella sua fase medievale) si protrasse fino alla conquista di Costantinopoli da parte degli Ottomani, nel 1453. Nella sua massima espansione, l'Impero si estendeva, in tutto o in parte, sui territori degli odierni Stati di: Portogallo, Spagna, Andorra, Francia, Monaco, Belgio, Paesi Bassi (regioni meridionali), Regno Unito (Inghilterra, Galles, parte della Scozia), Lussemburgo, Germania (regioni meridionali e occidentali), Svizzera, Austria, Liechtenstein, Slovacchia (piccola parte), Ungheria, Italia, Vaticano, San Marino, Malta, Slovenia, Croazia, Bosnia ed Erzegovina, Serbia, Montenegro, Kosovo, Albania, Macedonia del Nord, Grecia, Bulgaria, Romania, Moldavia, Ucraina (parte costiera sud-occidentale con Isola dei Serpenti e Podolia), Turchia, Russia, Cipro, Siria, Libano, Iraq, Armenia, Georgia, Iran, Azerbaigian, Israele, Giordania, Palestina, Egitto, Sudan (piccola parte e per limitato periodo di tempo), Libia, Tunisia, Algeria, Marocco e Arabia Saudita (piccola parte). In totale, 52 dei 196 Stati riconosciuti nel mondo, più 3 parzialmente riconosciuti, più di ogni altro impero del mondo antico.[4] Si espandeva su tre diversi continenti: Europa, Africa e Asia. Nel 117 sotto Traiano ricopriva un'area di 5,0 milioni di km2,[5][6][7] conteggiando anche gli Stati vassalli e i regni clienti. L'esatta misura della superficie governata da questo potente impero in realtà non è certa, a causa della mancanza di dati precisi, di dispute territoriali e della presenza di stati clienti il cui rapporto nei confronti di Roma non è sempre chiaro. Pur non essendo il più vasto Stato dell’antichità, spettando tali primati all'impero achemenide, cinese e Xiongnu,[8][9] quello di Roma è considerato il più grande per gestione e qualità del territorio, organizzazione socio-politica, e per l'importante eredità lasciata nella storia dell'umanità. In tutti i territori sui quali estesero i propri confini i Romani costruirono città, strade, ponti, acquedotti, fortificazioni, esportando ovunque il loro modello di civiltà e al contempo assimilando le popolazioni e civiltà assoggettate, in un processo così profondo che per secoli ancora dopo la fine dell'impero queste genti continuarono a definirsi romane. La civiltà nata sulle rive del Tevere, cresciuta e diffusasi in epoca repubblicana ed infine sviluppatasi pienamente in età imperiale, è essenziale componente della civiltà occidentale." << endl;

        file.close();
        cout << "File creato con successo" << endl;
    }
    else
    {
        cout << "Creazione del File fallita" << endl;
    }
    return 0;
}