
/**
 * fa lampeggiare un led esterno tramite un transistor
 * 
 * con questo programma colleghiamo per la prima volta un componente esterno ad Arduino,
 * il mio suggerimento è di utilizzare una piccola breadboard come si può vedere nel file
 * Fritzing allegato al progetto
 * 
 */

// definizione costanti
#define DELAY 3000
#define TRANSISTOR_PIN 7

// dichiarazione variabili
unsigned long tempo;

// setup dell'ambiente
void setup() {

  // setto il pin del transistor come output
  pinMode(TRANSISTOR_PIN, OUTPUT);

  // salvo il tempo del setup
  tempo = millis();

}

// ciclo principale del programma
void loop() {

  // se tempo corrente meno tempo salvato è maggiore di DELAY
  if( ( millis() - tempo ) >= DELAY ) {

    // scrivo su LED_BUILTIN il contrario di quello che leggo da LED_BUILTIN
    digitalWrite(TRANSISTOR_PIN, !digitalRead(TRANSISTOR_PIN));

    // aggiorno il tempo trascorso
    tempo = millis();

  }

}
