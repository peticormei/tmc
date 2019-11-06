/* --- Generated the 4/11/2019 at 13:29 --- */
/* --- heptagon compiler, version 1.03.00 (compiled sun. oct. 20 0:47:43 CET 2019) --- */
/* --- Command line: /home/opam/.opam/4.02/bin/heptc -target c controller_controller.ept --- */

#ifndef CONTROLLER_CONTROLLER_H
#define CONTROLLER_CONTROLLER_H

#include "controller_controller_types.h"
typedef struct Controller_controller__controller_controller_controller_cntrl_turn_r_out {
  int controller_cntrl_turn_r;
} Controller_controller__controller_controller_controller_cntrl_turn_r_out;

void Controller_controller__controller_controller_controller_cntrl_turn_r_step(
int controller_v_22, int controller_v_23, int controller_v_24,
int controller_v_26, int controller_v_29, int controller_v_30,
int controller_v_31, int controller_v_33, int controller_ck_1,
int controller_pnr_3, int controller_ck_4_1, int controller_pnr_2,
int controller_ck_6_1, int controller_pnr_1, int controller_ck_8_1,
int controller_pnr, int p_controller_cntrl_turn_r,
int p_controller_cntrl_turn_l, int controller_cntrl_turn_l,
Controller_controller__controller_controller_controller_cntrl_turn_r_out* _out);

typedef struct Controller_controller__controller_controller_controller_cntrl_turn_l_out {
  int controller_cntrl_turn_l;
} Controller_controller__controller_controller_controller_cntrl_turn_l_out;

void Controller_controller__controller_controller_controller_cntrl_turn_l_step(
int controller_v_22, int controller_v_23, int controller_v_24,
int controller_v_26, int controller_v_29, int controller_v_30,
int controller_v_31, int controller_v_33, int controller_ck_1,
int controller_pnr_3, int controller_ck_4_1, int controller_pnr_2,
int controller_ck_6_1, int controller_pnr_1, int controller_ck_8_1,
int controller_pnr, int p_controller_cntrl_turn_r,
int p_controller_cntrl_turn_l,
Controller_controller__controller_controller_controller_cntrl_turn_l_out* _out);

typedef struct Controller_controller__controller_controller_out {
  int controller_cntrl_turn_r;
  int controller_cntrl_turn_l;
} Controller_controller__controller_controller_out;

void Controller_controller__controller_controller_step(int controller_v_22,
                                                       int controller_v_23,
                                                       int controller_v_24,
                                                       int controller_v_26,
                                                       int controller_v_29,
                                                       int controller_v_30,
                                                       int controller_v_31,
                                                       int controller_v_33,
                                                       int controller_ck_1,
                                                       int controller_pnr_3,
                                                       int controller_ck_4_1,
                                                       int controller_pnr_2,
                                                       int controller_ck_6_1,
                                                       int controller_pnr_1,
                                                       int controller_ck_8_1,
                                                       int controller_pnr,
                                                       int p_controller_cntrl_turn_r,
                                                       int p_controller_cntrl_turn_l,
                                                       Controller_controller__controller_controller_out* _out);

#endif // CONTROLLER_CONTROLLER_H
