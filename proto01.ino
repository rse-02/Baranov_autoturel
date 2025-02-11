

Способности
#include <Servo.h> 
Servo servo1
Servo servo2
int trigPin = 11;  // Trigger
int echoPin = 12;  // Echo
long duration, cm, inches;

void setup() {
   servo1.attach(11); 
}
//    поднять корпус вверх
void setup corp_up(){

  
}
    
  
}


   // опустить корпус
void setup corp_down(){}


    //повернуть корпус на лево
void setup corpW(){servo1.write(180)}

void setup corpW(){
  servo1.write(90);
  }

  //повернуть корпус на право
void setup corpL(){ servo1.Lrite(90)}
void setup corpL(){servo1.Lrite(180) }

void setup zaxvat(){}
digitalWrite(trigPin, LOW);
    delayMicroseconds(5);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    
    pinMode(echoPin, INPUT);
    duration = pulseIn(echoPin, HIGH);

   
    cm = (duration/2) / 29.1;
    inches = (duration/2) / 74;
    Serial.print(inches);
    Serial.print("in, ");
    Serial.print(cm);
    Serial.print("cm");
    Serial.println();
    delay(250);
}


  
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
