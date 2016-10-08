// aaqsg_HelloWorld.ino
// page 16

const unsigned int LED_PIN = 13; // _PIN seems so unnecessary
const unsigned int PAUSE = 500; // in microseconds, 0.5 seconds

void setup()
{
  pinMode(LED_PIN, OUTPUT) // Set the LED up so that it can blink
}

void loop()
{
  digitalWrite(LES_PIN, HIGH); // high means it's lit
  delay(PAUSE);
  digitalWrite(LED_PIN, LOW); // means it's not lit
  delay(PAUSE);
}
