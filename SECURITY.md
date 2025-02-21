# **Linee guide base per la sicurezza di tutti**

## **Security Policy: un occhio di riguardo alle "Supported Versions"**
Se sviluppi o utilizzi software, la sicurezza è un aspetto cruciale. Hai mai sentito parlare di "Security Policy" e, in particolare, della sezione "Supported Versions"? Se la risposta è no, ti consiglio di leggere questo approfondimento. Capire di cosa si tratta e perché è importante può fare la differenza per la sicurezza dei tuoi progetti e dei sistemi che utilizzi.

### **Cos'è una _Security Policy_?**
Immagina che il tuo progetto software sia una casa. La Security Policy è un po' come il sistema di allarme, le telecamere di sorveglianza e le regole di accesso: un insieme di misure e informazioni che spiegano come viene protetta quella casa, o meglio, il tuo software. Questo documento fornisce dettagli su come vengono gestite le vulnerabilità di sicurezza, quali versioni del software sono supportate e ricevono aggiornamenti, come vengono rilasciate le patch di sicurezza e come vengono comunicate le informazioni relative alle vulnerabilità.

### **Perché la sezione "Supported Versions" è così importante?**
All'interno della Security Policy, la sezione "Supported Versions" (Versioni Supportate) è un elemento fondamentale. È come il cartello che indica quali stanze della casa sono ancora sicure e controllate. Questa sezione specifica chiaramente quali versioni del progetto sono attualmente mantenute attive e, di conseguenza, ricevono aggiornamenti di sicurezza. Questa informazione è vitale per gli utenti, perché permette loro di:

Valutare il rischio: Sapere se la versione che stanno utilizzando è ancora supportata consente di capire se si è esposti a vulnerabilità conosciute e non ancora corrette. È un po' come sapere se la porta della tua stanza ha ancora la serratura funzionante.
Pianificare gli aggiornamenti: Come faresti con la manutenzione della tua casa, sapere quali versioni sono supportate aiuta gli utenti a pianificare gli aggiornamenti necessari per mantenere i loro sistemi sicuri. Un po' come programmare la sostituzione delle finestre vecchie.
Evitare l'uso di versioni obsolete: Questa sezione aiuta a evitare di utilizzare versioni del software che non sono più supportate e che potrebbero rappresentare un rischio significativo per la sicurezza. È come evitare di dormire in una stanza con il tetto che sta per crollare.
Come vengono definite le "Supported Versions"?
Non esiste una regola fissa per definire le "Supported Versions". Dipende dalla strategia di manutenzione adottata dal progetto. Ecco alcuni approcci comuni:

Versioni LTS (Long Term Support): Alcuni progetti rilasciano versioni LTS che vengono supportate per un periodo di tempo più lungo, anche dopo il rilascio di nuove versioni. Sono come le fondamenta solide di una casa, che garantiscono stabilità nel tempo.
Finestra di supporto limitata: Altri progetti supportano solo le versioni più recenti, offrendo un periodo di tempo limitato per l'aggiornamento a nuove versioni. Un po' come una casa moderna, con materiali all'avanguardia, ma che richiede manutenzione più frequente.
Supporto basato su numeri di versione: Si può definire un intervallo di numeri di versione supportate (ad esempio, tutte le versioni dalla 1.2.x alla 1.4.x). È un po' come dire che tutte le case con un determinato numero civico sono sotto la stessa protezione.
Esempio pratico
Immagina una sezione "Supported Versions" ben definita:

## **Supported Versions**

Questo progetto supporta le seguenti versioni con aggiornamenti di sicurezza:

* 1.4.x (LTS) - Supportata fino al 31 dicembre 2024
* 1.5.x - Supportata fino al 30 giugno 2024

Le versioni precedenti non sono più supportate e potrebbero contenere vulnerabilità non corrette. Si consiglia vivamente agli utenti di aggiornare a una versione supportata.
In questo esempio, è chiaro quali versioni sono sicure e per quanto tempo. L'utente sa che se utilizza la versione 1.3.x, ad esempio, è a rischio.

Best practice: come mantenere una sezione "Supported Versions" efficace
Aggiornare costantemente: La sezione deve essere sempre aggiornata con le informazioni corrette. È come controllare regolarmente che il sistema di allarme funzioni correttamente.
Comunicare in modo chiaro: Utilizzare un linguaggio semplice e comprensibile. Evitare termini tecnici complessi. Un po' come dare istruzioni chiare e semplici a chi deve proteggere la casa.
Fornire istruzioni per l'aggiornamento: Spiegare come aggiornare a una versione supportata. È come avere un manuale di istruzioni per il sistema di allarme.
Considerare le LTS: Se possibile, offrire versioni LTS per chi ha bisogno di supporto a lungo termine. Un po' come offrire una garanzia estesa per la casa.
In conclusione
La sezione "Supported Versions" è un elemento fondamentale della Security Policy. Ignorarla è come lasciare la porta di casa aperta. Mantenere questa sezione aggiornata e comunicare chiaramente le informazioni è una responsabilità importante per chi sviluppa software. Ma è anche un'informazione preziosa per chi lo utilizza. Prendersi un momento per leggerla e comprenderla può fare una grande differenza per la tua sicurezza.

| Version | Supported          |
| ------- | ------------------ |
| 5.1.x   | :white_check_mark: |
| 5.0.x   | :x:                |
| 4.0.x   | :white_check_mark: |
| < 4.0   | :x:                |

