#define red 9
#define green 10
#define blue 11
//#define opcion 0

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  //Define inputs and outputs
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}



void loop() {
  // put your main code here, to run repeatedly:


  //for (int i = 0; i <= 6; i++) {
   // color(i);   
//}
color(random(1, 6));

}

void color (int opcion){
  //Serial.println("1--red");
  //Serial.println("2--green");
  //Serial.println("3--blue");
  //Serial.println("4--yellow");
  //Serial.println("5--white");
  //Serial.println("6--purple");
  switch (opcion){
  case (1):{
    digitalWrite(red, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
    digitalWrite(red, LOW); 
    digitalWrite(blue, LOW); 
    digitalWrite(green, LOW);// turn the LED off by making the voltage LOW
    delay(1000); 
    break;}

  case (2):{
    digitalWrite(green, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW); 
    digitalWrite(red, LOW);
    delay(1000); 
    break;}

  case (3):{
    digitalWrite(blue, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
    digitalWrite(blue, LOW); 
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);    // turn the LED off by making the voltage LOW
    delay(1000); 
    break;}

  case (4):{
    digitalWrite(red, HIGH);
    digitalWrite(green, HIGH);// turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
    digitalWrite(blue, LOW); 
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);// turn the LED off by making the voltage LOW
    delay(1000); 
    break;}

  case (5):{
    digitalWrite(red, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(blue, HIGH);// turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
    digitalWrite(blue, LOW); 
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);// turn the LED off by making the voltage LOW
    delay(1000); 
    break;}

  case (6):{
    digitalWrite(red, HIGH);
    digitalWrite(blue, HIGH);// turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
    digitalWrite(blue, LOW); 
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);// turn the LED off by making the voltage LOW
    delay(1000); 
    break;}

}
}
