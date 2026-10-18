
/**
 * fa lampeggiare il led a bordo della scheda in modalità non bloccante
 * 
 * con questo programma colleghiamo per la prima volta un componente esterno ad Arduino,
 * il mio suggerimento è di utilizzare una piccola breadboard come si può vedere nel file
 * Fritzing allegato al progetto
 *
 * la resistenza da applicare al led è calcolata in base alla legge di Ohm partendo dai
 * seguenti dati:
 *
 * - Arduino eroga 5v e 40mA
 * - il led rosso lavora a 1,8v e 15mA
 *
 * sulla resistenza avremo una caduta di tensione di 3,2v (5v di Arduino meno 1,8v del led)
 * quindi usiamo la legge di Ohm (R = V / I) per trovare una resistenza che faccia
 * passare 15mA e 3v quindi avremo R = 3V / 0,015A = 200Ohm; la resistenza commerciale che
 * si avvicina di più a 200Ohm è quella da 220Ohm, che è quindi quella che impiegheremo
 *
 * vedi anche:
 * - https://www.elettrograf.com/il-led-note-tecniche/
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
