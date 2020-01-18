const int pinX = A2;
const int pinY = A1;
const int butPin = 2;
const int ledPin = 13;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
pinMode(pinX, INPUT);
pinMode(pinY, INPUT);
pinMode(butPin, INPUT);
digitalWrite(butPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(pinX);
  int y = analogRead(pinY);
Serial.println(x);
Serial.println(y);
}
