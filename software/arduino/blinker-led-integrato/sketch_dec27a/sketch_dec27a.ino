/**
 * fa lampeggiare il led a bordo della scheda
 *
 * NOTA IMPORTANTE questo blinker è bloccante, normalmente non è una buona idea usare delay() in questo modo,
 * per un blinker migliore si veda lo sketch blinker-non-bloccante
 *
 */

void setup()
{

  // setta il pin del led a bordo scheda come output
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop()
{

  // scrive 1 sul led a bordo scheda
  digitalWrite(LED_BUILTIN, HIGH);

  // pausa in millisecondi
  delay(2500);

  // scrive 0 sul led a bordo scheda
  digitalWrite(LED_BUILTIN, LOW);

  // pausa in millisecondi
  delay(2500);

}
