/* --- Generated the 21/10/2019 at 15:1 --- */
/* --- heptagon compiler, version 1.03.00 (compiled sun. oct. 20 0:47:43 CET 2019) --- */
/* --- Command line: /home/opam/.opam/4.02/bin/heptc -target c controller_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "controller_controller.h"

void Controller_controller__controller_controller_controller_c_motor_right_step(
  int controller_v_8, int controller_v_9, int controller_v_10,
  int controller_v_11, int controller_ck_1, int controller_pnr_3,
  int controller_ck_5_1, int controller_pnr_2, int controller_ck_7_1,
  int controller_pnr_1, int controller_ck_9_1, int controller_pnr,
  int p_controller_c_motor_right, int p_controller_c_motor_left,
  int controller_c_motor_left,
  Controller_controller__controller_controller_controller_c_motor_right_out* _out) {
  
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  v_11 = !(controller_ck_1);
  v_6 = !(controller_ck_1);
  v_2 = !(controller_ck_1);
  v_1 = !(controller_ck_5_1);
  sub_2 = p_controller_c_motor_right;
  if (controller_ck_1) {
    v_27 = sub_2;
  } else {
    v_27 = false;
  };
  v_26 = (controller_ck_1&&sub_2);
  if (controller_c_motor_left) {
    v_28 = v_26;
  } else {
    v_28 = v_27;
  };
  if (controller_ck_1) {
    v_8 = false;
  } else {
    v_8 = sub_2;
  };
  v_7 = (v_6&&sub_2);
  if (controller_c_motor_left) {
    v_9 = v_7;
  } else {
    v_9 = v_8;
  };
  sub_1 = (v_1&&sub_2);
  v_23 = (controller_ck_1&&sub_1);
  v_3 = (v_2&&sub_1);
  if (controller_ck_5_1) {
    sub_3 = false;
  } else {
    sub_3 = sub_2;
  };
  if (controller_ck_1) {
    v_24 = sub_3;
  } else {
    v_24 = false;
  };
  if (controller_c_motor_left) {
    v_25 = v_23;
  } else {
    v_25 = v_24;
  };
  if (controller_v_11) {
    v_29 = v_25;
  } else {
    v_29 = v_28;
  };
  if (controller_c_motor_left) {
    v_18 = sub_1;
  } else {
    v_18 = sub_3;
  };
  if (controller_v_11) {
    v_19 = v_18;
  } else {
    v_19 = sub_2;
  };
  if (controller_ck_1) {
    v_4 = false;
  } else {
    v_4 = sub_3;
  };
  if (controller_c_motor_left) {
    v_5 = v_3;
  } else {
    v_5 = v_4;
  };
  if (controller_v_11) {
    v_10 = v_5;
  } else {
    v_10 = v_9;
  };
  v = !(controller_c_motor_left);
  sub_4 = (v&&false);
  sub_5 = (controller_ck_5_1&&sub_2);
  v_30 = (controller_ck_1&&sub_5);
  v_12 = (v_11&&sub_5);
  if (controller_ck_5_1) {
    sub_6 = sub_2;
  } else {
    sub_6 = false;
  };
  if (controller_ck_1) {
    v_31 = sub_6;
  } else {
    v_31 = false;
  };
  if (controller_c_motor_left) {
    v_32 = v_30;
  } else {
    v_32 = v_31;
  };
  if (controller_v_11) {
    v_33 = sub_4;
  } else {
    v_33 = v_32;
  };
  if (controller_v_10) {
    v_34 = v_29;
  } else {
    v_34 = v_33;
  };
  if (controller_c_motor_left) {
    v_20 = sub_5;
  } else {
    v_20 = sub_6;
  };
  if (controller_v_11) {
    v_21 = sub_4;
  } else {
    v_21 = v_20;
  };
  if (controller_v_10) {
    v_22 = v_19;
  } else {
    v_22 = v_21;
  };
  if (controller_v_9) {
    v_35 = v_22;
  } else {
    v_35 = v_34;
  };
  if (controller_ck_1) {
    v_13 = false;
  } else {
    v_13 = sub_6;
  };
  if (controller_c_motor_left) {
    v_14 = v_12;
  } else {
    v_14 = v_13;
  };
  if (controller_v_11) {
    v_15 = sub_4;
  } else {
    v_15 = v_14;
  };
  if (controller_v_10) {
    v_16 = v_10;
  } else {
    v_16 = v_15;
  };
  sub_7 = sub_4;
  if (controller_v_9) {
    v_17 = v_16;
  } else {
    v_17 = sub_7;
  };
  if (controller_v_8) {
    sub_0 = v_17;
  } else {
    sub_0 = v_35;
  };
  _out->controller_c_motor_right = sub_0;;
}

void Controller_controller__controller_controller_controller_c_motor_left_step(
  int controller_v_8, int controller_v_9, int controller_v_10,
  int controller_v_11, int controller_ck_1, int controller_pnr_3,
  int controller_ck_5_1, int controller_pnr_2, int controller_ck_7_1,
  int controller_pnr_1, int controller_ck_9_1, int controller_pnr,
  int p_controller_c_motor_right, int p_controller_c_motor_left,
  Controller_controller__controller_controller_controller_c_motor_left_out* _out) {
  
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
  int v_49;
  int v_48;
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int v_41;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  v_51 = !(controller_ck_1);
  v_48 = !(controller_ck_1);
  v_46 = !(controller_ck_1);
  sub_2 = p_controller_c_motor_left;
  v_49 = (v_48||sub_2);
  v_37 = (controller_ck_1||sub_2);
  sub_1 = (controller_ck_5_1||sub_2);
  v_47 = (v_46||sub_1);
  if (controller_v_11) {
    v_50 = v_47;
    v_43 = sub_1;
  } else {
    v_50 = v_49;
    v_43 = sub_2;
  };
  v_36 = (controller_ck_1||sub_1);
  if (controller_v_11) {
    v_38 = v_36;
  } else {
    v_38 = v_37;
  };
  v = !(controller_ck_5_1);
  sub_3 = (v||sub_2);
  v_52 = (v_51||sub_3);
  v_53 = (controller_v_11||v_52);
  if (controller_v_10) {
    v_54 = v_50;
  } else {
    v_54 = v_53;
  };
  v_44 = (controller_v_11||sub_3);
  if (controller_v_10) {
    v_45 = v_43;
  } else {
    v_45 = v_44;
  };
  if (controller_v_9) {
    v_55 = v_45;
  } else {
    v_55 = v_54;
  };
  v_39 = (controller_ck_1||sub_3);
  v_40 = (controller_v_11||v_39);
  if (controller_v_10) {
    v_41 = v_38;
  } else {
    v_41 = v_40;
  };
  sub_4 = true;
  if (controller_v_9) {
    v_42 = v_41;
  } else {
    v_42 = sub_4;
  };
  if (controller_v_8) {
    sub_0 = v_42;
  } else {
    sub_0 = v_55;
  };
  _out->controller_c_motor_left = sub_0;;
}

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
                                                       Controller_controller__controller_controller_out* _out) {
  Controller_controller__controller_controller_controller_c_motor_right_out Controller_controller__controller_controller_controller_c_motor_right_out_st;
  Controller_controller__controller_controller_controller_c_motor_left_out Controller_controller__controller_controller_controller_c_motor_left_out_st;
  Controller_controller__controller_controller_controller_c_motor_left_step(
  controller_v_8, controller_v_9, controller_v_10, controller_v_11,
  controller_ck_1, controller_pnr_3, controller_ck_5_1, controller_pnr_2,
  controller_ck_7_1, controller_pnr_1, controller_ck_9_1, controller_pnr,
  p_controller_c_motor_right, p_controller_c_motor_left,
  &Controller_controller__controller_controller_controller_c_motor_left_out_st);
  _out->controller_c_motor_left = Controller_controller__controller_controller_controller_c_motor_left_out_st.controller_c_motor_left;
  Controller_controller__controller_controller_controller_c_motor_right_step(
  controller_v_8, controller_v_9, controller_v_10, controller_v_11,
  controller_ck_1, controller_pnr_3, controller_ck_5_1, controller_pnr_2,
  controller_ck_7_1, controller_pnr_1, controller_ck_9_1, controller_pnr,
  p_controller_c_motor_right, p_controller_c_motor_left,
  _out->controller_c_motor_left,
  &Controller_controller__controller_controller_controller_c_motor_right_out_st);
  _out->controller_c_motor_right = Controller_controller__controller_controller_controller_c_motor_right_out_st.controller_c_motor_right;
}

