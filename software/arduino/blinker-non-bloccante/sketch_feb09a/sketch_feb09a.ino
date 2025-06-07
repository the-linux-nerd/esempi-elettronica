
/**
 * fa lampeggiare il led a bordo della scheda in modalità non bloccante
 * 
 * questo è il modo corretto di far lampeggiare un led, in quanto non blocca il ciclo principale;
 * si noti che il valore di millis() riparte ogni circa 50 giorni per via del limite della dimensione
 * delle variabili long, quindi questo è il modo corretto per valutare il tempo trascorso:
 * 
 * if( ( millis() - tempo ) > DELAY ) { ... }
 * 
 * e non:
 * 
 * if( millis() > ( tempo + DELAY ) ) { ... }
 * 
 * vedi anche:
 * - https://www.youtube.com/watch?v=XWB0Sj2Hzps
 * - https://www.youtube.com/watch?v=3gIvhr1Q2jI
 * 
 */

// definizione costanti
#define DELAY 500

// dichiarazione variabili
unsigned long tempo;

// setup dell'ambiente
void setup() {

  // setto il pin del led a bordo scheda come output
  pinMode(LED_BUILTIN, OUTPUT);

  // salvo il tempo del setup
  tempo = millis();

}

// ciclo principale del programma
void loop() {

  // se tempo corrente meno tempo salvato è maggiore di DELAY
  if( ( millis() - tempo ) >= DELAY ) {

    // scrivo su LED_BUILTIN il contrario di quello che leggo da LED_BUILTIN
    digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));

    // aggiorno il tempo trascorso
    tempo = millis();

  }

}
