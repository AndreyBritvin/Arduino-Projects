#define tempS 9
#define soundS A0
#define vlagS A1
#define svetS A2
#include <stDHT.h>
DHT sens(DHT11);
int temp, sound, vlag, svet;
void setup() {
  // put your setup code here, to run once:
digitalWrite(tempS, true);
pinMode(tempS, INPUT);
pinMode(sound, INPUT);
pinMode(vlag, INPUT);
pinMode(svet, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
temp = sens.readTemperature(tempS);
sound = analogRead(soundS);
vlag = analogRead(vlagS);
svet = analogRead(svetS);
Serial.print(temp);
Serial.print(" ");
Serial.print(sound);
Serial.print(" ");
Serial.print(vlag);
Serial.print(" ");
Serial.println(svet);

}
