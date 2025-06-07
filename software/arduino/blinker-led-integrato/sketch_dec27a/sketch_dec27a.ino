/**
 * fa lampeggiare il led a bordo della scheda
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
