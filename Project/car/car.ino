#include <AFMotor.h>
#include "controller_controller.c"
#include "model.c"

#define trigPinLeft A0
#define echoPinLeft A1
#define trigPinRight A4
#define echoPinRight A5

Model__controller_mem mem;
Model__controller_out _res;

int randomWalkItr = 1;
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
  int obs_sensor_left = sensorLimit(getDistance(trigPinLeft, echoPinLeft));
  int obs_sensor_right = sensorLimit(getDistance(trigPinRight, echoPinRight));

  randomWalk();

  Model__controller_step(obs_sensor_left, obs_sensor_right, directionEventLeft, directionEventRight, &_res, &mem);

  motor1.run(_res.motor_mode_left);
  motor1.setSpeed(_res.motor_speed_left);

  motor2.run(_res.motor_mode_left);
  motor2.setSpeed(_res.motor_speed_left);
  
  motor3.run(_res.motor_mode_right);
  motor3.setSpeed(_res.motor_speed_right);
  
  motor4.run(_res.motor_mode_right);
  motor4.setSpeed(_res.motor_speed_right);

  delay(100);
}

void randomWalk() {
  if (randomWalkItr == 1) {
    if (directionEventLeft == 2 || directionEventRight == 2) {
      directionEventLeft = 1;
      directionEventRight = 1;
    } else { 
      directionEventLeft = random(1, 3);
      directionEventRight = random(1, 3); 
    }

    if (directionEventLeft == 1 && directionEventRight == 1) {
      randomWalkItr = random(6, 11);
    } else if (directionEventLeft == 2 && directionEventRight == 2) {
       randomWalk();
    } else { 
      randomWalkItr = random(2, 4);
    }

  } else {
    randomWalkItr--;
    Serial.println(randomWalkItr);
  }
}

int sensorLimit(int distance) {
  if (distance >= 500) {
    return 0;
  }

  return distance;
}

int getDistance(int trigPin, int echoPin){ 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5); 

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);
  uint32_t duration = pulseIn(echoPin, HIGH);

  int HR_dist = (duration / 2) / 29.1;

  return HR_dist;
}
