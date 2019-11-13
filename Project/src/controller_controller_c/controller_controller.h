/* --- Generated the 13/11/2019 at 14:15 --- */
/* --- heptagon compiler, version 1.03.00 (compiled sun. oct. 20 0:47:43 CET 2019) --- */
/* --- Command line: /home/opam/.opam/4.02/bin/heptc -target c controller_controller.ept --- */

#ifndef CONTROLLER_CONTROLLER_H
#define CONTROLLER_CONTROLLER_H

#include "controller_controller_types.h"
typedef struct Controller_controller__controller_controller_controller_cntrl_dir_reverse_out {
  int controller_cntrl_dir_reverse;
} Controller_controller__controller_controller_controller_cntrl_dir_reverse_out;

void Controller_controller__controller_controller_controller_cntrl_dir_reverse_step(
int controller_v_52, int controller_v_53, int controller_v_54,
int controller_v_55, int controller_v_72, int controller_v_76,
int controller_ck_1, int controller_pnr_2, int controller_ck_5_1,
int controller_pnr_1, int controller_v_108, int controller_v_107,
int controller_pnr, int p_controller_cntrl_dir_reverse,
int p_controller_cntrl_dir_right, int p_controller_cntrl_dir_left,
int p_controller_cntrl_dir_layer, int controller_cntrl_dir_right,
int controller_cntrl_dir_left, int controller_cntrl_dir_layer,
Controller_controller__controller_controller_controller_cntrl_dir_reverse_out* _out);

typedef struct Controller_controller__controller_controller_controller_cntrl_dir_right_out {
  int controller_cntrl_dir_right;
} Controller_controller__controller_controller_controller_cntrl_dir_right_out;

void Controller_controller__controller_controller_controller_cntrl_dir_right_step(
int controller_v_52, int controller_v_53, int controller_v_54,
int controller_v_55, int controller_v_72, int controller_v_76,
int controller_ck_1, int controller_pnr_2, int controller_ck_5_1,
int controller_pnr_1, int controller_v_108, int controller_v_107,
int controller_pnr, int p_controller_cntrl_dir_reverse,
int p_controller_cntrl_dir_right, int p_controller_cntrl_dir_left,
int p_controller_cntrl_dir_layer, int controller_cntrl_dir_left,
int controller_cntrl_dir_layer,
Controller_controller__controller_controller_controller_cntrl_dir_right_out* _out);

typedef struct Controller_controller__controller_controller_controller_cntrl_dir_left_out {
  int controller_cntrl_dir_left;
} Controller_controller__controller_controller_controller_cntrl_dir_left_out;

void Controller_controller__controller_controller_controller_cntrl_dir_left_step(
int controller_v_52, int controller_v_53, int controller_v_54,
int controller_v_55, int controller_v_72, int controller_v_76,
int controller_ck_1, int controller_pnr_2, int controller_ck_5_1,
int controller_pnr_1, int controller_v_108, int controller_v_107,
int controller_pnr, int p_controller_cntrl_dir_reverse,
int p_controller_cntrl_dir_right, int p_controller_cntrl_dir_left,
int p_controller_cntrl_dir_layer, int controller_cntrl_dir_layer,
Controller_controller__controller_controller_controller_cntrl_dir_left_out* _out);

typedef struct Controller_controller__controller_controller_controller_cntrl_dir_layer_out {
  int controller_cntrl_dir_layer;
} Controller_controller__controller_controller_controller_cntrl_dir_layer_out;

void Controller_controller__controller_controller_controller_cntrl_dir_layer_step(
int controller_v_52, int controller_v_53, int controller_v_54,
int controller_v_55, int controller_v_72, int controller_v_76,
int controller_ck_1, int controller_pnr_2, int controller_ck_5_1,
int controller_pnr_1, int controller_v_108, int controller_v_107,
int controller_pnr, int p_controller_cntrl_dir_reverse,
int p_controller_cntrl_dir_right, int p_controller_cntrl_dir_left,
int p_controller_cntrl_dir_layer,
Controller_controller__controller_controller_controller_cntrl_dir_layer_out* _out);

typedef struct Controller_controller__controller_controller_out {
  int controller_cntrl_dir_reverse;
  int controller_cntrl_dir_right;
  int controller_cntrl_dir_left;
  int controller_cntrl_dir_layer;
} Controller_controller__controller_controller_out;

void Controller_controller__controller_controller_step(int controller_v_52,
                                                       int controller_v_53,
                                                       int controller_v_54,
                                                       int controller_v_55,
                                                       int controller_v_72,
                                                       int controller_v_76,
                                                       int controller_ck_1,
                                                       int controller_pnr_2,
                                                       int controller_ck_5_1,
                                                       int controller_pnr_1,
                                                       int controller_v_108,
                                                       int controller_v_107,
                                                       int controller_pnr,
                                                       int p_controller_cntrl_dir_reverse,
                                                       int p_controller_cntrl_dir_right,
                                                       int p_controller_cntrl_dir_left,
                                                       int p_controller_cntrl_dir_layer,
                                                       Controller_controller__controller_controller_out* _out);

#endif // CONTROLLER_CONTROLLER_H
