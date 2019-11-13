/* --- Generated the 13/11/2019 at 14:15 --- */
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
  self->pnr = false;
  self->v_91 = true;
  self->v_92 = true;
}

void Model__movement_step(int cntrl_dir_left, int cntrl_dir_right,
                          int cntrl_dir_reverse, int cntrl_dir_layer,
                          int direction_layer_2, Model__movement_out* _out,
                          Model__movement_mem* self) {
  
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
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
  int direction_St_1_REVERSE;
  int nr_St_1_TURN_RIGHT;
  int ns_St_1_TURN_RIGHT_2;
  int ns_St_1_TURN_RIGHT_1;
  int direction_St_1_TURN_RIGHT;
  int nr_St_1_TURN_LEFT;
  int ns_St_1_TURN_LEFT_2;
  int ns_St_1_TURN_LEFT_1;
  int direction_St_1_TURN_LEFT;
  int nr_St_1_AHEAD;
  int ns_St_1_AHEAD_2;
  int ns_St_1_AHEAD_1;
  int direction_St_1_AHEAD;
  int ck_2_2;
  int ck_2_1;
  int v_26_2_0;
  int v_26_2_1;
  int v_24_2_0;
  int v_24_2_1;
  int v_27;
  int v_26_2;
  int v_26_1;
  int v_25;
  int v_24_2;
  int v_24_1;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_13_2_0;
  int v_13_2_1;
  int v_11_2_0;
  int v_11_2_1;
  int v_14;
  int v_13_2;
  int v_13_1;
  int v_12;
  int v_11_2;
  int v_11_1;
  int v_10;
  int v_8_2_0;
  int v_8_2_1;
  int v_6_2_0;
  int v_6_2_1;
  int v_9;
  int v_8_2;
  int v_8_1;
  int v_7;
  int v_6_2;
  int v_6_1;
  int v_5;
  int v_3_2_0;
  int v_3_2_1;
  int v_2_1_0;
  int v_2_1_1;
  int v_4;
  int v_3_2;
  int v_3_1;
  int v_2;
  int v_2_1;
  int v_1;
  int v_98;
  int v_97;
  int v_96;
  int v_95;
  int v_94;
  int v_93;
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
  ck_1 = self->v_91;
  ck_2_3 = self->v_92;
  if (ck_1) {
    ck_2_3_1 = ck_2_3;
    if (ck_2_3_1) {
      v_21 = (direction_layer_2==2);
      v_22 = (v_21&&cntrl_dir_layer);
      v_20 = !(cntrl_dir_left);
      v_23 = (v_20||v_22);
      if (v_23) {
        v_25 = true;
        v_24_1 = false;
        v_24_2 = true;
      } else {
        v_25 = self->pnr;
        v_24_1 = true;
        v_24_2 = true;
      };
      v_17 = (direction_layer_2==3);
      v_18 = (v_17&&cntrl_dir_layer);
      v_16 = !(cntrl_dir_right);
      v_19 = (v_16||v_18);
      if (v_19) {
        v_27 = true;
        v_26_1 = false;
        v_26_2 = false;
      } else {
        v_27 = v_25;
        v_26_1 = v_24_1;
        v_26_2 = v_24_2;
      };
      v_15 = !(cntrl_dir_reverse);
      if (v_15) {
        r_St_1_AHEAD = true;
        s_St_1_AHEAD_1 = true;
        s_St_1_AHEAD_2 = false;
      } else {
        r_St_1_AHEAD = v_27;
        s_St_1_AHEAD_1 = v_26_1;
        s_St_1_AHEAD_2 = v_26_2;
      };
      v_97 = r_St_1_AHEAD;
      v_93 = s_St_1_AHEAD_1;
      v_94 = s_St_1_AHEAD_2;
      if (v_24_1) {
        v_24_2_1 = v_24_2;
      } else {
        v_24_2_0 = v_24_2;
      };
      if (v_26_1) {
        v_26_2_1 = v_26_2;
      } else {
        v_26_2_0 = v_26_2;
      };
    } else {
      if (cntrl_dir_right) {
        v_2 = true;
      } else {
        v_2 = self->pnr;
      };
      if (cntrl_dir_left) {
        v_4 = true;
      } else {
        v_4 = v_2;
      };
      if (cntrl_dir_reverse) {
        r_St_1_REVERSE = true;
      } else {
        r_St_1_REVERSE = v_4;
      };
      v_97 = r_St_1_REVERSE;
      if (cntrl_dir_right) {
        v_1 = false;
      } else {
        v_1 = true;
      };
      if (cntrl_dir_left) {
        v_3_1 = false;
      } else {
        v_3_1 = v_1;
      };
      if (cntrl_dir_reverse) {
        s_St_1_REVERSE_1 = true;
      } else {
        s_St_1_REVERSE_1 = v_3_1;
      };
      v_93 = s_St_1_REVERSE_1;
      if (cntrl_dir_right) {
        v_2_1 = false;
      } else {
        v_2_1 = false;
      };
      if (cntrl_dir_left) {
        v_3_2 = true;
      } else {
        v_3_2 = v_2_1;
      };
      if (cntrl_dir_reverse) {
        s_St_1_REVERSE_2 = true;
      } else {
        s_St_1_REVERSE_2 = v_3_2;
      };
      v_94 = s_St_1_REVERSE_2;
    };
    s_1 = v_93;
    s_2 = v_94;
    r = v_97;
  } else {
    ck_2_3_0 = ck_2_3;
    if (ck_2_3_0) {
      v_10 = !(cntrl_dir_reverse);
      if (v_10) {
        v_12 = true;
      } else {
        v_12 = self->pnr;
      };
      if (cntrl_dir_right) {
        v_14 = true;
      } else {
        v_14 = v_12;
      };
      if (cntrl_dir_left) {
        r_St_1_TURN_LEFT = true;
      } else {
        r_St_1_TURN_LEFT = v_14;
      };
      if (v_10) {
        v_11_1 = true;
      } else {
        v_11_1 = false;
      };
      if (cntrl_dir_right) {
        v_13_1 = false;
      } else {
        v_13_1 = v_11_1;
      };
      if (cntrl_dir_left) {
        s_St_1_TURN_LEFT_1 = true;
      } else {
        s_St_1_TURN_LEFT_1 = v_13_1;
      };
      if (v_10) {
        v_11_2 = false;
      } else {
        v_11_2 = true;
      };
      if (cntrl_dir_right) {
        v_13_2 = false;
      } else {
        v_13_2 = v_11_2;
      };
      if (cntrl_dir_left) {
        s_St_1_TURN_LEFT_2 = true;
      } else {
        s_St_1_TURN_LEFT_2 = v_13_2;
      };
      v_98 = r_St_1_TURN_LEFT;
      v_95 = s_St_1_TURN_LEFT_1;
      v_96 = s_St_1_TURN_LEFT_2;
      if (v_11_1) {
        v_11_2_1 = v_11_2;
      } else {
        v_11_2_0 = v_11_2;
      };
      if (v_13_1) {
        v_13_2_1 = v_13_2;
      } else {
        v_13_2_0 = v_13_2;
      };
      if (s_St_1_TURN_LEFT_1) {
        s_St_1_TURN_LEFT_2_1 = s_St_1_TURN_LEFT_2;
      } else {
        s_St_1_TURN_LEFT_2_0 = s_St_1_TURN_LEFT_2;
      };
    } else {
      v_5 = !(cntrl_dir_reverse);
      if (v_5) {
        v_7 = true;
      } else {
        v_7 = self->pnr;
      };
      if (cntrl_dir_left) {
        v_9 = true;
      } else {
        v_9 = v_7;
      };
      if (cntrl_dir_right) {
        r_St_1_TURN_RIGHT = true;
      } else {
        r_St_1_TURN_RIGHT = v_9;
      };
      v_98 = r_St_1_TURN_RIGHT;
      if (v_5) {
        v_6_1 = true;
      } else {
        v_6_1 = false;
      };
      if (cntrl_dir_left) {
        v_8_1 = false;
      } else {
        v_8_1 = v_6_1;
      };
      if (cntrl_dir_right) {
        s_St_1_TURN_RIGHT_1 = true;
      } else {
        s_St_1_TURN_RIGHT_1 = v_8_1;
      };
      v_95 = s_St_1_TURN_RIGHT_1;
      if (v_5) {
        v_6_2 = false;
      } else {
        v_6_2 = false;
      };
      if (cntrl_dir_left) {
        v_8_2 = true;
      } else {
        v_8_2 = v_6_2;
      };
      if (cntrl_dir_right) {
        s_St_1_TURN_RIGHT_2 = true;
      } else {
        s_St_1_TURN_RIGHT_2 = v_8_2;
      };
      v_96 = s_St_1_TURN_RIGHT_2;
      if (v_6_1) {
        v_6_2_1 = v_6_2;
      } else {
        v_6_2_0 = v_6_2;
      };
      if (v_8_1) {
        v_8_2_1 = v_8_2;
      } else {
        v_8_2_0 = v_8_2;
      };
      if (s_St_1_TURN_RIGHT_1) {
        s_St_1_TURN_RIGHT_2_1 = s_St_1_TURN_RIGHT_2;
      } else {
        s_St_1_TURN_RIGHT_2_0 = s_St_1_TURN_RIGHT_2;
      };
    };
    s_1 = v_95;
    s_2 = v_96;
    r = v_98;
  };
  ck_2_1 = s_1;
  ck_2_2 = s_2;
  if (ck_2_1) {
    ck_2_2_1 = ck_2_2;
    if (ck_2_2_1) {
      direction_St_1_AHEAD = 1;
      nr_St_1_AHEAD = false;
      ns_St_1_AHEAD_1 = true;
      ns_St_1_AHEAD_2 = true;
      v_83 = direction_St_1_AHEAD;
      v_89 = nr_St_1_AHEAD;
      v_85 = ns_St_1_AHEAD_1;
      v_86 = ns_St_1_AHEAD_2;
    } else {
      direction_St_1_REVERSE = 4;
      v_83 = direction_St_1_REVERSE;
      nr_St_1_REVERSE = false;
      v_89 = nr_St_1_REVERSE;
      ns_St_1_REVERSE_1 = true;
      v_85 = ns_St_1_REVERSE_1;
      ns_St_1_REVERSE_2 = false;
      v_86 = ns_St_1_REVERSE_2;
    };
    _out->direction = v_83;
    ns_1 = v_85;
    ns_2 = v_86;
    nr = v_89;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      direction_St_1_TURN_LEFT = 2;
      nr_St_1_TURN_LEFT = false;
      ns_St_1_TURN_LEFT_1 = false;
      ns_St_1_TURN_LEFT_2 = true;
      v_84 = direction_St_1_TURN_LEFT;
      v_90 = nr_St_1_TURN_LEFT;
      v_87 = ns_St_1_TURN_LEFT_1;
      v_88 = ns_St_1_TURN_LEFT_2;
      if (ns_St_1_TURN_LEFT_1) {
        ns_St_1_TURN_LEFT_2_1 = ns_St_1_TURN_LEFT_2;
      } else {
        ns_St_1_TURN_LEFT_2_0 = ns_St_1_TURN_LEFT_2;
      };
    } else {
      direction_St_1_TURN_RIGHT = 3;
      v_84 = direction_St_1_TURN_RIGHT;
      nr_St_1_TURN_RIGHT = false;
      v_90 = nr_St_1_TURN_RIGHT;
      ns_St_1_TURN_RIGHT_1 = false;
      v_87 = ns_St_1_TURN_RIGHT_1;
      ns_St_1_TURN_RIGHT_2 = false;
      v_88 = ns_St_1_TURN_RIGHT_2;
      if (ns_St_1_TURN_RIGHT_1) {
        ns_St_1_TURN_RIGHT_2_1 = ns_St_1_TURN_RIGHT_2;
      } else {
        ns_St_1_TURN_RIGHT_2_0 = ns_St_1_TURN_RIGHT_2;
      };
    };
    _out->direction = v_84;
    ns_1 = v_87;
    ns_2 = v_88;
    nr = v_90;
  };
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
      if (v_1) {
        v_2_1_1 = v_2_1;
      } else {
        v_2_1_0 = v_2_1;
      };
      if (v_3_1) {
        v_3_2_1 = v_3_2;
      } else {
        v_3_2_0 = v_3_2;
      };
      if (s_St_1_REVERSE_1) {
        s_St_1_REVERSE_2_1 = s_St_1_REVERSE_2;
      } else {
        s_St_1_REVERSE_2_0 = s_St_1_REVERSE_2;
      };
    };
  };
  self->pnr = nr;
  self->v_91 = ns_1;
  self->v_92 = ns_2;;
}

