#include <AFMotor.h>
#include "controller_controller.h"
#include "car.h"

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

int obs_sensor;

Car__controller_mem mem;
Car__controller_out _res;

void setup() {
  Serial.begin(9600);

  Car__controller_reset(&mem);

  pinMode(A0, OUTPUT);
  pinMode(A1, INPUT);
  digitalWrite(A0, LOW);
}

double read_obstacle(){
  digitalWrite(A0, HIGH);
  delayMicroseconds(15);
  digitalWrite(A0, LOW);
  uint32_t pulse_time = pulseIn(A1, HIGH);     
  double distance = 0.01715 * pulse_time;
  
  return distance;
}

void loop() {
  Serial.println("teste");
  
  obs_sensor = read_obstacle();
  Car__controller_step(obs_sensor, &_res, &mem);

  motor1.setSpeed(_res.vel1);
  motor1.run(_res.motor1);
  motor2.setSpeed(_res.vel2);
  motor2.run(_res.motor2);
  motor3.setSpeed(_res.vel3);
  motor3.run(_res.motor3);
  motor4.setSpeed(_res.vel4);
  motor4.run(_res.motor4);

  delay(10);
}
