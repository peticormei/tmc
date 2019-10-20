/* --- Generated the 20/10/2019 at 2:1 --- */
/* --- heptagon compiler, version 1.03.00 (compiled sun. oct. 20 0:47:43 CET 2019) --- */
/* --- Command line: /home/opam/.opam/4.02/bin/heptc -target c -target z3z -s controller car.ept --- */

#ifndef CAR_H
#define CAR_H

#include "car_types.h"
#include "controller_controller.h"
typedef struct Car__obstacle_mem {
  int ck_1_2;
  int pnr;
} Car__obstacle_mem;

typedef struct Car__obstacle_out {
  int obs;
} Car__obstacle_out;

void Car__obstacle_reset(Car__obstacle_mem* self);

void Car__obstacle_step(int dist, Car__obstacle_out* _out,
                        Car__obstacle_mem* self);

typedef struct Car__motor_mem {
  int ck_1;
  int pnr;
} Car__motor_mem;

typedef struct Car__motor_out {
  int mode;
  int velocity;
} Car__motor_out;

void Car__motor_reset(Car__motor_mem* self);

void Car__motor_step(int c, Car__motor_out* _out, Car__motor_mem* self);

typedef struct Car__movement_mem {
  int v_40;
  int v_39;
  int pnr;
  int mbc_1;
} Car__movement_mem;

typedef struct Car__movement_out {
  int turning;
  int ombc;
} Car__movement_out;

void Car__movement_reset(Car__movement_mem* self);

void Car__movement_step(int c, Car__movement_out* _out,
                        Car__movement_mem* self);

typedef struct Car__controller_mem {
  int ck_13_1;
  int ck_11_1;
  int ck_9_1;
  int ck_7_1;
  int v_58;
  int v_57;
  int ck_1;
  int pnr_5;
  int pnr_4;
  int pnr_3;
  int pnr_2;
  int pnr_1;
  int pnr;
  int mbc_2;
} Car__controller_mem;

typedef struct Car__controller_out {
  int obs;
  int turning;
  int motor1;
  int motor2;
  int motor3;
  int motor4;
  int vel1;
  int vel2;
  int vel3;
  int vel4;
  int cont;
} Car__controller_out;

void Car__controller_reset(Car__controller_mem* self);

void Car__controller_step(int distance, Car__controller_out* _out,
                          Car__controller_mem* self);

#endif // CAR_H
