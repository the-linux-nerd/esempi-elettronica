/**
 * regolazione della luminosità di un led tramite potenziometro
 *
 * questo programma regola la luminosità di un led in base alla lettura di un potenziometro
 *
 */

// definizione costanti
#define PIN_PWM_LED 9
#define PIN_POTENZIOMETRO A0

// setup dell'ambiente
void setup() {

  // imposto il pin del led in scrittura
  pinMode(PIN_PWM_LED, OUTPUT);

}

// ciclo principale del programma
void loop() {

  // leggo il valore del potenziometro
  int potenziometro = analogRead(PIN_POTENZIOMETRO);

  // mappo il valore letto dal potenziometro (0-1023) al range 0-255
  int luminosita = map(potenziometro, 0, 1023, 0, 255);

  // imposto la luminosità del led
  analogWrite(PIN_PWM_LED, luminosita);

  // piccola pausa per stabilizzare la lettura
  delay(10);

}
