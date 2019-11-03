/* --- Generated the 21/10/2019 at 15:1 --- */
/* --- heptagon compiler, version 1.03.00 (compiled sun. oct. 20 0:47:43 CET 2019) --- */
/* --- Command line: /home/opam/.opam/4.02/bin/heptc -target c -target z3z -s controller model.ept --- */

#ifndef MODEL_H
#define MODEL_H

#include "model_types.h"
#include "controller_controller.h"
typedef struct Model__obstacle_mem {
  int ck_1_2;
  int pnr;
} Model__obstacle_mem;

typedef struct Model__obstacle_out {
  int obs;
} Model__obstacle_out;

void Model__obstacle_reset(Model__obstacle_mem* self);

void Model__obstacle_step(int dist, Model__obstacle_out* _out,
                          Model__obstacle_mem* self);

typedef struct Model__motor_mem {
  int ck_1;
  int pnr;
} Model__motor_mem;

typedef struct Model__motor_out {
  int mode;
  int velocity;
} Model__motor_out;

void Model__motor_reset(Model__motor_mem* self);

void Model__motor_step(int c, Model__motor_out* _out, Model__motor_mem* self);

typedef struct Model__movement_mem {
  int ck_1;
  int pnr;
} Model__movement_mem;

typedef struct Model__movement_out {
  int turning;
} Model__movement_out;

void Model__movement_reset(Model__movement_mem* self);

void Model__movement_step(int event, Model__movement_out* _out,
                          Model__movement_mem* self);

typedef struct Model__controller_mem {
  int ck_9_1;
  int ck_7_1;
  int ck_5_1;
  int ck_1;
  int pnr_3;
  int pnr_2;
  int pnr_1;
  int pnr;
} Model__controller_mem;

typedef struct Model__controller_out {
  int obs;
  int turning;
  int motor_dir_left;
  int motor_dir_right;
  int motor_speed_left;
  int motor_speed_right;
} Model__controller_out;

void Model__controller_reset(Model__controller_mem* self);

void Model__controller_step(int distance, int event,
                            Model__controller_out* _out,
                            Model__controller_mem* self);

#endif // MODEL_H
