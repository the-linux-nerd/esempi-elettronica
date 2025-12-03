/**
 * legge lo stato di un pulsante utilizzando una resistenza di pullup
 *
 * con questo programma andiamo a leggere lo stato di un pulsante (premuto o non premuto)
 * utilizzando una resistenza di pullup esterna ad Arduino; per rappresentare lo stato del
 * pulsante utilizzeremo il led builtin (acceso per il tasto premuto e spento per il tasto
 * non premuto)
 *
 */

// definizione costanti
#define BUTTON_PIN 5

// setup dell'ambiente
void setup() {

  // setta il pin del led a bordo scheda come output
  pinMode(LED_BUILTIN, OUTPUT);

  // setta il pin del bottone come input
  pinMode(BUTTON_PIN, INPUT);

}

// ciclo principale del programma
void loop() {

  // scrivo sul pin del led l'inverso della lettura del bottone
  digitalWrite(LED_BUILTIN, !digitalRead(BUTTON_PIN));

}
