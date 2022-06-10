#define trigPin  9
#define echoPin  8
#define led_amarillo 10
long duration, cm, inches;
 
void setup() {
  Serial.begin (9600);
  //Define inputs and outputs
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
 
void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  duration = pulseIn(echoPin, HIGH);
 
  // Calculating the distance
  cm= duration*0.034/2;
  Serial.print("Distance: ");  //>   <
  Serial.print(cm);
  Serial.println(" cm");
  delay(2000);

  if (cm < 20){
    Serial.println("encendido amarillo");
    digitalWrite(led_amarillo, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
    Serial.println("apagado amarillo");
    digitalWrite(led_amarillo, LOW);    // turn the LED off by making the voltage LOW
    delay(1000); 
  } else if (cm > 20 and cm < 40){
    Serial.println("encendido amarillo");
    digitalWrite(led_amarillo, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);                       // wait for a second
    Serial.println("apagado amarillo");
    digitalWrite(led_amarillo, LOW);    // turn the LED off by making the voltage LOW
    delay(100); 

    Serial.println("encendido amarillo");
    digitalWrite(led_amarillo, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);                       // wait for a second
    Serial.println("apagado amarillo");
    digitalWrite(led_amarillo, LOW);    // turn the LED off by making the voltage LOW
    delay(100); 
    
  }


}
