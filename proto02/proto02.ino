

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


void setup(){
  int  s=0
}

void loop() {
  //триггеры 
  
   //реакция 
//    0. ждет
  if (s==0) {
    
  }
// 1. захватывает цель
 if (s==1){
 }
    
     
// 2. в движении
if (s==2) {

}

// 3. разряжено
if (s==3))   {
}

  if (s==0) {
  }
  
 
  if (s==1) { 
  }
  
  if s==2  () {

  }

  }
  if s==3  () {


  }



























  Способности
1) поднять корпус вверх
2) опустить корпус
3) повернуть корпус на лево
4) повернуть корпус на право
5) захватить цель
  








  