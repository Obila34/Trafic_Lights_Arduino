// Create the variables and assign the pins to them 
int REDPIN = 13;
int YELLOWPIN = 12;
int GREENPIN = 11;

void setup() {
  // set the pins to output pins using pinMode
  pinMode(REDPIN, OUTPUT);
  pinMode(YELLOWPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
}

void loop() {
  // Make the LEDs blink in turn;
  //Turn on the red LED, and turn off the yellow and green LEDs
  digitalWrite(REDPIN, HIGH);
  digitalWrite(YELLOWPIN, LOW);
  digitalWrite(GREENPIN, LOW);
  delay(2000);

  //Turn on the yellow LED, and turn off the red and green LEDs
   digitalWrite(REDPIN, LOW);
  digitalWrite(YELLOWPIN, HIGH);
  digitalWrite(GREENPIN, LOW);
  delay(2000);

  //Turn on the green  LED, and turn off the red and yellowLEDs
   digitalWrite(REDPIN, LOW);
  digitalWrite(YELLOWPIN, LOW);
  digitalWrite(GREENPIN, HIGH);
  delay(2000);
}