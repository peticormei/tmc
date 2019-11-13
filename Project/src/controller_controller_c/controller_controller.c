/* --- Generated the 13/11/2019 at 14:15 --- */
/* --- heptagon compiler, version 1.03.00 (compiled sun. oct. 20 0:47:43 CET 2019) --- */
/* --- Command line: /home/opam/.opam/4.02/bin/heptc -target c controller_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "controller_controller.h"

void Controller_controller__controller_controller_controller_cntrl_dir_reverse_step(
  int controller_v_52, int controller_v_53, int controller_v_54,
  int controller_v_55, int controller_v_72, int controller_v_76,
  int controller_ck_1, int controller_pnr_2, int controller_ck_5_1,
  int controller_pnr_1, int controller_v_108, int controller_v_107,
  int controller_pnr, int p_controller_cntrl_dir_reverse,
  int p_controller_cntrl_dir_right, int p_controller_cntrl_dir_left,
  int p_controller_cntrl_dir_layer, int controller_cntrl_dir_right,
  int controller_cntrl_dir_left, int controller_cntrl_dir_layer,
  Controller_controller__controller_controller_controller_cntrl_dir_reverse_out* _out) {
  
  int v_36;
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
  sub_7 = false;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  if (controller_cntrl_dir_left) {
    sub_11 = sub_5;
  } else {
    sub_11 = false;
  };
  if (controller_cntrl_dir_right) {
    sub_10 = false;
  } else {
    sub_10 = sub_11;
  };
  sub_12 = sub_11;
  if (controller_v_107) {
    sub_9 = sub_12;
  } else {
    sub_9 = sub_10;
  };
  v_17 = (controller_v_76||false);
  if (controller_cntrl_dir_layer) {
    v_18 = v_17;
  } else {
    v_18 = false;
  };
  if (controller_v_72) {
    v_19 = false;
  } else {
    v_19 = v_18;
  };
  sub_18 = true;
  if (controller_cntrl_dir_layer) {
    v_20 = false;
  } else {
    v_20 = sub_18;
  };
  sub_17 = sub_18;
  if (controller_v_72) {
    v_21 = v_20;
  } else {
    v_21 = sub_17;
  };
  if (controller_cntrl_dir_left) {
    v_22 = v_19;
  } else {
    v_22 = v_21;
  };
  if (controller_cntrl_dir_right) {
    v_23 = v_22;
  } else {
    v_23 = false;
  };
  sub_16 = sub_17;
  if (controller_cntrl_dir_left) {
    sub_15 = false;
  } else {
    sub_15 = sub_16;
  };
  if (controller_cntrl_dir_right) {
    sub_14 = false;
  } else {
    sub_14 = sub_15;
  };
  if (controller_v_107) {
    sub_13 = v_23;
  } else {
    sub_13 = sub_14;
  };
  if (controller_v_108) {
    sub_8 = sub_13;
  } else {
    sub_8 = sub_9;
  };
  if (controller_ck_5_1) {
    v_26 = sub_3;
  } else {
    v_26 = sub_8;
  };
  if (controller_v_55) {
    v_27 = sub_3;
  } else {
    v_27 = v_26;
  };
  if (controller_ck_5_1) {
    v_24 = sub_8;
  } else {
    v_24 = sub_3;
  };
  if (controller_v_55) {
    v_25 = v_24;
  } else {
    v_25 = sub_8;
  };
  if (controller_v_54) {
    sub_2 = v_25;
  } else {
    sub_2 = v_27;
  };
  if (controller_cntrl_dir_left) {
    sub_23 = false;
  } else {
    sub_23 = sub_5;
  };
  if (controller_cntrl_dir_right) {
    sub_22 = sub_23;
  } else {
    sub_22 = false;
  };
  if (controller_v_107) {
    sub_21 = sub_22;
  } else {
    sub_21 = sub_14;
  };
  if (controller_cntrl_dir_layer) {
    v_11 = sub_18;
  } else {
    v_11 = false;
  };
  if (controller_v_72) {
    sub_25 = v_11;
  } else {
    sub_25 = false;
  };
  sub_26 = sub_16;
  if (controller_cntrl_dir_right) {
    sub_24 = sub_25;
  } else {
    sub_24 = sub_26;
  };
  if (controller_v_107) {
    v_12 = sub_24;
  } else {
    v_12 = sub_22;
  };
  if (controller_v_108) {
    sub_20 = v_12;
  } else {
    sub_20 = sub_21;
  };
  if (controller_cntrl_dir_right) {
    sub_28 = false;
  } else {
    sub_28 = sub_23;
  };
  if (controller_v_107) {
    v_10 = sub_3;
  } else {
    v_10 = sub_28;
  };
  if (controller_v_108) {
    sub_27 = v_10;
  } else {
    sub_27 = sub_28;
  };
  if (controller_ck_5_1) {
    v_15 = sub_20;
  } else {
    v_15 = sub_27;
  };
  if (controller_v_55) {
    v_16 = sub_20;
  } else {
    v_16 = v_15;
  };
  if (controller_ck_5_1) {
    v_13 = sub_27;
  } else {
    v_13 = sub_20;
  };
  if (controller_v_55) {
    v_14 = v_13;
  } else {
    v_14 = sub_27;
  };
  if (controller_v_54) {
    sub_19 = v_14;
  } else {
    sub_19 = v_16;
  };
  if (controller_ck_1) {
    v_30 = sub_2;
  } else {
    v_30 = sub_19;
  };
  if (controller_v_53) {
    v_31 = sub_2;
  } else {
    v_31 = v_30;
  };
  if (controller_ck_1) {
    v_28 = sub_19;
  } else {
    v_28 = sub_2;
  };
  if (controller_v_53) {
    v_29 = v_28;
  } else {
    v_29 = sub_19;
  };
  if (controller_v_52) {
    sub_1 = v_29;
  } else {
    sub_1 = v_31;
  };
  sub_30 = sub_26;
  if (controller_cntrl_dir_left) {
    v_5 = sub_16;
  } else {
    v_5 = false;
  };
  if (controller_cntrl_dir_right) {
    sub_33 = false;
  } else {
    sub_33 = v_5;
  };
  if (controller_v_107) {
    sub_32 = sub_12;
  } else {
    sub_32 = sub_33;
  };
  if (controller_v_108) {
    sub_31 = sub_13;
  } else {
    sub_31 = sub_32;
  };
  if (controller_ck_5_1) {
    v_8 = sub_30;
  } else {
    v_8 = sub_31;
  };
  if (controller_v_55) {
    v_9 = sub_30;
  } else {
    v_9 = v_8;
  };
  if (controller_ck_5_1) {
    v_6 = sub_31;
  } else {
    v_6 = sub_30;
  };
  if (controller_v_55) {
    v_7 = v_6;
  } else {
    v_7 = sub_31;
  };
  if (controller_v_54) {
    sub_29 = v_7;
  } else {
    sub_29 = v_9;
  };
  if (controller_cntrl_dir_right) {
    sub_36 = sub_15;
  } else {
    sub_36 = false;
  };
  if (controller_v_107) {
    v = sub_24;
  } else {
    v = sub_36;
  };
  if (controller_v_108) {
    sub_35 = v;
  } else {
    sub_35 = sub_21;
  };
  if (controller_ck_5_1) {
    v_3 = sub_35;
  } else {
    v_3 = sub_27;
  };
  if (controller_v_55) {
    v_4 = sub_35;
  } else {
    v_4 = v_3;
  };
  if (controller_ck_5_1) {
    v_1 = sub_27;
  } else {
    v_1 = sub_35;
  };
  if (controller_v_55) {
    v_2 = v_1;
  } else {
    v_2 = sub_27;
  };
  if (controller_v_54) {
    sub_34 = v_2;
  } else {
    sub_34 = v_4;
  };
  if (controller_ck_1) {
    v_34 = sub_29;
  } else {
    v_34 = sub_34;
  };
  if (controller_v_53) {
    v_35 = sub_29;
  } else {
    v_35 = v_34;
  };
  if (controller_ck_1) {
    v_32 = sub_34;
  } else {
    v_32 = sub_29;
  };
  if (controller_v_53) {
    v_33 = v_32;
  } else {
    v_33 = sub_34;
  };
  if (controller_v_52) {
    v_36 = v_33;
  } else {
    v_36 = v_35;
  };
  if (p_controller_cntrl_dir_reverse) {
    sub_0 = v_36;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_cntrl_dir_reverse = sub_0;;
}

void Controller_controller__controller_controller_controller_cntrl_dir_right_step(
  int controller_v_52, int controller_v_53, int controller_v_54,
  int controller_v_55, int controller_v_72, int controller_v_76,
  int controller_ck_1, int controller_pnr_2, int controller_ck_5_1,
  int controller_pnr_1, int controller_v_108, int controller_v_107,
  int controller_pnr, int p_controller_cntrl_dir_reverse,
  int p_controller_cntrl_dir_right, int p_controller_cntrl_dir_left,
  int p_controller_cntrl_dir_layer, int controller_cntrl_dir_left,
  int controller_cntrl_dir_layer,
  Controller_controller__controller_controller_controller_cntrl_dir_right_out* _out) {
  
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v_59;
  int v_58;
  int v_57;
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
  sub_6 = false;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  if (controller_cntrl_dir_left) {
    sub_8 = sub_4;
  } else {
    sub_8 = false;
  };
  v_54 = (controller_v_76||false);
  if (controller_cntrl_dir_layer) {
    v_55 = v_54;
  } else {
    v_55 = false;
  };
  if (controller_v_72) {
    v_56 = false;
  } else {
    v_56 = v_55;
  };
  if (controller_cntrl_dir_left) {
    sub_10 = false;
  } else {
    sub_10 = sub_4;
  };
  sub_11 = true;
  if (controller_cntrl_dir_layer) {
    v_57 = false;
  } else {
    v_57 = sub_11;
  };
  sub_12 = sub_11;
  if (controller_v_72) {
    v_58 = v_57;
  } else {
    v_58 = sub_12;
  };
  if (controller_cntrl_dir_left) {
    v_59 = v_56;
  } else {
    v_59 = v_58;
  };
  if (controller_v_107) {
    sub_9 = v_59;
  } else {
    sub_9 = sub_10;
  };
  if (controller_v_108) {
    sub_7 = sub_9;
  } else {
    sub_7 = sub_8;
  };
  if (controller_ck_5_1) {
    v_62 = sub_3;
  } else {
    v_62 = sub_7;
  };
  if (controller_v_55) {
    v_63 = sub_3;
  } else {
    v_63 = v_62;
  };
  if (controller_ck_5_1) {
    v_60 = sub_7;
  } else {
    v_60 = sub_3;
  };
  if (controller_v_55) {
    v_61 = v_60;
  } else {
    v_61 = sub_7;
  };
  if (controller_v_54) {
    sub_2 = v_61;
  } else {
    sub_2 = v_63;
  };
  sub_17 = sub_12;
  if (controller_cntrl_dir_left) {
    sub_16 = false;
  } else {
    sub_16 = sub_17;
  };
  if (controller_v_107) {
    v_49 = sub_3;
    sub_15 = sub_16;
  } else {
    v_49 = sub_16;
    sub_15 = sub_10;
  };
  if (controller_v_108) {
    sub_14 = v_49;
  } else {
    sub_14 = sub_15;
  };
  if (controller_v_107) {
    v_48 = sub_3;
  } else {
    v_48 = sub_10;
  };
  if (controller_v_108) {
    sub_18 = v_48;
  } else {
    sub_18 = sub_10;
  };
  if (controller_ck_5_1) {
    v_52 = sub_14;
  } else {
    v_52 = sub_18;
  };
  if (controller_v_55) {
    v_53 = sub_14;
  } else {
    v_53 = v_52;
  };
  if (controller_ck_5_1) {
    v_50 = sub_18;
  } else {
    v_50 = sub_14;
  };
  if (controller_v_55) {
    v_51 = v_50;
  } else {
    v_51 = sub_18;
  };
  if (controller_v_54) {
    sub_13 = v_51;
  } else {
    sub_13 = v_53;
  };
  if (controller_ck_1) {
    v_66 = sub_2;
  } else {
    v_66 = sub_13;
  };
  if (controller_v_53) {
    v_67 = sub_2;
  } else {
    v_67 = v_66;
  };
  if (controller_ck_1) {
    v_64 = sub_13;
  } else {
    v_64 = sub_2;
  };
  if (controller_v_53) {
    v_65 = v_64;
  } else {
    v_65 = sub_13;
  };
  if (controller_v_52) {
    sub_1 = v_65;
  } else {
    sub_1 = v_67;
  };
  sub_20 = sub_17;
  if (controller_cntrl_dir_left) {
    v_43 = sub_17;
  } else {
    v_43 = false;
  };
  if (controller_v_107) {
    sub_22 = v_43;
  } else {
    sub_22 = sub_8;
  };
  if (controller_v_108) {
    sub_21 = sub_9;
  } else {
    sub_21 = sub_22;
  };
  if (controller_ck_5_1) {
    v_46 = sub_20;
  } else {
    v_46 = sub_21;
  };
  if (controller_v_55) {
    v_47 = sub_20;
  } else {
    v_47 = v_46;
  };
  if (controller_ck_5_1) {
    v_44 = sub_21;
  } else {
    v_44 = sub_20;
  };
  if (controller_v_55) {
    v_45 = v_44;
  } else {
    v_45 = sub_21;
  };
  if (controller_v_54) {
    sub_19 = v_45;
  } else {
    sub_19 = v_47;
  };
  if (controller_cntrl_dir_layer) {
    v_37 = sub_11;
  } else {
    v_37 = sub_6;
  };
  if (controller_v_72) {
    sub_25 = v_37;
  } else {
    sub_25 = sub_5;
  };
  if (controller_v_107) {
    v_38 = sub_25;
  } else {
    v_38 = sub_16;
  };
  if (controller_v_108) {
    sub_24 = v_38;
  } else {
    sub_24 = sub_15;
  };
  if (controller_v_107) {
    v = sub_20;
  } else {
    v = sub_10;
  };
  if (controller_v_108) {
    sub_26 = v;
  } else {
    sub_26 = sub_10;
  };
  if (controller_ck_5_1) {
    v_41 = sub_24;
  } else {
    v_41 = sub_26;
  };
  if (controller_v_55) {
    v_42 = sub_24;
  } else {
    v_42 = v_41;
  };
  if (controller_ck_5_1) {
    v_39 = sub_26;
  } else {
    v_39 = sub_24;
  };
  if (controller_v_55) {
    v_40 = v_39;
  } else {
    v_40 = sub_26;
  };
  if (controller_v_54) {
    sub_23 = v_40;
  } else {
    sub_23 = v_42;
  };
  if (controller_ck_1) {
    v_70 = sub_19;
  } else {
    v_70 = sub_23;
  };
  if (controller_v_53) {
    v_71 = sub_19;
  } else {
    v_71 = v_70;
  };
  if (controller_ck_1) {
    v_68 = sub_23;
  } else {
    v_68 = sub_19;
  };
  if (controller_v_53) {
    v_69 = v_68;
  } else {
    v_69 = sub_23;
  };
  if (controller_v_52) {
    v_72 = v_69;
  } else {
    v_72 = v_71;
  };
  if (p_controller_cntrl_dir_right) {
    sub_0 = v_72;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_cntrl_dir_right = sub_0;;
}

void Controller_controller__controller_controller_controller_cntrl_dir_left_step(
  int controller_v_52, int controller_v_53, int controller_v_54,
  int controller_v_55, int controller_v_72, int controller_v_76,
  int controller_ck_1, int controller_pnr_2, int controller_ck_5_1,
  int controller_pnr_1, int controller_v_108, int controller_v_107,
  int controller_pnr, int p_controller_cntrl_dir_reverse,
  int p_controller_cntrl_dir_right, int p_controller_cntrl_dir_left,
  int p_controller_cntrl_dir_layer, int controller_cntrl_dir_layer,
  Controller_controller__controller_controller_controller_cntrl_dir_left_out* _out) {
  
  int v_84;
  int v_83;
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_78;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
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
  sub_5 = false;
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_8 = true;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (p_controller_cntrl_dir_left) {
    sub_2 = sub_6;
  } else {
    sub_2 = sub_3;
  };
  if (controller_cntrl_dir_layer) {
    v_73 = controller_v_76;
    sub_11 = false;
  } else {
    v_73 = sub_5;
    sub_11 = sub_5;
  };
  if (controller_v_72) {
    v_74 = sub_11;
    sub_10 = sub_11;
  } else {
    v_74 = v_73;
    sub_10 = sub_4;
  };
  if (p_controller_cntrl_dir_left) {
    v_75 = v_74;
  } else {
    v_75 = sub_10;
  };
  if (controller_v_107) {
    v_76 = v_75;
  } else {
    v_76 = sub_3;
  };
  if (controller_v_108) {
    sub_9 = v_76;
  } else {
    sub_9 = sub_6;
  };
  if (controller_ck_5_1) {
    v_79 = sub_2;
  } else {
    v_79 = sub_9;
  };
  if (controller_v_55) {
    v_80 = sub_2;
  } else {
    v_80 = v_79;
  };
  if (controller_ck_5_1) {
    v_77 = sub_9;
  } else {
    v_77 = sub_2;
  };
  if (controller_v_55) {
    v_78 = v_77;
  } else {
    v_78 = sub_9;
  };
  if (controller_v_54) {
    sub_1 = v_78;
  } else {
    sub_1 = v_80;
  };
  if (controller_v_107) {
    v = sub_2;
  } else {
    v = sub_3;
  };
  if (controller_v_108) {
    sub_14 = v;
  } else {
    sub_14 = sub_3;
  };
  sub_13 = sub_14;
  sub_12 = sub_13;
  if (controller_ck_1) {
    v_83 = sub_1;
  } else {
    v_83 = sub_12;
  };
  if (controller_v_53) {
    v_84 = sub_1;
  } else {
    v_84 = v_83;
  };
  if (controller_ck_1) {
    v_81 = sub_12;
  } else {
    v_81 = sub_1;
  };
  if (controller_v_53) {
    v_82 = v_81;
  } else {
    v_82 = sub_12;
  };
  if (controller_v_52) {
    sub_0 = v_82;
  } else {
    sub_0 = v_84;
  };
  _out->controller_cntrl_dir_left = sub_0;;
}

void Controller_controller__controller_controller_controller_cntrl_dir_layer_step(
  int controller_v_52, int controller_v_53, int controller_v_54,
  int controller_v_55, int controller_v_72, int controller_v_76,
  int controller_ck_1, int controller_pnr_2, int controller_ck_5_1,
  int controller_pnr_1, int controller_v_108, int controller_v_107,
  int controller_pnr, int p_controller_cntrl_dir_reverse,
  int p_controller_cntrl_dir_right, int p_controller_cntrl_dir_left,
  int p_controller_cntrl_dir_layer,
  Controller_controller__controller_controller_controller_cntrl_dir_layer_out* _out) {
  
  int v_93;
  int v_92;
  int v_91;
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  sub_4 = p_controller_cntrl_dir_layer;
  sub_3 = sub_4;
  sub_2 = sub_3;
  if (controller_v_72) {
    v = false;
  } else {
    v = sub_3;
  };
  if (controller_v_107) {
    v_85 = v;
  } else {
    v_85 = sub_2;
  };
  if (controller_v_108) {
    sub_5 = v_85;
  } else {
    sub_5 = sub_2;
  };
  if (controller_ck_5_1) {
    v_88 = sub_2;
  } else {
    v_88 = sub_5;
  };
  if (controller_v_55) {
    v_89 = sub_2;
  } else {
    v_89 = v_88;
  };
  if (controller_ck_5_1) {
    v_86 = sub_5;
  } else {
    v_86 = sub_2;
  };
  if (controller_v_55) {
    v_87 = v_86;
  } else {
    v_87 = sub_5;
  };
  if (controller_v_54) {
    sub_1 = v_87;
  } else {
    sub_1 = v_89;
  };
  sub_7 = sub_2;
  sub_6 = sub_7;
  if (controller_ck_1) {
    v_92 = sub_1;
  } else {
    v_92 = sub_6;
  };
  if (controller_v_53) {
    v_93 = sub_1;
  } else {
    v_93 = v_92;
  };
  if (controller_ck_1) {
    v_90 = sub_6;
  } else {
    v_90 = sub_1;
  };
  if (controller_v_53) {
    v_91 = v_90;
  } else {
    v_91 = sub_6;
  };
  if (controller_v_52) {
    sub_0 = v_91;
  } else {
    sub_0 = v_93;
  };
  _out->controller_cntrl_dir_layer = sub_0;;
}

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
                                                       Controller_controller__controller_controller_out* _out) {
  Controller_controller__controller_controller_controller_cntrl_dir_right_out Controller_controller__controller_controller_controller_cntrl_dir_right_out_st;
  Controller_controller__controller_controller_controller_cntrl_dir_reverse_out Controller_controller__controller_controller_controller_cntrl_dir_reverse_out_st;
  Controller_controller__controller_controller_controller_cntrl_dir_left_out Controller_controller__controller_controller_controller_cntrl_dir_left_out_st;
  Controller_controller__controller_controller_controller_cntrl_dir_layer_out Controller_controller__controller_controller_controller_cntrl_dir_layer_out_st;
  Controller_controller__controller_controller_controller_cntrl_dir_layer_step(
  controller_v_52, controller_v_53, controller_v_54, controller_v_55,
  controller_v_72, controller_v_76, controller_ck_1, controller_pnr_2,
  controller_ck_5_1, controller_pnr_1, controller_v_108, controller_v_107,
  controller_pnr, p_controller_cntrl_dir_reverse,
  p_controller_cntrl_dir_right, p_controller_cntrl_dir_left,
  p_controller_cntrl_dir_layer,
  &Controller_controller__controller_controller_controller_cntrl_dir_layer_out_st);
  _out->controller_cntrl_dir_layer = Controller_controller__controller_controller_controller_cntrl_dir_layer_out_st.controller_cntrl_dir_layer;
  Controller_controller__controller_controller_controller_cntrl_dir_left_step(
  controller_v_52, controller_v_53, controller_v_54, controller_v_55,
  controller_v_72, controller_v_76, controller_ck_1, controller_pnr_2,
  controller_ck_5_1, controller_pnr_1, controller_v_108, controller_v_107,
  controller_pnr, p_controller_cntrl_dir_reverse,
  p_controller_cntrl_dir_right, p_controller_cntrl_dir_left,
  p_controller_cntrl_dir_layer, _out->controller_cntrl_dir_layer,
  &Controller_controller__controller_controller_controller_cntrl_dir_left_out_st);
  _out->controller_cntrl_dir_left = Controller_controller__controller_controller_controller_cntrl_dir_left_out_st.controller_cntrl_dir_left;
  Controller_controller__controller_controller_controller_cntrl_dir_right_step(
  controller_v_52, controller_v_53, controller_v_54, controller_v_55,
  controller_v_72, controller_v_76, controller_ck_1, controller_pnr_2,
  controller_ck_5_1, controller_pnr_1, controller_v_108, controller_v_107,
  controller_pnr, p_controller_cntrl_dir_reverse,
  p_controller_cntrl_dir_right, p_controller_cntrl_dir_left,
  p_controller_cntrl_dir_layer, _out->controller_cntrl_dir_left,
  _out->controller_cntrl_dir_layer,
  &Controller_controller__controller_controller_controller_cntrl_dir_right_out_st);
  _out->controller_cntrl_dir_right = Controller_controller__controller_controller_controller_cntrl_dir_right_out_st.controller_cntrl_dir_right;
  Controller_controller__controller_controller_controller_cntrl_dir_reverse_step(
  controller_v_52, controller_v_53, controller_v_54, controller_v_55,
  controller_v_72, controller_v_76, controller_ck_1, controller_pnr_2,
  controller_ck_5_1, controller_pnr_1, controller_v_108, controller_v_107,
  controller_pnr, p_controller_cntrl_dir_reverse,
  p_controller_cntrl_dir_right, p_controller_cntrl_dir_left,
  p_controller_cntrl_dir_layer, _out->controller_cntrl_dir_right,
  _out->controller_cntrl_dir_left, _out->controller_cntrl_dir_layer,
  &Controller_controller__controller_controller_controller_cntrl_dir_reverse_out_st);
  _out->controller_cntrl_dir_reverse = Controller_controller__controller_controller_controller_cntrl_dir_reverse_out_st.controller_cntrl_dir_reverse;
}

