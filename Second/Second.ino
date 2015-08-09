int ledPin = 12;
int ledPin2 = 10;
int toggleStore = 1;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  toggleStore = 1-toggleStore;
  if(toggleStore == 0){
    toggleLed(ledPin);
  } else {
    toggleLed(ledPin2);
  }
}

void toggleLed(int led){
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
