

Способности
#include <zaxvat.h> 

#include <Servo.h> 
Servo servo1
Servo servo2
int trigPin = 11;  // Trigger
int echoPin = 12;  // Echo
long duration, cm, inches;

int sY=0;



//    поднять корпус вверх
void setup corp_up(int a){
 for (b=sY; b<a; b++){ servo2.write(sY+1); sY++ }
}
 void setup corp_down(){
  for (b=sY; b>a; b--){ servo2.write(sY-1);  sY--  }}
}


void setup corpWp(){servo1.write(180)}

void setup corpWl(){
  servo1.write(90);
  }

  //повернуть корпус на право
void setup(){}
digitalWrite(trigPin, LOW);
    delayMicroseconds(5);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    
    pinMode(echoPin, INPUT);
    duration = pulseIn(echoPin, HIGH);
      servo2.attach(9)
     servo2.attach(11); 
     servo1.attach(9); 
  servo1.write(90);
}

void zahvat(){
  cm = (duration/2) / 29.1;
    inches = (duration/2) / 74;
    Serial.print(inches);
    Serial.print("in, ");
    Serial.print(cm);
    Serial.print("cm");
    Serial.println();
    delay(250);
}
  

void loop() {
  // put your main code here, to run repeatedly:

}
