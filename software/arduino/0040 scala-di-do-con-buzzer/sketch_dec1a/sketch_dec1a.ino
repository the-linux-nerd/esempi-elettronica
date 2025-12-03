/**
 * riproduzione di note con il buzzer
 * 
 * questo programma riproduce la scala di do maggiore con il buzzer
 *
 */

// definizione costanti
#define PIN_BUZZER 5
#define NOTA 500
#define PAUSA 50

// dichiarazione variabili
unsigned long tempo;
const int melodia[] = {
  262, 294, 330, 349, 392, 440, 494, 523  // DO RE MI FA SOL LA SI
};
const int NUM_NOTE = sizeof(melodia) / sizeof(melodia[0]);
enum Stato { SUONO, SILENZIO };
Stato stato = SUONO;
int notaCorrente = 0;
int intervallo = NOTA;

// setup dell'ambiente
void setup() {

  // imposto il pin del buzzer su OUTPUT
  pinMode(PIN_BUZZER, OUTPUT);

  // avvio il timer
  tempo = millis();

}

void loop() {

  // se tempo corrente meno tempo salvato è maggiore di DELAY
  if( ( millis() - tempo ) >= intervallo ) {

    // cambio di stato
    switch(stato) {
      case SUONO:
        stato = SILENZIO;
        intervallo = PAUSA;
        noTone(PIN_BUZZER);
        break;
      case SILENZIO:
        stato = SUONO;
        intervallo = NOTA;
        tone(PIN_BUZZER, melodia[notaCorrente]);
        notaCorrente++;
        if(notaCorrente >= NUM_NOTE) {
          notaCorrente = 0;
        }
        break;
    }

    // aggiorno il tempo di riferimento
    tempo = millis();

  }

}
