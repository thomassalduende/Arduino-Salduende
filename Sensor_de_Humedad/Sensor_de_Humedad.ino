
#define pinLED 10

void setup() {
  pinMode(pinLED,OUTPUT);  
  Serial.begin (9600);
}
  
void loop() {
  int valorHumedad = analogRead (pinLED);
  Serial.println(valorHumedad);
  int valorPin = map (valorHumedad,450,1023,0,255);
  analogWrite(pinLED,valorPin);
  delay(250);
  
  }
