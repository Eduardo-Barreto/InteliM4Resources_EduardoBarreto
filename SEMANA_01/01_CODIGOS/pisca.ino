constexpr uint8_t blue_pin = 2;
constexpr uint8_t green_pin = 3;
constexpr uint8_t red_pin = 4;

void toggleLed(uint8_t ledPin)
{
  digitalWrite(ledPin, !digitalRead(ledPin));
}

void setup()
{
  pinMode(blue_pin, OUTPUT);
  pinMode(green_pin, OUTPUT);
  pinMode(red_pin, OUTPUT);
}

void loop()
{
  toggleLed(red_pin);
  delay(500);
  toggleLed(red_pin);

  toggleLed(green_pin);
  delay(500);
  toggleLed(green_pin);

  toggleLed(blue_pin);
  delay(500);
  toggleLed(blue_pin);
}
