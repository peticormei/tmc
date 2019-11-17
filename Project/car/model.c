/* --- Generated the 17/11/2019 at 13:30 --- */
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

void Model__movement_reset(Model__movement_mem* self) {
  self->iterate_1 = 0;
  self->pnr = false;
  self->v_165 = true;
  self->v_166 = true;
}

void Model__movement_step(int cntrl_dir_left, int cntrl_dir_right,
                          int cntrl_dir_reverse, int cntrl_dir_layer,
                          int direction_layer_2, Model__movement_out* _out,
                          Model__movement_mem* self) {
  
  int v_164;
  int v_163;
  int v_162;
  int v_161;
  int v_160;
  int v_159;
  int v_158;
  int v_157;
  int v_156;
  int v_155;
  int v_154;
  int v_153;
  int ns_St_1_REVERSE_2_0;
  int ns_St_1_REVERSE_2_1;
  int ns_St_1_TURN_RIGHT_2_0;
  int ns_St_1_TURN_RIGHT_2_1;
  int ns_St_1_TURN_LEFT_2_0;
  int ns_St_1_TURN_LEFT_2_1;
  int ns_St_1_AHEAD_2_0;
  int ns_St_1_AHEAD_2_1;
  int ck_2_2_0;
  int ck_2_2_1;
  int nr_St_1_REVERSE;
  int ns_St_1_REVERSE_2;
  int ns_St_1_REVERSE_1;
  int iterate_St_1_REVERSE;
  int reversing_St_1_REVERSE;
  int direction_St_1_REVERSE;
  int nr_St_1_TURN_RIGHT;
  int ns_St_1_TURN_RIGHT_2;
  int ns_St_1_TURN_RIGHT_1;
  int iterate_St_1_TURN_RIGHT;
  int reversing_St_1_TURN_RIGHT;
  int direction_St_1_TURN_RIGHT;
  int nr_St_1_TURN_LEFT;
  int ns_St_1_TURN_LEFT_2;
  int ns_St_1_TURN_LEFT_1;
  int iterate_St_1_TURN_LEFT;
  int reversing_St_1_TURN_LEFT;
  int direction_St_1_TURN_LEFT;
  int nr_St_1_AHEAD;
  int ns_St_1_AHEAD_2;
  int ns_St_1_AHEAD_1;
  int iterate_St_1_AHEAD;
  int reversing_St_1_AHEAD;
  int direction_St_1_AHEAD;
  int ck_2_2;
  int ck_2_1;
  int v_46_2_0;
  int v_46_2_1;
  int v_44_2_0;
  int v_44_2_1;
  int v_47;
  int v_46_2;
  int v_46_1;
  int v_45;
  int v_44_2;
  int v_44_1;
  int v_43;
  int v_42;
  int v_41;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_33_2_0;
  int v_33_2_1;
  int v_31_2_0;
  int v_31_2_1;
  int v_34;
  int v_33_2;
  int v_33_1;
  int v_32;
  int v_31_2;
  int v_31_1;
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
  int v_19_2_0;
  int v_19_2_1;
  int v_17_2_0;
  int v_17_2_1;
  int v_20;
  int v_19_2;
  int v_19_1;
  int v_18;
  int v_17_2;
  int v_17_1;
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
  int v_5_2_0;
  int v_5_2_1;
  int v_6;
  int v_5_2;
  int v_5_1;
  int v_4;
  int v_3;
  int v_2;
  int v;
  int v_172;
  int v_171;
  int v_170;
  int v_169;
  int v_168;
  int v_167;
  int s_St_1_REVERSE_2_0;
  int s_St_1_REVERSE_2_1;
  int s_St_1_TURN_RIGHT_2_0;
  int s_St_1_TURN_RIGHT_2_1;
  int s_St_1_TURN_LEFT_2_0;
  int s_St_1_TURN_LEFT_2_1;
  int s_St_1_AHEAD_2_0;
  int s_St_1_AHEAD_2_1;
  int ck_2_3_0;
  int ck_2_3_1;
  int r_St_1_REVERSE;
  int s_St_1_REVERSE_2;
  int s_St_1_REVERSE_1;
  int r_St_1_TURN_RIGHT;
  int s_St_1_TURN_RIGHT_2;
  int s_St_1_TURN_RIGHT_1;
  int r_St_1_TURN_LEFT;
  int s_St_1_TURN_LEFT_2;
  int s_St_1_TURN_LEFT_1;
  int r_St_1_AHEAD;
  int s_St_1_AHEAD_2;
  int s_St_1_AHEAD_1;
  int ck_2_3;
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
  int iterate;
  ck_1 = self->v_165;
  ck_2_3 = self->v_166;
  if (ck_1) {
    ck_2_3_1 = ck_2_3;
    if (ck_2_3_1) {
      v_43 = !(cntrl_dir_reverse);
      if (v_43) {
        v_45 = true;
        v_44_1 = true;
        v_44_2 = false;
      } else {
        v_45 = self->pnr;
        v_44_1 = true;
        v_44_2 = true;
      };
      v_40 = (direction_layer_2==2);
      v_41 = (v_40&&cntrl_dir_layer);
      v_39 = !(cntrl_dir_left);
      v_42 = (v_39||v_41);
      if (v_42) {
        v_47 = true;
        v_46_1 = false;
        v_46_2 = true;
      } else {
        v_47 = v_45;
        v_46_1 = v_44_1;
        v_46_2 = v_44_2;
      };
      v_36 = (direction_layer_2==3);
      v_37 = (v_36&&cntrl_dir_layer);
      v_35 = !(cntrl_dir_right);
      v_38 = (v_35||v_37);
      if (v_38) {
        r_St_1_AHEAD = true;
        s_St_1_AHEAD_1 = false;
        s_St_1_AHEAD_2 = false;
      } else {
        r_St_1_AHEAD = v_47;
        s_St_1_AHEAD_1 = v_46_1;
        s_St_1_AHEAD_2 = v_46_2;
      };
      v_171 = r_St_1_AHEAD;
      v_167 = s_St_1_AHEAD_1;
      v_168 = s_St_1_AHEAD_2;
      if (v_44_1) {
        v_44_2_1 = v_44_2;
      } else {
        v_44_2_0 = v_44_2;
      };
      if (v_46_1) {
        v_46_2_1 = v_46_2;
      } else {
        v_46_2_0 = v_46_2;
      };
    } else {
      v_3 = (6<=self->iterate_1);
      v_4 = (cntrl_dir_right&&v_3);
      if (v_4) {
        v_6 = true;
        v_5_1 = false;
        v_5_2 = false;
      } else {
        v_6 = self->pnr;
        v_5_1 = true;
        v_5_2 = false;
      };
      v = (6<=self->iterate_1);
      v_2 = (cntrl_dir_left&&v);
      if (v_2) {
        r_St_1_REVERSE = true;
      } else {
        r_St_1_REVERSE = v_6;
      };
      v_171 = r_St_1_REVERSE;
      if (v_2) {
        s_St_1_REVERSE_1 = false;
      } else {
        s_St_1_REVERSE_1 = v_5_1;
      };
      v_167 = s_St_1_REVERSE_1;
      if (v_2) {
        s_St_1_REVERSE_2 = true;
      } else {
        s_St_1_REVERSE_2 = v_5_2;
      };
      v_168 = s_St_1_REVERSE_2;
    };
    s_1 = v_167;
    s_2 = v_168;
    r = v_171;
  } else {
    ck_2_3_0 = ck_2_3;
    if (ck_2_3_0) {
      v_30 = !(cntrl_dir_reverse);
      if (v_30) {
        v_32 = true;
        v_31_1 = true;
        v_31_2 = false;
      } else {
        v_32 = self->pnr;
        v_31_1 = false;
        v_31_2 = true;
      };
      v_26 = (direction_layer_2==2);
      v_27 = !(v_26);
      v_25 = !(cntrl_dir_left);
      v_28 = (v_25||v_27);
      v_29 = (v_28&&cntrl_dir_layer);
      if (v_29) {
        v_34 = true;
        v_33_1 = true;
        v_33_2 = true;
      } else {
        v_34 = v_32;
        v_33_1 = v_31_1;
        v_33_2 = v_31_2;
      };
      v_22 = (direction_layer_2==3);
      v_23 = (v_22&&cntrl_dir_layer);
      v_21 = !(cntrl_dir_right);
      v_24 = (v_21||v_23);
      if (v_24) {
        r_St_1_TURN_LEFT = true;
        s_St_1_TURN_LEFT_1 = false;
        s_St_1_TURN_LEFT_2 = false;
      } else {
        r_St_1_TURN_LEFT = v_34;
        s_St_1_TURN_LEFT_1 = v_33_1;
        s_St_1_TURN_LEFT_2 = v_33_2;
      };
      v_172 = r_St_1_TURN_LEFT;
      v_169 = s_St_1_TURN_LEFT_1;
      v_170 = s_St_1_TURN_LEFT_2;
      if (v_31_1) {
        v_31_2_1 = v_31_2;
      } else {
        v_31_2_0 = v_31_2;
      };
      if (v_33_1) {
        v_33_2_1 = v_33_2;
      } else {
        v_33_2_0 = v_33_2;
      };
      if (s_St_1_TURN_LEFT_1) {
        s_St_1_TURN_LEFT_2_1 = s_St_1_TURN_LEFT_2;
      } else {
        s_St_1_TURN_LEFT_2_0 = s_St_1_TURN_LEFT_2;
      };
    } else {
      v_16 = !(cntrl_dir_reverse);
      if (v_16) {
        v_18 = true;
        v_17_1 = true;
        v_17_2 = false;
      } else {
        v_18 = self->pnr;
        v_17_1 = false;
        v_17_2 = false;
      };
      v_12 = (direction_layer_2==3);
      v_13 = !(v_12);
      v_11 = !(cntrl_dir_left);
      v_14 = (v_11||v_13);
      v_15 = (v_14&&cntrl_dir_layer);
      if (v_15) {
        v_20 = true;
        v_19_1 = true;
        v_19_2 = true;
      } else {
        v_20 = v_18;
        v_19_1 = v_17_1;
        v_19_2 = v_17_2;
      };
      v_8 = (direction_layer_2==2);
      v_9 = (v_8&&cntrl_dir_layer);
      v_7 = !(cntrl_dir_left);
      v_10 = (v_7||v_9);
      if (v_10) {
        r_St_1_TURN_RIGHT = true;
      } else {
        r_St_1_TURN_RIGHT = v_20;
      };
      v_172 = r_St_1_TURN_RIGHT;
      if (v_10) {
        s_St_1_TURN_RIGHT_1 = false;
      } else {
        s_St_1_TURN_RIGHT_1 = v_19_1;
      };
      v_169 = s_St_1_TURN_RIGHT_1;
      if (v_10) {
        s_St_1_TURN_RIGHT_2 = true;
      } else {
        s_St_1_TURN_RIGHT_2 = v_19_2;
      };
      v_170 = s_St_1_TURN_RIGHT_2;
      if (v_17_1) {
        v_17_2_1 = v_17_2;
      } else {
        v_17_2_0 = v_17_2;
      };
      if (v_19_1) {
        v_19_2_1 = v_19_2;
      } else {
        v_19_2_0 = v_19_2;
      };
      if (s_St_1_TURN_RIGHT_1) {
        s_St_1_TURN_RIGHT_2_1 = s_St_1_TURN_RIGHT_2;
      } else {
        s_St_1_TURN_RIGHT_2_0 = s_St_1_TURN_RIGHT_2;
      };
    };
    s_1 = v_169;
    s_2 = v_170;
    r = v_172;
  };
  ck_2_1 = s_1;
  ck_2_2 = s_2;
  if (ck_2_1) {
    ck_2_2_1 = ck_2_2;
    if (ck_2_2_1) {
      iterate_St_1_AHEAD = 0;
      reversing_St_1_AHEAD = false;
      direction_St_1_AHEAD = 1;
      nr_St_1_AHEAD = false;
      ns_St_1_AHEAD_1 = true;
      ns_St_1_AHEAD_2 = true;
      v_157 = iterate_St_1_AHEAD;
      v_155 = reversing_St_1_AHEAD;
      v_153 = direction_St_1_AHEAD;
      v_163 = nr_St_1_AHEAD;
      v_159 = ns_St_1_AHEAD_1;
      v_160 = ns_St_1_AHEAD_2;
    } else {
      iterate_St_1_REVERSE = (self->iterate_1+1);
      v_157 = iterate_St_1_REVERSE;
      reversing_St_1_REVERSE = true;
      v_155 = reversing_St_1_REVERSE;
      direction_St_1_REVERSE = 4;
      v_153 = direction_St_1_REVERSE;
      nr_St_1_REVERSE = false;
      v_163 = nr_St_1_REVERSE;
      ns_St_1_REVERSE_1 = true;
      v_159 = ns_St_1_REVERSE_1;
      ns_St_1_REVERSE_2 = false;
      v_160 = ns_St_1_REVERSE_2;
    };
    _out->direction = v_153;
    _out->reversing = v_155;
    iterate = v_157;
    ns_1 = v_159;
    ns_2 = v_160;
    nr = v_163;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      iterate_St_1_TURN_LEFT = 0;
      reversing_St_1_TURN_LEFT = false;
      direction_St_1_TURN_LEFT = 2;
      nr_St_1_TURN_LEFT = false;
      ns_St_1_TURN_LEFT_1 = false;
      ns_St_1_TURN_LEFT_2 = true;
      v_158 = iterate_St_1_TURN_LEFT;
      v_156 = reversing_St_1_TURN_LEFT;
      v_154 = direction_St_1_TURN_LEFT;
      v_164 = nr_St_1_TURN_LEFT;
      v_161 = ns_St_1_TURN_LEFT_1;
      v_162 = ns_St_1_TURN_LEFT_2;
      if (ns_St_1_TURN_LEFT_1) {
        ns_St_1_TURN_LEFT_2_1 = ns_St_1_TURN_LEFT_2;
      } else {
        ns_St_1_TURN_LEFT_2_0 = ns_St_1_TURN_LEFT_2;
      };
    } else {
      iterate_St_1_TURN_RIGHT = 0;
      v_158 = iterate_St_1_TURN_RIGHT;
      reversing_St_1_TURN_RIGHT = false;
      v_156 = reversing_St_1_TURN_RIGHT;
      direction_St_1_TURN_RIGHT = 3;
      v_154 = direction_St_1_TURN_RIGHT;
      nr_St_1_TURN_RIGHT = false;
      v_164 = nr_St_1_TURN_RIGHT;
      ns_St_1_TURN_RIGHT_1 = false;
      v_161 = ns_St_1_TURN_RIGHT_1;
      ns_St_1_TURN_RIGHT_2 = false;
      v_162 = ns_St_1_TURN_RIGHT_2;
      if (ns_St_1_TURN_RIGHT_1) {
        ns_St_1_TURN_RIGHT_2_1 = ns_St_1_TURN_RIGHT_2;
      } else {
        ns_St_1_TURN_RIGHT_2_0 = ns_St_1_TURN_RIGHT_2;
      };
    };
    _out->direction = v_154;
    _out->reversing = v_156;
    iterate = v_158;
    ns_1 = v_161;
    ns_2 = v_162;
    nr = v_164;
  };
  _out->count = iterate;
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (ck_2_1) {
    if (ck_2_2_1) {
      if (ns_St_1_AHEAD_1) {
        ns_St_1_AHEAD_2_1 = ns_St_1_AHEAD_2;
      } else {
        ns_St_1_AHEAD_2_0 = ns_St_1_AHEAD_2;
      };
    } else {
      if (ns_St_1_REVERSE_1) {
        ns_St_1_REVERSE_2_1 = ns_St_1_REVERSE_2;
      } else {
        ns_St_1_REVERSE_2_0 = ns_St_1_REVERSE_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (ck_1) {
    if (ck_2_3_1) {
      if (s_St_1_AHEAD_1) {
        s_St_1_AHEAD_2_1 = s_St_1_AHEAD_2;
      } else {
        s_St_1_AHEAD_2_0 = s_St_1_AHEAD_2;
      };
    } else {
      if (v_5_1) {
        v_5_2_1 = v_5_2;
      } else {
        v_5_2_0 = v_5_2;
      };
      if (s_St_1_REVERSE_1) {
        s_St_1_REVERSE_2_1 = s_St_1_REVERSE_2;
      } else {
        s_St_1_REVERSE_2_0 = s_St_1_REVERSE_2;
      };
    };
  };
  self->iterate_1 = iterate;
  self->pnr = nr;
  self->v_165 = ns_1;
  self->v_166 = ns_2;;
}

void Model__motor_reset(Model__motor_mem* self) {
  self->pnr = false;
  self->ck_1 = false;
}

void Model__motor_step(int cntrl_motor, Model__motor_out* _out,
                       Model__motor_mem* self) {
  
  int nr_St_2_BACKWARD;
  int ns_St_2_BACKWARD_1;
  int mode_St_2_BACKWARD;
  int velocity_St_2_BACKWARD;
  int nr_St_2_FORWARD;
  int ns_St_2_FORWARD_1;
  int mode_St_2_FORWARD;
  int velocity_St_2_FORWARD;
  int ck_3_1;
  int v;
  int r_St_2_BACKWARD;
  int s_St_2_BACKWARD_1;
  int r_St_2_FORWARD;
  int s_St_2_FORWARD_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (cntrl_motor) {
      r_St_2_BACKWARD = true;
    } else {
      r_St_2_BACKWARD = self->pnr;
    };
    r = r_St_2_BACKWARD;
    if (cntrl_motor) {
      s_St_2_BACKWARD_1 = false;
    } else {
      s_St_2_BACKWARD_1 = true;
    };
    s_1 = s_St_2_BACKWARD_1;
  } else {
    v = !(cntrl_motor);
    if (v) {
      r_St_2_FORWARD = true;
      s_St_2_FORWARD_1 = true;
    } else {
      r_St_2_FORWARD = self->pnr;
      s_St_2_FORWARD_1 = false;
    };
    r = r_St_2_FORWARD;
    s_1 = s_St_2_FORWARD_1;
  };
  ck_3_1 = s_1;
  if (ck_3_1) {
    velocity_St_2_BACKWARD = 255;
    _out->velocity = velocity_St_2_BACKWARD;
    mode_St_2_BACKWARD = 2;
    _out->mode = mode_St_2_BACKWARD;
    nr_St_2_BACKWARD = false;
    nr = nr_St_2_BACKWARD;
    ns_St_2_BACKWARD_1 = true;
    ns_1 = ns_St_2_BACKWARD_1;
  } else {
    velocity_St_2_FORWARD = 255;
    mode_St_2_FORWARD = 1;
    nr_St_2_FORWARD = false;
    ns_St_2_FORWARD_1 = false;
    _out->velocity = velocity_St_2_FORWARD;
    _out->mode = mode_St_2_FORWARD;
    nr = nr_St_2_FORWARD;
    ns_1 = ns_St_2_FORWARD_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Model__controller_reset(Model__controller_mem* self) {
  self->iterate_2 = 0;
  self->pnr = false;
  self->ck_11_1 = false;
  self->pnr_1 = false;
  self->ck_9_1 = false;
  self->pnr_2 = false;
  self->v_185 = true;
  self->v_186 = true;
  self->pnr_3 = false;
  self->ck_5_1 = false;
  self->pnr_4 = false;
  self->ck_1 = false;
}

void Model__controller_step(int distance_left, int distance_right,
                            int direction_layer_2,
                            Model__controller_out* _out,
                            Model__controller_mem* self) {
  Controller_controller__controller_controller_out Controller_controller__controller_controller_out_st;
  
  int nr_St_3_BACKWARD;
  int ns_St_3_BACKWARD_1;
  int mode_1_St_3_BACKWARD;
  int velocity_1_St_3_BACKWARD;
  int nr_St_3_FORWARD;
  int ns_St_3_FORWARD_1;
  int mode_1_St_3_FORWARD;
  int velocity_1_St_3_FORWARD;
  int ck_12_1;
  int v_152;
  int r_St_3_BACKWARD;
  int s_St_3_BACKWARD_1;
  int r_St_3_FORWARD;
  int s_St_3_FORWARD_1;
  int nr_1_St_4_BACKWARD;
  int ns_1_St_4_BACKWARD_1;
  int mode_St_4_BACKWARD;
  int velocity_St_4_BACKWARD;
  int nr_1_St_4_FORWARD;
  int ns_1_St_4_FORWARD_1;
  int mode_St_4_FORWARD;
  int velocity_St_4_FORWARD;
  int ck_10_1;
  int v_151;
  int r_1_St_4_BACKWARD;
  int s_1_St_4_BACKWARD_1;
  int r_1_St_4_FORWARD;
  int s_1_St_4_FORWARD_1;
  int v_184;
  int v_183;
  int v_182;
  int v_181;
  int v_180;
  int v_179;
  int v_178;
  int v_177;
  int v_176;
  int v_175;
  int v_174;
  int v_173;
  int ns_2_St_5_REVERSE_2_0;
  int ns_2_St_5_REVERSE_2_1;
  int ns_2_St_5_TURN_RIGHT_2_0;
  int ns_2_St_5_TURN_RIGHT_2_1;
  int ns_2_St_5_TURN_LEFT_2_0;
  int ns_2_St_5_TURN_LEFT_2_1;
  int ns_2_St_5_AHEAD_2_0;
  int ns_2_St_5_AHEAD_2_1;
  int ck_8_2_0;
  int ck_8_2_1;
  int nr_2_St_5_REVERSE;
  int ns_2_St_5_REVERSE_2;
  int ns_2_St_5_REVERSE_1;
  int iterate_St_5_REVERSE;
  int reversing_1_St_5_REVERSE;
  int direction_St_5_REVERSE;
  int nr_2_St_5_TURN_RIGHT;
  int ns_2_St_5_TURN_RIGHT_2;
  int ns_2_St_5_TURN_RIGHT_1;
  int iterate_St_5_TURN_RIGHT;
  int reversing_1_St_5_TURN_RIGHT;
  int direction_St_5_TURN_RIGHT;
  int nr_2_St_5_TURN_LEFT;
  int ns_2_St_5_TURN_LEFT_2;
  int ns_2_St_5_TURN_LEFT_1;
  int iterate_St_5_TURN_LEFT;
  int reversing_1_St_5_TURN_LEFT;
  int direction_St_5_TURN_LEFT;
  int nr_2_St_5_AHEAD;
  int ns_2_St_5_AHEAD_2;
  int ns_2_St_5_AHEAD_1;
  int iterate_St_5_AHEAD;
  int reversing_1_St_5_AHEAD;
  int direction_St_5_AHEAD;
  int ck_8_2;
  int ck_8_1;
  int v_149_2_0;
  int v_149_2_1;
  int v_147_2_0;
  int v_147_2_1;
  int v_150;
  int v_149_2;
  int v_149_1;
  int v_148;
  int v_147_2;
  int v_147_1;
  int v_146;
  int v_145;
  int v_144;
  int v_143;
  int v_142;
  int v_141;
  int v_140;
  int v_139;
  int v_138;
  int v_136_2_0;
  int v_136_2_1;
  int v_134_2_0;
  int v_134_2_1;
  int v_137;
  int v_136_2;
  int v_136_1;
  int v_135;
  int v_134_2;
  int v_134_1;
  int v_133;
  int v_132;
  int v_131;
  int v_130;
  int v_129;
  int v_128;
  int v_127;
  int v_126;
  int v_125;
  int v_124;
  int v_122_2_0;
  int v_122_2_1;
  int v_120_2_0;
  int v_120_2_1;
  int v_123;
  int v_122_2;
  int v_122_1;
  int v_121;
  int v_120_2;
  int v_120_1;
  int v_119;
  int v_118;
  int v_117;
  int v_116;
  int v_115;
  int v_114;
  int v_113;
  int v_112;
  int v_111;
  int v_110;
  int v_108_2_0;
  int v_108_2_1;
  int v_109;
  int v_108_2;
  int v_108_1;
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int v_192;
  int v_191;
  int v_190;
  int v_189;
  int v_188;
  int v_187;
  int s_2_St_5_REVERSE_2_0;
  int s_2_St_5_REVERSE_2_1;
  int s_2_St_5_TURN_RIGHT_2_0;
  int s_2_St_5_TURN_RIGHT_2_1;
  int s_2_St_5_TURN_LEFT_2_0;
  int s_2_St_5_TURN_LEFT_2_1;
  int s_2_St_5_AHEAD_2_0;
  int s_2_St_5_AHEAD_2_1;
  int ck_7_2_0;
  int ck_7_2_1;
  int r_2_St_5_REVERSE;
  int s_2_St_5_REVERSE_2;
  int s_2_St_5_REVERSE_1;
  int r_2_St_5_TURN_RIGHT;
  int s_2_St_5_TURN_RIGHT_2;
  int s_2_St_5_TURN_RIGHT_1;
  int r_2_St_5_TURN_LEFT;
  int s_2_St_5_TURN_LEFT_2;
  int s_2_St_5_TURN_LEFT_1;
  int r_2_St_5_AHEAD;
  int s_2_St_5_AHEAD_2;
  int s_2_St_5_AHEAD_1;
  int ck_7_2;
  int ck_7_1;
  int nr_3_St_6_NO_OBSTACLE;
  int ns_3_St_6_NO_OBSTACLE_1;
  int obs_1_St_6_NO_OBSTACLE;
  int nr_3_St_6_OBSTACLE;
  int ns_3_St_6_OBSTACLE_1;
  int obs_1_St_6_OBSTACLE;
  int ck_6_1;
  int v_103;
  int v_102;
  int r_3_St_6_NO_OBSTACLE;
  int s_3_St_6_NO_OBSTACLE_1;
  int r_3_St_6_OBSTACLE;
  int s_3_St_6_OBSTACLE_1;
  int nr_4_St_7_NO_OBSTACLE;
  int ns_4_St_7_NO_OBSTACLE_1;
  int obs_St_7_NO_OBSTACLE;
  int nr_4_St_7_OBSTACLE;
  int ns_4_St_7_OBSTACLE_1;
  int obs_St_7_OBSTACLE;
  int ck_4_1;
  int v_101;
  int v_100;
  int r_4_St_7_NO_OBSTACLE;
  int s_4_St_7_NO_OBSTACLE_1;
  int r_4_St_7_OBSTACLE;
  int s_4_St_7_OBSTACLE_1;
  int s_2_2_0;
  int s_2_2_1;
  int ns_2_2_0;
  int ns_2_2_1;
  int s_4_1;
  int ns_4_1;
  int r_4;
  int nr_4;
  int s_3_1;
  int ns_3_1;
  int r_3;
  int nr_3;
  int s_2_2;
  int s_2_1;
  int ns_2_2;
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
  int cntrl_motor_1;
  int velocity_1;
  int mode_1;
  int cntrl_motor;
  int velocity;
  int mode;
  int cntrl_dir_left_1;
  int cntrl_dir_right_1;
  int cntrl_dir_reverse_1;
  int cntrl_dir_layer_1;
  int direction_layer_2_1;
  int iterate;
  int direction;
  int count_1;
  int reversing_1;
  int dist_1;
  int obs_1;
  int dist;
  int obs;
  int rule8;
  int rule7;
  int rule6;
  int rule5;
  int rule4;
  int rule3;
  int rule2;
  int rule1;
  int v;
  int v_48;
  int v_49;
  int v_50;
  int v_51;
  int v_52;
  int v_53;
  int v_54;
  int v_55;
  int v_56;
  int v_57;
  int v_58;
  int v_59;
  int v_60;
  int v_61;
  int v_62;
  int v_63;
  int v_64;
  int v_65;
  int v_66;
  int v_67;
  int v_68;
  int v_69;
  int v_70;
  int v_71;
  int v_72;
  int v_73;
  int v_74;
  int v_75;
  int v_76;
  int v_77;
  int v_78;
  int v_79;
  int v_80;
  int v_81;
  int v_82;
  int v_83;
  int v_84;
  int v_85;
  int v_86;
  int v_87;
  int v_88;
  int v_89;
  int v_90;
  int v_91;
  int v_92;
  int v_93;
  int v_94;
  int v_95;
  int v_96;
  int v_97;
  int v_98;
  int v_99;
  int cntrl_motor_right;
  int cntrl_motor_left;
  int cntrl_dir_right;
  int cntrl_dir_left;
  int cntrl_dir_reverse;
  int cntrl_dir_layer;
  direction_layer_2_1 = direction_layer_2;
  ck_7_1 = self->v_185;
  ck_7_2 = self->v_186;
  dist_1 = distance_right;
  dist = distance_left;
  if (ck_7_1) {
    ck_7_2_1 = ck_7_2;
    if (ck_7_2_1) {
      v_143 = (direction_layer_2_1==2);
      v_139 = (direction_layer_2_1==3);
    } else {
      v_106 = (6<=self->iterate_2);
      v_104 = (6<=self->iterate_2);
    };
  } else {
    ck_7_2_0 = ck_7_2;
    if (ck_7_2_0) {
      v_129 = (direction_layer_2_1==2);
      v_130 = !(v_129);
      v_125 = (direction_layer_2_1==3);
    } else {
      v_115 = (direction_layer_2_1==3);
      v_116 = !(v_115);
      v_111 = (direction_layer_2_1==2);
    };
  };
  if (self->ck_5_1) {
    v_102 = (dist_1<=45);
    if (v_102) {
      r_3_St_6_NO_OBSTACLE = true;
    } else {
      r_3_St_6_NO_OBSTACLE = self->pnr_3;
    };
    r_3 = r_3_St_6_NO_OBSTACLE;
    if (v_102) {
      s_3_St_6_NO_OBSTACLE_1 = false;
    } else {
      s_3_St_6_NO_OBSTACLE_1 = true;
    };
    s_3_1 = s_3_St_6_NO_OBSTACLE_1;
  } else {
    v_103 = (dist_1>45);
    if (v_103) {
      r_3_St_6_OBSTACLE = true;
      s_3_St_6_OBSTACLE_1 = true;
    } else {
      r_3_St_6_OBSTACLE = self->pnr_3;
      s_3_St_6_OBSTACLE_1 = false;
    };
    r_3 = r_3_St_6_OBSTACLE;
    s_3_1 = s_3_St_6_OBSTACLE_1;
  };
  ck_6_1 = s_3_1;
  if (ck_6_1) {
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
  _out->obs_right = obs_1;
  v_68 = !(_out->obs_right);
  v_82 = !(_out->obs_right);
  if (self->ck_1) {
    v_100 = (dist<=45);
    if (v_100) {
      r_4_St_7_NO_OBSTACLE = true;
    } else {
      r_4_St_7_NO_OBSTACLE = self->pnr_4;
    };
    r_4 = r_4_St_7_NO_OBSTACLE;
    if (v_100) {
      s_4_St_7_NO_OBSTACLE_1 = false;
    } else {
      s_4_St_7_NO_OBSTACLE_1 = true;
    };
    s_4_1 = s_4_St_7_NO_OBSTACLE_1;
  } else {
    v_101 = (dist>45);
    if (v_101) {
      r_4_St_7_OBSTACLE = true;
      s_4_St_7_OBSTACLE_1 = true;
    } else {
      r_4_St_7_OBSTACLE = self->pnr_4;
      s_4_St_7_OBSTACLE_1 = false;
    };
    r_4 = r_4_St_7_OBSTACLE;
    s_4_1 = s_4_St_7_OBSTACLE_1;
  };
  ck_4_1 = s_4_1;
  Controller_controller__controller_controller_step(v_100, v_101, v_102,
                                                    v_103, v_104, v_106,
                                                    v_139, v_143, v_111,
                                                    v_115, v_125, v_129,
                                                    self->ck_1, self->pnr_4,
                                                    self->ck_5_1,
                                                    self->pnr_3, self->v_186,
                                                    self->v_185, self->pnr_2,
                                                    self->ck_9_1,
                                                    self->pnr_1,
                                                    self->ck_11_1, self->pnr,
                                                    true, true, true, true,
                                                    true, true,
                                                    &Controller_controller__controller_controller_out_st);
  cntrl_motor_right = Controller_controller__controller_controller_out_st.controller_cntrl_motor_right;
  cntrl_motor_left = Controller_controller__controller_controller_out_st.controller_cntrl_motor_left;
  cntrl_dir_right = Controller_controller__controller_controller_out_st.controller_cntrl_dir_right;
  cntrl_dir_left = Controller_controller__controller_controller_out_st.controller_cntrl_dir_left;
  cntrl_dir_reverse = Controller_controller__controller_controller_out_st.controller_cntrl_dir_reverse;
  cntrl_dir_layer = Controller_controller__controller_controller_out_st.controller_cntrl_dir_layer;
  cntrl_motor_1 = cntrl_motor_right;
  cntrl_motor = cntrl_motor_left;
  cntrl_dir_left_1 = cntrl_dir_left;
  cntrl_dir_right_1 = cntrl_dir_right;
  cntrl_dir_reverse_1 = cntrl_dir_reverse;
  cntrl_dir_layer_1 = cntrl_dir_layer;
  if (self->ck_11_1) {
    if (cntrl_motor_1) {
      r_St_3_BACKWARD = true;
    } else {
      r_St_3_BACKWARD = self->pnr;
    };
    r = r_St_3_BACKWARD;
    if (cntrl_motor_1) {
      s_St_3_BACKWARD_1 = false;
    } else {
      s_St_3_BACKWARD_1 = true;
    };
    s_1_2 = s_St_3_BACKWARD_1;
  } else {
    v_152 = !(cntrl_motor_1);
    if (v_152) {
      r_St_3_FORWARD = true;
      s_St_3_FORWARD_1 = true;
    } else {
      r_St_3_FORWARD = self->pnr;
      s_St_3_FORWARD_1 = false;
    };
    r = r_St_3_FORWARD;
    s_1_2 = s_St_3_FORWARD_1;
  };
  ck_12_1 = s_1_2;
  if (ck_12_1) {
    velocity_1_St_3_BACKWARD = 255;
    velocity_1 = velocity_1_St_3_BACKWARD;
    mode_1_St_3_BACKWARD = 2;
    mode_1 = mode_1_St_3_BACKWARD;
    nr_St_3_BACKWARD = false;
    nr = nr_St_3_BACKWARD;
    ns_St_3_BACKWARD_1 = true;
    ns_1_2 = ns_St_3_BACKWARD_1;
  } else {
    velocity_1_St_3_FORWARD = 255;
    mode_1_St_3_FORWARD = 1;
    nr_St_3_FORWARD = false;
    ns_St_3_FORWARD_1 = false;
    velocity_1 = velocity_1_St_3_FORWARD;
    mode_1 = mode_1_St_3_FORWARD;
    nr = nr_St_3_FORWARD;
    ns_1_2 = ns_St_3_FORWARD_1;
  };
  _out->motor_mode_right = mode_1;
  v_50 = (_out->motor_mode_right==2);
  v_55 = (_out->motor_mode_right==2);
  v_60 = (_out->motor_mode_right==1);
  v_65 = (_out->motor_mode_right==1);
  _out->motor_speed_right = velocity_1;
  if (self->ck_9_1) {
    if (cntrl_motor) {
      r_1_St_4_BACKWARD = true;
    } else {
      r_1_St_4_BACKWARD = self->pnr_1;
    };
    r_1 = r_1_St_4_BACKWARD;
    if (cntrl_motor) {
      s_1_St_4_BACKWARD_1 = false;
    } else {
      s_1_St_4_BACKWARD_1 = true;
    };
    s_1_1 = s_1_St_4_BACKWARD_1;
  } else {
    v_151 = !(cntrl_motor);
    if (v_151) {
      r_1_St_4_FORWARD = true;
      s_1_St_4_FORWARD_1 = true;
    } else {
      r_1_St_4_FORWARD = self->pnr_1;
      s_1_St_4_FORWARD_1 = false;
    };
    r_1 = r_1_St_4_FORWARD;
    s_1_1 = s_1_St_4_FORWARD_1;
  };
  ck_10_1 = s_1_1;
  if (ck_10_1) {
    velocity_St_4_BACKWARD = 255;
    velocity = velocity_St_4_BACKWARD;
    mode_St_4_BACKWARD = 2;
    mode = mode_St_4_BACKWARD;
    nr_1_St_4_BACKWARD = false;
    nr_1 = nr_1_St_4_BACKWARD;
    ns_1_St_4_BACKWARD_1 = true;
    ns_1_1 = ns_1_St_4_BACKWARD_1;
  } else {
    velocity_St_4_FORWARD = 255;
    mode_St_4_FORWARD = 1;
    nr_1_St_4_FORWARD = false;
    ns_1_St_4_FORWARD_1 = false;
    velocity = velocity_St_4_FORWARD;
    mode = mode_St_4_FORWARD;
    nr_1 = nr_1_St_4_FORWARD;
    ns_1_1 = ns_1_St_4_FORWARD_1;
  };
  _out->motor_mode_left = mode;
  v_49 = (_out->motor_mode_left==2);
  v_51 = (v_49&&v_50);
  v_54 = (_out->motor_mode_left==1);
  v_56 = (v_54&&v_55);
  v_59 = (_out->motor_mode_left==2);
  v_61 = (v_59&&v_60);
  v_64 = (_out->motor_mode_left==1);
  v_66 = (v_64&&v_65);
  _out->motor_speed_left = velocity;
  if (ck_7_1) {
    if (ck_7_2_1) {
      v_146 = !(cntrl_dir_reverse_1);
      if (v_146) {
        v_148 = true;
        v_147_1 = true;
        v_147_2 = false;
      } else {
        v_148 = self->pnr_2;
        v_147_1 = true;
        v_147_2 = true;
      };
      v_144 = (v_143&&cntrl_dir_layer_1);
      v_142 = !(cntrl_dir_left_1);
      v_145 = (v_142||v_144);
      if (v_145) {
        v_150 = true;
        v_149_1 = false;
        v_149_2 = true;
      } else {
        v_150 = v_148;
        v_149_1 = v_147_1;
        v_149_2 = v_147_2;
      };
      v_140 = (v_139&&cntrl_dir_layer_1);
      v_138 = !(cntrl_dir_right_1);
      v_141 = (v_138||v_140);
      if (v_141) {
        r_2_St_5_AHEAD = true;
        s_2_St_5_AHEAD_1 = false;
        s_2_St_5_AHEAD_2 = false;
      } else {
        r_2_St_5_AHEAD = v_150;
        s_2_St_5_AHEAD_1 = v_149_1;
        s_2_St_5_AHEAD_2 = v_149_2;
      };
      v_191 = r_2_St_5_AHEAD;
      v_187 = s_2_St_5_AHEAD_1;
      v_188 = s_2_St_5_AHEAD_2;
      if (v_147_1) {
        v_147_2_1 = v_147_2;
      } else {
        v_147_2_0 = v_147_2;
      };
      if (v_149_1) {
        v_149_2_1 = v_149_2;
      } else {
        v_149_2_0 = v_149_2;
      };
    } else {
      v_107 = (cntrl_dir_right_1&&v_106);
      if (v_107) {
        v_109 = true;
        v_108_1 = false;
        v_108_2 = false;
      } else {
        v_109 = self->pnr_2;
        v_108_1 = true;
        v_108_2 = false;
      };
      v_105 = (cntrl_dir_left_1&&v_104);
      if (v_105) {
        r_2_St_5_REVERSE = true;
      } else {
        r_2_St_5_REVERSE = v_109;
      };
      v_191 = r_2_St_5_REVERSE;
      if (v_105) {
        s_2_St_5_REVERSE_1 = false;
      } else {
        s_2_St_5_REVERSE_1 = v_108_1;
      };
      v_187 = s_2_St_5_REVERSE_1;
      if (v_105) {
        s_2_St_5_REVERSE_2 = true;
      } else {
        s_2_St_5_REVERSE_2 = v_108_2;
      };
      v_188 = s_2_St_5_REVERSE_2;
    };
    s_2_1 = v_187;
    s_2_2 = v_188;
    r_2 = v_191;
  } else {
    if (ck_7_2_0) {
      v_133 = !(cntrl_dir_reverse_1);
      if (v_133) {
        v_135 = true;
        v_134_1 = true;
        v_134_2 = false;
      } else {
        v_135 = self->pnr_2;
        v_134_1 = false;
        v_134_2 = true;
      };
      v_128 = !(cntrl_dir_left_1);
      v_131 = (v_128||v_130);
      v_132 = (v_131&&cntrl_dir_layer_1);
      if (v_132) {
        v_137 = true;
        v_136_1 = true;
        v_136_2 = true;
      } else {
        v_137 = v_135;
        v_136_1 = v_134_1;
        v_136_2 = v_134_2;
      };
      v_126 = (v_125&&cntrl_dir_layer_1);
      v_124 = !(cntrl_dir_right_1);
      v_127 = (v_124||v_126);
      if (v_127) {
        r_2_St_5_TURN_LEFT = true;
        s_2_St_5_TURN_LEFT_1 = false;
        s_2_St_5_TURN_LEFT_2 = false;
      } else {
        r_2_St_5_TURN_LEFT = v_137;
        s_2_St_5_TURN_LEFT_1 = v_136_1;
        s_2_St_5_TURN_LEFT_2 = v_136_2;
      };
      v_192 = r_2_St_5_TURN_LEFT;
      v_189 = s_2_St_5_TURN_LEFT_1;
      v_190 = s_2_St_5_TURN_LEFT_2;
      if (v_134_1) {
        v_134_2_1 = v_134_2;
      } else {
        v_134_2_0 = v_134_2;
      };
      if (v_136_1) {
        v_136_2_1 = v_136_2;
      } else {
        v_136_2_0 = v_136_2;
      };
      if (s_2_St_5_TURN_LEFT_1) {
        s_2_St_5_TURN_LEFT_2_1 = s_2_St_5_TURN_LEFT_2;
      } else {
        s_2_St_5_TURN_LEFT_2_0 = s_2_St_5_TURN_LEFT_2;
      };
    } else {
      v_119 = !(cntrl_dir_reverse_1);
      if (v_119) {
        v_121 = true;
        v_120_1 = true;
        v_120_2 = false;
      } else {
        v_121 = self->pnr_2;
        v_120_1 = false;
        v_120_2 = false;
      };
      v_114 = !(cntrl_dir_left_1);
      v_117 = (v_114||v_116);
      v_118 = (v_117&&cntrl_dir_layer_1);
      if (v_118) {
        v_123 = true;
        v_122_1 = true;
        v_122_2 = true;
      } else {
        v_123 = v_121;
        v_122_1 = v_120_1;
        v_122_2 = v_120_2;
      };
      v_112 = (v_111&&cntrl_dir_layer_1);
      v_110 = !(cntrl_dir_left_1);
      v_113 = (v_110||v_112);
      if (v_113) {
        r_2_St_5_TURN_RIGHT = true;
      } else {
        r_2_St_5_TURN_RIGHT = v_123;
      };
      v_192 = r_2_St_5_TURN_RIGHT;
      if (v_113) {
        s_2_St_5_TURN_RIGHT_1 = false;
      } else {
        s_2_St_5_TURN_RIGHT_1 = v_122_1;
      };
      v_189 = s_2_St_5_TURN_RIGHT_1;
      if (v_113) {
        s_2_St_5_TURN_RIGHT_2 = true;
      } else {
        s_2_St_5_TURN_RIGHT_2 = v_122_2;
      };
      v_190 = s_2_St_5_TURN_RIGHT_2;
      if (v_120_1) {
        v_120_2_1 = v_120_2;
      } else {
        v_120_2_0 = v_120_2;
      };
      if (v_122_1) {
        v_122_2_1 = v_122_2;
      } else {
        v_122_2_0 = v_122_2;
      };
      if (s_2_St_5_TURN_RIGHT_1) {
        s_2_St_5_TURN_RIGHT_2_1 = s_2_St_5_TURN_RIGHT_2;
      } else {
        s_2_St_5_TURN_RIGHT_2_0 = s_2_St_5_TURN_RIGHT_2;
      };
    };
    s_2_1 = v_189;
    s_2_2 = v_190;
    r_2 = v_192;
  };
  ck_8_1 = s_2_1;
  ck_8_2 = s_2_2;
  if (ck_8_1) {
    ck_8_2_1 = ck_8_2;
    if (ck_8_2_1) {
      iterate_St_5_AHEAD = 0;
      reversing_1_St_5_AHEAD = false;
      direction_St_5_AHEAD = 1;
      nr_2_St_5_AHEAD = false;
      ns_2_St_5_AHEAD_1 = true;
      ns_2_St_5_AHEAD_2 = true;
      v_177 = iterate_St_5_AHEAD;
      v_175 = reversing_1_St_5_AHEAD;
      v_173 = direction_St_5_AHEAD;
      v_183 = nr_2_St_5_AHEAD;
      v_179 = ns_2_St_5_AHEAD_1;
      v_180 = ns_2_St_5_AHEAD_2;
    } else {
      iterate_St_5_REVERSE = (self->iterate_2+1);
      v_177 = iterate_St_5_REVERSE;
      reversing_1_St_5_REVERSE = true;
      v_175 = reversing_1_St_5_REVERSE;
      direction_St_5_REVERSE = 4;
      v_173 = direction_St_5_REVERSE;
      nr_2_St_5_REVERSE = false;
      v_183 = nr_2_St_5_REVERSE;
      ns_2_St_5_REVERSE_1 = true;
      v_179 = ns_2_St_5_REVERSE_1;
      ns_2_St_5_REVERSE_2 = false;
      v_180 = ns_2_St_5_REVERSE_2;
    };
    direction = v_173;
    reversing_1 = v_175;
    iterate = v_177;
    ns_2_1 = v_179;
    ns_2_2 = v_180;
    nr_2 = v_183;
  } else {
    ck_8_2_0 = ck_8_2;
    if (ck_8_2_0) {
      iterate_St_5_TURN_LEFT = 0;
      reversing_1_St_5_TURN_LEFT = false;
      direction_St_5_TURN_LEFT = 2;
      nr_2_St_5_TURN_LEFT = false;
      ns_2_St_5_TURN_LEFT_1 = false;
      ns_2_St_5_TURN_LEFT_2 = true;
      v_178 = iterate_St_5_TURN_LEFT;
      v_176 = reversing_1_St_5_TURN_LEFT;
      v_174 = direction_St_5_TURN_LEFT;
      v_184 = nr_2_St_5_TURN_LEFT;
      v_181 = ns_2_St_5_TURN_LEFT_1;
      v_182 = ns_2_St_5_TURN_LEFT_2;
      if (ns_2_St_5_TURN_LEFT_1) {
        ns_2_St_5_TURN_LEFT_2_1 = ns_2_St_5_TURN_LEFT_2;
      } else {
        ns_2_St_5_TURN_LEFT_2_0 = ns_2_St_5_TURN_LEFT_2;
      };
    } else {
      iterate_St_5_TURN_RIGHT = 0;
      v_178 = iterate_St_5_TURN_RIGHT;
      reversing_1_St_5_TURN_RIGHT = false;
      v_176 = reversing_1_St_5_TURN_RIGHT;
      direction_St_5_TURN_RIGHT = 3;
      v_174 = direction_St_5_TURN_RIGHT;
      nr_2_St_5_TURN_RIGHT = false;
      v_184 = nr_2_St_5_TURN_RIGHT;
      ns_2_St_5_TURN_RIGHT_1 = false;
      v_181 = ns_2_St_5_TURN_RIGHT_1;
      ns_2_St_5_TURN_RIGHT_2 = false;
      v_182 = ns_2_St_5_TURN_RIGHT_2;
      if (ns_2_St_5_TURN_RIGHT_1) {
        ns_2_St_5_TURN_RIGHT_2_1 = ns_2_St_5_TURN_RIGHT_2;
      } else {
        ns_2_St_5_TURN_RIGHT_2_0 = ns_2_St_5_TURN_RIGHT_2;
      };
    };
    direction = v_174;
    reversing_1 = v_176;
    iterate = v_178;
    ns_2_1 = v_181;
    ns_2_2 = v_182;
    nr_2 = v_184;
  };
  count_1 = iterate;
  _out->count = count_1;
  _out->reversing = reversing_1;
  v_70 = !(_out->reversing);
  v_78 = !(_out->reversing);
  v_84 = !(_out->reversing);
  v_89 = !(_out->reversing);
  _out->direction_layer_1 = direction;
  v = (_out->direction_layer_1==4);
  v_48 = !(v);
  rule8 = (v_48||v_51);
  v_52 = (_out->direction_layer_1==3);
  v_53 = !(v_52);
  rule7 = (v_53||v_56);
  v_57 = (_out->direction_layer_1==2);
  v_58 = !(v_57);
  rule6 = (v_58||v_61);
  v_62 = (_out->direction_layer_1==1);
  v_63 = !(v_62);
  rule5 = (v_63||v_66);
  v_73 = (_out->direction_layer_1>=1);
  v_74 = (_out->direction_layer_1<4);
  v_75 = (v_73&&v_74);
  v_81 = (_out->direction_layer_1==2);
  v_87 = (_out->direction_layer_1==3);
  v_92 = (_out->direction_layer_1==4);
  if (ns_2_1) {
    ns_2_2_1 = ns_2_2;
  } else {
    ns_2_2_0 = ns_2_2;
  };
  if (ck_8_1) {
    if (ck_8_2_1) {
      if (ns_2_St_5_AHEAD_1) {
        ns_2_St_5_AHEAD_2_1 = ns_2_St_5_AHEAD_2;
      } else {
        ns_2_St_5_AHEAD_2_0 = ns_2_St_5_AHEAD_2;
      };
    } else {
      if (ns_2_St_5_REVERSE_1) {
        ns_2_St_5_REVERSE_2_1 = ns_2_St_5_REVERSE_2;
      } else {
        ns_2_St_5_REVERSE_2_0 = ns_2_St_5_REVERSE_2;
      };
    };
  };
  if (s_2_1) {
    s_2_2_1 = s_2_2;
  } else {
    s_2_2_0 = s_2_2;
  };
  if (ck_7_1) {
    if (ck_7_2_1) {
      if (s_2_St_5_AHEAD_1) {
        s_2_St_5_AHEAD_2_1 = s_2_St_5_AHEAD_2;
      } else {
        s_2_St_5_AHEAD_2_0 = s_2_St_5_AHEAD_2;
      };
    } else {
      if (v_108_1) {
        v_108_2_1 = v_108_2;
      } else {
        v_108_2_0 = v_108_2;
      };
      if (s_2_St_5_REVERSE_1) {
        s_2_St_5_REVERSE_2_1 = s_2_St_5_REVERSE_2;
      } else {
        s_2_St_5_REVERSE_2_0 = s_2_St_5_REVERSE_2;
      };
    };
  };
  if (ck_4_1) {
    obs_St_7_NO_OBSTACLE = false;
    obs = obs_St_7_NO_OBSTACLE;
    nr_4_St_7_NO_OBSTACLE = false;
    nr_4 = nr_4_St_7_NO_OBSTACLE;
    ns_4_St_7_NO_OBSTACLE_1 = true;
    ns_4_1 = ns_4_St_7_NO_OBSTACLE_1;
  } else {
    obs_St_7_OBSTACLE = true;
    nr_4_St_7_OBSTACLE = false;
    ns_4_St_7_OBSTACLE_1 = false;
    obs = obs_St_7_OBSTACLE;
    nr_4 = nr_4_St_7_OBSTACLE;
    ns_4_1 = ns_4_St_7_OBSTACLE_1;
  };
  _out->obs_left = obs;
  v_67 = !(_out->obs_left);
  v_69 = (v_67&&v_68);
  v_71 = (v_69&&v_70);
  v_72 = !(v_71);
  rule4 = (v_72||v_75);
  v_76 = !(_out->obs_left);
  v_77 = (v_76&&_out->obs_right);
  v_79 = (v_77&&v_78);
  v_80 = !(v_79);
  rule3 = (v_80||v_81);
  v_83 = (_out->obs_left&&v_82);
  v_85 = (v_83&&v_84);
  v_86 = !(v_85);
  rule2 = (v_86||v_87);
  v_88 = (_out->obs_left&&_out->obs_right);
  v_90 = (v_88&&v_89);
  v_91 = !(v_90);
  rule1 = (v_91||v_92);
  v_93 = (rule4&&rule1);
  v_94 = (v_93&&rule2);
  v_95 = (v_94&&rule3);
  v_96 = (v_95&&rule5);
  v_97 = (v_96&&rule6);
  v_98 = (v_97&&rule7);
  v_99 = (v_98&&rule8);
  self->iterate_2 = iterate;
  self->pnr = nr;
  self->ck_11_1 = ns_1_2;
  self->pnr_1 = nr_1;
  self->ck_9_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->v_185 = ns_2_1;
  self->v_186 = ns_2_2;
  self->pnr_3 = nr_3;
  self->ck_5_1 = ns_3_1;
  self->pnr_4 = nr_4;
  self->ck_1 = ns_4_1;;
}

