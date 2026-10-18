/**
 * legge lo stato di un pulsante utilizzando una resistenza di pulldown
 *
 * con questo programma andiamo a leggere lo stato di un pulsante (premuto o non premuto)
 * utilizzando una resistenza di pulldown esterna ad Arduino; per rappresentare lo stato del
 * pulsante utilizzeremo il led builtin (acceso per il tasto premuto e spento per il tasto
 * non premuto)
 *
 */

// definizione costanti
#define BUTTON_PIN 7
#define DEBOUNCE_TIME 200

// dichiarazione variabili
unsigned long t = 0;
bool led_status = 0;

// setup dell'ambiente
void setup() {

  // setta il pin del led a bordo scheda come output
  pinMode(LED_BUILTIN, OUTPUT);

  // setta il pin del bottone come input
  pinMode(BUTTON_PIN, INPUT);

}

// ciclo principale del programma
void loop() {

  if( digitalRead(BUTTON_PIN) ) {
    if( ( millis() - t) > DEBOUNCE_TIME ) {
      if( led_status == 0 ) {
        digitalWrite(LED_BUILTIN,HIGH);
        led_status = 1;
      } else {
        digitalWrite(LED_BUILTIN,LOW);
        led_status = 0;
      }
      t = millis();
    }
  }

}
