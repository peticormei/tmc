#include <AFMotor.h>
#include "controller_controller.c"
#include "model.c"

#define trigPinLeft A0
#define echoPinLeft A1
#define trigPinRight A4
#define echoPinRight A5

Model__controller_mem mem;
Model__controller_out _res;

int turning = 0;
int guidance = 1;
bool detour = false;

int randomWalkItr = 1;
int directionEvent = 1;
int lastDirectionEvent = 1;

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

void setup() {
  Serial.begin (9600);
  Serial.println("Setup..");

  pinMode(trigPinLeft, OUTPUT);
  pinMode(trigPinRight, OUTPUT);

  pinMode(echoPinLeft, INPUT);
  pinMode(echoPinRight, INPUT);
}

void loop() {
  int obs_sensor_left = sensorLimit(getDistance(trigPinLeft, echoPinLeft));
  int obs_sensor_right = sensorLimit(getDistance(trigPinRight, echoPinRight));

//  Serial.println("randomWalkItr");
//  Serial.println(randomWalkItr);
//  Serial.println("\n");
//  Serial.println("turning");
//  Serial.println(turning);

  randomWalk();
  //  sWalk(obs_sensor_left, obs_sensor_right); 

//  Serial.println("\n");
//  Serial.println("OBS Left:");
//  Serial.println(obs_sensor_left);
//  Serial.println("OBS Right:");
//  Serial.println(obs_sensor_right);

  if (detour) {
    Model__controller_step(80, 80, directionEvent, &_res, &mem);  
  } else {
    Model__controller_step(obs_sensor_left, obs_sensor_right, directionEvent, &_res, &mem);  
  }

  Serial.println("\n");
  Serial.println("Direction [layer 2]:");
  Serial.println(directionEvent);
  Serial.println("Direction [layer 1]:");
  Serial.println(_res.direction_layer_1);
//  Serial.println("Reversing:");
//  Serial.println(_res.reversing);
//  Serial.println("Count [layer 1]:");
//  Serial.println(_res.count);
//  Serial.println("\n");

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

void sWalk(int obs_sensor_left, int obs_sensor_right) {
  if (randomWalkItr == 1) {

    bool has_obs = (obs_sensor_left <= 70 & obs_sensor_right <= 70);

    if (has_obs & !detour) {
      detour = true;
    } else {
      directionEvent = 1;
    }

    if (guidance == 1 && detour) {
      detourS(3);
    } else if (guidance == -1 && detour) {
      detourS(2);
    }
  } else {
    randomWalkItr--;
  }
}

void detourS(int detourEvent) {
  if (turning == 0 || turning == 2) {
    if (turning == 2) {
      turning = 0;
      guidance = flipGuidance(guidance);
      detour = false;
    } else {
      turning++;      
    }

    directionEvent = detourEvent;
    randomWalkItr = 5;
  } else if (turning == 1) {
    turning++;
    directionEvent = 1;
    randomWalkItr = 4;
  }
}

int flipGuidance(int actual) {
  if (actual == 1) {
    return -1;
  } else {
    return 1;
  }
}

void randomWalk() {
  if (randomWalkItr == 1) {
    lastDirectionEvent = directionEvent;
    directionEvent = random(1, 4);

    if (lastDirectionEvent == 2 & directionEvent == 3) {
      directionEvent = 1;
    } else if (lastDirectionEvent == 3 & directionEvent == 2) {
      directionEvent = 1;
    }

    if (directionEvent == 1) {
      randomWalkItr = random(6, 11);
    } else { 
      randomWalkItr = random(2, 4);
    }
  } else {
    randomWalkItr--;
  }
}

int sensorLimit(int distance) {
  if (distance >= 400) {
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
