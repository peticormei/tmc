/* --- Generated the 4/11/2019 at 13:29 --- */
/* --- heptagon compiler, version 1.03.00 (compiled sun. oct. 20 0:47:43 CET 2019) --- */
/* --- Command line: /home/opam/.opam/4.02/bin/heptc -target c -target z3z -s controller model.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "model.h"

void Model__obstacle_reset(Model__obstacle_mem* self) {
  self->pnr = false;
  self->ck_1_2 = false;
}

void Model__obstacle_step(int dist, Model__obstacle_out* _out,
                          Model__obstacle_mem* self) {
  
  int nr_St_NO_OBSTACLE;
  int ns_St_NO_OBSTACLE_1;
  int obs_St_NO_OBSTACLE;
  int nr_St_OBSTACLE;
  int ns_St_OBSTACLE_1;
  int obs_St_OBSTACLE;
  int ck_1_1;
  int v_1;
  int v;
  int r_St_NO_OBSTACLE;
  int s_St_NO_OBSTACLE_1;
  int r_St_OBSTACLE;
  int s_St_OBSTACLE_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1_2) {
    v = (dist<=45);
    if (v) {
      r_St_NO_OBSTACLE = true;
    } else {
      r_St_NO_OBSTACLE = self->pnr;
    };
    r = r_St_NO_OBSTACLE;
    if (v) {
      s_St_NO_OBSTACLE_1 = false;
    } else {
      s_St_NO_OBSTACLE_1 = true;
    };
    s_1 = s_St_NO_OBSTACLE_1;
  } else {
    v_1 = (dist>45);
    if (v_1) {
      r_St_OBSTACLE = true;
      s_St_OBSTACLE_1 = true;
    } else {
      r_St_OBSTACLE = self->pnr;
      s_St_OBSTACLE_1 = false;
    };
    r = r_St_OBSTACLE;
    s_1 = s_St_OBSTACLE_1;
  };
  ck_1_1 = s_1;
  if (ck_1_1) {
    obs_St_NO_OBSTACLE = false;
    _out->obs = obs_St_NO_OBSTACLE;
    nr_St_NO_OBSTACLE = false;
    nr = nr_St_NO_OBSTACLE;
    ns_St_NO_OBSTACLE_1 = true;
    ns_1 = ns_St_NO_OBSTACLE_1;
  } else {
    obs_St_OBSTACLE = true;
    nr_St_OBSTACLE = false;
    ns_St_OBSTACLE_1 = false;
    _out->obs = obs_St_OBSTACLE;
    nr = nr_St_OBSTACLE;
    ns_1 = ns_St_OBSTACLE_1;
  };
  self->pnr = nr;
  self->ck_1_2 = ns_1;;
}

void Model__motor_reset(Model__motor_mem* self) {
  self->pnr = false;
  self->ck_1 = false;
}

void Model__motor_step(int event_dir, int cntrl_turn, Model__motor_out* _out,
                       Model__motor_mem* self) {
  
  int nr_St_1_BACKWARD;
  int ns_St_1_BACKWARD_1;
  int velocity_St_1_BACKWARD;
  int mode_St_1_BACKWARD;
  int nr_St_1_FORWARD;
  int ns_St_1_FORWARD_1;
  int velocity_St_1_FORWARD;
  int mode_St_1_FORWARD;
  int ck_2_1;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v;
  int r_St_1_BACKWARD;
  int s_St_1_BACKWARD_1;
  int r_St_1_FORWARD;
  int s_St_1_FORWARD_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v = (event_dir==1);
    v_2 = (v&&cntrl_turn);
    if (v_2) {
      r_St_1_BACKWARD = true;
    } else {
      r_St_1_BACKWARD = self->pnr;
    };
    r = r_St_1_BACKWARD;
    if (v_2) {
      s_St_1_BACKWARD_1 = false;
    } else {
      s_St_1_BACKWARD_1 = true;
    };
    s_1 = s_St_1_BACKWARD_1;
  } else {
    v_4 = !(cntrl_turn);
    v_3 = (event_dir==2);
    v_5 = (v_3||v_4);
    if (v_5) {
      r_St_1_FORWARD = true;
      s_St_1_FORWARD_1 = true;
    } else {
      r_St_1_FORWARD = self->pnr;
      s_St_1_FORWARD_1 = false;
    };
    r = r_St_1_FORWARD;
    s_1 = s_St_1_FORWARD_1;
  };
  ck_2_1 = s_1;
  if (ck_2_1) {
    mode_St_1_BACKWARD = 2;
    _out->mode = mode_St_1_BACKWARD;
    velocity_St_1_BACKWARD = 255;
    _out->velocity = velocity_St_1_BACKWARD;
    nr_St_1_BACKWARD = false;
    nr = nr_St_1_BACKWARD;
    ns_St_1_BACKWARD_1 = true;
    ns_1 = ns_St_1_BACKWARD_1;
  } else {
    mode_St_1_FORWARD = 1;
    velocity_St_1_FORWARD = 255;
    nr_St_1_FORWARD = false;
    ns_St_1_FORWARD_1 = false;
    _out->mode = mode_St_1_FORWARD;
    _out->velocity = velocity_St_1_FORWARD;
    nr = nr_St_1_FORWARD;
    ns_1 = ns_St_1_FORWARD_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Model__controller_reset(Model__controller_mem* self) {
  self->pnr = false;
  self->ck_8_1 = false;
  self->pnr_1 = false;
  self->ck_6_1 = false;
  self->pnr_2 = false;
  self->ck_4_1 = false;
  self->pnr_3 = false;
  self->ck_1 = false;
}

void Model__controller_step(int distance_left, int distance_right,
                            int event_dir_left, int event_dir_right,
                            Model__controller_out* _out,
                            Model__controller_mem* self) {
  Controller_controller__controller_controller_out Controller_controller__controller_controller_out_st;
  
  int nr_St_2_BACKWARD;
  int ns_St_2_BACKWARD_1;
  int velocity_1_St_2_BACKWARD;
  int mode_1_St_2_BACKWARD;
  int nr_St_2_FORWARD;
  int ns_St_2_FORWARD_1;
  int velocity_1_St_2_FORWARD;
  int mode_1_St_2_FORWARD;
  int ck_9_1;
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int r_St_2_BACKWARD;
  int s_St_2_BACKWARD_1;
  int r_St_2_FORWARD;
  int s_St_2_FORWARD_1;
  int nr_1_St_3_NO_OBSTACLE;
  int ns_1_St_3_NO_OBSTACLE_1;
  int obs_1_St_3_NO_OBSTACLE;
  int nr_1_St_3_OBSTACLE;
  int ns_1_St_3_OBSTACLE_1;
  int obs_1_St_3_OBSTACLE;
  int ck_7_1;
  int v_30;
  int v_29;
  int r_1_St_3_NO_OBSTACLE;
  int s_1_St_3_NO_OBSTACLE_1;
  int r_1_St_3_OBSTACLE;
  int s_1_St_3_OBSTACLE_1;
  int nr_2_St_4_BACKWARD;
  int ns_2_St_4_BACKWARD_1;
  int velocity_St_4_BACKWARD;
  int mode_St_4_BACKWARD;
  int nr_2_St_4_FORWARD;
  int ns_2_St_4_FORWARD_1;
  int velocity_St_4_FORWARD;
  int mode_St_4_FORWARD;
  int ck_5_1;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int r_2_St_4_BACKWARD;
  int s_2_St_4_BACKWARD_1;
  int r_2_St_4_FORWARD;
  int s_2_St_4_FORWARD_1;
  int nr_3_St_5_NO_OBSTACLE;
  int ns_3_St_5_NO_OBSTACLE_1;
  int obs_St_5_NO_OBSTACLE;
  int nr_3_St_5_OBSTACLE;
  int ns_3_St_5_OBSTACLE_1;
  int obs_St_5_OBSTACLE;
  int ck_3_1;
  int v_23;
  int v_22;
  int r_3_St_5_NO_OBSTACLE;
  int s_3_St_5_NO_OBSTACLE_1;
  int r_3_St_5_OBSTACLE;
  int s_3_St_5_OBSTACLE_1;
  int s_3_1;
  int ns_3_1;
  int r_3;
  int nr_3;
  int s_2_1;
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_1_1;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_1_2;
  int ns_1_2;
  int r;
  int nr;
  int event_dir_1;
  int cntrl_turn_1;
  int mode_1;
  int velocity_1;
  int dist_1;
  int obs_1;
  int event_dir;
  int cntrl_turn;
  int mode;
  int velocity;
  int dist;
  int obs;
  int rule3;
  int rule2;
  int rule1;
  int v;
  int v_6;
  int v_7;
  int v_8;
  int v_9;
  int v_10;
  int v_11;
  int v_12;
  int v_13;
  int v_14;
  int v_15;
  int v_16;
  int v_17;
  int v_18;
  int v_19;
  int v_20;
  int v_21;
  int cntrl_turn_r;
  int cntrl_turn_l;
  event_dir_1 = event_dir_right;
  dist_1 = distance_right;
  event_dir = event_dir_left;
  dist = distance_left;
  if (self->ck_8_1) {
    v_31 = (event_dir_1==1);
  } else {
    v_33 = (event_dir_1==2);
  };
  if (self->ck_6_1) {
    v_29 = (dist_1<=45);
    if (v_29) {
      r_1_St_3_NO_OBSTACLE = true;
    } else {
      r_1_St_3_NO_OBSTACLE = self->pnr_1;
    };
    r_1 = r_1_St_3_NO_OBSTACLE;
    if (v_29) {
      s_1_St_3_NO_OBSTACLE_1 = false;
    } else {
      s_1_St_3_NO_OBSTACLE_1 = true;
    };
    s_1_1 = s_1_St_3_NO_OBSTACLE_1;
  } else {
    v_30 = (dist_1>45);
    if (v_30) {
      r_1_St_3_OBSTACLE = true;
      s_1_St_3_OBSTACLE_1 = true;
    } else {
      r_1_St_3_OBSTACLE = self->pnr_1;
      s_1_St_3_OBSTACLE_1 = false;
    };
    r_1 = r_1_St_3_OBSTACLE;
    s_1_1 = s_1_St_3_OBSTACLE_1;
  };
  ck_7_1 = s_1_1;
  if (ck_7_1) {
    obs_1_St_3_NO_OBSTACLE = false;
    obs_1 = obs_1_St_3_NO_OBSTACLE;
    nr_1_St_3_NO_OBSTACLE = false;
    nr_1 = nr_1_St_3_NO_OBSTACLE;
    ns_1_St_3_NO_OBSTACLE_1 = true;
    ns_1_1 = ns_1_St_3_NO_OBSTACLE_1;
  } else {
    obs_1_St_3_OBSTACLE = true;
    nr_1_St_3_OBSTACLE = false;
    ns_1_St_3_OBSTACLE_1 = false;
    obs_1 = obs_1_St_3_OBSTACLE;
    nr_1 = nr_1_St_3_OBSTACLE;
    ns_1_1 = ns_1_St_3_OBSTACLE_1;
  };
  _out->obs_right = obs_1;
  if (self->ck_4_1) {
    v_24 = (event_dir==1);
  } else {
    v_26 = (event_dir==2);
  };
  if (self->ck_1) {
    v_22 = (dist<=45);
    if (v_22) {
      r_3_St_5_NO_OBSTACLE = true;
    } else {
      r_3_St_5_NO_OBSTACLE = self->pnr_3;
    };
    r_3 = r_3_St_5_NO_OBSTACLE;
    if (v_22) {
      s_3_St_5_NO_OBSTACLE_1 = false;
    } else {
      s_3_St_5_NO_OBSTACLE_1 = true;
    };
    s_3_1 = s_3_St_5_NO_OBSTACLE_1;
  } else {
    v_23 = (dist>45);
    if (v_23) {
      r_3_St_5_OBSTACLE = true;
      s_3_St_5_OBSTACLE_1 = true;
    } else {
      r_3_St_5_OBSTACLE = self->pnr_3;
      s_3_St_5_OBSTACLE_1 = false;
    };
    r_3 = r_3_St_5_OBSTACLE;
    s_3_1 = s_3_St_5_OBSTACLE_1;
  };
  ck_3_1 = s_3_1;
  Controller_controller__controller_controller_step(v_22, v_23, v_24, v_26,
                                                    v_29, v_30, v_31, v_33,
                                                    self->ck_1, self->pnr_3,
                                                    self->ck_4_1,
                                                    self->pnr_2,
                                                    self->ck_6_1,
                                                    self->pnr_1,
                                                    self->ck_8_1, self->pnr,
                                                    true, true,
                                                    &Controller_controller__controller_controller_out_st);
  cntrl_turn_r = Controller_controller__controller_controller_out_st.controller_cntrl_turn_r;
  cntrl_turn_l = Controller_controller__controller_controller_out_st.controller_cntrl_turn_l;
  cntrl_turn_1 = cntrl_turn_l;
  cntrl_turn = cntrl_turn_r;
  if (self->ck_8_1) {
    v_32 = (v_31&&cntrl_turn_1);
    if (v_32) {
      r_St_2_BACKWARD = true;
    } else {
      r_St_2_BACKWARD = self->pnr;
    };
    r = r_St_2_BACKWARD;
    if (v_32) {
      s_St_2_BACKWARD_1 = false;
    } else {
      s_St_2_BACKWARD_1 = true;
    };
    s_1_2 = s_St_2_BACKWARD_1;
  } else {
    v_34 = !(cntrl_turn_1);
    v_35 = (v_33||v_34);
    if (v_35) {
      r_St_2_FORWARD = true;
      s_St_2_FORWARD_1 = true;
    } else {
      r_St_2_FORWARD = self->pnr;
      s_St_2_FORWARD_1 = false;
    };
    r = r_St_2_FORWARD;
    s_1_2 = s_St_2_FORWARD_1;
  };
  ck_9_1 = s_1_2;
  if (ck_9_1) {
    mode_1_St_2_BACKWARD = 2;
    mode_1 = mode_1_St_2_BACKWARD;
    velocity_1_St_2_BACKWARD = 255;
    velocity_1 = velocity_1_St_2_BACKWARD;
    nr_St_2_BACKWARD = false;
    nr = nr_St_2_BACKWARD;
    ns_St_2_BACKWARD_1 = true;
    ns_1_2 = ns_St_2_BACKWARD_1;
  } else {
    mode_1_St_2_FORWARD = 1;
    velocity_1_St_2_FORWARD = 255;
    nr_St_2_FORWARD = false;
    ns_St_2_FORWARD_1 = false;
    mode_1 = mode_1_St_2_FORWARD;
    velocity_1 = velocity_1_St_2_FORWARD;
    nr = nr_St_2_FORWARD;
    ns_1_2 = ns_St_2_FORWARD_1;
  };
  _out->motor_speed_right = velocity_1;
  _out->motor_mode_right = mode_1;
  v_8 = (_out->motor_mode_right==2);
  v_15 = (_out->motor_mode_right==2);
  v_16 = !(v_15);
  v_19 = (_out->motor_mode_right==2);
  if (self->ck_4_1) {
    v_25 = (v_24&&cntrl_turn);
    if (v_25) {
      r_2_St_4_BACKWARD = true;
    } else {
      r_2_St_4_BACKWARD = self->pnr_2;
    };
    r_2 = r_2_St_4_BACKWARD;
    if (v_25) {
      s_2_St_4_BACKWARD_1 = false;
    } else {
      s_2_St_4_BACKWARD_1 = true;
    };
    s_2_1 = s_2_St_4_BACKWARD_1;
  } else {
    v_27 = !(cntrl_turn);
    v_28 = (v_26||v_27);
    if (v_28) {
      r_2_St_4_FORWARD = true;
      s_2_St_4_FORWARD_1 = true;
    } else {
      r_2_St_4_FORWARD = self->pnr_2;
      s_2_St_4_FORWARD_1 = false;
    };
    r_2 = r_2_St_4_FORWARD;
    s_2_1 = s_2_St_4_FORWARD_1;
  };
  ck_5_1 = s_2_1;
  if (ck_5_1) {
    mode_St_4_BACKWARD = 2;
    mode = mode_St_4_BACKWARD;
    velocity_St_4_BACKWARD = 255;
    velocity = velocity_St_4_BACKWARD;
    nr_2_St_4_BACKWARD = false;
    nr_2 = nr_2_St_4_BACKWARD;
    ns_2_St_4_BACKWARD_1 = true;
    ns_2_1 = ns_2_St_4_BACKWARD_1;
  } else {
    mode_St_4_FORWARD = 1;
    velocity_St_4_FORWARD = 255;
    nr_2_St_4_FORWARD = false;
    ns_2_St_4_FORWARD_1 = false;
    mode = mode_St_4_FORWARD;
    velocity = velocity_St_4_FORWARD;
    nr_2 = nr_2_St_4_FORWARD;
    ns_2_1 = ns_2_St_4_FORWARD_1;
  };
  _out->motor_speed_left = velocity;
  _out->motor_mode_left = mode;
  v_7 = (_out->motor_mode_left==2);
  v_9 = (v_7&&v_8);
  v_10 = (_out->motor_mode_left==2);
  v_11 = !(v_10);
  v_12 = (_out->obs_right&&v_11);
  v_13 = !(v_12);
  v_14 = (_out->motor_mode_left==2);
  rule2 = (v_13||v_14);
  if (ck_3_1) {
    obs_St_5_NO_OBSTACLE = false;
    obs = obs_St_5_NO_OBSTACLE;
    nr_3_St_5_NO_OBSTACLE = false;
    nr_3 = nr_3_St_5_NO_OBSTACLE;
    ns_3_St_5_NO_OBSTACLE_1 = true;
    ns_3_1 = ns_3_St_5_NO_OBSTACLE_1;
  } else {
    obs_St_5_OBSTACLE = true;
    nr_3_St_5_OBSTACLE = false;
    ns_3_St_5_OBSTACLE_1 = false;
    obs = obs_St_5_OBSTACLE;
    nr_3 = nr_3_St_5_OBSTACLE;
    ns_3_1 = ns_3_St_5_OBSTACLE_1;
  };
  _out->obs_left = obs;
  v = (_out->obs_right&&_out->obs_left);
  v_6 = !(v);
  rule3 = (v_6||v_9);
  v_17 = (_out->obs_left&&v_16);
  v_18 = !(v_17);
  rule1 = (v_18||v_19);
  v_20 = (rule1&&rule2);
  v_21 = (v_20&&rule3);
  self->pnr = nr;
  self->ck_8_1 = ns_1_2;
  self->pnr_1 = nr_1;
  self->ck_6_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->ck_4_1 = ns_2_1;
  self->pnr_3 = nr_3;
  self->ck_1 = ns_3_1;;
}

