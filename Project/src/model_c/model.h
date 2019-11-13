/* --- Generated the 13/11/2019 at 14:15 --- */
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

typedef struct Model__movement_mem {
  int v_92;
  int v_91;
  int pnr;
} Model__movement_mem;

typedef struct Model__movement_out {
  int direction;
} Model__movement_out;

void Model__movement_reset(Model__movement_mem* self);

void Model__movement_step(int cntrl_dir_left, int cntrl_dir_right,
                          int cntrl_dir_reverse, int cntrl_dir_layer,
                          int direction_layer_2, Model__movement_out* _out,
                          Model__movement_mem* self);

typedef struct Model__dc_mem {
  int ck_1;
  int pnr;
} Model__dc_mem;

typedef struct Model__dc_out {
  int equals;
} Model__dc_out;

void Model__dc_reset(Model__dc_mem* self);

void Model__dc_step(int direction_layer_1, int direction_layer_2,
                    Model__dc_out* _out, Model__dc_mem* self);

typedef struct Model__controller_mem {
  int v_108;
  int v_107;
  int ck_5_1;
  int ck_1;
  int pnr_2;
  int pnr_1;
  int pnr;
} Model__controller_mem;

typedef struct Model__controller_out {
  int obs_left;
  int obs_right;
  int direction_layer_1;
} Model__controller_out;

void Model__controller_reset(Model__controller_mem* self);

void Model__controller_step(int distance_left, int distance_right,
                            int direction_layer_2,
                            Model__controller_out* _out,
                            Model__controller_mem* self);

#endif // MODEL_H
