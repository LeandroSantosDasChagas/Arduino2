// C++ code
//
int definir = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);

  definir = 1000;
}

void loop()
{
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
}