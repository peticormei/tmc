/* --- Generated the 17/11/2019 at 13:30 --- */
/* --- heptagon compiler, version 1.03.00 (compiled sun. oct. 20 0:47:43 CET 2019) --- */
/* --- Command line: /home/opam/.opam/4.02/bin/heptc -target c controller_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "controller_controller.h"

void Controller_controller__controller_controller_controller_cntrl_motor_right_step(
  int controller_v_100, int controller_v_101, int controller_v_102,
  int controller_v_103, int controller_v_104, int controller_v_106,
  int controller_v_139, int controller_v_143, int controller_v_111,
  int controller_v_115, int controller_v_125, int controller_v_129,
  int controller_ck_1, int controller_pnr_4, int controller_ck_5_1,
  int controller_pnr_3, int controller_v_186, int controller_v_185,
  int controller_pnr_2, int controller_ck_9_1, int controller_pnr_1,
  int controller_ck_11_1, int controller_pnr,
  int p_controller_cntrl_motor_right, int p_controller_cntrl_motor_left,
  int p_controller_cntrl_dir_right, int p_controller_cntrl_dir_left,
  int p_controller_cntrl_dir_reverse, int p_controller_cntrl_dir_layer,
  int controller_cntrl_motor_left, int controller_cntrl_dir_right,
  int controller_cntrl_dir_left, int controller_cntrl_dir_reverse,
  int controller_cntrl_dir_layer,
  Controller_controller__controller_controller_controller_cntrl_motor_right_out* _out) {
  
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
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  sub_15 = true;
  sub_14 = sub_15;
  if (controller_v_101) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (controller_v_100) {
    sub_16 = false;
  } else {
    sub_16 = sub_14;
  };
  if (controller_ck_1) {
    v_10 = sub_16;
  } else {
    v_10 = sub_13;
  };
  if (controller_cntrl_motor_left) {
    sub_12 = false;
  } else {
    sub_12 = v_10;
  };
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  v_7 = !(controller_v_103);
  sub_24 = (v_7&&false);
  sub_23 = sub_24;
  sub_25 = false;
  if (controller_v_102) {
    v_8 = false;
  } else {
    v_8 = sub_25;
  };
  if (controller_ck_5_1) {
    sub_22 = v_8;
  } else {
    sub_22 = sub_23;
  };
  sub_21 = sub_22;
  if (controller_cntrl_motor_left) {
    sub_20 = sub_21;
  } else {
    sub_20 = false;
  };
  sub_19 = sub_20;
  sub_29 = sub_25;
  sub_28 = sub_29;
  if (controller_cntrl_motor_left) {
    sub_27 = false;
  } else {
    sub_27 = sub_28;
  };
  sub_26 = sub_27;
  if (controller_cntrl_dir_reverse) {
    v_9 = sub_19;
  } else {
    v_9 = sub_26;
  };
  if (controller_cntrl_dir_left) {
    sub_18 = v_9;
  } else {
    sub_18 = sub_10;
  };
  sub_17 = sub_18;
  if (controller_v_102) {
    v_5 = false;
  } else {
    v_5 = sub_15;
  };
  sub_37 = (controller_v_103||false);
  sub_36 = sub_37;
  if (controller_ck_5_1) {
    sub_35 = v_5;
  } else {
    sub_35 = sub_36;
  };
  if (controller_v_101) {
    sub_34 = sub_35;
  } else {
    sub_34 = false;
  };
  if (controller_v_100) {
    sub_38 = false;
  } else {
    sub_38 = sub_35;
  };
  if (controller_ck_1) {
    v_6 = sub_38;
  } else {
    v_6 = sub_34;
  };
  if (controller_cntrl_motor_left) {
    sub_33 = v_6;
  } else {
    sub_33 = false;
  };
  sub_32 = sub_33;
  sub_31 = sub_32;
  if (controller_cntrl_dir_left) {
    sub_30 = sub_31;
  } else {
    sub_30 = sub_10;
  };
  if (controller_v_115) {
    v_11 = sub_17;
  } else {
    v_11 = sub_30;
  };
  if (controller_v_111) {
    sub_6 = sub_7;
  } else {
    sub_6 = v_11;
  };
  sub_40 = sub_17;
  sub_39 = sub_40;
  if (controller_cntrl_dir_layer) {
    sub_5 = sub_6;
  } else {
    sub_5 = sub_39;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  if (controller_v_104) {
    sub_48 = sub_12;
  } else {
    sub_48 = sub_20;
  };
  sub_49 = sub_19;
  if (controller_cntrl_dir_left) {
    sub_47 = sub_48;
  } else {
    sub_47 = sub_49;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (controller_v_104) {
    sub_58 = sub_12;
  } else {
    sub_58 = sub_27;
  };
  if (controller_cntrl_dir_left) {
    sub_57 = sub_58;
  } else {
    sub_57 = sub_26;
  };
  sub_56 = sub_57;
  sub_55 = sub_56;
  sub_54 = sub_55;
  sub_53 = sub_54;
  sub_52 = sub_53;
  sub_51 = sub_52;
  sub_50 = sub_51;
  if (controller_v_185) {
    v_14 = sub_50;
  } else {
    v_14 = sub_2;
  };
  if (controller_v_106) {
    v_12 = sub_41;
  } else {
    v_12 = sub_50;
  };
  if (controller_v_185) {
    v_13 = v_12;
  } else {
    v_13 = sub_2;
  };
  if (controller_cntrl_dir_right) {
    sub_1 = v_13;
  } else {
    sub_1 = v_14;
  };
  sub_66 = sub_49;
  sub_65 = sub_66;
  sub_64 = sub_65;
  sub_63 = sub_64;
  sub_62 = sub_63;
  if (controller_cntrl_dir_reverse) {
    sub_72 = sub_11;
  } else {
    sub_72 = sub_26;
  };
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  if (controller_cntrl_dir_layer) {
    sub_61 = sub_62;
  } else {
    sub_61 = sub_67;
  };
  if (controller_cntrl_dir_left) {
    v_4 = sub_72;
  } else {
    v_4 = sub_31;
  };
  if (controller_v_129) {
    sub_76 = v_4;
  } else {
    sub_76 = sub_31;
  };
  sub_75 = sub_76;
  sub_74 = sub_75;
  if (controller_cntrl_dir_layer) {
    sub_73 = sub_74;
  } else {
    sub_73 = sub_67;
  };
  if (controller_v_125) {
    sub_60 = sub_61;
  } else {
    sub_60 = sub_73;
  };
  sub_59 = sub_60;
  if (controller_cntrl_dir_reverse) {
    v = sub_32;
  } else {
    v = sub_26;
  };
  if (controller_cntrl_dir_left) {
    sub_83 = v;
  } else {
    sub_83 = sub_10;
  };
  sub_82 = sub_83;
  sub_81 = sub_82;
  sub_80 = sub_81;
  if (controller_v_143) {
    v_2 = sub_7;
  } else {
    v_2 = sub_80;
  };
  sub_79 = sub_80;
  if (controller_cntrl_dir_layer) {
    v_3 = v_2;
    v_1 = sub_62;
  } else {
    v_3 = sub_79;
    v_1 = sub_79;
  };
  if (controller_v_139) {
    sub_78 = v_1;
  } else {
    sub_78 = v_3;
  };
  sub_77 = sub_78;
  if (controller_v_185) {
    v_15 = sub_77;
  } else {
    v_15 = sub_59;
  };
  sub_86 = sub_62;
  sub_85 = sub_86;
  sub_84 = sub_85;
  if (controller_cntrl_dir_right) {
    v_16 = v_15;
  } else {
    v_16 = sub_84;
  };
  if (controller_v_186) {
    sub_0 = v_16;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_cntrl_motor_right = sub_0;;
}

void Controller_controller__controller_controller_controller_cntrl_motor_left_step(
  int controller_v_100, int controller_v_101, int controller_v_102,
  int controller_v_103, int controller_v_104, int controller_v_106,
  int controller_v_139, int controller_v_143, int controller_v_111,
  int controller_v_115, int controller_v_125, int controller_v_129,
  int controller_ck_1, int controller_pnr_4, int controller_ck_5_1,
  int controller_pnr_3, int controller_v_186, int controller_v_185,
  int controller_pnr_2, int controller_ck_9_1, int controller_pnr_1,
  int controller_ck_11_1, int controller_pnr,
  int p_controller_cntrl_motor_right, int p_controller_cntrl_motor_left,
  int p_controller_cntrl_dir_right, int p_controller_cntrl_dir_left,
  int p_controller_cntrl_dir_reverse, int p_controller_cntrl_dir_layer,
  int controller_cntrl_dir_right, int controller_cntrl_dir_left,
  int controller_cntrl_dir_reverse, int controller_cntrl_dir_layer,
  Controller_controller__controller_controller_controller_cntrl_motor_left_out* _out) {
  
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
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  sub_16 = false;
  sub_15 = sub_16;
  sub_14 = sub_15;
  if (controller_v_101) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (controller_v_100) {
    sub_17 = false;
  } else {
    sub_17 = sub_15;
  };
  if (controller_ck_1) {
    sub_12 = sub_17;
  } else {
    sub_12 = sub_13;
  };
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_v_102) {
    v_21 = false;
  } else {
    v_21 = true;
  };
  sub_25 = (controller_v_103||false);
  sub_24 = sub_25;
  if (controller_ck_5_1) {
    sub_23 = v_21;
  } else {
    sub_23 = sub_24;
  };
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_27 = sub_14;
  sub_26 = sub_27;
  if (controller_cntrl_dir_reverse) {
    v_22 = sub_20;
  } else {
    v_22 = sub_26;
  };
  if (controller_cntrl_dir_left) {
    sub_19 = v_22;
  } else {
    sub_19 = sub_10;
  };
  sub_18 = sub_19;
  if (controller_v_101) {
    sub_32 = sub_22;
  } else {
    sub_32 = false;
  };
  if (controller_v_100) {
    sub_33 = false;
  } else {
    sub_33 = sub_23;
  };
  if (controller_ck_1) {
    sub_31 = sub_33;
  } else {
    sub_31 = sub_32;
  };
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (controller_cntrl_dir_left) {
    sub_28 = sub_29;
  } else {
    sub_28 = sub_10;
  };
  if (controller_v_115) {
    v_23 = sub_18;
  } else {
    v_23 = sub_28;
  };
  if (controller_v_111) {
    sub_6 = sub_7;
  } else {
    sub_6 = v_23;
  };
  sub_35 = sub_18;
  sub_34 = sub_35;
  if (controller_cntrl_dir_layer) {
    sub_5 = sub_6;
  } else {
    sub_5 = sub_34;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  if (controller_v_104) {
    sub_43 = sub_12;
  } else {
    sub_43 = sub_21;
  };
  sub_44 = sub_20;
  if (controller_cntrl_dir_left) {
    sub_42 = sub_43;
  } else {
    sub_42 = sub_44;
  };
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  if (controller_v_104) {
    sub_53 = sub_12;
  } else {
    sub_53 = sub_27;
  };
  if (controller_cntrl_dir_left) {
    sub_52 = sub_53;
  } else {
    sub_52 = sub_26;
  };
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  if (controller_v_185) {
    v_26 = sub_45;
  } else {
    v_26 = sub_2;
  };
  if (controller_v_106) {
    v_24 = sub_36;
  } else {
    v_24 = sub_45;
  };
  if (controller_v_185) {
    v_25 = v_24;
  } else {
    v_25 = sub_2;
  };
  if (controller_cntrl_dir_right) {
    sub_1 = v_25;
  } else {
    sub_1 = v_26;
  };
  sub_61 = sub_44;
  sub_60 = sub_61;
  sub_59 = sub_60;
  sub_58 = sub_59;
  sub_57 = sub_58;
  if (controller_cntrl_dir_reverse) {
    sub_67 = sub_11;
  } else {
    sub_67 = sub_26;
  };
  sub_66 = sub_67;
  sub_65 = sub_66;
  sub_64 = sub_65;
  sub_63 = sub_64;
  sub_62 = sub_63;
  if (controller_cntrl_dir_layer) {
    sub_56 = sub_57;
  } else {
    sub_56 = sub_62;
  };
  if (controller_cntrl_dir_left) {
    v_20 = sub_67;
  } else {
    v_20 = sub_29;
  };
  if (controller_v_129) {
    sub_71 = v_20;
  } else {
    sub_71 = sub_29;
  };
  sub_70 = sub_71;
  sub_69 = sub_70;
  if (controller_cntrl_dir_layer) {
    sub_68 = sub_69;
  } else {
    sub_68 = sub_62;
  };
  if (controller_v_125) {
    sub_55 = sub_56;
  } else {
    sub_55 = sub_68;
  };
  sub_54 = sub_55;
  if (controller_cntrl_dir_reverse) {
    v = sub_30;
  } else {
    v = sub_26;
  };
  if (controller_cntrl_dir_left) {
    sub_78 = v;
  } else {
    sub_78 = sub_10;
  };
  sub_77 = sub_78;
  sub_76 = sub_77;
  sub_75 = sub_76;
  if (controller_v_143) {
    v_18 = sub_7;
  } else {
    v_18 = sub_75;
  };
  sub_74 = sub_75;
  if (controller_cntrl_dir_layer) {
    v_19 = v_18;
    v_17 = sub_57;
  } else {
    v_19 = sub_74;
    v_17 = sub_74;
  };
  if (controller_v_139) {
    sub_73 = v_17;
  } else {
    sub_73 = v_19;
  };
  sub_72 = sub_73;
  if (controller_v_185) {
    v_27 = sub_72;
  } else {
    v_27 = sub_54;
  };
  sub_81 = sub_57;
  sub_80 = sub_81;
  sub_79 = sub_80;
  if (controller_cntrl_dir_right) {
    v_28 = v_27;
  } else {
    v_28 = sub_79;
  };
  if (controller_v_186) {
    sub_0 = v_28;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_cntrl_motor_left = sub_0;;
}

void Controller_controller__controller_controller_controller_cntrl_dir_right_step(
  int controller_v_100, int controller_v_101, int controller_v_102,
  int controller_v_103, int controller_v_104, int controller_v_106,
  int controller_v_139, int controller_v_143, int controller_v_111,
  int controller_v_115, int controller_v_125, int controller_v_129,
  int controller_ck_1, int controller_pnr_4, int controller_ck_5_1,
  int controller_pnr_3, int controller_v_186, int controller_v_185,
  int controller_pnr_2, int controller_ck_9_1, int controller_pnr_1,
  int controller_ck_11_1, int controller_pnr,
  int p_controller_cntrl_motor_right, int p_controller_cntrl_motor_left,
  int p_controller_cntrl_dir_right, int p_controller_cntrl_dir_left,
  int p_controller_cntrl_dir_reverse, int p_controller_cntrl_dir_layer,
  int controller_cntrl_dir_left, int controller_cntrl_dir_reverse,
  int controller_cntrl_dir_layer,
  Controller_controller__controller_controller_controller_cntrl_dir_right_out* _out) {
  
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
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
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
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  sub_16 = false;
  sub_15 = sub_16;
  sub_14 = sub_15;
  if (controller_v_101) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (controller_v_100) {
    sub_17 = false;
  } else {
    sub_17 = sub_15;
  };
  if (controller_ck_1) {
    sub_12 = sub_17;
  } else {
    sub_12 = sub_13;
  };
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  if (controller_v_102) {
    v_45 = false;
  } else {
    v_45 = sub_16;
  };
  v_44 = !(controller_v_103);
  sub_25 = (v_44&&false);
  sub_24 = sub_25;
  if (controller_ck_5_1) {
    sub_23 = v_45;
  } else {
    sub_23 = sub_24;
  };
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_27 = sub_14;
  sub_26 = sub_27;
  if (controller_cntrl_dir_reverse) {
    v_46 = sub_20;
  } else {
    v_46 = sub_26;
  };
  if (controller_cntrl_dir_left) {
    sub_19 = v_46;
  } else {
    sub_19 = sub_10;
  };
  sub_18 = sub_19;
  if (controller_v_101) {
    sub_31 = sub_22;
  } else {
    sub_31 = false;
  };
  if (controller_v_100) {
    sub_32 = false;
  } else {
    sub_32 = sub_23;
  };
  if (controller_ck_1) {
    sub_30 = sub_32;
  } else {
    sub_30 = sub_31;
  };
  sub_29 = sub_30;
  if (controller_cntrl_dir_left) {
    sub_28 = sub_29;
  } else {
    sub_28 = sub_10;
  };
  if (controller_v_115) {
    v_47 = sub_18;
  } else {
    v_47 = sub_28;
  };
  if (controller_v_111) {
    sub_7 = sub_8;
  } else {
    sub_7 = v_47;
  };
  sub_34 = sub_18;
  sub_33 = sub_34;
  if (controller_cntrl_dir_layer) {
    sub_6 = sub_7;
  } else {
    sub_6 = sub_33;
  };
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  if (controller_v_104) {
    sub_43 = sub_12;
  } else {
    sub_43 = sub_27;
  };
  if (controller_cntrl_dir_left) {
    sub_42 = sub_43;
  } else {
    sub_42 = sub_26;
  };
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  if (controller_v_185) {
    sub_2 = sub_35;
  } else {
    sub_2 = sub_3;
  };
  sub_52 = sub_20;
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_65 = !(controller_v_103);
  sub_64 = sub_65;
  sub_66 = true;
  if (controller_v_102) {
    v_43 = sub_66;
  } else {
    v_43 = sub_16;
  };
  if (controller_ck_5_1) {
    sub_63 = v_43;
  } else {
    sub_63 = sub_64;
  };
  sub_62 = sub_63;
  if (controller_v_101) {
    sub_61 = sub_62;
  } else {
    sub_61 = sub_22;
  };
  if (controller_v_100) {
    sub_67 = sub_23;
  } else {
    sub_67 = sub_63;
  };
  if (controller_ck_1) {
    sub_60 = sub_67;
  } else {
    sub_60 = sub_61;
  };
  sub_59 = sub_60;
  sub_69 = sub_62;
  sub_68 = sub_69;
  if (controller_cntrl_dir_reverse) {
    sub_58 = sub_59;
  } else {
    sub_58 = sub_68;
  };
  sub_57 = sub_58;
  sub_56 = sub_57;
  sub_55 = sub_56;
  sub_54 = sub_55;
  sub_53 = sub_54;
  if (controller_cntrl_dir_layer) {
    sub_46 = sub_47;
  } else {
    sub_46 = sub_53;
  };
  if (controller_cntrl_dir_left) {
    v_42 = sub_58;
  } else {
    v_42 = sub_52;
  };
  if (controller_v_129) {
    sub_73 = v_42;
  } else {
    sub_73 = sub_51;
  };
  sub_72 = sub_73;
  sub_71 = sub_72;
  if (controller_cntrl_dir_layer) {
    sub_70 = sub_71;
  } else {
    sub_70 = sub_53;
  };
  if (controller_v_125) {
    sub_45 = sub_46;
  } else {
    sub_45 = sub_70;
  };
  sub_44 = sub_45;
  if (controller_cntrl_dir_reverse) {
    v_38 = sub_20;
  } else {
    v_38 = sub_68;
  };
  sub_81 = sub_59;
  if (controller_cntrl_dir_left) {
    sub_80 = v_38;
  } else {
    sub_80 = sub_81;
  };
  sub_79 = sub_80;
  sub_78 = sub_79;
  sub_77 = sub_78;
  sub_76 = sub_77;
  if (controller_cntrl_dir_layer) {
    v_39 = sub_47;
  } else {
    v_39 = sub_76;
  };
  sub_84 = sub_81;
  sub_83 = sub_84;
  sub_82 = sub_83;
  if (controller_v_143) {
    v_40 = sub_82;
  } else {
    v_40 = sub_77;
  };
  if (controller_cntrl_dir_layer) {
    v_41 = v_40;
  } else {
    v_41 = sub_76;
  };
  if (controller_v_139) {
    sub_75 = v_39;
  } else {
    sub_75 = v_41;
  };
  sub_74 = sub_75;
  if (controller_v_185) {
    v_48 = sub_74;
  } else {
    v_48 = sub_44;
  };
  if (controller_v_186) {
    sub_1 = v_48;
  } else {
    sub_1 = sub_2;
  };
  sub_98 = sub_66;
  sub_97 = sub_98;
  if (controller_v_101) {
    sub_96 = sub_97;
  } else {
    sub_96 = false;
  };
  if (controller_v_100) {
    sub_99 = false;
  } else {
    sub_99 = sub_98;
  };
  if (controller_ck_1) {
    sub_95 = sub_99;
  } else {
    sub_95 = sub_96;
  };
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  if (controller_v_102) {
    v_34 = false;
  } else {
    v_34 = sub_66;
  };
  sub_107 = (controller_v_103||false);
  sub_106 = sub_107;
  if (controller_ck_5_1) {
    sub_105 = v_34;
  } else {
    sub_105 = sub_106;
  };
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_109 = sub_97;
  sub_108 = sub_109;
  if (controller_cntrl_dir_reverse) {
    v_35 = sub_102;
  } else {
    v_35 = sub_108;
  };
  if (controller_cntrl_dir_left) {
    sub_101 = v_35;
  } else {
    sub_101 = sub_93;
  };
  sub_100 = sub_101;
  if (controller_v_101) {
    sub_113 = sub_104;
  } else {
    sub_113 = false;
  };
  if (controller_v_100) {
    sub_114 = false;
  } else {
    sub_114 = sub_105;
  };
  if (controller_ck_1) {
    sub_112 = sub_114;
  } else {
    sub_112 = sub_113;
  };
  sub_111 = sub_112;
  if (controller_cntrl_dir_left) {
    sub_110 = sub_111;
  } else {
    sub_110 = sub_93;
  };
  if (controller_v_115) {
    v_36 = sub_100;
  } else {
    v_36 = sub_110;
  };
  if (controller_v_111) {
    sub_90 = sub_91;
  } else {
    sub_90 = v_36;
  };
  sub_116 = sub_100;
  sub_115 = sub_116;
  if (controller_cntrl_dir_layer) {
    sub_89 = sub_90;
  } else {
    sub_89 = sub_115;
  };
  sub_88 = sub_89;
  sub_87 = sub_88;
  sub_86 = sub_87;
  if (controller_v_102) {
    v_33 = sub_16;
  } else {
    v_33 = sub_66;
  };
  sub_128 = controller_v_103;
  if (controller_ck_5_1) {
    sub_127 = v_33;
  } else {
    sub_127 = sub_128;
  };
  sub_126 = sub_127;
  sub_125 = sub_126;
  if (controller_v_104) {
    sub_124 = sub_95;
  } else {
    sub_124 = sub_125;
  };
  sub_129 = sub_125;
  if (controller_cntrl_dir_left) {
    sub_123 = sub_124;
  } else {
    sub_123 = sub_129;
  };
  sub_122 = sub_123;
  sub_121 = sub_122;
  sub_120 = sub_121;
  sub_119 = sub_120;
  sub_118 = sub_119;
  sub_117 = sub_118;
  if (controller_v_104) {
    sub_137 = sub_95;
  } else {
    sub_137 = sub_109;
  };
  if (controller_cntrl_dir_left) {
    sub_136 = sub_137;
  } else {
    sub_136 = sub_108;
  };
  sub_135 = sub_136;
  sub_134 = sub_135;
  sub_133 = sub_134;
  sub_132 = sub_133;
  sub_131 = sub_132;
  sub_130 = sub_131;
  if (controller_v_106) {
    v_37 = sub_117;
  } else {
    v_37 = sub_130;
  };
  if (controller_v_185) {
    sub_85 = v_37;
  } else {
    sub_85 = sub_86;
  };
  sub_146 = sub_102;
  sub_145 = sub_146;
  sub_144 = sub_145;
  sub_143 = sub_144;
  sub_142 = sub_143;
  sub_141 = sub_142;
  if (controller_v_101) {
    sub_155 = sub_97;
  } else {
    sub_155 = sub_22;
  };
  if (controller_v_100) {
    sub_156 = sub_23;
  } else {
    sub_156 = sub_98;
  };
  if (controller_ck_1) {
    sub_154 = sub_156;
  } else {
    sub_154 = sub_155;
  };
  sub_153 = sub_154;
  if (controller_cntrl_dir_reverse) {
    sub_152 = sub_153;
  } else {
    sub_152 = sub_108;
  };
  sub_151 = sub_152;
  sub_150 = sub_151;
  sub_149 = sub_150;
  sub_148 = sub_149;
  sub_147 = sub_148;
  if (controller_cntrl_dir_layer) {
    sub_140 = sub_141;
  } else {
    sub_140 = sub_147;
  };
  if (controller_v_101) {
    sub_164 = sub_104;
  } else {
    sub_164 = sub_22;
  };
  if (controller_v_100) {
    sub_165 = sub_23;
  } else {
    sub_165 = sub_105;
  };
  if (controller_ck_1) {
    sub_163 = sub_165;
  } else {
    sub_163 = sub_164;
  };
  sub_162 = sub_163;
  sub_161 = sub_162;
  if (controller_cntrl_dir_left) {
    v_32 = sub_152;
  } else {
    v_32 = sub_161;
  };
  if (controller_v_129) {
    sub_160 = v_32;
  } else {
    sub_160 = sub_161;
  };
  sub_159 = sub_160;
  sub_158 = sub_159;
  if (controller_cntrl_dir_layer) {
    sub_157 = sub_158;
  } else {
    sub_157 = sub_147;
  };
  if (controller_v_125) {
    sub_139 = sub_140;
  } else {
    sub_139 = sub_157;
  };
  sub_138 = sub_139;
  if (controller_cntrl_dir_reverse) {
    v = sub_162;
  } else {
    v = sub_108;
  };
  sub_173 = sub_153;
  if (controller_cntrl_dir_left) {
    sub_172 = v;
  } else {
    sub_172 = sub_173;
  };
  sub_171 = sub_172;
  sub_170 = sub_171;
  sub_169 = sub_170;
  sub_168 = sub_169;
  if (controller_cntrl_dir_layer) {
    v_29 = sub_141;
  } else {
    v_29 = sub_168;
  };
  sub_176 = sub_173;
  sub_175 = sub_176;
  sub_174 = sub_175;
  if (controller_v_143) {
    v_30 = sub_174;
  } else {
    v_30 = sub_169;
  };
  if (controller_cntrl_dir_layer) {
    v_31 = v_30;
  } else {
    v_31 = sub_168;
  };
  if (controller_v_139) {
    sub_167 = v_29;
  } else {
    sub_167 = v_31;
  };
  sub_166 = sub_167;
  if (controller_v_185) {
    v_49 = sub_166;
  } else {
    v_49 = sub_138;
  };
  if (controller_v_186) {
    v_50 = v_49;
  } else {
    v_50 = sub_85;
  };
  if (p_controller_cntrl_dir_right) {
    sub_0 = v_50;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_cntrl_dir_right = sub_0;;
}

void Controller_controller__controller_controller_controller_cntrl_dir_left_step(
  int controller_v_100, int controller_v_101, int controller_v_102,
  int controller_v_103, int controller_v_104, int controller_v_106,
  int controller_v_139, int controller_v_143, int controller_v_111,
  int controller_v_115, int controller_v_125, int controller_v_129,
  int controller_ck_1, int controller_pnr_4, int controller_ck_5_1,
  int controller_pnr_3, int controller_v_186, int controller_v_185,
  int controller_pnr_2, int controller_ck_9_1, int controller_pnr_1,
  int controller_ck_11_1, int controller_pnr,
  int p_controller_cntrl_motor_right, int p_controller_cntrl_motor_left,
  int p_controller_cntrl_dir_right, int p_controller_cntrl_dir_left,
  int p_controller_cntrl_dir_reverse, int p_controller_cntrl_dir_layer,
  int controller_cntrl_dir_reverse, int controller_cntrl_dir_layer,
  Controller_controller__controller_controller_controller_cntrl_dir_left_out* _out) {
  
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
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  sub_15 = p_controller_cntrl_dir_left;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  if (controller_v_101) {
    sub_11 = sub_12;
  } else {
    sub_11 = false;
  };
  if (controller_v_100) {
    sub_16 = false;
  } else {
    sub_16 = sub_13;
  };
  if (controller_ck_1) {
    sub_10 = sub_16;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_24 = (controller_v_103&&sub_15);
  sub_23 = sub_24;
  sub_25 = false;
  if (controller_v_102) {
    v_59 = sub_25;
  } else {
    v_59 = sub_14;
  };
  if (controller_ck_5_1) {
    sub_22 = v_59;
  } else {
    sub_22 = sub_23;
  };
  sub_21 = sub_22;
  sub_28 = (controller_v_103||false);
  sub_27 = sub_28;
  sub_29 = true;
  if (controller_v_102) {
    v_58 = false;
  } else {
    v_58 = sub_29;
  };
  if (controller_ck_5_1) {
    sub_26 = v_58;
  } else {
    sub_26 = sub_27;
  };
  if (controller_v_101) {
    sub_20 = sub_21;
  } else {
    sub_20 = sub_26;
  };
  if (controller_v_100) {
    sub_30 = sub_26;
  } else {
    sub_30 = sub_22;
  };
  if (controller_ck_1) {
    sub_19 = sub_30;
  } else {
    sub_19 = sub_20;
  };
  sub_33 = sub_29;
  if (controller_v_101) {
    sub_32 = sub_12;
  } else {
    sub_32 = sub_33;
  };
  if (controller_v_100) {
    sub_34 = sub_33;
  } else {
    sub_34 = sub_13;
  };
  if (controller_ck_1) {
    sub_31 = sub_34;
  } else {
    sub_31 = sub_32;
  };
  if (controller_cntrl_dir_reverse) {
    sub_18 = sub_19;
  } else {
    sub_18 = sub_31;
  };
  sub_17 = sub_18;
  if (controller_v_101) {
    sub_38 = sub_21;
  } else {
    sub_38 = false;
  };
  if (controller_v_100) {
    sub_39 = false;
  } else {
    sub_39 = sub_22;
  };
  if (controller_ck_1) {
    sub_37 = sub_39;
  } else {
    sub_37 = sub_38;
  };
  sub_36 = sub_37;
  sub_35 = sub_36;
  if (controller_v_115) {
    v_60 = sub_17;
  } else {
    v_60 = sub_35;
  };
  if (controller_v_111) {
    sub_6 = sub_7;
  } else {
    sub_6 = v_60;
  };
  sub_41 = sub_17;
  sub_40 = sub_41;
  if (controller_cntrl_dir_layer) {
    sub_5 = sub_6;
  } else {
    sub_5 = sub_40;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_52 = sub_25;
  if (controller_v_101) {
    sub_51 = sub_12;
  } else {
    sub_51 = sub_52;
  };
  if (controller_v_100) {
    sub_53 = sub_52;
  } else {
    sub_53 = sub_13;
  };
  if (controller_ck_1) {
    v_57 = sub_53;
  } else {
    v_57 = sub_51;
  };
  sub_54 = sub_12;
  if (controller_v_104) {
    sub_50 = v_57;
  } else {
    sub_50 = sub_54;
  };
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  if (controller_v_185) {
    sub_1 = sub_42;
  } else {
    sub_1 = sub_2;
  };
  if (controller_v_102) {
    v_56 = false;
  } else {
    v_56 = sub_14;
  };
  if (controller_v_103) {
    sub_68 = sub_15;
  } else {
    sub_68 = false;
  };
  sub_67 = sub_68;
  if (controller_ck_5_1) {
    sub_66 = v_56;
  } else {
    sub_66 = sub_67;
  };
  sub_65 = sub_66;
  sub_64 = sub_65;
  sub_63 = sub_64;
  sub_62 = sub_63;
  sub_61 = sub_62;
  sub_60 = sub_61;
  sub_59 = sub_60;
  sub_58 = sub_59;
  if (controller_v_101) {
    sub_76 = sub_12;
  } else {
    sub_76 = sub_65;
  };
  if (controller_v_100) {
    sub_77 = sub_66;
  } else {
    sub_77 = sub_13;
  };
  if (controller_ck_1) {
    sub_75 = sub_77;
  } else {
    sub_75 = sub_76;
  };
  sub_74 = sub_75;
  if (controller_cntrl_dir_reverse) {
    sub_73 = sub_74;
  } else {
    sub_73 = sub_54;
  };
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  if (controller_cntrl_dir_layer) {
    sub_57 = sub_58;
  } else {
    sub_57 = sub_69;
  };
  if (controller_v_102) {
    v_54 = sub_29;
  } else {
    v_54 = sub_14;
  };
  v_53 = !(controller_v_103);
  sub_87 = (v_53||sub_15);
  sub_86 = sub_87;
  if (controller_ck_5_1) {
    sub_85 = v_54;
  } else {
    sub_85 = sub_86;
  };
  sub_84 = sub_85;
  if (controller_v_101) {
    sub_83 = sub_84;
  } else {
    sub_83 = sub_65;
  };
  if (controller_v_100) {
    sub_88 = sub_66;
  } else {
    sub_88 = sub_85;
  };
  if (controller_ck_1) {
    sub_82 = sub_88;
  } else {
    sub_82 = sub_83;
  };
  sub_89 = sub_84;
  if (controller_cntrl_dir_reverse) {
    v_55 = sub_82;
  } else {
    v_55 = sub_89;
  };
  if (controller_v_129) {
    sub_81 = v_55;
  } else {
    sub_81 = sub_62;
  };
  sub_80 = sub_81;
  sub_79 = sub_80;
  if (controller_cntrl_dir_layer) {
    sub_78 = sub_79;
  } else {
    sub_78 = sub_69;
  };
  if (controller_v_125) {
    sub_56 = sub_57;
  } else {
    sub_56 = sub_78;
  };
  sub_55 = sub_56;
  if (controller_v_101) {
    sub_98 = sub_21;
  } else {
    sub_98 = sub_65;
  };
  if (controller_v_100) {
    sub_99 = sub_66;
  } else {
    sub_99 = sub_22;
  };
  if (controller_ck_1) {
    sub_97 = sub_99;
  } else {
    sub_97 = sub_98;
  };
  if (controller_v_101) {
    sub_101 = sub_12;
  } else {
    sub_101 = sub_84;
  };
  if (controller_v_100) {
    sub_102 = sub_85;
  } else {
    sub_102 = sub_13;
  };
  if (controller_ck_1) {
    sub_100 = sub_102;
  } else {
    sub_100 = sub_101;
  };
  if (controller_cntrl_dir_reverse) {
    sub_96 = sub_97;
  } else {
    sub_96 = sub_100;
  };
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  if (controller_cntrl_dir_layer) {
    v = sub_58;
  } else {
    v = sub_92;
  };
  sub_105 = sub_74;
  sub_104 = sub_105;
  sub_103 = sub_104;
  if (controller_v_143) {
    v_51 = sub_103;
  } else {
    v_51 = sub_93;
  };
  if (controller_cntrl_dir_layer) {
    v_52 = v_51;
  } else {
    v_52 = sub_92;
  };
  if (controller_v_139) {
    sub_91 = v;
  } else {
    sub_91 = v_52;
  };
  sub_90 = sub_91;
  if (controller_v_185) {
    v_61 = sub_90;
  } else {
    v_61 = sub_55;
  };
  if (controller_v_186) {
    sub_0 = v_61;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_cntrl_dir_left = sub_0;;
}

void Controller_controller__controller_controller_controller_cntrl_dir_reverse_step(
  int controller_v_100, int controller_v_101, int controller_v_102,
  int controller_v_103, int controller_v_104, int controller_v_106,
  int controller_v_139, int controller_v_143, int controller_v_111,
  int controller_v_115, int controller_v_125, int controller_v_129,
  int controller_ck_1, int controller_pnr_4, int controller_ck_5_1,
  int controller_pnr_3, int controller_v_186, int controller_v_185,
  int controller_pnr_2, int controller_ck_9_1, int controller_pnr_1,
  int controller_ck_11_1, int controller_pnr,
  int p_controller_cntrl_motor_right, int p_controller_cntrl_motor_left,
  int p_controller_cntrl_dir_right, int p_controller_cntrl_dir_left,
  int p_controller_cntrl_dir_reverse, int p_controller_cntrl_dir_layer,
  int controller_cntrl_dir_layer,
  Controller_controller__controller_controller_controller_cntrl_dir_reverse_out* _out) {
  
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
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
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  sub_14 = p_controller_cntrl_dir_reverse;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (controller_v_101) {
    sub_10 = sub_11;
  } else {
    sub_10 = false;
  };
  if (controller_v_100) {
    sub_15 = false;
  } else {
    sub_15 = sub_12;
  };
  if (controller_ck_1) {
    sub_9 = sub_15;
  } else {
    sub_9 = sub_10;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_v_102) {
    v_64 = false;
  } else {
    v_64 = sub_13;
  };
  sub_22 = (controller_v_103&&sub_14);
  sub_21 = sub_22;
  if (controller_ck_5_1) {
    sub_20 = v_64;
  } else {
    sub_20 = sub_21;
  };
  if (controller_v_101) {
    sub_19 = sub_11;
  } else {
    sub_19 = sub_20;
  };
  if (controller_v_100) {
    sub_23 = sub_20;
  } else {
    sub_23 = sub_12;
  };
  if (controller_ck_1) {
    sub_18 = sub_23;
  } else {
    sub_18 = sub_19;
  };
  sub_17 = sub_18;
  sub_16 = sub_17;
  if (controller_v_115) {
    v_65 = sub_16;
  } else {
    v_65 = sub_7;
  };
  if (controller_v_111) {
    sub_6 = sub_7;
  } else {
    sub_6 = v_65;
  };
  sub_26 = sub_16;
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (controller_cntrl_dir_layer) {
    sub_5 = sub_6;
  } else {
    sub_5 = sub_24;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_35 = sub_11;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  if (controller_v_185) {
    sub_1 = sub_27;
  } else {
    sub_1 = sub_2;
  };
  if (controller_v_102) {
    v_63 = false;
  } else {
    v_63 = sub_13;
  };
  if (controller_v_103) {
    sub_47 = sub_14;
  } else {
    sub_47 = false;
  };
  sub_46 = sub_47;
  if (controller_ck_5_1) {
    sub_45 = v_63;
  } else {
    sub_45 = sub_46;
  };
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (controller_cntrl_dir_layer) {
    sub_38 = sub_39;
  } else {
    sub_38 = sub_24;
  };
  if (controller_v_129) {
    sub_51 = sub_17;
  } else {
    sub_51 = sub_42;
  };
  sub_50 = sub_51;
  sub_49 = sub_50;
  if (controller_cntrl_dir_layer) {
    sub_48 = sub_49;
  } else {
    sub_48 = sub_24;
  };
  if (controller_v_125) {
    sub_37 = sub_38;
  } else {
    sub_37 = sub_48;
  };
  sub_36 = sub_37;
  if (controller_v_101) {
    sub_58 = sub_11;
  } else {
    sub_58 = sub_44;
  };
  if (controller_v_100) {
    sub_59 = sub_45;
  } else {
    sub_59 = sub_12;
  };
  if (controller_ck_1) {
    sub_57 = sub_59;
  } else {
    sub_57 = sub_58;
  };
  sub_56 = sub_57;
  sub_55 = sub_56;
  sub_54 = sub_55;
  if (controller_v_143) {
    v = sub_54;
  } else {
    v = sub_25;
  };
  if (controller_cntrl_dir_layer) {
    v_62 = v;
  } else {
    v_62 = sub_24;
  };
  if (controller_v_139) {
    sub_53 = sub_38;
  } else {
    sub_53 = v_62;
  };
  sub_52 = sub_53;
  if (controller_v_185) {
    v_66 = sub_52;
  } else {
    v_66 = sub_36;
  };
  if (controller_v_186) {
    sub_0 = v_66;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_cntrl_dir_reverse = sub_0;;
}

void Controller_controller__controller_controller_controller_cntrl_dir_layer_step(
  int controller_v_100, int controller_v_101, int controller_v_102,
  int controller_v_103, int controller_v_104, int controller_v_106,
  int controller_v_139, int controller_v_143, int controller_v_111,
  int controller_v_115, int controller_v_125, int controller_v_129,
  int controller_ck_1, int controller_pnr_4, int controller_ck_5_1,
  int controller_pnr_3, int controller_v_186, int controller_v_185,
  int controller_pnr_2, int controller_ck_9_1, int controller_pnr_1,
  int controller_ck_11_1, int controller_pnr,
  int p_controller_cntrl_motor_right, int p_controller_cntrl_motor_left,
  int p_controller_cntrl_dir_right, int p_controller_cntrl_dir_left,
  int p_controller_cntrl_dir_reverse, int p_controller_cntrl_dir_layer,
  Controller_controller__controller_controller_controller_cntrl_dir_layer_out* _out) {
  
  int v_69;
  int v_68;
  int v_67;
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
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  sub_14 = p_controller_cntrl_dir_layer;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_16 = false;
  sub_15 = sub_16;
  if (controller_v_101) {
    sub_10 = sub_11;
  } else {
    sub_10 = sub_15;
  };
  if (controller_v_100) {
    sub_17 = sub_15;
  } else {
    sub_17 = sub_12;
  };
  if (controller_ck_1) {
    sub_9 = sub_17;
  } else {
    sub_9 = sub_10;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_20 = sub_11;
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (controller_v_115) {
    v_68 = sub_18;
  } else {
    v_68 = sub_7;
  };
  if (controller_v_111) {
    sub_6 = sub_7;
  } else {
    sub_6 = v_68;
  };
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_25 = sub_18;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (controller_v_185) {
    sub_1 = sub_21;
  } else {
    sub_1 = sub_2;
  };
  if (controller_v_102) {
    v_67 = sub_16;
  } else {
    v_67 = sub_13;
  };
  sub_37 = (controller_v_103&&sub_14);
  sub_36 = sub_37;
  if (controller_ck_5_1) {
    sub_35 = v_67;
  } else {
    sub_35 = sub_36;
  };
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  if (controller_v_129) {
    sub_41 = sub_19;
  } else {
    sub_41 = sub_32;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (controller_v_125) {
    sub_27 = sub_28;
  } else {
    sub_27 = sub_38;
  };
  sub_26 = sub_27;
  if (controller_v_101) {
    sub_48 = sub_11;
  } else {
    sub_48 = sub_34;
  };
  if (controller_v_100) {
    sub_49 = sub_35;
  } else {
    sub_49 = sub_12;
  };
  if (controller_ck_1) {
    sub_47 = sub_49;
  } else {
    sub_47 = sub_48;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  if (controller_v_143) {
    v = sub_44;
  } else {
    v = sub_24;
  };
  if (controller_v_139) {
    sub_43 = sub_28;
  } else {
    sub_43 = v;
  };
  sub_42 = sub_43;
  if (controller_v_185) {
    v_69 = sub_42;
  } else {
    v_69 = sub_26;
  };
  if (controller_v_186) {
    sub_0 = v_69;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_cntrl_dir_layer = sub_0;;
}

void Controller_controller__controller_controller_step(int controller_v_100,
                                                       int controller_v_101,
                                                       int controller_v_102,
                                                       int controller_v_103,
                                                       int controller_v_104,
                                                       int controller_v_106,
                                                       int controller_v_139,
                                                       int controller_v_143,
                                                       int controller_v_111,
                                                       int controller_v_115,
                                                       int controller_v_125,
                                                       int controller_v_129,
                                                       int controller_ck_1,
                                                       int controller_pnr_4,
                                                       int controller_ck_5_1,
                                                       int controller_pnr_3,
                                                       int controller_v_186,
                                                       int controller_v_185,
                                                       int controller_pnr_2,
                                                       int controller_ck_9_1,
                                                       int controller_pnr_1,
                                                       int controller_ck_11_1,
                                                       int controller_pnr,
                                                       int p_controller_cntrl_motor_right,
                                                       int p_controller_cntrl_motor_left,
                                                       int p_controller_cntrl_dir_right,
                                                       int p_controller_cntrl_dir_left,
                                                       int p_controller_cntrl_dir_reverse,
                                                       int p_controller_cntrl_dir_layer,
                                                       Controller_controller__controller_controller_out* _out) {
  Controller_controller__controller_controller_controller_cntrl_dir_right_out Controller_controller__controller_controller_controller_cntrl_dir_right_out_st;
  Controller_controller__controller_controller_controller_cntrl_motor_right_out Controller_controller__controller_controller_controller_cntrl_motor_right_out_st;
  Controller_controller__controller_controller_controller_cntrl_dir_reverse_out Controller_controller__controller_controller_controller_cntrl_dir_reverse_out_st;
  Controller_controller__controller_controller_controller_cntrl_dir_left_out Controller_controller__controller_controller_controller_cntrl_dir_left_out_st;
  Controller_controller__controller_controller_controller_cntrl_dir_layer_out Controller_controller__controller_controller_controller_cntrl_dir_layer_out_st;
  Controller_controller__controller_controller_controller_cntrl_motor_left_out Controller_controller__controller_controller_controller_cntrl_motor_left_out_st;
  Controller_controller__controller_controller_controller_cntrl_dir_layer_step(
  controller_v_100, controller_v_101, controller_v_102, controller_v_103,
  controller_v_104, controller_v_106, controller_v_139, controller_v_143,
  controller_v_111, controller_v_115, controller_v_125, controller_v_129,
  controller_ck_1, controller_pnr_4, controller_ck_5_1, controller_pnr_3,
  controller_v_186, controller_v_185, controller_pnr_2, controller_ck_9_1,
  controller_pnr_1, controller_ck_11_1, controller_pnr,
  p_controller_cntrl_motor_right, p_controller_cntrl_motor_left,
  p_controller_cntrl_dir_right, p_controller_cntrl_dir_left,
  p_controller_cntrl_dir_reverse, p_controller_cntrl_dir_layer,
  &Controller_controller__controller_controller_controller_cntrl_dir_layer_out_st);
  _out->controller_cntrl_dir_layer = Controller_controller__controller_controller_controller_cntrl_dir_layer_out_st.controller_cntrl_dir_layer;
  Controller_controller__controller_controller_controller_cntrl_dir_reverse_step(
  controller_v_100, controller_v_101, controller_v_102, controller_v_103,
  controller_v_104, controller_v_106, controller_v_139, controller_v_143,
  controller_v_111, controller_v_115, controller_v_125, controller_v_129,
  controller_ck_1, controller_pnr_4, controller_ck_5_1, controller_pnr_3,
  controller_v_186, controller_v_185, controller_pnr_2, controller_ck_9_1,
  controller_pnr_1, controller_ck_11_1, controller_pnr,
  p_controller_cntrl_motor_right, p_controller_cntrl_motor_left,
  p_controller_cntrl_dir_right, p_controller_cntrl_dir_left,
  p_controller_cntrl_dir_reverse, p_controller_cntrl_dir_layer,
  _out->controller_cntrl_dir_layer,
  &Controller_controller__controller_controller_controller_cntrl_dir_reverse_out_st);
  _out->controller_cntrl_dir_reverse = Controller_controller__controller_controller_controller_cntrl_dir_reverse_out_st.controller_cntrl_dir_reverse;
  Controller_controller__controller_controller_controller_cntrl_dir_left_step(
  controller_v_100, controller_v_101, controller_v_102, controller_v_103,
  controller_v_104, controller_v_106, controller_v_139, controller_v_143,
  controller_v_111, controller_v_115, controller_v_125, controller_v_129,
  controller_ck_1, controller_pnr_4, controller_ck_5_1, controller_pnr_3,
  controller_v_186, controller_v_185, controller_pnr_2, controller_ck_9_1,
  controller_pnr_1, controller_ck_11_1, controller_pnr,
  p_controller_cntrl_motor_right, p_controller_cntrl_motor_left,
  p_controller_cntrl_dir_right, p_controller_cntrl_dir_left,
  p_controller_cntrl_dir_reverse, p_controller_cntrl_dir_layer,
  _out->controller_cntrl_dir_reverse, _out->controller_cntrl_dir_layer,
  &Controller_controller__controller_controller_controller_cntrl_dir_left_out_st);
  _out->controller_cntrl_dir_left = Controller_controller__controller_controller_controller_cntrl_dir_left_out_st.controller_cntrl_dir_left;
  Controller_controller__controller_controller_controller_cntrl_dir_right_step(
  controller_v_100, controller_v_101, controller_v_102, controller_v_103,
  controller_v_104, controller_v_106, controller_v_139, controller_v_143,
  controller_v_111, controller_v_115, controller_v_125, controller_v_129,
  controller_ck_1, controller_pnr_4, controller_ck_5_1, controller_pnr_3,
  controller_v_186, controller_v_185, controller_pnr_2, controller_ck_9_1,
  controller_pnr_1, controller_ck_11_1, controller_pnr,
  p_controller_cntrl_motor_right, p_controller_cntrl_motor_left,
  p_controller_cntrl_dir_right, p_controller_cntrl_dir_left,
  p_controller_cntrl_dir_reverse, p_controller_cntrl_dir_layer,
  _out->controller_cntrl_dir_left, _out->controller_cntrl_dir_reverse,
  _out->controller_cntrl_dir_layer,
  &Controller_controller__controller_controller_controller_cntrl_dir_right_out_st);
  _out->controller_cntrl_dir_right = Controller_controller__controller_controller_controller_cntrl_dir_right_out_st.controller_cntrl_dir_right;
  Controller_controller__controller_controller_controller_cntrl_motor_left_step(
  controller_v_100, controller_v_101, controller_v_102, controller_v_103,
  controller_v_104, controller_v_106, controller_v_139, controller_v_143,
  controller_v_111, controller_v_115, controller_v_125, controller_v_129,
  controller_ck_1, controller_pnr_4, controller_ck_5_1, controller_pnr_3,
  controller_v_186, controller_v_185, controller_pnr_2, controller_ck_9_1,
  controller_pnr_1, controller_ck_11_1, controller_pnr,
  p_controller_cntrl_motor_right, p_controller_cntrl_motor_left,
  p_controller_cntrl_dir_right, p_controller_cntrl_dir_left,
  p_controller_cntrl_dir_reverse, p_controller_cntrl_dir_layer,
  _out->controller_cntrl_dir_right, _out->controller_cntrl_dir_left,
  _out->controller_cntrl_dir_reverse, _out->controller_cntrl_dir_layer,
  &Controller_controller__controller_controller_controller_cntrl_motor_left_out_st);
  _out->controller_cntrl_motor_left = Controller_controller__controller_controller_controller_cntrl_motor_left_out_st.controller_cntrl_motor_left;
  Controller_controller__controller_controller_controller_cntrl_motor_right_step(
  controller_v_100, controller_v_101, controller_v_102, controller_v_103,
  controller_v_104, controller_v_106, controller_v_139, controller_v_143,
  controller_v_111, controller_v_115, controller_v_125, controller_v_129,
  controller_ck_1, controller_pnr_4, controller_ck_5_1, controller_pnr_3,
  controller_v_186, controller_v_185, controller_pnr_2, controller_ck_9_1,
  controller_pnr_1, controller_ck_11_1, controller_pnr,
  p_controller_cntrl_motor_right, p_controller_cntrl_motor_left,
  p_controller_cntrl_dir_right, p_controller_cntrl_dir_left,
  p_controller_cntrl_dir_reverse, p_controller_cntrl_dir_layer,
  _out->controller_cntrl_motor_left, _out->controller_cntrl_dir_right,
  _out->controller_cntrl_dir_left, _out->controller_cntrl_dir_reverse,
  _out->controller_cntrl_dir_layer,
  &Controller_controller__controller_controller_controller_cntrl_motor_right_out_st);
  _out->controller_cntrl_motor_right = Controller_controller__controller_controller_controller_cntrl_motor_right_out_st.controller_cntrl_motor_right;
}

