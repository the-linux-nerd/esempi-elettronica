
/**
 * fa lampeggiare il led a bordo della scheda in modalità non bloccante
 * 
 * con questo programma colleghiamo per la prima volta un componente esterno ad Arduino,
 * il mio suggerimento è di utilizzare una piccola breadboard come si può vedere nel file
 * Fritzing allegato al progetto
 * 
 */

// definizione costanti
#define DELAY 500
#define LED_PIN 7

// dichiarazione variabili
unsigned long tempo;

// setup dell'ambiente
void setup() {

  // setto il pin del led a bordo scheda come output
  pinMode(LED_PIN, OUTPUT);

  // salvo il tempo del setup
  tempo = millis();

}

// ciclo principale del programma
void loop() {

  // se tempo corrente meno tempo salvato è maggiore di DELAY
  if( ( millis() - tempo ) >= DELAY ) {

    // scrivo su LED_BUILTIN il contrario di quello che leggo da LED_BUILTIN
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));

    // aggiorno il tempo trascorso
    tempo = millis();

  }

}
