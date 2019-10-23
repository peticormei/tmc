/* --- Generated the 21/10/2019 at 15:1 --- */
/* --- heptagon compiler, version 1.03.00 (compiled sun. oct. 20 0:47:43 CET 2019) --- */
/* --- Command line: /home/opam/.opam/4.02/bin/heptc -target c controller_controller.ept --- */

#ifndef CONTROLLER_CONTROLLER_H
#define CONTROLLER_CONTROLLER_H

#include "controller_controller_types.h"
typedef struct Controller_controller__controller_controller_controller_c_motor_right_out {
  int controller_c_motor_right;
} Controller_controller__controller_controller_controller_c_motor_right_out;

void Controller_controller__controller_controller_controller_c_motor_right_step(
int controller_v_8, int controller_v_9, int controller_v_10,
int controller_v_11, int controller_ck_1, int controller_pnr_3,
int controller_ck_5_1, int controller_pnr_2, int controller_ck_7_1,
int controller_pnr_1, int controller_ck_9_1, int controller_pnr,
int p_controller_c_motor_right, int p_controller_c_motor_left,
int controller_c_motor_left,
Controller_controller__controller_controller_controller_c_motor_right_out* _out);

typedef struct Controller_controller__controller_controller_controller_c_motor_left_out {
  int controller_c_motor_left;
} Controller_controller__controller_controller_controller_c_motor_left_out;

void Controller_controller__controller_controller_controller_c_motor_left_step(
int controller_v_8, int controller_v_9, int controller_v_10,
int controller_v_11, int controller_ck_1, int controller_pnr_3,
int controller_ck_5_1, int controller_pnr_2, int controller_ck_7_1,
int controller_pnr_1, int controller_ck_9_1, int controller_pnr,
int p_controller_c_motor_right, int p_controller_c_motor_left,
Controller_controller__controller_controller_controller_c_motor_left_out* _out);

typedef struct Controller_controller__controller_controller_out {
  int controller_c_motor_right;
  int controller_c_motor_left;
} Controller_controller__controller_controller_out;

void Controller_controller__controller_controller_step(int controller_v_8,
                                                       int controller_v_9,
                                                       int controller_v_10,
                                                       int controller_v_11,
                                                       int controller_ck_1,
                                                       int controller_pnr_3,
                                                       int controller_ck_5_1,
                                                       int controller_pnr_2,
                                                       int controller_ck_7_1,
                                                       int controller_pnr_1,
                                                       int controller_ck_9_1,
                                                       int controller_pnr,
                                                       int p_controller_c_motor_right,
                                                       int p_controller_c_motor_left,
                                                       Controller_controller__controller_controller_out* _out);

#endif // CONTROLLER_CONTROLLER_H
