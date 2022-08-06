//servo
#include <Servo.h>
Servo myservo;
int pos = 90;
#define serv A1

//buzzer
#define buzz 13

//button
#define butt A2

int valor_lido;
int buttonState = 0; 

void setup() {
 Serial.begin(9600);
  myservo.attach(serv);
}

void loop() {
  buttonState = digitalRead(butt);
    if(Serial.available()>0){
     valor_lido=Serial.read();
    }

    if(valor_lido=='1' || buttonState == HIGH){
    Serial.println("10");

digitalWrite(buzz, HIGH);
delay(50);
digitalWrite(buzz, LOW);
delay(50);
digitalWrite(buzz, HIGH);
delay(50);
digitalWrite(buzz, LOW);
delay(900);

//////////////////////9
  Serial.println('9');

digitalWrite(buzz, HIGH);
delay(100);
digitalWrite(buzz, LOW);
delay(900);
//////////////////////8
  Serial.println('8');
digitalWrite(buzz, HIGH);
delay(100);
digitalWrite(buzz, LOW);
delay(900);
//////////////////////7
  Serial.println('7');
digitalWrite(buzz, HIGH);
delay(100);
digitalWrite(buzz, LOW);
delay(900);
//////////////////////6
  Serial.println('6');
digitalWrite(buzz, HIGH);
delay(100);
digitalWrite(buzz, LOW);
delay(900);
//////////////////////5
  Serial.println('5');
digitalWrite(buzz, HIGH);
delay(100);
digitalWrite(buzz, LOW);
delay(100);
digitalWrite(buzz, HIGH);
delay(100);
digitalWrite(buzz, LOW);
delay(100);
digitalWrite(buzz, HIGH);
delay(100);
digitalWrite(buzz, LOW);
delay(500);
//////////////////////4
  Serial.println('4');
digitalWrite(buzz, HIGH);
delay(100);
digitalWrite(buzz, LOW);
delay(900);
//////////////////////3
  Serial.println('3');
digitalWrite(buzz, HIGH);
delay(100);
digitalWrite(buzz, LOW);
delay(900);
//////////////////////2
  Serial.println('2');
digitalWrite(buzz, HIGH);
delay(100);
digitalWrite(buzz, LOW);
delay(900);
//////////////////////1
  Serial.println('1');
digitalWrite(buzz, HIGH);
delay(100);
digitalWrite(buzz, LOW);
delay(900);
//////////////////////
  Serial.println('0');

  digitalWrite(buzz, HIGH);   
delay(1000);
  digitalWrite(buzz, LOW);

  Serial.println("!!!!!!liftoff!!!!!!!");
  delay(5000); //Mudar tempo dependendo do apogeu. (Change time depending on apogee.)
  
for (pos = 90; pos <= 180; pos += 1) { 
    myservo.write(pos);            
    delay(2);               
  }
  for (pos = 180; pos >= 90; pos -= 1) {
    myservo.write(pos);
    delay(10);
  }        
  }else{
  digitalWrite(buzz, LOW);

  }
}