## **Segnalazione di una Vulnerabilità**
Questa sezione fornisce indicazioni su come segnalare una vulnerabilità di sicurezza nel nostro progetto ospitato su GitHub. La tua collaborazione è fondamentale per garantire la sicurezza e l'integrità del nostro software e della nostra comunità. Apprezziamo il tuo impegno nell'aiutarci a identificare e risolvere potenziali problemi.

### **Come Segnalare una Vulnerabilità**
Se ritieni di aver individuato una vulnerabilità di sicurezza nel nostro progetto, ti invitiamo a segnalarcela immediatamente. Non divulgare pubblicamente la vulnerabilità prima che sia stata affrontata e risolta. La divulgazione pubblica prematura potrebbe mettere a rischio i nostri utenti e la nostra infrastruttura.

_Per segnalare una vulnerabilità, ti preghiamo di seguire questi passaggi:_

Non creare una issue pubblica su GitHub: Le vulnerabilità di sicurezza non devono essere discusse pubblicamente. La creazione di una issue pubblica esporrebbe la vulnerabilità a un pubblico più ampio, inclusi potenziali aggressori, prima che abbiamo l'opportunità di risolverla.

Invia una segnalazione privata: Invia la tua segnalazione di vulnerabilità direttamente al nostro team di sicurezza. Puoi farlo tramite uno dei seguenti metodi (indicare il metodo preferito e, se possibile, fornire un indirizzo email dedicato o un sistema di gestione delle vulnerabilità):

Indirizzo email dedicato: Invia la tua segnalazione a [indirizzo email di sicurezza]. Questo è il metodo preferito per segnalazioni di vulnerabilità complesse o sensibili.
Sistema di gestione delle vulnerabilità: Se utilizziamo un sistema di gestione delle vulnerabilità (ad esempio, HackerOne, Bugcrowd), ti preghiamo di utilizzare quella piattaforma per inviare la tua segnalazione. Fornisci il link alla piattaforma.
Contatto privato su GitHub: Se non diversamente specificato, puoi contattare privatamente i maintainer del repository tramite la funzionalità di "contact" di GitHub.
Fornisci informazioni dettagliate: Nella tua segnalazione, ti preghiamo di includere quante più informazioni dettagliate possibili sulla vulnerabilità, tra cui:

Descrizione della vulnerabilità: Spiega chiaramente la natura della vulnerabilità. Qual è il problema di sicurezza? Quali sono i potenziali rischi?
Passaggi per la riproduzione: Fornisci istruzioni chiare e dettagliate su come riprodurre la vulnerabilità. Più dettagli fornisci, più facile sarà per noi comprendere e risolvere il problema. Includi screenshot o video se necessario.
Versione del software: Indica la versione specifica del software in cui hai riscontrato la vulnerabilità.
Ambiente: Specifica l'ambiente in cui hai testato la vulnerabilità (ad esempio, sistema operativo, browser, versione di Python, ecc.).
Potenziali impatti: Descrivi i potenziali impatti della vulnerabilità. Quali danni potrebbero essere causati da un exploit di successo?
Proof of Concept (PoC) (opzionale): Se possibile, includi un Proof of Concept (PoC) che dimostri la vulnerabilità. Un PoC è un piccolo programma o script che sfrutta la vulnerabilità. Tuttavia, fai attenzione a non causare danni durante la creazione del PoC.
Mantieni la riservatezza: Non divulgare pubblicamente la vulnerabilità fino a quando non avremo confermato la ricezione della tua segnalazione e avremo avuto il tempo di analizzare e risolvere il problema.

### **Tempi di Risposta e Aggiornamenti**
Ci impegniamo a rispondere a tutte le segnalazioni di vulnerabilità nel minor tempo possibile. Tuttavia, il tempo necessario per analizzare e risolvere una vulnerabilità può variare a seconda della sua complessità.

Conferma di ricezione: Entro [tempo di risposta, ad esempio 24-48 ore] dalla tua segnalazione, ti invieremo una conferma di ricezione.
Aggiornamenti sullo stato: Ti forniremo aggiornamenti periodici sullo stato della tua segnalazione. La frequenza degli aggiornamenti dipenderà dalla complessità della vulnerabilità e dal nostro carico di lavoro. Cercheremo di fornirti un aggiornamento almeno ogni [tempo, ad esempio settimana].
Risoluzione della vulnerabilità: Una volta che la vulnerabilità sarà stata risolta, ti informeremo e ti forniremo i dettagli sulla correzione.
Gestione delle Segnalazioni
Valutiamo attentamente tutte le segnalazioni di vulnerabilità. Il nostro processo di gestione delle segnalazioni prevede le seguenti fasi:

Valutazione iniziale: Valutiamo la gravità e l'impatto potenziale della vulnerabilità.
Riproduzione: Cerchiamo di riprodurre la vulnerabilità per confermarne l'esistenza.
Analisi: Analizziamo la causa principale della vulnerabilità.
Correzione: Implementiamo una correzione per risolvere la vulnerabilità.
Test: Testiamo la correzione per assicurarci che risolva la vulnerabilità senza introdurre nuovi problemi.
Rilascio: Rilasciamo una nuova versione del software con la correzione.
Comunicazione: Ti comunichiamo l'esito della tua segnalazione e ti ringraziamo per la tua collaborazione.
Riconoscimento
Apprezziamo il contributo di chiunque segnali una vulnerabilità di sicurezza. A seconda della gravità e dell'impatto della vulnerabilità, potremmo riconoscere pubblicamente il tuo contributo (con il tuo consenso).

Grazie per il tuo aiuto nel rendere il nostro progetto più sicuro!
