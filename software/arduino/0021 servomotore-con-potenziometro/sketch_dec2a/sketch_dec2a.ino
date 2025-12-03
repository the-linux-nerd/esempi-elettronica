/**
 * pilotaggio di un servo tramite potenziometro
 *
 * questo programma pilota un servo tramite un potenziometro
 *
 */

// inclusione librerie
#include <Servo.h>

// dichiarazione delle costanti
#define PIN_SERVO 6
#define PIN_POTENZIOMETRO A0

// inizializzazione delle variabili
Servo servo;
int posizioneAttuale = -1;

// setup dell'ambiente
void setup() {

  // collego il servo al pin
  servo.attach(PIN_SERVO);

  // imposto il pin del potenziometro in lettura
  pinMode(PIN_POTENZIOMETRO, INPUT);

}

// ciclo principale
void loop() {

  // leggo il valore del potenziometro
  int potenziometro = analogRead(PIN_POTENZIOMETRO);

  // mappo il valore del potenziometro su 0-180
  int posizione = map(potenziometro, 0, 1023, 0, 180);

  // se la posizione è cambiata, muovo il servo
  if( posizione != posizioneAttuale ) {
    posizioneAttuale = posizione;
    servo.write(posizione);
  }

}
