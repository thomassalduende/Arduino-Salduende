/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
#define led_amarillo 9
#define led_rojo 10
#define led_verde 11
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led_rojo, OUTPUT);
  pinMode(led_amarillo, OUTPUT);
  pinMode(led_verde, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  Serial.println("encendido amarillo");
  digitalWrite(led_amarillo, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  Serial.println("apagado amarillo");
  digitalWrite(led_amarillo, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);   

  Serial.println("encendido rojo");
  digitalWrite(led_rojo, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
  Serial.println("apagado rojo");
  digitalWrite(led_rojo, LOW);    // turn the LED off by making the voltage LOW
  delay(50);  

  Serial.println("encendido verde");
  digitalWrite(led_verde, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
  Serial.println("apagado verde");
  digitalWrite(led_verde, LOW);    // turn the LED off by making the voltage LOW
  delay(50);  
  
}
