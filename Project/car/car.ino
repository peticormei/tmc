#include <AFMotor.h>
#include "controller_controller.c"
#include "model.c"

#define trigPin A0
#define echoPin A1

Model__controller_mem mem;
Model__controller_out _res;

int turningItr = 0;
int directionEvent = 1;

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
  
  Serial.println("Obstaculo");
  Serial.println(_res.obs);
  if (_res.obs) {
    if (turningItr == 0) {
      turningItr = random(1, 12);
      Serial.println("set turningItr");
      Serial.println(turningItr);
    }

    // 2 TURNING
    // 1 MOVING
    directionEvent = 2;
  }

  Model__controller_step(obs_sensor, directionEvent, &_res, &mem);

  Serial.println("Motor ESQ");
  Serial.println(_res.motor_speed_left);
  Serial.println(_res.motor_dir_left);
  Serial.println("Motor DIR");
  Serial.println(_res.motor_speed_right);
  Serial.println(_res.motor_dir_right);

  motor1.run(_res.motor_dir_left);
  motor1.setSpeed(_res.motor_speed_left + 155);

  motor2.run(_res.motor_dir_left);
  motor2.setSpeed(_res.motor_speed_left + 155);
  
  motor3.run(_res.motor_dir_right);
  motor3.setSpeed(_res.motor_speed_right + 155);
  
  motor4.run(_res.motor_dir_right);
  motor4.setSpeed(_res.motor_speed_right + 155);

  Serial.println("\n");

  if (turningItr >= 1) {
    turningItr--;
    Serial.println("-- turningItr");
    Serial.println(turningItr);
  }
  else {
    directionEvent = 1;
  }

  Serial.println("directionEvent");
  Serial.println(directionEvent);
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
