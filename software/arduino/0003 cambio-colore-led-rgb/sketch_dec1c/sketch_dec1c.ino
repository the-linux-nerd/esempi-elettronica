/**
 * questo programma cambia il colore di un led rgb
 *
 * questo programma cambia il colore di un led rgb utilizzando intervalli non bloccanti
 *
 */

// definizione costanti
#define PIN_R 9
#define PIN_G 10
#define PIN_B 11
#define DELAY 10000

// dichiarazione variabili
unsigned long tempo;
enum Stato { ROSSO, VERDE, BLU };
Stato stato = ROSSO;

// setup dell'ambiente
void setup() {

  pinMode(PIN_R, OUTPUT);
  pinMode(PIN_G, OUTPUT);
  pinMode(PIN_B, OUTPUT);

  tempo = millis();

  impostaColore(255,0,0);

}

// ciclo principale del programma
void loop() {

  // se tempo corrente meno tempo salvato è maggiore di DELAY
  if( ( millis() - tempo ) >= DELAY ) {

    // cambio di stato
    switch(stato) {
      case ROSSO:
        stato = VERDE;
        impostaColore(0, 255, 0);
        break;
      case VERDE:
        stato = BLU;
        impostaColore(0, 0, 255);
        break;
      case BLU:
        stato = ROSSO;
        impostaColore(255, 0, 0);
        break;
    }

    // aggiorno il tempo trascorso
    tempo = millis();

  }

}

// funzione per l'impostazione del colore
void impostaColore(int r, int g, int b) {
  analogWrite(PIN_R, r);
  analogWrite(PIN_G, g);
  analogWrite(PIN_B, b);
}