void Model__dc_reset(Model__dc_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Model__dc_step(int direction_layer_1, int direction_layer_2,
                    Model__dc_out* _out, Model__dc_mem* self) {
  
  int nr_St_2_NOT_EQUALS;
  int ns_St_2_NOT_EQUALS_1;
  int equals_St_2_NOT_EQUALS;
  int nr_St_2_EQUALS;
  int ns_St_2_EQUALS_1;
  int equals_St_2_EQUALS;
  int ck_3_1;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v;
  int r_St_2_NOT_EQUALS;
  int s_St_2_NOT_EQUALS_1;
  int r_St_2_EQUALS;
  int s_St_2_EQUALS_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_32 = (direction_layer_1>direction_layer_2);
    v_31 = (direction_layer_1<direction_layer_2);
    v_33 = (v_31||v_32);
    if (v_33) {
      r_St_2_EQUALS = true;
      s_St_2_EQUALS_1 = false;
    } else {
      r_St_2_EQUALS = self->pnr;
      s_St_2_EQUALS_1 = true;
    };
    r = r_St_2_EQUALS;
    s_1 = s_St_2_EQUALS_1;
  } else {
    v_28 = (direction_layer_2>direction_layer_1);
    v = (direction_layer_1<direction_layer_2);
    v_29 = (v&&v_28);
    v_30 = !(v_29);
    if (v_30) {
      r_St_2_NOT_EQUALS = true;
    } else {
      r_St_2_NOT_EQUALS = self->pnr;
    };
    r = r_St_2_NOT_EQUALS;
    if (v_30) {
      s_St_2_NOT_EQUALS_1 = true;
    } else {
      s_St_2_NOT_EQUALS_1 = false;
    };
    s_1 = s_St_2_NOT_EQUALS_1;
  };
  ck_3_1 = s_1;
  if (ck_3_1) {
    equals_St_2_EQUALS = true;
    nr_St_2_EQUALS = false;
    ns_St_2_EQUALS_1 = true;
    _out->equals = equals_St_2_EQUALS;
    nr = nr_St_2_EQUALS;
    ns_1 = ns_St_2_EQUALS_1;
  } else {
    equals_St_2_NOT_EQUALS = false;
    _out->equals = equals_St_2_NOT_EQUALS;
    nr_St_2_NOT_EQUALS = false;
    nr = nr_St_2_NOT_EQUALS;
    ns_St_2_NOT_EQUALS_1 = false;
    ns_1 = ns_St_2_NOT_EQUALS_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Model__controller_reset(Model__controller_mem* self) {
  self->pnr = false;
  self->v_107 = true;
  self->v_108 = true;
  self->pnr_1 = false;
  self->ck_5_1 = false;
  self->pnr_2 = false;
  self->ck_1 = false;
}

void Model__controller_step(int distance_left, int distance_right,
                            int direction_layer_2,
                            Model__controller_out* _out,
                            Model__controller_mem* self) {
  Controller_controller__controller_controller_out Controller_controller__controller_controller_out_st;
  
  int v_106;
  int v_105;
  int v_104;
  int v_103;
  int v_102;
  int v_101;
  int v_100;
  int v_99;
  int ns_St_3_REVERSE_2_0;
  int ns_St_3_REVERSE_2_1;
  int ns_St_3_TURN_RIGHT_2_0;
  int ns_St_3_TURN_RIGHT_2_1;
  int ns_St_3_TURN_LEFT_2_0;
  int ns_St_3_TURN_LEFT_2_1;
  int ns_St_3_AHEAD_2_0;
  int ns_St_3_AHEAD_2_1;
  int ck_8_2_0;
  int ck_8_2_1;
  int nr_St_3_REVERSE;
  int ns_St_3_REVERSE_2;
  int ns_St_3_REVERSE_1;
  int direction_St_3_REVERSE;
  int nr_St_3_TURN_RIGHT;
  int ns_St_3_TURN_RIGHT_2;
  int ns_St_3_TURN_RIGHT_1;
  int direction_St_3_TURN_RIGHT;
  int nr_St_3_TURN_LEFT;
  int ns_St_3_TURN_LEFT_2;
  int ns_St_3_TURN_LEFT_1;
  int direction_St_3_TURN_LEFT;
  int nr_St_3_AHEAD;
  int ns_St_3_AHEAD_2;
  int ns_St_3_AHEAD_1;
  int direction_St_3_AHEAD;
  int ck_8_2;
  int ck_8_1;
  int v_81_2_0;
  int v_81_2_1;
  int v_79_2_0;
  int v_79_2_1;
  int v_82;
  int v_81_2;
  int v_81_1;
  int v_80;
  int v_79_2;
  int v_79_1;
  int v_78;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int v_71;
  int v_70;
  int v_68_2_0;
  int v_68_2_1;
  int v_66_2_0;
  int v_66_2_1;
  int v_69;
  int v_68_2;
  int v_68_1;
  int v_67;
  int v_66_2;
  int v_66_1;
  int v_65;
  int v_63_2_0;
  int v_63_2_1;
  int v_61_2_0;
  int v_61_2_1;
  int v_64;
  int v_63_2;
  int v_63_1;
  int v_62;
  int v_61_2;
  int v_61_1;
  int v_60;
  int v_58_2_0;
  int v_58_2_1;
  int v_56_2_0;
  int v_56_2_1;
  int v_59;
  int v_58_2;
  int v_58_1;
  int v_57;
  int v_56_2;
  int v_56_1;
  int v_114;
  int v_113;
  int v_112;
  int v_111;
  int v_110;
  int v_109;
  int s_St_3_REVERSE_2_0;
  int s_St_3_REVERSE_2_1;
  int s_St_3_TURN_RIGHT_2_0;
  int s_St_3_TURN_RIGHT_2_1;
  int s_St_3_TURN_LEFT_2_0;
  int s_St_3_TURN_LEFT_2_1;
  int s_St_3_AHEAD_2_0;
  int s_St_3_AHEAD_2_1;
  int ck_7_2_0;
  int ck_7_2_1;
  int r_St_3_REVERSE;
  int s_St_3_REVERSE_2;
  int s_St_3_REVERSE_1;
  int r_St_3_TURN_RIGHT;
  int s_St_3_TURN_RIGHT_2;
  int s_St_3_TURN_RIGHT_1;
  int r_St_3_TURN_LEFT;
  int s_St_3_TURN_LEFT_2;
  int s_St_3_TURN_LEFT_1;
  int r_St_3_AHEAD;
  int s_St_3_AHEAD_2;
  int s_St_3_AHEAD_1;
  int ck_7_2;
  int ck_7_1;
  int nr_1_St_4_NO_OBSTACLE;
  int ns_1_St_4_NO_OBSTACLE_1;
  int obs_1_St_4_NO_OBSTACLE;
  int nr_1_St_4_OBSTACLE;
  int ns_1_St_4_OBSTACLE_1;
  int obs_1_St_4_OBSTACLE;
  int ck_6_1;
  int v_55;
  int v_54;
  int r_1_St_4_NO_OBSTACLE;
  int s_1_St_4_NO_OBSTACLE_1;
  int r_1_St_4_OBSTACLE;
  int s_1_St_4_OBSTACLE_1;
  int nr_2_St_5_NO_OBSTACLE;
  int ns_2_St_5_NO_OBSTACLE_1;
  int obs_St_5_NO_OBSTACLE;
  int nr_2_St_5_OBSTACLE;
  int ns_2_St_5_OBSTACLE_1;
  int obs_St_5_OBSTACLE;
  int ck_4_1;
  int v_53;
  int v_52;
  int r_2_St_5_NO_OBSTACLE;
  int s_2_St_5_NO_OBSTACLE_1;
  int r_2_St_5_OBSTACLE;
  int s_2_St_5_OBSTACLE_1;
  int s_2_2_0;
  int s_2_2_1;
  int ns_2_2_0;
  int ns_2_2_1;
  int s_2_1;
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_1_1;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_2_2;
  int s_1_2;
  int ns_2_2;
  int ns_1_2;
  int r;
  int nr;
  int cntrl_dir_left_1;
  int cntrl_dir_right_1;
  int cntrl_dir_reverse_1;
  int cntrl_dir_layer_1;
  int direction_layer_2_1;
  int direction;
  int dist_1;
  int obs_1;
  int dist;
  int obs;
  int rule4;
  int rule3;
  int rule2;
  int rule1;
  int v;
  int v_34;
  int v_35;
  int v_36;
  int v_37;
  int v_38;
  int v_39;
  int v_40;
  int v_41;
  int v_42;
  int v_43;
  int v_44;
  int v_45;
  int v_46;
  int v_47;
  int v_48;
  int v_49;
  int v_50;
  int v_51;
  int cntrl_dir_reverse;
  int cntrl_dir_right;
  int cntrl_dir_left;
  int cntrl_dir_layer;
  direction_layer_2_1 = direction_layer_2;
  ck_7_1 = self->v_107;
  ck_7_2 = self->v_108;
  dist_1 = distance_right;
  dist = distance_left;
  if (ck_7_1) {
    ck_7_2_1 = ck_7_2;
    if (ck_7_2_1) {
      v_76 = (direction_layer_2_1==2);
      v_72 = (direction_layer_2_1==3);
    };
  } else {
    ck_7_2_0 = ck_7_2;
  };
  if (self->ck_5_1) {
    v_54 = (dist_1<=45);
    if (v_54) {
      r_1_St_4_NO_OBSTACLE = true;
    } else {
      r_1_St_4_NO_OBSTACLE = self->pnr_1;
    };
    r_1 = r_1_St_4_NO_OBSTACLE;
    if (v_54) {
      s_1_St_4_NO_OBSTACLE_1 = false;
    } else {
      s_1_St_4_NO_OBSTACLE_1 = true;
    };
    s_1_1 = s_1_St_4_NO_OBSTACLE_1;
  } else {
    v_55 = (dist_1>45);
    if (v_55) {
      r_1_St_4_OBSTACLE = true;
      s_1_St_4_OBSTACLE_1 = true;
    } else {
      r_1_St_4_OBSTACLE = self->pnr_1;
      s_1_St_4_OBSTACLE_1 = false;
    };
    r_1 = r_1_St_4_OBSTACLE;
    s_1_1 = s_1_St_4_OBSTACLE_1;
  };
  ck_6_1 = s_1_1;
  if (ck_6_1) {
    obs_1_St_4_NO_OBSTACLE = false;
    obs_1 = obs_1_St_4_NO_OBSTACLE;
    nr_1_St_4_NO_OBSTACLE = false;
    nr_1 = nr_1_St_4_NO_OBSTACLE;
    ns_1_St_4_NO_OBSTACLE_1 = true;
    ns_1_1 = ns_1_St_4_NO_OBSTACLE_1;
  } else {
    obs_1_St_4_OBSTACLE = true;
    nr_1_St_4_OBSTACLE = false;
    ns_1_St_4_OBSTACLE_1 = false;
    obs_1 = obs_1_St_4_OBSTACLE;
    nr_1 = nr_1_St_4_OBSTACLE;
    ns_1_1 = ns_1_St_4_OBSTACLE_1;
  };
  _out->obs_right = obs_1;
  v_34 = !(_out->obs_right);
  v_42 = !(_out->obs_right);
  if (self->ck_1) {
    v_52 = (dist<=45);
    if (v_52) {
      r_2_St_5_NO_OBSTACLE = true;
    } else {
      r_2_St_5_NO_OBSTACLE = self->pnr_2;
    };
    r_2 = r_2_St_5_NO_OBSTACLE;
    if (v_52) {
      s_2_St_5_NO_OBSTACLE_1 = false;
    } else {
      s_2_St_5_NO_OBSTACLE_1 = true;
    };
    s_2_1 = s_2_St_5_NO_OBSTACLE_1;
  } else {
    v_53 = (dist>45);
    if (v_53) {
      r_2_St_5_OBSTACLE = true;
      s_2_St_5_OBSTACLE_1 = true;
    } else {
      r_2_St_5_OBSTACLE = self->pnr_2;
      s_2_St_5_OBSTACLE_1 = false;
    };
    r_2 = r_2_St_5_OBSTACLE;
    s_2_1 = s_2_St_5_OBSTACLE_1;
  };
  ck_4_1 = s_2_1;
  Controller_controller__controller_controller_step(v_52, v_53, v_54, v_55,
                                                    v_72, v_76, self->ck_1,
                                                    self->pnr_2,
                                                    self->ck_5_1,
                                                    self->pnr_1, self->v_108,
                                                    self->v_107, self->pnr,
                                                    true, true, true, true,
                                                    &Controller_controller__controller_controller_out_st);
  cntrl_dir_reverse = Controller_controller__controller_controller_out_st.controller_cntrl_dir_reverse;
  cntrl_dir_right = Controller_controller__controller_controller_out_st.controller_cntrl_dir_right;
  cntrl_dir_left = Controller_controller__controller_controller_out_st.controller_cntrl_dir_left;
  cntrl_dir_layer = Controller_controller__controller_controller_out_st.controller_cntrl_dir_layer;
  cntrl_dir_left_1 = cntrl_dir_left;
  cntrl_dir_right_1 = cntrl_dir_right;
  cntrl_dir_reverse_1 = cntrl_dir_reverse;
  cntrl_dir_layer_1 = cntrl_dir_layer;
  if (ck_7_1) {
    if (ck_7_2_1) {
      v_77 = (v_76&&cntrl_dir_layer_1);
      v_75 = !(cntrl_dir_left_1);
      v_78 = (v_75||v_77);
      if (v_78) {
        v_80 = true;
        v_79_1 = false;
        v_79_2 = true;
      } else {
        v_80 = self->pnr;
        v_79_1 = true;
        v_79_2 = true;
      };
      v_73 = (v_72&&cntrl_dir_layer_1);
      v_71 = !(cntrl_dir_right_1);
      v_74 = (v_71||v_73);
      if (v_74) {
        v_82 = true;
        v_81_1 = false;
        v_81_2 = false;
      } else {
        v_82 = v_80;
        v_81_1 = v_79_1;
        v_81_2 = v_79_2;
      };
      v_70 = !(cntrl_dir_reverse_1);
      if (v_70) {
        r_St_3_AHEAD = true;
        s_St_3_AHEAD_1 = true;
        s_St_3_AHEAD_2 = false;
      } else {
        r_St_3_AHEAD = v_82;
        s_St_3_AHEAD_1 = v_81_1;
        s_St_3_AHEAD_2 = v_81_2;
      };
      v_113 = r_St_3_AHEAD;
      v_109 = s_St_3_AHEAD_1;
      v_110 = s_St_3_AHEAD_2;
      if (v_79_1) {
        v_79_2_1 = v_79_2;
      } else {
        v_79_2_0 = v_79_2;
      };
      if (v_81_1) {
        v_81_2_1 = v_81_2;
      } else {
        v_81_2_0 = v_81_2;
      };
    } else {
      if (cntrl_dir_right_1) {
        v_57 = true;
      } else {
        v_57 = self->pnr;
      };
      if (cntrl_dir_left_1) {
        v_59 = true;
      } else {
        v_59 = v_57;
      };
      if (cntrl_dir_reverse_1) {
        r_St_3_REVERSE = true;
      } else {
        r_St_3_REVERSE = v_59;
      };
      v_113 = r_St_3_REVERSE;
      if (cntrl_dir_right_1) {
        v_56_1 = false;
      } else {
        v_56_1 = true;
      };
      if (cntrl_dir_left_1) {
        v_58_1 = false;
      } else {
        v_58_1 = v_56_1;
      };
      if (cntrl_dir_reverse_1) {
        s_St_3_REVERSE_1 = true;
      } else {
        s_St_3_REVERSE_1 = v_58_1;
      };
      v_109 = s_St_3_REVERSE_1;
      if (cntrl_dir_right_1) {
        v_56_2 = false;
      } else {
        v_56_2 = false;
      };
      if (cntrl_dir_left_1) {
        v_58_2 = true;
      } else {
        v_58_2 = v_56_2;
      };
      if (cntrl_dir_reverse_1) {
        s_St_3_REVERSE_2 = true;
      } else {
        s_St_3_REVERSE_2 = v_58_2;
      };
      v_110 = s_St_3_REVERSE_2;
    };
    s_1_2 = v_109;
    s_2_2 = v_110;
    r = v_113;
  } else {
    if (ck_7_2_0) {
      v_65 = !(cntrl_dir_reverse_1);
      if (v_65) {
        v_67 = true;
      } else {
        v_67 = self->pnr;
      };
      if (cntrl_dir_right_1) {
        v_69 = true;
      } else {
        v_69 = v_67;
      };
      if (cntrl_dir_left_1) {
        r_St_3_TURN_LEFT = true;
      } else {
        r_St_3_TURN_LEFT = v_69;
      };
      if (v_65) {
        v_66_1 = true;
      } else {
        v_66_1 = false;
      };
      if (cntrl_dir_right_1) {
        v_68_1 = false;
      } else {
        v_68_1 = v_66_1;
      };
      if (cntrl_dir_left_1) {
        s_St_3_TURN_LEFT_1 = true;
      } else {
        s_St_3_TURN_LEFT_1 = v_68_1;
      };
      if (v_65) {
        v_66_2 = false;
      } else {
        v_66_2 = true;
      };
      if (cntrl_dir_right_1) {
        v_68_2 = false;
      } else {
        v_68_2 = v_66_2;
      };
      if (cntrl_dir_left_1) {
        s_St_3_TURN_LEFT_2 = true;
      } else {
        s_St_3_TURN_LEFT_2 = v_68_2;
      };
      v_114 = r_St_3_TURN_LEFT;
      v_111 = s_St_3_TURN_LEFT_1;
      v_112 = s_St_3_TURN_LEFT_2;
      if (v_66_1) {
        v_66_2_1 = v_66_2;
      } else {
        v_66_2_0 = v_66_2;
      };
      if (v_68_1) {
        v_68_2_1 = v_68_2;
      } else {
        v_68_2_0 = v_68_2;
      };
      if (s_St_3_TURN_LEFT_1) {
        s_St_3_TURN_LEFT_2_1 = s_St_3_TURN_LEFT_2;
      } else {
        s_St_3_TURN_LEFT_2_0 = s_St_3_TURN_LEFT_2;
      };
    } else {
      v_60 = !(cntrl_dir_reverse_1);
      if (v_60) {
        v_62 = true;
      } else {
        v_62 = self->pnr;
      };
      if (cntrl_dir_left_1) {
        v_64 = true;
      } else {
        v_64 = v_62;
      };
      if (cntrl_dir_right_1) {
        r_St_3_TURN_RIGHT = true;
      } else {
        r_St_3_TURN_RIGHT = v_64;
      };
      v_114 = r_St_3_TURN_RIGHT;
      if (v_60) {
        v_61_1 = true;
      } else {
        v_61_1 = false;
      };
      if (cntrl_dir_left_1) {
        v_63_1 = false;
      } else {
        v_63_1 = v_61_1;
      };
      if (cntrl_dir_right_1) {
        s_St_3_TURN_RIGHT_1 = true;
      } else {
        s_St_3_TURN_RIGHT_1 = v_63_1;
      };
      v_111 = s_St_3_TURN_RIGHT_1;
      if (v_60) {
        v_61_2 = false;
      } else {
        v_61_2 = false;
      };
      if (cntrl_dir_left_1) {
        v_63_2 = true;
      } else {
        v_63_2 = v_61_2;
      };
      if (cntrl_dir_right_1) {
        s_St_3_TURN_RIGHT_2 = true;
      } else {
        s_St_3_TURN_RIGHT_2 = v_63_2;
      };
      v_112 = s_St_3_TURN_RIGHT_2;
      if (v_61_1) {
        v_61_2_1 = v_61_2;
      } else {
        v_61_2_0 = v_61_2;
      };
      if (v_63_1) {
        v_63_2_1 = v_63_2;
      } else {
        v_63_2_0 = v_63_2;
      };
      if (s_St_3_TURN_RIGHT_1) {
        s_St_3_TURN_RIGHT_2_1 = s_St_3_TURN_RIGHT_2;
      } else {
        s_St_3_TURN_RIGHT_2_0 = s_St_3_TURN_RIGHT_2;
      };
    };
    s_1_2 = v_111;
    s_2_2 = v_112;
    r = v_114;
  };
  ck_8_1 = s_1_2;
  ck_8_2 = s_2_2;
  if (ck_8_1) {
    ck_8_2_1 = ck_8_2;
    if (ck_8_2_1) {
      direction_St_3_AHEAD = 1;
      nr_St_3_AHEAD = false;
      ns_St_3_AHEAD_1 = true;
      ns_St_3_AHEAD_2 = true;
      v_99 = direction_St_3_AHEAD;
      v_105 = nr_St_3_AHEAD;
      v_101 = ns_St_3_AHEAD_1;
      v_102 = ns_St_3_AHEAD_2;
    } else {
      direction_St_3_REVERSE = 4;
      v_99 = direction_St_3_REVERSE;
      nr_St_3_REVERSE = false;
      v_105 = nr_St_3_REVERSE;
      ns_St_3_REVERSE_1 = true;
      v_101 = ns_St_3_REVERSE_1;
      ns_St_3_REVERSE_2 = false;
      v_102 = ns_St_3_REVERSE_2;
    };
    direction = v_99;
    ns_1_2 = v_101;
    ns_2_2 = v_102;
    nr = v_105;
  } else {
    ck_8_2_0 = ck_8_2;
    if (ck_8_2_0) {
      direction_St_3_TURN_LEFT = 2;
      nr_St_3_TURN_LEFT = false;
      ns_St_3_TURN_LEFT_1 = false;
      ns_St_3_TURN_LEFT_2 = true;
      v_100 = direction_St_3_TURN_LEFT;
      v_106 = nr_St_3_TURN_LEFT;
      v_103 = ns_St_3_TURN_LEFT_1;
      v_104 = ns_St_3_TURN_LEFT_2;
      if (ns_St_3_TURN_LEFT_1) {
        ns_St_3_TURN_LEFT_2_1 = ns_St_3_TURN_LEFT_2;
      } else {
        ns_St_3_TURN_LEFT_2_0 = ns_St_3_TURN_LEFT_2;
      };
    } else {
      direction_St_3_TURN_RIGHT = 3;
      v_100 = direction_St_3_TURN_RIGHT;
      nr_St_3_TURN_RIGHT = false;
      v_106 = nr_St_3_TURN_RIGHT;
      ns_St_3_TURN_RIGHT_1 = false;
      v_103 = ns_St_3_TURN_RIGHT_1;
      ns_St_3_TURN_RIGHT_2 = false;
      v_104 = ns_St_3_TURN_RIGHT_2;
      if (ns_St_3_TURN_RIGHT_1) {
        ns_St_3_TURN_RIGHT_2_1 = ns_St_3_TURN_RIGHT_2;
      } else {
        ns_St_3_TURN_RIGHT_2_0 = ns_St_3_TURN_RIGHT_2;
      };
    };
    direction = v_100;
    ns_1_2 = v_103;
    ns_2_2 = v_104;
    nr = v_106;
  };
  _out->direction_layer_1 = direction;
  v_37 = (_out->direction_layer_1>=1);
  v_41 = (_out->direction_layer_1==2);
  v_45 = (_out->direction_layer_1==3);
  v_48 = (_out->direction_layer_1==4);
  if (ns_1_2) {
    ns_2_2_1 = ns_2_2;
  } else {
    ns_2_2_0 = ns_2_2;
  };
  if (ck_8_1) {
    if (ck_8_2_1) {
      if (ns_St_3_AHEAD_1) {
        ns_St_3_AHEAD_2_1 = ns_St_3_AHEAD_2;
      } else {
        ns_St_3_AHEAD_2_0 = ns_St_3_AHEAD_2;
      };
    } else {
      if (ns_St_3_REVERSE_1) {
        ns_St_3_REVERSE_2_1 = ns_St_3_REVERSE_2;
      } else {
        ns_St_3_REVERSE_2_0 = ns_St_3_REVERSE_2;
      };
    };
  };
  if (s_1_2) {
    s_2_2_1 = s_2_2;
  } else {
    s_2_2_0 = s_2_2;
  };
  if (ck_7_1) {
    if (ck_7_2_1) {
      if (s_St_3_AHEAD_1) {
        s_St_3_AHEAD_2_1 = s_St_3_AHEAD_2;
      } else {
        s_St_3_AHEAD_2_0 = s_St_3_AHEAD_2;
      };
    } else {
      if (v_56_1) {
        v_56_2_1 = v_56_2;
      } else {
        v_56_2_0 = v_56_2;
      };
      if (v_58_1) {
        v_58_2_1 = v_58_2;
      } else {
        v_58_2_0 = v_58_2;
      };
      if (s_St_3_REVERSE_1) {
        s_St_3_REVERSE_2_1 = s_St_3_REVERSE_2;
      } else {
        s_St_3_REVERSE_2_0 = s_St_3_REVERSE_2;
      };
    };
  };
  if (ck_4_1) {
    obs_St_5_NO_OBSTACLE = false;
    obs = obs_St_5_NO_OBSTACLE;
    nr_2_St_5_NO_OBSTACLE = false;
    nr_2 = nr_2_St_5_NO_OBSTACLE;
    ns_2_St_5_NO_OBSTACLE_1 = true;
    ns_2_1 = ns_2_St_5_NO_OBSTACLE_1;
  } else {
    obs_St_5_OBSTACLE = true;
    nr_2_St_5_OBSTACLE = false;
    ns_2_St_5_OBSTACLE_1 = false;
    obs = obs_St_5_OBSTACLE;
    nr_2 = nr_2_St_5_OBSTACLE;
    ns_2_1 = ns_2_St_5_OBSTACLE_1;
  };
  _out->obs_left = obs;
  v = !(_out->obs_left);
  v_35 = (v&&v_34);
  v_36 = !(v_35);
  rule4 = (v_36||v_37);
  v_38 = !(_out->obs_left);
  v_39 = (v_38&&_out->obs_right);
  v_40 = !(v_39);
  rule3 = (v_40||v_41);
  v_43 = (_out->obs_left&&v_42);
  v_44 = !(v_43);
  rule2 = (v_44||v_45);
  v_46 = (_out->obs_left&&_out->obs_right);
  v_47 = !(v_46);
  rule1 = (v_47||v_48);
  v_49 = (rule1&&rule2);
  v_50 = (v_49&&rule3);
  v_51 = (v_50&&rule4);
  self->pnr = nr;
  self->v_107 = ns_1_2;
  self->v_108 = ns_2_2;
  self->pnr_1 = nr_1;
  self->ck_5_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->ck_1 = ns_2_1;;
}

