/* --- Generated the 20/10/2019 at 2:1 --- */
/* --- heptagon compiler, version 1.03.00 (compiled sun. oct. 20 0:47:43 CET 2019) --- */
/* --- Command line: /home/opam/.opam/4.02/bin/heptc -target c controller_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "controller_controller.h"

void Controller_controller__controller_controller_controller_c_motor4_step(
  int controller_v_17, int controller_v_18, int controller_v_19,
  int controller_ck_1, int controller_pnr_5, int controller_v_58,
  int controller_v_57, int controller_pnr_4, int controller_ck_7_1,
  int controller_pnr_3, int controller_ck_9_1, int controller_pnr_2,
  int controller_ck_11_1, int controller_pnr_1, int controller_ck_13_1,
  int controller_pnr, int p_controller_c_motor4, int p_controller_c_motor3,
  int p_controller_c_motor2, int p_controller_c_motor1,
  int p_controller_c_move, int controller_c_motor3, int controller_c_motor2,
  int controller_c_motor1, int controller_c_move,
  Controller_controller__controller_controller_controller_c_motor4_out* _out) {
  
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
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  sub_7 = false;
  if (controller_v_57) {
    v_7 = false;
  } else {
    v_7 = sub_7;
  };
  if (controller_c_move) {
    v_8 = sub_7;
  } else {
    v_8 = v_7;
  };
  if (controller_v_58) {
    sub_6 = v_8;
  } else {
    sub_6 = false;
  };
  if (controller_v_17) {
    v_9 = false;
  } else {
    v_9 = sub_6;
  };
  if (controller_v_18) {
    sub_5 = sub_6;
  } else {
    sub_5 = false;
  };
  sub_4 = sub_5;
  if (controller_ck_1) {
    sub_3 = v_9;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  sub_10 = sub_7;
  if (controller_v_57) {
    v_5 = sub_7;
  } else {
    v_5 = false;
  };
  if (controller_c_move) {
    v_6 = false;
  } else {
    v_6 = v_5;
  };
  if (controller_v_58) {
    sub_11 = v_6;
  } else {
    sub_11 = sub_10;
  };
  if (controller_v_18) {
    sub_9 = sub_10;
  } else {
    sub_9 = sub_11;
  };
  sub_8 = sub_9;
  sub_12 = sub_11;
  if (controller_v_17) {
    v_10 = sub_12;
  } else {
    v_10 = sub_10;
  };
  if (controller_ck_1) {
    v_11 = v_10;
  } else {
    v_11 = sub_8;
  };
  if (controller_c_motor1) {
    v_12 = v_11;
  } else {
    v_12 = sub_3;
  };
  if (controller_c_motor2) {
    v_13 = v_12;
  } else {
    v_13 = sub_2;
  };
  if (controller_c_motor3) {
    sub_1 = sub_2;
  } else {
    sub_1 = v_13;
  };
  sub_18 = true;
  if (controller_v_57) {
    v_2 = false;
  } else {
    v_2 = sub_18;
  };
  if (controller_c_move) {
    v_3 = sub_18;
  } else {
    v_3 = v_2;
  };
  if (controller_v_58) {
    sub_17 = v_3;
  } else {
    sub_17 = false;
  };
  if (controller_v_17) {
    v_4 = false;
  } else {
    v_4 = sub_17;
  };
  if (controller_v_18) {
    sub_16 = sub_17;
  } else {
    sub_16 = false;
  };
  sub_15 = sub_16;
  if (controller_ck_1) {
    sub_14 = v_4;
  } else {
    sub_14 = sub_15;
  };
  sub_13 = sub_14;
  if (controller_v_57) {
    v = sub_7;
  } else {
    v = sub_18;
  };
  if (controller_c_move) {
    v_1 = sub_18;
  } else {
    v_1 = v;
  };
  if (controller_v_58) {
    sub_21 = v_1;
  } else {
    sub_21 = sub_10;
  };
  if (controller_v_17) {
    v_14 = sub_12;
  } else {
    v_14 = sub_21;
  };
  if (controller_v_18) {
    sub_20 = sub_21;
  } else {
    sub_20 = sub_11;
  };
  sub_19 = sub_20;
  if (controller_ck_1) {
    v_15 = v_14;
  } else {
    v_15 = sub_19;
  };
  if (controller_c_motor1) {
    v_16 = v_15;
  } else {
    v_16 = sub_14;
  };
  if (controller_c_motor2) {
    v_17 = v_16;
  } else {
    v_17 = sub_13;
  };
  if (controller_c_motor3) {
    v_18 = sub_13;
  } else {
    v_18 = v_17;
  };
  if (p_controller_c_motor4) {
    sub_0 = v_18;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_motor4 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_motor3_step(
  int controller_v_17, int controller_v_18, int controller_v_19,
  int controller_ck_1, int controller_pnr_5, int controller_v_58,
  int controller_v_57, int controller_pnr_4, int controller_ck_7_1,
  int controller_pnr_3, int controller_ck_9_1, int controller_pnr_2,
  int controller_ck_11_1, int controller_pnr_1, int controller_ck_13_1,
  int controller_pnr, int p_controller_c_motor4, int p_controller_c_motor3,
  int p_controller_c_motor2, int p_controller_c_motor1,
  int p_controller_c_move, int controller_c_motor2, int controller_c_motor1,
  int controller_c_move,
  Controller_controller__controller_controller_controller_c_motor3_out* _out) {
  
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
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  sub_5 = false;
  sub_4 = sub_5;
  if (controller_v_57) {
    v_26 = sub_5;
  } else {
    v_26 = false;
  };
  if (controller_c_move) {
    v_27 = false;
  } else {
    v_27 = v_26;
  };
  if (controller_v_58) {
    sub_6 = v_27;
  } else {
    sub_6 = sub_4;
  };
  if (controller_v_18) {
    sub_3 = sub_4;
  } else {
    sub_3 = sub_6;
  };
  sub_2 = sub_3;
  sub_7 = sub_6;
  if (controller_v_17) {
    v_28 = sub_7;
  } else {
    v_28 = sub_4;
  };
  if (controller_ck_1) {
    v_29 = v_28;
  } else {
    v_29 = sub_2;
  };
  if (controller_v_57) {
    v_23 = false;
  } else {
    v_23 = sub_5;
  };
  if (controller_c_move) {
    v_24 = sub_5;
  } else {
    v_24 = v_23;
  };
  if (controller_v_58) {
    sub_11 = v_24;
  } else {
    sub_11 = false;
  };
  if (controller_v_17) {
    v_25 = false;
  } else {
    v_25 = sub_11;
  };
  if (controller_v_18) {
    sub_10 = sub_11;
  } else {
    sub_10 = false;
  };
  sub_9 = sub_10;
  if (controller_ck_1) {
    sub_8 = v_25;
  } else {
    sub_8 = sub_9;
  };
  if (controller_c_motor1) {
    v_30 = v_29;
  } else {
    v_30 = sub_8;
  };
  if (controller_c_motor2) {
    sub_1 = v_30;
  } else {
    sub_1 = sub_8;
  };
  sub_15 = true;
  if (controller_v_57) {
    v_21 = sub_5;
  } else {
    v_21 = sub_15;
  };
  if (controller_c_move) {
    v_22 = sub_15;
  } else {
    v_22 = v_21;
  };
  if (controller_v_58) {
    sub_14 = v_22;
  } else {
    sub_14 = sub_4;
  };
  if (controller_v_17) {
    v_31 = sub_7;
  } else {
    v_31 = sub_14;
  };
  if (controller_v_18) {
    sub_13 = sub_14;
  } else {
    sub_13 = sub_6;
  };
  sub_12 = sub_13;
  if (controller_ck_1) {
    v_32 = v_31;
  } else {
    v_32 = sub_12;
  };
  if (controller_v_57) {
    v = false;
  } else {
    v = sub_15;
  };
  if (controller_c_move) {
    v_19 = sub_15;
  } else {
    v_19 = v;
  };
  if (controller_v_58) {
    sub_19 = v_19;
  } else {
    sub_19 = false;
  };
  if (controller_v_17) {
    v_20 = false;
  } else {
    v_20 = sub_19;
  };
  if (controller_v_18) {
    sub_18 = sub_19;
  } else {
    sub_18 = false;
  };
  sub_17 = sub_18;
  if (controller_ck_1) {
    sub_16 = v_20;
  } else {
    sub_16 = sub_17;
  };
  if (controller_c_motor1) {
    v_33 = v_32;
  } else {
    v_33 = sub_16;
  };
  if (controller_c_motor2) {
    v_34 = v_33;
  } else {
    v_34 = sub_16;
  };
  if (p_controller_c_motor3) {
    sub_0 = v_34;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_motor3 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_motor2_step(
  int controller_v_17, int controller_v_18, int controller_v_19,
  int controller_ck_1, int controller_pnr_5, int controller_v_58,
  int controller_v_57, int controller_pnr_4, int controller_ck_7_1,
  int controller_pnr_3, int controller_ck_9_1, int controller_pnr_2,
  int controller_ck_11_1, int controller_pnr_1, int controller_ck_13_1,
  int controller_pnr, int p_controller_c_motor4, int p_controller_c_motor3,
  int p_controller_c_motor2, int p_controller_c_motor1,
  int p_controller_c_move, int controller_c_motor1, int controller_c_move,
  Controller_controller__controller_controller_controller_c_motor2_out* _out) {
  
  int v_43;
  int v_42;
  int v_41;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  sub_5 = true;
  sub_4 = sub_5;
  sub_7 = false;
  if (p_controller_c_motor2) {
    sub_6 = sub_5;
  } else {
    sub_6 = sub_7;
  };
  if (controller_v_57) {
    v_38 = sub_5;
  } else {
    v_38 = sub_6;
  };
  if (controller_c_move) {
    v_39 = sub_6;
  } else {
    v_39 = v_38;
  };
  if (controller_v_58) {
    sub_3 = v_39;
  } else {
    sub_3 = sub_4;
  };
  if (controller_v_57) {
    v_36 = sub_5;
  } else {
    v_36 = false;
  };
  if (controller_c_move) {
    v_37 = false;
  } else {
    v_37 = v_36;
  };
  if (controller_v_58) {
    sub_8 = v_37;
  } else {
    sub_8 = sub_4;
  };
  if (controller_v_17) {
    v_40 = sub_8;
  } else {
    v_40 = sub_3;
  };
  if (controller_v_18) {
    sub_2 = sub_3;
  } else {
    sub_2 = sub_8;
  };
  sub_1 = sub_2;
  if (controller_ck_1) {
    v_41 = v_40;
  } else {
    v_41 = sub_1;
  };
  if (controller_v_57) {
    v = false;
  } else {
    v = sub_6;
  };
  if (controller_c_move) {
    v_35 = sub_6;
  } else {
    v_35 = v;
  };
  if (controller_v_58) {
    sub_11 = v_35;
  } else {
    sub_11 = false;
  };
  if (controller_v_17) {
    v_42 = false;
  } else {
    v_42 = sub_11;
  };
  if (controller_v_18) {
    sub_10 = sub_11;
  } else {
    sub_10 = false;
  };
  sub_9 = sub_10;
  if (controller_ck_1) {
    v_43 = v_42;
  } else {
    v_43 = sub_9;
  };
  if (controller_c_motor1) {
    sub_0 = v_41;
  } else {
    sub_0 = v_43;
  };
  _out->controller_c_motor2 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_motor1_step(
  int controller_v_17, int controller_v_18, int controller_v_19,
  int controller_ck_1, int controller_pnr_5, int controller_v_58,
  int controller_v_57, int controller_pnr_4, int controller_ck_7_1,
  int controller_pnr_3, int controller_ck_9_1, int controller_pnr_2,
  int controller_ck_11_1, int controller_pnr_1, int controller_ck_13_1,
  int controller_pnr, int p_controller_c_motor4, int p_controller_c_motor3,
  int p_controller_c_motor2, int p_controller_c_motor1,
  int p_controller_c_move, int controller_c_move,
  Controller_controller__controller_controller_controller_c_motor1_out* _out) {
  
  int v_49;
  int v_48;
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  sub_6 = true;
  sub_5 = sub_6;
  sub_7 = false;
  if (controller_v_57) {
    v_45 = sub_6;
  } else {
    v_45 = sub_7;
  };
  if (controller_c_move) {
    v_46 = sub_7;
  } else {
    v_46 = v_45;
  };
  if (controller_v_58) {
    sub_4 = v_46;
  } else {
    sub_4 = sub_5;
  };
  if (controller_v_57) {
    v = sub_6;
  } else {
    v = false;
  };
  if (controller_c_move) {
    v_44 = false;
  } else {
    v_44 = v;
  };
  if (controller_v_58) {
    sub_8 = v_44;
  } else {
    sub_8 = sub_5;
  };
  if (controller_v_18) {
    sub_3 = sub_4;
  } else {
    sub_3 = sub_8;
  };
  sub_2 = sub_3;
  sub_9 = sub_8;
  if (controller_v_17) {
    v_48 = sub_9;
    v_47 = sub_9;
  } else {
    v_48 = sub_5;
    v_47 = sub_4;
  };
  if (controller_ck_1) {
    sub_1 = v_47;
  } else {
    sub_1 = sub_2;
  };
  if (controller_v_18) {
    sub_11 = sub_5;
  } else {
    sub_11 = sub_8;
  };
  sub_10 = sub_11;
  if (controller_ck_1) {
    v_49 = v_48;
  } else {
    v_49 = sub_10;
  };
  if (p_controller_c_motor1) {
    sub_0 = v_49;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_motor1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_move_step(
  int controller_v_17, int controller_v_18, int controller_v_19,
  int controller_ck_1, int controller_pnr_5, int controller_v_58,
  int controller_v_57, int controller_pnr_4, int controller_ck_7_1,
  int controller_pnr_3, int controller_ck_9_1, int controller_pnr_2,
  int controller_ck_11_1, int controller_pnr_1, int controller_ck_13_1,
  int controller_pnr, int p_controller_c_motor4, int p_controller_c_motor3,
  int p_controller_c_motor2, int p_controller_c_motor1,
  int p_controller_c_move,
  Controller_controller__controller_controller_controller_c_move_out* _out) {
  
  int v_50;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  sub_4 = p_controller_c_move;
  sub_3 = sub_4;
  if (controller_v_57) {
    v = false;
  } else {
    v = false;
  };
  if (controller_v_58) {
    sub_5 = v;
  } else {
    sub_5 = sub_3;
  };
  if (controller_v_17) {
    v_50 = sub_5;
  } else {
    v_50 = sub_3;
  };
  if (controller_v_18) {
    sub_2 = sub_3;
  } else {
    sub_2 = sub_5;
  };
  sub_1 = sub_2;
  if (controller_ck_1) {
    sub_0 = v_50;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_move = sub_0;;
}

void Controller_controller__controller_controller_step(int controller_v_17,
                                                       int controller_v_18,
                                                       int controller_v_19,
                                                       int controller_ck_1,
                                                       int controller_pnr_5,
                                                       int controller_v_58,
                                                       int controller_v_57,
                                                       int controller_pnr_4,
                                                       int controller_ck_7_1,
                                                       int controller_pnr_3,
                                                       int controller_ck_9_1,
                                                       int controller_pnr_2,
                                                       int controller_ck_11_1,
                                                       int controller_pnr_1,
                                                       int controller_ck_13_1,
                                                       int controller_pnr,
                                                       int p_controller_c_motor4,
                                                       int p_controller_c_motor3,
                                                       int p_controller_c_motor2,
                                                       int p_controller_c_motor1,
                                                       int p_controller_c_move,
                                                       Controller_controller__controller_controller_out* _out) {
  Controller_controller__controller_controller_controller_c_motor3_out Controller_controller__controller_controller_controller_c_motor3_out_st;
  Controller_controller__controller_controller_controller_c_motor4_out Controller_controller__controller_controller_controller_c_motor4_out_st;
  Controller_controller__controller_controller_controller_c_move_out Controller_controller__controller_controller_controller_c_move_out_st;
  Controller_controller__controller_controller_controller_c_motor1_out Controller_controller__controller_controller_controller_c_motor1_out_st;
  Controller_controller__controller_controller_controller_c_motor2_out Controller_controller__controller_controller_controller_c_motor2_out_st;
  Controller_controller__controller_controller_controller_c_move_step(
  controller_v_17, controller_v_18, controller_v_19, controller_ck_1,
  controller_pnr_5, controller_v_58, controller_v_57, controller_pnr_4,
  controller_ck_7_1, controller_pnr_3, controller_ck_9_1, controller_pnr_2,
  controller_ck_11_1, controller_pnr_1, controller_ck_13_1, controller_pnr,
  p_controller_c_motor4, p_controller_c_motor3, p_controller_c_motor2,
  p_controller_c_motor1, p_controller_c_move,
  &Controller_controller__controller_controller_controller_c_move_out_st);
  _out->controller_c_move = Controller_controller__controller_controller_controller_c_move_out_st.controller_c_move;
  Controller_controller__controller_controller_controller_c_motor1_step(
  controller_v_17, controller_v_18, controller_v_19, controller_ck_1,
  controller_pnr_5, controller_v_58, controller_v_57, controller_pnr_4,
  controller_ck_7_1, controller_pnr_3, controller_ck_9_1, controller_pnr_2,
  controller_ck_11_1, controller_pnr_1, controller_ck_13_1, controller_pnr,
  p_controller_c_motor4, p_controller_c_motor3, p_controller_c_motor2,
  p_controller_c_motor1, p_controller_c_move, _out->controller_c_move,
  &Controller_controller__controller_controller_controller_c_motor1_out_st);
  _out->controller_c_motor1 = Controller_controller__controller_controller_controller_c_motor1_out_st.controller_c_motor1;
  Controller_controller__controller_controller_controller_c_motor2_step(
  controller_v_17, controller_v_18, controller_v_19, controller_ck_1,
  controller_pnr_5, controller_v_58, controller_v_57, controller_pnr_4,
  controller_ck_7_1, controller_pnr_3, controller_ck_9_1, controller_pnr_2,
  controller_ck_11_1, controller_pnr_1, controller_ck_13_1, controller_pnr,
  p_controller_c_motor4, p_controller_c_motor3, p_controller_c_motor2,
  p_controller_c_motor1, p_controller_c_move, _out->controller_c_motor1,
  _out->controller_c_move,
  &Controller_controller__controller_controller_controller_c_motor2_out_st);
  _out->controller_c_motor2 = Controller_controller__controller_controller_controller_c_motor2_out_st.controller_c_motor2;
  Controller_controller__controller_controller_controller_c_motor3_step(
  controller_v_17, controller_v_18, controller_v_19, controller_ck_1,
  controller_pnr_5, controller_v_58, controller_v_57, controller_pnr_4,
  controller_ck_7_1, controller_pnr_3, controller_ck_9_1, controller_pnr_2,
  controller_ck_11_1, controller_pnr_1, controller_ck_13_1, controller_pnr,
  p_controller_c_motor4, p_controller_c_motor3, p_controller_c_motor2,
  p_controller_c_motor1, p_controller_c_move, _out->controller_c_motor2,
  _out->controller_c_motor1, _out->controller_c_move,
  &Controller_controller__controller_controller_controller_c_motor3_out_st);
  _out->controller_c_motor3 = Controller_controller__controller_controller_controller_c_motor3_out_st.controller_c_motor3;
  Controller_controller__controller_controller_controller_c_motor4_step(
  controller_v_17, controller_v_18, controller_v_19, controller_ck_1,
  controller_pnr_5, controller_v_58, controller_v_57, controller_pnr_4,
  controller_ck_7_1, controller_pnr_3, controller_ck_9_1, controller_pnr_2,
  controller_ck_11_1, controller_pnr_1, controller_ck_13_1, controller_pnr,
  p_controller_c_motor4, p_controller_c_motor3, p_controller_c_motor2,
  p_controller_c_motor1, p_controller_c_move, _out->controller_c_motor3,
  _out->controller_c_motor2, _out->controller_c_motor1,
  _out->controller_c_move,
  &Controller_controller__controller_controller_controller_c_motor4_out_st);
  _out->controller_c_motor4 = Controller_controller__controller_controller_controller_c_motor4_out_st.controller_c_motor4;
}

