/* --- Generated the 20/10/2019 at 2:1 --- */
/* --- heptagon compiler, version 1.03.00 (compiled sun. oct. 20 0:47:43 CET 2019) --- */
/* --- Command line: /home/opam/.opam/4.02/bin/heptc -target c -target z3z -s controller car.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "car.h"

void Car__obstacle_reset(Car__obstacle_mem* self) {
  self->pnr = false;
  self->ck_1_2 = false;
}

void Car__obstacle_step(int dist, Car__obstacle_out* _out,
                        Car__obstacle_mem* self) {
  
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

void Car__motor_reset(Car__motor_mem* self) {
  self->pnr = false;
  self->ck_1 = false;
}

void Car__motor_step(int c, Car__motor_out* _out, Car__motor_mem* self) {
  
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

void Car__movement_reset(Car__movement_mem* self) {
  self->mbc_1 = 0;
  self->pnr = false;
  self->v_39 = true;
  self->v_40 = true;
}

void Car__movement_step(int c, Car__movement_out* _out,
                        Car__movement_mem* self) {
  
  int v_5_2_0;
  int v_5_2_1;
  int v_6;
  int v_5_2;
  int v_5_1;
  int v_4;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int ns_St_2_TURNING_2_0;
  int ns_St_2_TURNING_2_1;
  int ns_St_2_STURNING_2_0;
  int ns_St_2_STURNING_2_1;
  int ns_St_2_MOVING_2_0;
  int ns_St_2_MOVING_2_1;
  int ck_3_2_0;
  int ck_3_2_1;
  int nr_St_2_TURNING;
  int ns_St_2_TURNING_2;
  int ns_St_2_TURNING_1;
  int mbc_St_2_TURNING;
  int turning_St_2_TURNING;
  int nr_St_2_STURNING;
  int ns_St_2_STURNING_2;
  int ns_St_2_STURNING_1;
  int mbc_St_2_STURNING;
  int turning_St_2_STURNING;
  int nr_St_2_MOVING;
  int ns_St_2_MOVING_2;
  int ns_St_2_MOVING_1;
  int mbc_St_2_MOVING;
  int turning_St_2_MOVING;
  int ck_3_2;
  int ck_3_1;
  int v_3;
  int v_2;
  int v;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int v_41;
  int s_St_2_TURNING_2_0;
  int s_St_2_TURNING_2_1;
  int s_St_2_STURNING_2_0;
  int s_St_2_STURNING_2_1;
  int s_St_2_MOVING_2_0;
  int s_St_2_MOVING_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_2_TURNING;
  int s_St_2_TURNING_2;
  int s_St_2_TURNING_1;
  int r_St_2_STURNING;
  int s_St_2_STURNING_2;
  int s_St_2_STURNING_1;
  int r_St_2_MOVING;
  int s_St_2_MOVING_2;
  int s_St_2_MOVING_1;
  int ck_2;
  int ck_1;
  int s_2_0;
  int s_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_2;
  int s_1;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  int mbc;
  ck_1 = self->v_39;
  ck_2 = self->v_40;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_3 = !(c);
      if (v_3) {
        r_St_2_MOVING = true;
        s_St_2_MOVING_1 = true;
        s_St_2_MOVING_2 = false;
      } else {
        r_St_2_MOVING = self->pnr;
        s_St_2_MOVING_1 = true;
        s_St_2_MOVING_2 = true;
      };
      v_45 = r_St_2_MOVING;
      v_41 = s_St_2_MOVING_1;
      v_42 = s_St_2_MOVING_2;
      if (s_St_2_MOVING_1) {
        s_St_2_MOVING_2_1 = s_St_2_MOVING_2;
      } else {
        s_St_2_MOVING_2_0 = s_St_2_MOVING_2;
      };
    } else {
      r_St_2_STURNING = self->pnr;
      v_45 = r_St_2_STURNING;
      s_St_2_STURNING_1 = true;
      v_41 = s_St_2_STURNING_1;
      s_St_2_STURNING_2 = false;
      v_42 = s_St_2_STURNING_2;
      if (s_St_2_STURNING_1) {
        s_St_2_STURNING_2_1 = s_St_2_STURNING_2;
      } else {
        s_St_2_STURNING_2_0 = s_St_2_STURNING_2;
      };
    };
    s_1 = v_41;
    s_2 = v_42;
    r = v_45;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_46 = true;
      v_43 = true;
      v_44 = true;
    } else {
      v = (12==self->mbc_1);
      v_2 = (c&&v);
      if (v_2) {
        r_St_2_TURNING = true;
      } else {
        r_St_2_TURNING = self->pnr;
      };
      v_46 = r_St_2_TURNING;
      if (v_2) {
        s_St_2_TURNING_1 = true;
      } else {
        s_St_2_TURNING_1 = false;
      };
      v_43 = s_St_2_TURNING_1;
      if (v_2) {
        s_St_2_TURNING_2 = false;
      } else {
        s_St_2_TURNING_2 = false;
      };
      v_44 = s_St_2_TURNING_2;
    };
    s_1 = v_43;
    s_2 = v_44;
    r = v_46;
  };
  ck_3_1 = s_1;
  ck_3_2 = s_2;
  if (ck_3_1) {
    ck_3_2_1 = ck_3_2;
    if (ck_3_2_1) {
      mbc_St_2_MOVING = 0;
      turning_St_2_MOVING = false;
      nr_St_2_MOVING = false;
      ns_St_2_MOVING_1 = true;
      ns_St_2_MOVING_2 = true;
      v_31 = mbc_St_2_MOVING;
      v_29 = turning_St_2_MOVING;
      v_37 = nr_St_2_MOVING;
      v_33 = ns_St_2_MOVING_1;
      v_34 = ns_St_2_MOVING_2;
      if (ns_St_2_MOVING_1) {
        ns_St_2_MOVING_2_1 = ns_St_2_MOVING_2;
      } else {
        ns_St_2_MOVING_2_0 = ns_St_2_MOVING_2;
      };
    } else {
      mbc_St_2_STURNING = 0;
      v_31 = mbc_St_2_STURNING;
      turning_St_2_STURNING = true;
      v_29 = turning_St_2_STURNING;
      if (c) {
        v_6 = true;
        v_5_1 = true;
        v_5_2 = true;
      } else {
        v_6 = false;
        v_5_1 = true;
        v_5_2 = false;
      };
      v_4 = !(c);
      if (v_4) {
        nr_St_2_STURNING = true;
      } else {
        nr_St_2_STURNING = v_6;
      };
      v_37 = nr_St_2_STURNING;
      if (v_4) {
        ns_St_2_STURNING_1 = false;
      } else {
        ns_St_2_STURNING_1 = v_5_1;
      };
      v_33 = ns_St_2_STURNING_1;
      if (v_4) {
        ns_St_2_STURNING_2 = false;
      } else {
        ns_St_2_STURNING_2 = v_5_2;
      };
      v_34 = ns_St_2_STURNING_2;
      if (v_5_1) {
        v_5_2_1 = v_5_2;
      } else {
        v_5_2_0 = v_5_2;
      };
      if (ns_St_2_STURNING_1) {
        ns_St_2_STURNING_2_1 = ns_St_2_STURNING_2;
      } else {
        ns_St_2_STURNING_2_0 = ns_St_2_STURNING_2;
      };
    };
    _out->turning = v_29;
    mbc = v_31;
    ns_1 = v_33;
    ns_2 = v_34;
    nr = v_37;
  } else {
    ck_3_2_0 = ck_3_2;
    if (ck_3_2_0) {
      v_32 = 0;
      v_30 = true;
      v_38 = true;
      v_35 = true;
      v_36 = true;
    } else {
      mbc_St_2_TURNING = (self->mbc_1+1);
      v_32 = mbc_St_2_TURNING;
      turning_St_2_TURNING = true;
      v_30 = turning_St_2_TURNING;
      nr_St_2_TURNING = false;
      v_38 = nr_St_2_TURNING;
      ns_St_2_TURNING_1 = false;
      v_35 = ns_St_2_TURNING_1;
      ns_St_2_TURNING_2 = false;
      v_36 = ns_St_2_TURNING_2;
    };
    _out->turning = v_30;
    mbc = v_32;
    ns_1 = v_35;
    ns_2 = v_36;
    nr = v_38;
  };
  _out->ombc = mbc;
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (!(ck_3_1)) {
    if (!(ck_3_2_0)) {
      if (ns_St_2_TURNING_1) {
        ns_St_2_TURNING_2_1 = ns_St_2_TURNING_2;
      } else {
        ns_St_2_TURNING_2_0 = ns_St_2_TURNING_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (!(ck_1)) {
    if (!(ck_2_0)) {
      if (s_St_2_TURNING_1) {
        s_St_2_TURNING_2_1 = s_St_2_TURNING_2;
      } else {
        s_St_2_TURNING_2_0 = s_St_2_TURNING_2;
      };
    };
  };
  self->mbc_1 = mbc;
  self->pnr = nr;
  self->v_39 = ns_1;
  self->v_40 = ns_2;;
}

void Car__controller_reset(Car__controller_mem* self) {
  self->mbc_2 = 0;
  self->pnr = false;
  self->ck_13_1 = false;
  self->pnr_1 = false;
  self->ck_11_1 = false;
  self->pnr_2 = false;
  self->ck_9_1 = false;
  self->pnr_3 = false;
  self->ck_7_1 = false;
  self->pnr_4 = false;
  self->v_57 = true;
  self->v_58 = true;
  self->pnr_5 = false;
  self->ck_1 = false;
}

void Car__controller_step(int distance, Car__controller_out* _out,
                          Car__controller_mem* self) {
  Controller_controller__controller_controller_out Controller_controller__controller_controller_out_st;
  
  int nr_St_3_BACKWARD;
  int ns_St_3_BACKWARD_1;
  int velocity_3_St_3_BACKWARD;
  int mode_3_St_3_BACKWARD;
  int nr_St_3_FORWARD;
  int ns_St_3_FORWARD_1;
  int velocity_3_St_3_FORWARD;
  int mode_3_St_3_FORWARD;
  int ck_14_1;
  int v_28;
  int r_St_3_BACKWARD;
  int s_St_3_BACKWARD_1;
  int r_St_3_FORWARD;
  int s_St_3_FORWARD_1;
  int nr_1_St_4_BACKWARD;
  int ns_1_St_4_BACKWARD_1;
  int velocity_2_St_4_BACKWARD;
  int mode_2_St_4_BACKWARD;
  int nr_1_St_4_FORWARD;
  int ns_1_St_4_FORWARD_1;
  int velocity_2_St_4_FORWARD;
  int mode_2_St_4_FORWARD;
  int ck_12_1;
  int v_27;
  int r_1_St_4_BACKWARD;
  int s_1_St_4_BACKWARD_1;
  int r_1_St_4_FORWARD;
  int s_1_St_4_FORWARD_1;
  int nr_2_St_5_BACKWARD;
  int ns_2_St_5_BACKWARD_1;
  int velocity_1_St_5_BACKWARD;
  int mode_1_St_5_BACKWARD;
  int nr_2_St_5_FORWARD;
  int ns_2_St_5_FORWARD_1;
  int velocity_1_St_5_FORWARD;
  int mode_1_St_5_FORWARD;
  int ck_10_1;
  int v_26;
  int r_2_St_5_BACKWARD;
  int s_2_St_5_BACKWARD_1;
  int r_2_St_5_FORWARD;
  int s_2_St_5_FORWARD_1;
  int nr_3_St_6_BACKWARD;
  int ns_3_St_6_BACKWARD_1;
  int velocity_St_6_BACKWARD;
  int mode_St_6_BACKWARD;
  int nr_3_St_6_FORWARD;
  int ns_3_St_6_FORWARD_1;
  int velocity_St_6_FORWARD;
  int mode_St_6_FORWARD;
  int ck_8_1;
  int v_25;
  int r_3_St_6_BACKWARD;
  int s_3_St_6_BACKWARD_1;
  int r_3_St_6_FORWARD;
  int s_3_St_6_FORWARD_1;
  int v_23_2_0;
  int v_23_2_1;
  int v_24;
  int v_23_2;
  int v_23_1;
  int v_22;
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
  int v_49;
  int v_48;
  int v_47;
  int ns_4_St_7_TURNING_2_0;
  int ns_4_St_7_TURNING_2_1;
  int ns_4_St_7_STURNING_2_0;
  int ns_4_St_7_STURNING_2_1;
  int ns_4_St_7_MOVING_2_0;
  int ns_4_St_7_MOVING_2_1;
  int ck_6_2_0;
  int ck_6_2_1;
  int nr_4_St_7_TURNING;
  int ns_4_St_7_TURNING_2;
  int ns_4_St_7_TURNING_1;
  int mbc_St_7_TURNING;
  int turning_1_St_7_TURNING;
  int nr_4_St_7_STURNING;
  int ns_4_St_7_STURNING_2;
  int ns_4_St_7_STURNING_1;
  int mbc_St_7_STURNING;
  int turning_1_St_7_STURNING;
  int nr_4_St_7_MOVING;
  int ns_4_St_7_MOVING_2;
  int ns_4_St_7_MOVING_1;
  int mbc_St_7_MOVING;
  int turning_1_St_7_MOVING;
  int ck_6_2;
  int ck_6_1;
  int v_21;
  int v_20;
  int v_19;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v_59;
  int s_4_St_7_TURNING_2_0;
  int s_4_St_7_TURNING_2_1;
  int s_4_St_7_STURNING_2_0;
  int s_4_St_7_STURNING_2_1;
  int s_4_St_7_MOVING_2_0;
  int s_4_St_7_MOVING_2_1;
  int ck_5_2_0;
  int ck_5_2_1;
  int r_4_St_7_TURNING;
  int s_4_St_7_TURNING_2;
  int s_4_St_7_TURNING_1;
  int r_4_St_7_STURNING;
  int s_4_St_7_STURNING_2;
  int s_4_St_7_STURNING_1;
  int r_4_St_7_MOVING;
  int s_4_St_7_MOVING_2;
  int s_4_St_7_MOVING_1;
  int ck_5_2;
  int ck_5_1;
  int nr_5_St_8_NO_OBSTACLE;
  int ns_5_St_8_NO_OBSTACLE_1;
  int obs_1_St_8_NO_OBSTACLE;
  int nr_5_St_8_OBSTACLE;
  int ns_5_St_8_OBSTACLE_1;
  int obs_1_St_8_OBSTACLE;
  int ck_4_1;
  int v_18;
  int v_17;
  int r_5_St_8_NO_OBSTACLE;
  int s_5_St_8_NO_OBSTACLE_1;
  int r_5_St_8_OBSTACLE;
  int s_5_St_8_OBSTACLE_1;
  int s_4_2_0;
  int s_4_2_1;
  int ns_4_2_0;
  int ns_4_2_1;
  int s_5_1;
  int ns_5_1;
  int r_5;
  int nr_5;
  int s_4_2;
  int s_4_1;
  int ns_4_2;
  int ns_4_1;
  int r_4;
  int nr_4;
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
  int c_4;
  int mode_3;
  int velocity_3;
  int c_3;
  int mode_2;
  int velocity_2;
  int c_2;
  int mode_1;
  int velocity_1;
  int c_1;
  int mode;
  int velocity;
  int c;
  int mbc;
  int turning_1;
  int ombc;
  int dist;
  int obs_1;
  int rule;
  int v;
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
  int c_motor4;
  int c_motor3;
  int c_motor2;
  int c_motor1;
  int c_move;
  ck_5_1 = self->v_57;
  ck_5_2 = self->v_58;
  dist = distance;
  if (ck_5_1) {
    ck_5_2_1 = ck_5_2;
    if (!(ck_5_2_1)) {
      r_4_St_7_STURNING = self->pnr_4;
      s_4_St_7_STURNING_1 = true;
      s_4_St_7_STURNING_2 = false;
      if (s_4_St_7_STURNING_1) {
        s_4_St_7_STURNING_2_1 = s_4_St_7_STURNING_2;
      } else {
        s_4_St_7_STURNING_2_0 = s_4_St_7_STURNING_2;
      };
    };
  } else {
    ck_5_2_0 = ck_5_2;
    if (!(ck_5_2_0)) {
      v_19 = (12==self->mbc_2);
    };
  };
  if (self->ck_1) {
    v_17 = (dist<=45);
    if (v_17) {
      r_5_St_8_NO_OBSTACLE = true;
    } else {
      r_5_St_8_NO_OBSTACLE = self->pnr_5;
    };
    r_5 = r_5_St_8_NO_OBSTACLE;
    if (v_17) {
      s_5_St_8_NO_OBSTACLE_1 = false;
    } else {
      s_5_St_8_NO_OBSTACLE_1 = true;
    };
    s_5_1 = s_5_St_8_NO_OBSTACLE_1;
  } else {
    v_18 = (dist>45);
    if (v_18) {
      r_5_St_8_OBSTACLE = true;
      s_5_St_8_OBSTACLE_1 = true;
    } else {
      r_5_St_8_OBSTACLE = self->pnr_5;
      s_5_St_8_OBSTACLE_1 = false;
    };
    r_5 = r_5_St_8_OBSTACLE;
    s_5_1 = s_5_St_8_OBSTACLE_1;
  };
  ck_4_1 = s_5_1;
  Controller_controller__controller_controller_step(v_17, v_18, v_19,
                                                    self->ck_1, self->pnr_5,
                                                    self->v_58, self->v_57,
                                                    self->pnr_4,
                                                    self->ck_7_1,
                                                    self->pnr_3,
                                                    self->ck_9_1,
                                                    self->pnr_2,
                                                    self->ck_11_1,
                                                    self->pnr_1,
                                                    self->ck_13_1, self->pnr,
                                                    true, true, true, true,
                                                    true,
                                                    &Controller_controller__controller_controller_out_st);
  c_motor4 = Controller_controller__controller_controller_out_st.controller_c_motor4;
  c_motor3 = Controller_controller__controller_controller_out_st.controller_c_motor3;
  c_motor2 = Controller_controller__controller_controller_out_st.controller_c_motor2;
  c_motor1 = Controller_controller__controller_controller_out_st.controller_c_motor1;
  c_move = Controller_controller__controller_controller_out_st.controller_c_move;
  c_4 = c_motor4;
  c_3 = c_motor3;
  c_2 = c_motor2;
  c_1 = c_motor1;
  c = c_move;
  if (self->ck_13_1) {
    if (c_4) {
      r_St_3_BACKWARD = true;
    } else {
      r_St_3_BACKWARD = self->pnr;
    };
    r = r_St_3_BACKWARD;
    if (c_4) {
      s_St_3_BACKWARD_1 = false;
    } else {
      s_St_3_BACKWARD_1 = true;
    };
    s_1_2 = s_St_3_BACKWARD_1;
  } else {
    v_28 = !(c_4);
    if (v_28) {
      r_St_3_FORWARD = true;
      s_St_3_FORWARD_1 = true;
    } else {
      r_St_3_FORWARD = self->pnr;
      s_St_3_FORWARD_1 = false;
    };
    r = r_St_3_FORWARD;
    s_1_2 = s_St_3_FORWARD_1;
  };
  ck_14_1 = s_1_2;
  if (ck_14_1) {
    mode_3_St_3_BACKWARD = 2;
    mode_3 = mode_3_St_3_BACKWARD;
    velocity_3_St_3_BACKWARD = 255;
    velocity_3 = velocity_3_St_3_BACKWARD;
    nr_St_3_BACKWARD = false;
    nr = nr_St_3_BACKWARD;
    ns_St_3_BACKWARD_1 = true;
    ns_1_2 = ns_St_3_BACKWARD_1;
  } else {
    mode_3_St_3_FORWARD = 1;
    velocity_3_St_3_FORWARD = 255;
    nr_St_3_FORWARD = false;
    ns_St_3_FORWARD_1 = false;
    mode_3 = mode_3_St_3_FORWARD;
    velocity_3 = velocity_3_St_3_FORWARD;
    nr = nr_St_3_FORWARD;
    ns_1_2 = ns_St_3_FORWARD_1;
  };
  _out->vel4 = velocity_3;
  _out->motor4 = mode_3;
  v_14 = (_out->motor4==2);
  if (self->ck_11_1) {
    if (c_3) {
      r_1_St_4_BACKWARD = true;
    } else {
      r_1_St_4_BACKWARD = self->pnr_1;
    };
    r_1 = r_1_St_4_BACKWARD;
    if (c_3) {
      s_1_St_4_BACKWARD_1 = false;
    } else {
      s_1_St_4_BACKWARD_1 = true;
    };
    s_1_1 = s_1_St_4_BACKWARD_1;
  } else {
    v_27 = !(c_3);
    if (v_27) {
      r_1_St_4_FORWARD = true;
      s_1_St_4_FORWARD_1 = true;
    } else {
      r_1_St_4_FORWARD = self->pnr_1;
      s_1_St_4_FORWARD_1 = false;
    };
    r_1 = r_1_St_4_FORWARD;
    s_1_1 = s_1_St_4_FORWARD_1;
  };
  ck_12_1 = s_1_1;
  if (ck_12_1) {
    mode_2_St_4_BACKWARD = 2;
    mode_2 = mode_2_St_4_BACKWARD;
    velocity_2_St_4_BACKWARD = 255;
    velocity_2 = velocity_2_St_4_BACKWARD;
    nr_1_St_4_BACKWARD = false;
    nr_1 = nr_1_St_4_BACKWARD;
    ns_1_St_4_BACKWARD_1 = true;
    ns_1_1 = ns_1_St_4_BACKWARD_1;
  } else {
    mode_2_St_4_FORWARD = 1;
    velocity_2_St_4_FORWARD = 255;
    nr_1_St_4_FORWARD = false;
    ns_1_St_4_FORWARD_1 = false;
    mode_2 = mode_2_St_4_FORWARD;
    velocity_2 = velocity_2_St_4_FORWARD;
    nr_1 = nr_1_St_4_FORWARD;
    ns_1_1 = ns_1_St_4_FORWARD_1;
  };
  _out->vel3 = velocity_2;
  _out->motor3 = mode_2;
  v_12 = (_out->motor3==2);
  if (self->ck_9_1) {
    if (c_2) {
      r_2_St_5_BACKWARD = true;
    } else {
      r_2_St_5_BACKWARD = self->pnr_2;
    };
    r_2 = r_2_St_5_BACKWARD;
    if (c_2) {
      s_2_St_5_BACKWARD_1 = false;
    } else {
      s_2_St_5_BACKWARD_1 = true;
    };
    s_2_1 = s_2_St_5_BACKWARD_1;
  } else {
    v_26 = !(c_2);
    if (v_26) {
      r_2_St_5_FORWARD = true;
      s_2_St_5_FORWARD_1 = true;
    } else {
      r_2_St_5_FORWARD = self->pnr_2;
      s_2_St_5_FORWARD_1 = false;
    };
    r_2 = r_2_St_5_FORWARD;
    s_2_1 = s_2_St_5_FORWARD_1;
  };
  ck_10_1 = s_2_1;
  if (ck_10_1) {
    mode_1_St_5_BACKWARD = 2;
    mode_1 = mode_1_St_5_BACKWARD;
    velocity_1_St_5_BACKWARD = 255;
    velocity_1 = velocity_1_St_5_BACKWARD;
    nr_2_St_5_BACKWARD = false;
    nr_2 = nr_2_St_5_BACKWARD;
    ns_2_St_5_BACKWARD_1 = true;
    ns_2_1 = ns_2_St_5_BACKWARD_1;
  } else {
    mode_1_St_5_FORWARD = 1;
    velocity_1_St_5_FORWARD = 255;
    nr_2_St_5_FORWARD = false;
    ns_2_St_5_FORWARD_1 = false;
    mode_1 = mode_1_St_5_FORWARD;
    velocity_1 = velocity_1_St_5_FORWARD;
    nr_2 = nr_2_St_5_FORWARD;
    ns_2_1 = ns_2_St_5_FORWARD_1;
  };
  _out->vel2 = velocity_1;
  _out->motor2 = mode_1;
  v_10 = (_out->motor2==1);
  if (self->ck_7_1) {
    if (c_1) {
      r_3_St_6_BACKWARD = true;
    } else {
      r_3_St_6_BACKWARD = self->pnr_3;
    };
    r_3 = r_3_St_6_BACKWARD;
    if (c_1) {
      s_3_St_6_BACKWARD_1 = false;
    } else {
      s_3_St_6_BACKWARD_1 = true;
    };
    s_3_1 = s_3_St_6_BACKWARD_1;
  } else {
    v_25 = !(c_1);
    if (v_25) {
      r_3_St_6_FORWARD = true;
      s_3_St_6_FORWARD_1 = true;
    } else {
      r_3_St_6_FORWARD = self->pnr_3;
      s_3_St_6_FORWARD_1 = false;
    };
    r_3 = r_3_St_6_FORWARD;
    s_3_1 = s_3_St_6_FORWARD_1;
  };
  ck_8_1 = s_3_1;
  if (ck_8_1) {
    mode_St_6_BACKWARD = 2;
    mode = mode_St_6_BACKWARD;
    velocity_St_6_BACKWARD = 255;
    velocity = velocity_St_6_BACKWARD;
    nr_3_St_6_BACKWARD = false;
    nr_3 = nr_3_St_6_BACKWARD;
    ns_3_St_6_BACKWARD_1 = true;
    ns_3_1 = ns_3_St_6_BACKWARD_1;
  } else {
    mode_St_6_FORWARD = 1;
    velocity_St_6_FORWARD = 255;
    nr_3_St_6_FORWARD = false;
    ns_3_St_6_FORWARD_1 = false;
    mode = mode_St_6_FORWARD;
    velocity = velocity_St_6_FORWARD;
    nr_3 = nr_3_St_6_FORWARD;
    ns_3_1 = ns_3_St_6_FORWARD_1;
  };
  _out->vel1 = velocity;
  _out->motor1 = mode;
  v_9 = (_out->motor1==1);
  v_11 = (v_9&&v_10);
  v_13 = (v_11&&v_12);
  v_15 = (v_13&&v_14);
  if (ck_5_1) {
    if (ck_5_2_1) {
      v_21 = !(c);
      if (v_21) {
        r_4_St_7_MOVING = true;
      } else {
        r_4_St_7_MOVING = self->pnr_4;
      };
      v_63 = r_4_St_7_MOVING;
      if (v_21) {
        s_4_St_7_MOVING_1 = true;
      } else {
        s_4_St_7_MOVING_1 = true;
      };
      v_59 = s_4_St_7_MOVING_1;
      if (v_21) {
        s_4_St_7_MOVING_2 = false;
      } else {
        s_4_St_7_MOVING_2 = true;
      };
      v_60 = s_4_St_7_MOVING_2;
      if (s_4_St_7_MOVING_1) {
        s_4_St_7_MOVING_2_1 = s_4_St_7_MOVING_2;
      } else {
        s_4_St_7_MOVING_2_0 = s_4_St_7_MOVING_2;
      };
    } else {
      v_63 = r_4_St_7_STURNING;
      v_59 = s_4_St_7_STURNING_1;
      v_60 = s_4_St_7_STURNING_2;
    };
    s_4_1 = v_59;
    s_4_2 = v_60;
    r_4 = v_63;
  } else {
    if (ck_5_2_0) {
      v_64 = true;
      v_61 = true;
      v_62 = true;
    } else {
      v_20 = (c&&v_19);
      if (v_20) {
        r_4_St_7_TURNING = true;
      } else {
        r_4_St_7_TURNING = self->pnr_4;
      };
      v_64 = r_4_St_7_TURNING;
      if (v_20) {
        s_4_St_7_TURNING_1 = true;
      } else {
        s_4_St_7_TURNING_1 = false;
      };
      v_61 = s_4_St_7_TURNING_1;
      if (v_20) {
        s_4_St_7_TURNING_2 = false;
      } else {
        s_4_St_7_TURNING_2 = false;
      };
      v_62 = s_4_St_7_TURNING_2;
    };
    s_4_1 = v_61;
    s_4_2 = v_62;
    r_4 = v_64;
  };
  ck_6_1 = s_4_1;
  ck_6_2 = s_4_2;
  if (ck_6_1) {
    ck_6_2_1 = ck_6_2;
    if (ck_6_2_1) {
      mbc_St_7_MOVING = 0;
      turning_1_St_7_MOVING = false;
      nr_4_St_7_MOVING = false;
      ns_4_St_7_MOVING_1 = true;
      ns_4_St_7_MOVING_2 = true;
      v_49 = mbc_St_7_MOVING;
      v_47 = turning_1_St_7_MOVING;
      v_55 = nr_4_St_7_MOVING;
      v_51 = ns_4_St_7_MOVING_1;
      v_52 = ns_4_St_7_MOVING_2;
      if (ns_4_St_7_MOVING_1) {
        ns_4_St_7_MOVING_2_1 = ns_4_St_7_MOVING_2;
      } else {
        ns_4_St_7_MOVING_2_0 = ns_4_St_7_MOVING_2;
      };
    } else {
      mbc_St_7_STURNING = 0;
      v_49 = mbc_St_7_STURNING;
      turning_1_St_7_STURNING = true;
      v_47 = turning_1_St_7_STURNING;
      if (c) {
        v_24 = true;
        v_23_1 = true;
        v_23_2 = true;
      } else {
        v_24 = false;
        v_23_1 = true;
        v_23_2 = false;
      };
      v_22 = !(c);
      if (v_22) {
        nr_4_St_7_STURNING = true;
      } else {
        nr_4_St_7_STURNING = v_24;
      };
      v_55 = nr_4_St_7_STURNING;
      if (v_22) {
        ns_4_St_7_STURNING_1 = false;
      } else {
        ns_4_St_7_STURNING_1 = v_23_1;
      };
      v_51 = ns_4_St_7_STURNING_1;
      if (v_22) {
        ns_4_St_7_STURNING_2 = false;
      } else {
        ns_4_St_7_STURNING_2 = v_23_2;
      };
      v_52 = ns_4_St_7_STURNING_2;
      if (v_23_1) {
        v_23_2_1 = v_23_2;
      } else {
        v_23_2_0 = v_23_2;
      };
      if (ns_4_St_7_STURNING_1) {
        ns_4_St_7_STURNING_2_1 = ns_4_St_7_STURNING_2;
      } else {
        ns_4_St_7_STURNING_2_0 = ns_4_St_7_STURNING_2;
      };
    };
    turning_1 = v_47;
    mbc = v_49;
    ns_4_1 = v_51;
    ns_4_2 = v_52;
    nr_4 = v_55;
  } else {
    ck_6_2_0 = ck_6_2;
    if (ck_6_2_0) {
      v_50 = 0;
      v_48 = true;
      v_56 = true;
      v_53 = true;
      v_54 = true;
    } else {
      mbc_St_7_TURNING = (self->mbc_2+1);
      v_50 = mbc_St_7_TURNING;
      turning_1_St_7_TURNING = true;
      v_48 = turning_1_St_7_TURNING;
      nr_4_St_7_TURNING = false;
      v_56 = nr_4_St_7_TURNING;
      ns_4_St_7_TURNING_1 = false;
      v_53 = ns_4_St_7_TURNING_1;
      ns_4_St_7_TURNING_2 = false;
      v_54 = ns_4_St_7_TURNING_2;
    };
    turning_1 = v_48;
    mbc = v_50;
    ns_4_1 = v_53;
    ns_4_2 = v_54;
    nr_4 = v_56;
  };
  ombc = mbc;
  _out->cont = ombc;
  _out->turning = turning_1;
  v_7 = !(_out->turning);
  v_16 = (_out->turning&&v_15);
  if (ns_4_1) {
    ns_4_2_1 = ns_4_2;
  } else {
    ns_4_2_0 = ns_4_2;
  };
  if (!(ck_6_1)) {
    if (!(ck_6_2_0)) {
      if (ns_4_St_7_TURNING_1) {
        ns_4_St_7_TURNING_2_1 = ns_4_St_7_TURNING_2;
      } else {
        ns_4_St_7_TURNING_2_0 = ns_4_St_7_TURNING_2;
      };
    };
  };
  if (s_4_1) {
    s_4_2_1 = s_4_2;
  } else {
    s_4_2_0 = s_4_2;
  };
  if (!(ck_5_1)) {
    if (!(ck_5_2_0)) {
      if (s_4_St_7_TURNING_1) {
        s_4_St_7_TURNING_2_1 = s_4_St_7_TURNING_2;
      } else {
        s_4_St_7_TURNING_2_0 = s_4_St_7_TURNING_2;
      };
    };
  };
  if (ck_4_1) {
    obs_1_St_8_NO_OBSTACLE = false;
    obs_1 = obs_1_St_8_NO_OBSTACLE;
    nr_5_St_8_NO_OBSTACLE = false;
    nr_5 = nr_5_St_8_NO_OBSTACLE;
    ns_5_St_8_NO_OBSTACLE_1 = true;
    ns_5_1 = ns_5_St_8_NO_OBSTACLE_1;
  } else {
    obs_1_St_8_OBSTACLE = true;
    nr_5_St_8_OBSTACLE = false;
    ns_5_St_8_OBSTACLE_1 = false;
    obs_1 = obs_1_St_8_OBSTACLE;
    nr_5 = nr_5_St_8_OBSTACLE;
    ns_5_1 = ns_5_St_8_OBSTACLE_1;
  };
  _out->obs = obs_1;
  v = !(_out->obs);
  v_8 = (v&&v_7);
  rule = (v_8||v_16);
  self->mbc_2 = mbc;
  self->pnr = nr;
  self->ck_13_1 = ns_1_2;
  self->pnr_1 = nr_1;
  self->ck_11_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->ck_9_1 = ns_2_1;
  self->pnr_3 = nr_3;
  self->ck_7_1 = ns_3_1;
  self->pnr_4 = nr_4;
  self->v_57 = ns_4_1;
  self->v_58 = ns_4_2;
  self->pnr_5 = nr_5;
  self->ck_1 = ns_5_1;;
}

