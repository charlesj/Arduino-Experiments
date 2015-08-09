#define ledOut 13
#define buttonIn 9

void setup() {
  pinMode(ledOut, OUTPUT);
  pinMode(buttonIn, INPUT);
  Serial.begin(9600);
}



void loop() {
  static int buttonState = 0;
  buttonState = digitalRead(buttonIn);
  doSomeFunkyWork(buttonState);
  Serial.println(buttonState);
}

void doSomeFunkyWork(int state){
  if(state == HIGH){
    digitalWrite(ledOut, HIGH);
  }
  else{
    digitalWrite(ledOut, LOW);
  }
}

