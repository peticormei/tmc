#include <AFMotor.h>
#include "controller_controller.c"
#include "model.c"

#define trigPinLeft A0
#define echoPinLeft A1

#define trigPinRight A4
#define echoPinRight A5

Model__controller_mem mem;
Model__controller_out _res;

int turningItr = 0;
int directionEventLeft = 1;
int directionEventRight = 1;

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

void setup() {
  Serial.begin (9600);

  pinMode(trigPinLeft, OUTPUT);
  pinMode(trigPinRight, OUTPUT);

  pinMode(echoPinLeft, INPUT);
  pinMode(echoPinRight, INPUT);
}

void loop() {
  int obs_sensor_left = getDistanceLeft();
  int obs_sensor_right = getDistanceRight();

  Serial.println("Distancia ESQ");
  Serial.println(obs_sensor_left);
  Serial.println("Distancia DIR");
  Serial.println(obs_sensor_right);
  
  Serial.println("Obstaculo ESQ");
  Serial.println(_res.obs_left);
  Serial.println("Obstaculo DIR");
  Serial.println(_res.obs_right);

  if (_res.obs_left) {
    if (turningItr == 0) {
      turningItr = random(1, 12);
      Serial.println("set turningItrLeft");
      Serial.println(turningItr);
    }

    // 2 TURNING
    // 1 MOVING
    directionEventLeft = 2;
  }

  if (_res.obs_right) {
    if (turningItr == 0) {
      turningItr = random(1, 12);
      Serial.println("set turningItrRight");
      Serial.println(turningItr);
    }

    // 2 TURNING
    // 1 MOVING
    directionEventRight = 2;
  }

  Model__controller_step(obs_sensor_left, obs_sensor_right, directionEventLeft, directionEventRight, &_res, &mem);

  Serial.println("Motor ESQ");
  Serial.println(_res.motor_mode_left);
  Serial.println(_res.motor_speed_left);

  Serial.println("Motor DIR");
  Serial.println(_res.motor_mode_right);
  Serial.println(_res.motor_speed_right);

  motor1.run(_res.motor_mode_left);
  motor1.setSpeed(_res.motor_speed_left);

  motor2.run(_res.motor_mode_left);
  motor2.setSpeed(_res.motor_speed_left);
  
  motor3.run(_res.motor_mode_right);
  motor3.setSpeed(_res.motor_speed_right);
  
  motor4.run(_res.motor_mode_right);
  motor4.setSpeed(_res.motor_speed_right);

  Serial.println("\n");

  if (turningItr >= 1) {
    turningItr--;
    Serial.println("-- turningItr");
    Serial.println(turningItr);
  }
  else {
    directionEventLeft = 1;
    directionEventRight = 1;
  }

  Serial.println("directionEventLeft");
  Serial.println(directionEventLeft);

  Serial.println("directionEventRight");
  Serial.println(directionEventRight);
  delay(10);
}

int getDistanceLeft(){ 
  digitalWrite(trigPinLeft, LOW);
  delayMicroseconds(2); 

  digitalWrite(trigPinLeft, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPinLeft, LOW);
  uint32_t duration = pulseIn(echoPinLeft, HIGH);

  int HR_dist = duration * 0.01715;

  return HR_dist;
}

int getDistanceRight(){ 
  digitalWrite(trigPinRight, LOW);
  delayMicroseconds(2); 

  digitalWrite(trigPinRight, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPinRight, LOW);
  uint32_t duration = pulseIn(echoPinRight, HIGH);

  int HR_dist = duration * 0.01715;

  return HR_dist;
}
