#include <AFMotor.h>
#include "controller_controller.c"
#include "car.c"

#define trigPin A0
#define echoPin A1

Car__controller_mem mem;
Car__controller_out _res;

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

void setup() {
  Serial.begin (9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  int obs_sensor = getDistance();
  Serial.println("Distancia");
  Serial.println(obs_sensor);
  
  Car__controller_step(obs_sensor, &_res, &mem);

  Serial.println("Motor 1");
  Serial.println(_res.vel1);
  Serial.println(_res.motor1);
  Serial.println("Motor 2");
  Serial.println(_res.vel2);
  Serial.println(_res.motor2);
  Serial.println("Motor 3");
  Serial.println(_res.vel3);
  Serial.println(_res.motor3);
  Serial.println("Motor 4");
  Serial.println(_res.vel4);
  Serial.println(_res.motor4);

  Serial.println(FORWARD);
  Serial.println(BACKWARD);
  Serial.println(RELEASE);

  motor1.run(_res.motor1);
  motor1.setSpeed(_res.vel1);
  
  motor2.run(_res.motor2);
  motor2.setSpeed(_res.vel2);
  
  motor3.run(_res.motor3);
  motor3.setSpeed(_res.vel3);
  
  motor4.run(_res.motor4);
  motor4.setSpeed(_res.vel4);

  Serial.println("\n");
  delay(10);
}


int getDistance(){ 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2); 

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);
  uint32_t duration = pulseIn(echoPin, HIGH);

  int HR_dist = duration * 0.01715;

  return HR_dist;
}