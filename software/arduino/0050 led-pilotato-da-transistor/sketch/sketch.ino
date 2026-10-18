/**
 * led pilotato da un transistor
 *
 * questo programma mostra come pilotare un led tramite un transistor npm
 * gestito da arduino tramite la corrente di base
 *
 */

// definizione delle costanti
#define PIN_BASE 9

// setup ambiente
void setup() {
  pinMode(PIN_BASE, OUTPUT);
}

// ciclo principale
void loop() {
  // fade in: LED da spento a massimo
  for (int v = 0; v <= 255; v++) {
    analogWrite(PIN_BASE, v); // PWM sulla base del transistor
    delay(10); // qui va bene anche bloccante, è solo un esempio visivo
  }

  // fade out: LED da massimo a spento
  for (int v = 255; v >= 0; v--) {
    analogWrite(PIN_BASE, v);
    delay(10);
  }
}
