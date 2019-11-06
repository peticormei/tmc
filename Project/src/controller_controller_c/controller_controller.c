/* --- Generated the 4/11/2019 at 13:29 --- */
/* --- heptagon compiler, version 1.03.00 (compiled sun. oct. 20 0:47:43 CET 2019) --- */
/* --- Command line: /home/opam/.opam/4.02/bin/heptc -target c controller_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "controller_controller.h"

void Controller_controller__controller_controller_controller_cntrl_turn_r_step(
  int controller_v_22, int controller_v_23, int controller_v_24,
  int controller_v_26, int controller_v_29, int controller_v_30,
  int controller_v_31, int controller_v_33, int controller_ck_1,
  int controller_pnr_3, int controller_ck_4_1, int controller_pnr_2,
  int controller_ck_6_1, int controller_pnr_1, int controller_ck_8_1,
  int controller_pnr, int p_controller_cntrl_turn_r,
  int p_controller_cntrl_turn_l, int controller_cntrl_turn_l,
  Controller_controller__controller_controller_controller_cntrl_turn_r_out* _out) {
  
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
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  sub_10 = false;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  if (controller_v_31) {
    v_5 = false;
  } else {
    v_5 = sub_10;
  };
  if (controller_cntrl_turn_l) {
    v_6 = v_5;
  } else {
    v_6 = sub_9;
  };
  v_4 = !(controller_v_33);
  sub_17 = (v_4&&false);
  if (controller_cntrl_turn_l) {
    sub_16 = sub_17;
  } else {
    sub_16 = sub_9;
  };
  if (controller_ck_8_1) {
    sub_15 = v_6;
  } else {
    sub_15 = sub_16;
  };
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_v_22) {
    v_7 = sub_11;
  } else {
    v_7 = sub_4;
  };
  if (controller_v_23) {
    sub_3 = sub_4;
  } else {
    sub_3 = sub_11;
  };
  sub_2 = sub_3;
  if (controller_ck_1) {
    sub_1 = v_7;
  } else {
    sub_1 = sub_2;
  };
  sub_27 = true;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  if (controller_v_30) {
    sub_29 = sub_24;
  } else {
    sub_29 = sub_7;
  };
  if (controller_v_29) {
    sub_30 = sub_8;
  } else {
    sub_30 = sub_25;
  };
  if (controller_ck_6_1) {
    sub_28 = sub_30;
  } else {
    sub_28 = sub_29;
  };
  if (controller_v_24) {
    v_3 = sub_28;
  } else {
    v_3 = sub_23;
  };
  if (controller_v_26) {
    sub_22 = sub_23;
  } else {
    sub_22 = sub_28;
  };
  sub_21 = sub_22;
  if (controller_ck_4_1) {
    sub_20 = v_3;
  } else {
    sub_20 = sub_21;
  };
  if (controller_v_31) {
    v = false;
  } else {
    v = sub_27;
  };
  if (controller_cntrl_turn_l) {
    v_1 = v;
  } else {
    v_1 = sub_26;
  };
  sub_38 = (controller_v_33||false);
  if (controller_cntrl_turn_l) {
    sub_37 = sub_38;
  } else {
    sub_37 = sub_26;
  };
  if (controller_ck_8_1) {
    sub_36 = v_1;
  } else {
    sub_36 = sub_37;
  };
  sub_35 = sub_36;
  sub_34 = sub_35;
  if (controller_v_30) {
    sub_40 = sub_35;
  } else {
    sub_40 = sub_14;
  };
  if (controller_v_29) {
    sub_41 = sub_15;
  } else {
    sub_41 = sub_36;
  };
  if (controller_ck_6_1) {
    sub_39 = sub_41;
  } else {
    sub_39 = sub_40;
  };
  if (controller_v_24) {
    v_2 = sub_39;
  } else {
    v_2 = sub_34;
  };
  if (controller_v_26) {
    sub_33 = sub_34;
  } else {
    sub_33 = sub_39;
  };
  sub_32 = sub_33;
  if (controller_ck_4_1) {
    sub_31 = v_2;
  } else {
    sub_31 = sub_32;
  };
  if (controller_v_22) {
    v_8 = sub_31;
  } else {
    v_8 = sub_20;
  };
  if (controller_v_23) {
    sub_19 = sub_20;
  } else {
    sub_19 = sub_31;
  };
  sub_18 = sub_19;
  if (controller_ck_1) {
    v_9 = v_8;
  } else {
    v_9 = sub_18;
  };
  if (p_controller_cntrl_turn_r) {
    sub_0 = v_9;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_cntrl_turn_r = sub_0;;
}

void Controller_controller__controller_controller_controller_cntrl_turn_l_step(
  int controller_v_22, int controller_v_23, int controller_v_24,
  int controller_v_26, int controller_v_29, int controller_v_30,
  int controller_v_31, int controller_v_33, int controller_ck_1,
  int controller_pnr_3, int controller_ck_4_1, int controller_pnr_2,
  int controller_ck_6_1, int controller_pnr_1, int controller_ck_8_1,
  int controller_pnr, int p_controller_cntrl_turn_r,
  int p_controller_cntrl_turn_l,
  Controller_controller__controller_controller_controller_cntrl_turn_l_out* _out) {
  
  int v_10;
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
  sub_9 = p_controller_cntrl_turn_l;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  if (controller_v_31) {
    v = false;
  } else {
    v = sub_8;
  };
  sub_16 = (controller_v_33&&sub_9);
  sub_15 = sub_16;
  if (controller_ck_8_1) {
    sub_14 = v;
  } else {
    sub_14 = sub_15;
  };
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  if (controller_v_22) {
    v_10 = sub_10;
  } else {
    v_10 = sub_3;
  };
  if (controller_v_23) {
    sub_2 = sub_3;
  } else {
    sub_2 = sub_10;
  };
  sub_1 = sub_2;
  if (controller_ck_1) {
    sub_0 = v_10;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_cntrl_turn_l = sub_0;;
}

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
                                                       Controller_controller__controller_controller_out* _out) {
  Controller_controller__controller_controller_controller_cntrl_turn_l_out Controller_controller__controller_controller_controller_cntrl_turn_l_out_st;
  Controller_controller__controller_controller_controller_cntrl_turn_r_out Controller_controller__controller_controller_controller_cntrl_turn_r_out_st;
  Controller_controller__controller_controller_controller_cntrl_turn_l_step(
  controller_v_22, controller_v_23, controller_v_24, controller_v_26,
  controller_v_29, controller_v_30, controller_v_31, controller_v_33,
  controller_ck_1, controller_pnr_3, controller_ck_4_1, controller_pnr_2,
  controller_ck_6_1, controller_pnr_1, controller_ck_8_1, controller_pnr,
  p_controller_cntrl_turn_r, p_controller_cntrl_turn_l,
  &Controller_controller__controller_controller_controller_cntrl_turn_l_out_st);
  _out->controller_cntrl_turn_l = Controller_controller__controller_controller_controller_cntrl_turn_l_out_st.controller_cntrl_turn_l;
  Controller_controller__controller_controller_controller_cntrl_turn_r_step(
  controller_v_22, controller_v_23, controller_v_24, controller_v_26,
  controller_v_29, controller_v_30, controller_v_31, controller_v_33,
  controller_ck_1, controller_pnr_3, controller_ck_4_1, controller_pnr_2,
  controller_ck_6_1, controller_pnr_1, controller_ck_8_1, controller_pnr,
  p_controller_cntrl_turn_r, p_controller_cntrl_turn_l,
  _out->controller_cntrl_turn_l,
  &Controller_controller__controller_controller_controller_cntrl_turn_r_out_st);
  _out->controller_cntrl_turn_r = Controller_controller__controller_controller_controller_cntrl_turn_r_out_st.controller_cntrl_turn_r;
}

