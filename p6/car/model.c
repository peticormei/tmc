/* --- Generated the 21/10/2019 at 15:1 --- */
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

void Model__motor_step(int c, Model__motor_out* _out, Model__motor_mem* self) {
  
  int nr_St_1_BACKWARD;
  int ns_St_1_BACKWARD_1;
  int velocity_St_1_BACKWARD;
  int mode_St_1_BACKWARD;
  int nr_St_1_FORWARD;
  int ns_St_1_FORWARD_1;
  int velocity_St_1_FORWARD;
  int mode_St_1_FORWARD;
  int ck_2_1;
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
    if (c) {
      r_St_1_BACKWARD = true;
    } else {
      r_St_1_BACKWARD = self->pnr;
    };
    r = r_St_1_BACKWARD;
    if (c) {
      s_St_1_BACKWARD_1 = false;
    } else {
      s_St_1_BACKWARD_1 = true;
    };
    s_1 = s_St_1_BACKWARD_1;
  } else {
    v = !(c);
    if (v) {
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
    velocity_St_1_BACKWARD = 100;
    _out->velocity = velocity_St_1_BACKWARD;
    nr_St_1_BACKWARD = false;
    nr = nr_St_1_BACKWARD;
    ns_St_1_BACKWARD_1 = true;
    ns_1 = ns_St_1_BACKWARD_1;
  } else {
    mode_St_1_FORWARD = 1;
    velocity_St_1_FORWARD = 100;
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

void Model__movement_reset(Model__movement_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Model__movement_step(int event, Model__movement_out* _out,
                          Model__movement_mem* self) {
  
  int nr_St_2_TURNING;
  int ns_St_2_TURNING_1;
  int turning_St_2_TURNING;
  int nr_St_2_MOVING;
  int ns_St_2_MOVING_1;
  int turning_St_2_MOVING;
  int ck_3_1;
  int v_2;
  int v;
  int r_St_2_TURNING;
  int s_St_2_TURNING_1;
  int r_St_2_MOVING;
  int s_St_2_MOVING_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_2 = (event==2);
    if (v_2) {
      r_St_2_MOVING = true;
      s_St_2_MOVING_1 = false;
    } else {
      r_St_2_MOVING = self->pnr;
      s_St_2_MOVING_1 = true;
    };
    r = r_St_2_MOVING;
    s_1 = s_St_2_MOVING_1;
  } else {
    v = (event==1);
    if (v) {
      r_St_2_TURNING = true;
    } else {
      r_St_2_TURNING = self->pnr;
    };
    r = r_St_2_TURNING;
    if (v) {
      s_St_2_TURNING_1 = true;
    } else {
      s_St_2_TURNING_1 = false;
    };
    s_1 = s_St_2_TURNING_1;
  };
  ck_3_1 = s_1;
  if (ck_3_1) {
    turning_St_2_MOVING = false;
    nr_St_2_MOVING = false;
    ns_St_2_MOVING_1 = true;
    _out->turning = turning_St_2_MOVING;
    nr = nr_St_2_MOVING;
    ns_1 = ns_St_2_MOVING_1;
  } else {
    turning_St_2_TURNING = true;
    _out->turning = turning_St_2_TURNING;
    nr_St_2_TURNING = false;
    nr = nr_St_2_TURNING;
    ns_St_2_TURNING_1 = false;
    ns_1 = ns_St_2_TURNING_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Model__controller_reset(Model__controller_mem* self) {
  self->pnr = false;
  self->ck_9_1 = false;
  self->pnr_1 = false;
  self->ck_7_1 = false;
  self->pnr_2 = false;
  self->ck_5_1 = true;
  self->pnr_3 = false;
  self->ck_1 = false;
}

void Model__controller_step(int distance, int event,
                            Model__controller_out* _out,
                            Model__controller_mem* self) {
  Controller_controller__controller_controller_out Controller_controller__controller_controller_out_st;
  
  int nr_St_3_BACKWARD;
  int ns_St_3_BACKWARD_1;
  int velocity_1_St_3_BACKWARD;
  int mode_1_St_3_BACKWARD;
  int nr_St_3_FORWARD;
  int ns_St_3_FORWARD_1;
  int velocity_1_St_3_FORWARD;
  int mode_1_St_3_FORWARD;
  int ck_10_1;
  int v_13;
  int r_St_3_BACKWARD;
  int s_St_3_BACKWARD_1;
  int r_St_3_FORWARD;
  int s_St_3_FORWARD_1;
  int nr_1_St_4_BACKWARD;
  int ns_1_St_4_BACKWARD_1;
  int velocity_St_4_BACKWARD;
  int mode_St_4_BACKWARD;
  int nr_1_St_4_FORWARD;
  int ns_1_St_4_FORWARD_1;
  int velocity_St_4_FORWARD;
  int mode_St_4_FORWARD;
  int ck_8_1;
  int v_12;
  int r_1_St_4_BACKWARD;
  int s_1_St_4_BACKWARD_1;
  int r_1_St_4_FORWARD;
  int s_1_St_4_FORWARD_1;
  int nr_2_St_5_TURNING;
  int ns_2_St_5_TURNING_1;
  int turning_1_St_5_TURNING;
  int nr_2_St_5_MOVING;
  int ns_2_St_5_MOVING_1;
  int turning_1_St_5_MOVING;
  int ck_6_1;
  int v_11;
  int v_10;
  int r_2_St_5_TURNING;
  int s_2_St_5_TURNING_1;
  int r_2_St_5_MOVING;
  int s_2_St_5_MOVING_1;
  int nr_3_St_6_NO_OBSTACLE;
  int ns_3_St_6_NO_OBSTACLE_1;
  int obs_1_St_6_NO_OBSTACLE;
  int nr_3_St_6_OBSTACLE;
  int ns_3_St_6_OBSTACLE_1;
  int obs_1_St_6_OBSTACLE;
  int ck_4_1;
  int v_9;
  int v_8;
  int r_3_St_6_NO_OBSTACLE;
  int s_3_St_6_NO_OBSTACLE_1;
  int r_3_St_6_OBSTACLE;
  int s_3_St_6_OBSTACLE_1;
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
  int c_1;
  int mode_1;
  int velocity_1;
  int c;
  int mode;
  int velocity;
  int event_1;
  int turning_1;
  int dist;
  int obs_1;
  int rule;
  int v;
  int v_3;
  int v_4;
  int v_5;
  int v_6;
  int v_7;
  int c_motor_right;
  int c_motor_left;
  event_1 = event;
  dist = distance;
  if (self->ck_5_1) {
    v_11 = (event_1==2);
    if (v_11) {
      r_2_St_5_MOVING = true;
      s_2_St_5_MOVING_1 = false;
    } else {
      r_2_St_5_MOVING = self->pnr_2;
      s_2_St_5_MOVING_1 = true;
    };
    r_2 = r_2_St_5_MOVING;
    s_2_1 = s_2_St_5_MOVING_1;
  } else {
    v_10 = (event_1==1);
    if (v_10) {
      r_2_St_5_TURNING = true;
    } else {
      r_2_St_5_TURNING = self->pnr_2;
    };
    r_2 = r_2_St_5_TURNING;
    if (v_10) {
      s_2_St_5_TURNING_1 = true;
    } else {
      s_2_St_5_TURNING_1 = false;
    };
    s_2_1 = s_2_St_5_TURNING_1;
  };
  ck_6_1 = s_2_1;
  if (ck_6_1) {
    turning_1_St_5_MOVING = false;
    nr_2_St_5_MOVING = false;
    ns_2_St_5_MOVING_1 = true;
    turning_1 = turning_1_St_5_MOVING;
    nr_2 = nr_2_St_5_MOVING;
    ns_2_1 = ns_2_St_5_MOVING_1;
  } else {
    turning_1_St_5_TURNING = true;
    turning_1 = turning_1_St_5_TURNING;
    nr_2_St_5_TURNING = false;
    nr_2 = nr_2_St_5_TURNING;
    ns_2_St_5_TURNING_1 = false;
    ns_2_1 = ns_2_St_5_TURNING_1;
  };
  _out->turning = turning_1;
  v_3 = !(_out->turning);
  if (self->ck_1) {
    v_8 = (dist<=45);
    if (v_8) {
      r_3_St_6_NO_OBSTACLE = true;
    } else {
      r_3_St_6_NO_OBSTACLE = self->pnr_3;
    };
    r_3 = r_3_St_6_NO_OBSTACLE;
    if (v_8) {
      s_3_St_6_NO_OBSTACLE_1 = false;
    } else {
      s_3_St_6_NO_OBSTACLE_1 = true;
    };
    s_3_1 = s_3_St_6_NO_OBSTACLE_1;
  } else {
    v_9 = (dist>45);
    if (v_9) {
      r_3_St_6_OBSTACLE = true;
      s_3_St_6_OBSTACLE_1 = true;
    } else {
      r_3_St_6_OBSTACLE = self->pnr_3;
      s_3_St_6_OBSTACLE_1 = false;
    };
    r_3 = r_3_St_6_OBSTACLE;
    s_3_1 = s_3_St_6_OBSTACLE_1;
  };
  ck_4_1 = s_3_1;
  Controller_controller__controller_controller_step(v_8, v_9, v_10, v_11,
                                                    self->ck_1, self->pnr_3,
                                                    self->ck_5_1,
                                                    self->pnr_2,
                                                    self->ck_7_1,
                                                    self->pnr_1,
                                                    self->ck_9_1, self->pnr,
                                                    true, true,
                                                    &Controller_controller__controller_controller_out_st);
  c_motor_right = Controller_controller__controller_controller_out_st.controller_c_motor_right;
  c_motor_left = Controller_controller__controller_controller_out_st.controller_c_motor_left;
  c_1 = c_motor_right;
  c = c_motor_left;
  if (self->ck_9_1) {
    if (c_1) {
      r_St_3_BACKWARD = true;
    } else {
      r_St_3_BACKWARD = self->pnr;
    };
    r = r_St_3_BACKWARD;
    if (c_1) {
      s_St_3_BACKWARD_1 = false;
    } else {
      s_St_3_BACKWARD_1 = true;
    };
    s_1_2 = s_St_3_BACKWARD_1;
  } else {
    v_13 = !(c_1);
    if (v_13) {
      r_St_3_FORWARD = true;
      s_St_3_FORWARD_1 = true;
    } else {
      r_St_3_FORWARD = self->pnr;
      s_St_3_FORWARD_1 = false;
    };
    r = r_St_3_FORWARD;
    s_1_2 = s_St_3_FORWARD_1;
  };
  ck_10_1 = s_1_2;
  if (ck_10_1) {
    mode_1_St_3_BACKWARD = 2;
    mode_1 = mode_1_St_3_BACKWARD;
    velocity_1_St_3_BACKWARD = 100;
    velocity_1 = velocity_1_St_3_BACKWARD;
    nr_St_3_BACKWARD = false;
    nr = nr_St_3_BACKWARD;
    ns_St_3_BACKWARD_1 = true;
    ns_1_2 = ns_St_3_BACKWARD_1;
  } else {
    mode_1_St_3_FORWARD = 1;
    velocity_1_St_3_FORWARD = 100;
    nr_St_3_FORWARD = false;
    ns_St_3_FORWARD_1 = false;
    mode_1 = mode_1_St_3_FORWARD;
    velocity_1 = velocity_1_St_3_FORWARD;
    nr = nr_St_3_FORWARD;
    ns_1_2 = ns_St_3_FORWARD_1;
  };
  _out->motor_speed_right = velocity_1;
  _out->motor_dir_right = mode_1;
  v_6 = (_out->motor_dir_right==2);
  if (self->ck_7_1) {
    if (c) {
      r_1_St_4_BACKWARD = true;
    } else {
      r_1_St_4_BACKWARD = self->pnr_1;
    };
    r_1 = r_1_St_4_BACKWARD;
    if (c) {
      s_1_St_4_BACKWARD_1 = false;
    } else {
      s_1_St_4_BACKWARD_1 = true;
    };
    s_1_1 = s_1_St_4_BACKWARD_1;
  } else {
    v_12 = !(c);
    if (v_12) {
      r_1_St_4_FORWARD = true;
      s_1_St_4_FORWARD_1 = true;
    } else {
      r_1_St_4_FORWARD = self->pnr_1;
      s_1_St_4_FORWARD_1 = false;
    };
    r_1 = r_1_St_4_FORWARD;
    s_1_1 = s_1_St_4_FORWARD_1;
  };
  ck_8_1 = s_1_1;
  if (ck_8_1) {
    mode_St_4_BACKWARD = 2;
    mode = mode_St_4_BACKWARD;
    velocity_St_4_BACKWARD = 100;
    velocity = velocity_St_4_BACKWARD;
    nr_1_St_4_BACKWARD = false;
    nr_1 = nr_1_St_4_BACKWARD;
    ns_1_St_4_BACKWARD_1 = true;
    ns_1_1 = ns_1_St_4_BACKWARD_1;
  } else {
    mode_St_4_FORWARD = 1;
    velocity_St_4_FORWARD = 100;
    nr_1_St_4_FORWARD = false;
    ns_1_St_4_FORWARD_1 = false;
    mode = mode_St_4_FORWARD;
    velocity = velocity_St_4_FORWARD;
    nr_1 = nr_1_St_4_FORWARD;
    ns_1_1 = ns_1_St_4_FORWARD_1;
  };
  _out->motor_speed_left = velocity;
  _out->motor_dir_left = mode;
  v_5 = (_out->motor_dir_left==1);
  v_7 = (v_5&&v_6);
  if (ck_4_1) {
    obs_1_St_6_NO_OBSTACLE = false;
    obs_1 = obs_1_St_6_NO_OBSTACLE;
    nr_3_St_6_NO_OBSTACLE = false;
    nr_3 = nr_3_St_6_NO_OBSTACLE;
    ns_3_St_6_NO_OBSTACLE_1 = true;
    ns_3_1 = ns_3_St_6_NO_OBSTACLE_1;
  } else {
    obs_1_St_6_OBSTACLE = true;
    nr_3_St_6_OBSTACLE = false;
    ns_3_St_6_OBSTACLE_1 = false;
    obs_1 = obs_1_St_6_OBSTACLE;
    nr_3 = nr_3_St_6_OBSTACLE;
    ns_3_1 = ns_3_St_6_OBSTACLE_1;
  };
  _out->obs = obs_1;
  v = !(_out->obs);
  v_4 = (v&&v_3);
  rule = (v_4||v_7);
  self->pnr = nr;
  self->ck_9_1 = ns_1_2;
  self->pnr_1 = nr_1;
  self->ck_7_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->ck_5_1 = ns_2_1;
  self->pnr_3 = nr_3;
  self->ck_1 = ns_3_1;;
}

