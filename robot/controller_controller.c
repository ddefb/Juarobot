/* --- Generated the 27/2/2019 at 8:32 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c controller_controller.ept --- */

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
  sub_6 = false;
  if (controller_v_57) {
    v_8 = false;
  } else {
    v_8 = sub_6;
  };
  if (controller_c_move) {
    v_9 = sub_6;
  } else {
    v_9 = v_8;
  };
  if (controller_v_58) {
    sub_5 = v_9;
  } else {
    sub_5 = false;
  };
  if (controller_v_18) {
    sub_4 = sub_5;
  } else {
    sub_4 = false;
  };
  if (controller_ck_1) {
    v_11 = sub_5;
    v_10 = false;
  } else {
    v_11 = sub_4;
    v_10 = sub_4;
  };
  if (controller_v_17) {
    sub_3 = v_10;
  } else {
    sub_3 = v_11;
  };
  sub_2 = sub_3;
  sub_8 = sub_6;
  if (controller_v_57) {
    v_6 = sub_6;
  } else {
    v_6 = false;
  };
  if (controller_c_move) {
    v_7 = false;
  } else {
    v_7 = v_6;
  };
  if (controller_v_58) {
    sub_9 = v_7;
  } else {
    sub_9 = sub_8;
  };
  if (controller_v_18) {
    sub_7 = sub_8;
  } else {
    sub_7 = sub_9;
  };
  if (controller_ck_1) {
    v_13 = sub_8;
  } else {
    v_13 = sub_7;
  };
  sub_10 = sub_9;
  if (controller_ck_1) {
    v_12 = sub_10;
  } else {
    v_12 = sub_7;
  };
  if (controller_v_17) {
    v_14 = v_12;
  } else {
    v_14 = v_13;
  };
  if (controller_c_motor1) {
    v_15 = v_14;
  } else {
    v_15 = sub_3;
  };
  if (controller_c_motor2) {
    v_16 = sub_2;
  } else {
    v_16 = v_15;
  };
  if (controller_c_motor3) {
    sub_1 = v_16;
  } else {
    sub_1 = sub_2;
  };
  sub_15 = true;
  if (controller_v_57) {
    v_2 = false;
  } else {
    v_2 = sub_15;
  };
  if (controller_c_move) {
    v_3 = sub_15;
  } else {
    v_3 = v_2;
  };
  if (controller_v_58) {
    sub_14 = v_3;
  } else {
    sub_14 = false;
  };
  if (controller_v_18) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (controller_ck_1) {
    v_5 = sub_14;
    v_4 = false;
  } else {
    v_5 = sub_13;
    v_4 = sub_13;
  };
  if (controller_v_17) {
    sub_12 = v_4;
  } else {
    sub_12 = v_5;
  };
  sub_11 = sub_12;
  if (controller_v_57) {
    v = sub_6;
  } else {
    v = sub_15;
  };
  if (controller_c_move) {
    v_1 = sub_15;
  } else {
    v_1 = v;
  };
  if (controller_v_58) {
    sub_17 = v_1;
  } else {
    sub_17 = sub_8;
  };
  if (controller_v_18) {
    sub_16 = sub_17;
  } else {
    sub_16 = sub_9;
  };
  if (controller_ck_1) {
    v_18 = sub_17;
    v_17 = sub_10;
  } else {
    v_18 = sub_16;
    v_17 = sub_16;
  };
  if (controller_v_17) {
    v_19 = v_17;
  } else {
    v_19 = v_18;
  };
  if (controller_c_motor1) {
    v_20 = v_19;
  } else {
    v_20 = sub_12;
  };
  if (controller_c_motor2) {
    v_21 = sub_11;
  } else {
    v_21 = v_20;
  };
  if (controller_c_motor3) {
    v_22 = v_21;
  } else {
    v_22 = sub_11;
  };
  if (p_controller_c_motor4) {
    sub_0 = v_22;
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
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
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
  sub_5 = false;
  if (controller_v_57) {
    v_30 = false;
  } else {
    v_30 = sub_5;
  };
  if (controller_c_move) {
    v_31 = sub_5;
  } else {
    v_31 = v_30;
  };
  if (controller_v_58) {
    sub_4 = v_31;
  } else {
    sub_4 = false;
  };
  if (controller_v_18) {
    sub_3 = sub_4;
  } else {
    sub_3 = false;
  };
  if (controller_ck_1) {
    v_33 = sub_4;
    v_32 = false;
  } else {
    v_33 = sub_3;
    v_32 = sub_3;
  };
  if (controller_v_17) {
    sub_2 = v_32;
  } else {
    sub_2 = v_33;
  };
  sub_9 = true;
  if (controller_v_57) {
    v_28 = sub_9;
  } else {
    v_28 = sub_5;
  };
  if (controller_c_move) {
    v_29 = sub_5;
  } else {
    v_29 = v_28;
  };
  sub_8 = sub_9;
  if (controller_v_58) {
    sub_7 = v_29;
  } else {
    sub_7 = sub_8;
  };
  if (controller_v_57) {
    v_26 = sub_9;
  } else {
    v_26 = false;
  };
  if (controller_c_move) {
    v_27 = false;
  } else {
    v_27 = v_26;
  };
  if (controller_v_58) {
    sub_10 = v_27;
  } else {
    sub_10 = sub_8;
  };
  if (controller_v_18) {
    sub_6 = sub_7;
  } else {
    sub_6 = sub_10;
  };
  if (controller_ck_1) {
    v_35 = sub_7;
  } else {
    v_35 = sub_6;
  };
  sub_11 = sub_10;
  if (controller_ck_1) {
    v_34 = sub_11;
  } else {
    v_34 = sub_6;
  };
  if (controller_v_17) {
    v_36 = v_34;
  } else {
    v_36 = v_35;
  };
  if (controller_c_motor1) {
    v_37 = v_36;
  } else {
    v_37 = sub_2;
  };
  if (controller_c_motor2) {
    sub_1 = sub_2;
  } else {
    sub_1 = v_37;
  };
  if (controller_v_57) {
    v = false;
  } else {
    v = sub_9;
  };
  if (controller_c_move) {
    v_23 = sub_9;
  } else {
    v_23 = v;
  };
  if (controller_v_58) {
    sub_14 = v_23;
  } else {
    sub_14 = false;
  };
  if (controller_v_18) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (controller_ck_1) {
    v_25 = sub_14;
    v_24 = false;
  } else {
    v_25 = sub_13;
    v_24 = sub_13;
  };
  if (controller_v_17) {
    sub_12 = v_24;
  } else {
    sub_12 = v_25;
  };
  if (controller_v_18) {
    sub_15 = sub_8;
  } else {
    sub_15 = sub_10;
  };
  if (controller_ck_1) {
    v_39 = sub_8;
    v_38 = sub_11;
  } else {
    v_39 = sub_15;
    v_38 = sub_15;
  };
  if (controller_v_17) {
    v_40 = v_38;
  } else {
    v_40 = v_39;
  };
  if (controller_c_motor1) {
    v_41 = v_40;
  } else {
    v_41 = sub_12;
  };
  if (controller_c_motor2) {
    v_42 = sub_12;
  } else {
    v_42 = v_41;
  };
  if (p_controller_c_motor3) {
    sub_0 = v_42;
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
  sub_4 = false;
  sub_3 = sub_4;
  if (controller_v_57) {
    v_48 = sub_4;
  } else {
    v_48 = false;
  };
  if (controller_c_move) {
    v_49 = false;
  } else {
    v_49 = v_48;
  };
  if (controller_v_58) {
    sub_5 = v_49;
  } else {
    sub_5 = sub_3;
  };
  if (controller_v_18) {
    sub_2 = sub_3;
  } else {
    sub_2 = sub_5;
  };
  if (controller_ck_1) {
    v_51 = sub_3;
  } else {
    v_51 = sub_2;
  };
  sub_6 = sub_5;
  if (controller_ck_1) {
    v_50 = sub_6;
  } else {
    v_50 = sub_2;
  };
  if (controller_v_17) {
    v_52 = v_50;
  } else {
    v_52 = v_51;
  };
  if (controller_v_57) {
    v_46 = false;
  } else {
    v_46 = sub_4;
  };
  if (controller_c_move) {
    v_47 = sub_4;
  } else {
    v_47 = v_46;
  };
  if (controller_v_58) {
    sub_8 = v_47;
  } else {
    sub_8 = false;
  };
  if (controller_v_18) {
    sub_7 = sub_8;
  } else {
    sub_7 = false;
  };
  if (controller_ck_1) {
    v_54 = sub_8;
    v_53 = false;
  } else {
    v_54 = sub_7;
    v_53 = sub_7;
  };
  if (controller_v_17) {
    v_55 = v_53;
  } else {
    v_55 = v_54;
  };
  if (controller_c_motor1) {
    sub_1 = v_52;
  } else {
    sub_1 = v_55;
  };
  sub_11 = true;
  if (controller_v_57) {
    v_44 = sub_4;
  } else {
    v_44 = sub_11;
  };
  if (controller_c_move) {
    v_45 = sub_11;
  } else {
    v_45 = v_44;
  };
  if (controller_v_58) {
    sub_10 = v_45;
  } else {
    sub_10 = sub_3;
  };
  if (controller_v_18) {
    sub_9 = sub_10;
  } else {
    sub_9 = sub_5;
  };
  if (controller_ck_1) {
    v_57 = sub_10;
    v_56 = sub_6;
  } else {
    v_57 = sub_9;
    v_56 = sub_9;
  };
  if (controller_v_17) {
    v_58 = v_56;
  } else {
    v_58 = v_57;
  };
  if (controller_v_57) {
    v = false;
  } else {
    v = sub_11;
  };
  if (controller_c_move) {
    v_43 = sub_11;
  } else {
    v_43 = v;
  };
  if (controller_v_58) {
    sub_13 = v_43;
  } else {
    sub_13 = false;
  };
  if (controller_v_18) {
    sub_12 = sub_13;
  } else {
    sub_12 = false;
  };
  if (controller_ck_1) {
    v_60 = sub_13;
    v_59 = false;
  } else {
    v_60 = sub_12;
    v_59 = sub_12;
  };
  if (controller_v_17) {
    v_61 = v_59;
  } else {
    v_61 = v_60;
  };
  if (controller_c_motor1) {
    v_62 = v_58;
  } else {
    v_62 = v_61;
  };
  if (p_controller_c_motor2) {
    sub_0 = v_62;
  } else {
    sub_0 = sub_1;
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
  
  int v_67;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  sub_4 = true;
  sub_3 = sub_4;
  sub_6 = false;
  if (p_controller_c_motor1) {
    sub_5 = sub_4;
  } else {
    sub_5 = sub_6;
  };
  if (controller_v_57) {
    v_64 = sub_4;
  } else {
    v_64 = sub_5;
  };
  if (controller_c_move) {
    v_65 = sub_5;
  } else {
    v_65 = v_64;
  };
  if (controller_v_58) {
    sub_2 = v_65;
  } else {
    sub_2 = sub_3;
  };
  if (controller_v_57) {
    v = sub_4;
  } else {
    v = false;
  };
  if (controller_c_move) {
    v_63 = false;
  } else {
    v_63 = v;
  };
  if (controller_v_58) {
    sub_7 = v_63;
  } else {
    sub_7 = sub_3;
  };
  if (controller_v_18) {
    sub_1 = sub_2;
  } else {
    sub_1 = sub_7;
  };
  if (controller_ck_1) {
    v_67 = sub_2;
    v_66 = sub_7;
  } else {
    v_67 = sub_1;
    v_66 = sub_1;
  };
  if (controller_v_17) {
    sub_0 = v_66;
  } else {
    sub_0 = v_67;
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
  
  int v_71;
  int v_70;
  int v_69;
  int v_68;
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
  sub_3 = false;
  if (controller_v_57) {
    sub_5 = sub_3;
  } else {
    sub_5 = false;
  };
  if (controller_v_58) {
    sub_4 = sub_5;
  } else {
    sub_4 = sub_3;
  };
  if (controller_v_18) {
    sub_2 = sub_3;
  } else {
    sub_2 = sub_4;
  };
  if (controller_ck_1) {
    v_68 = sub_3;
    v = sub_4;
  } else {
    v_68 = sub_2;
    v = sub_2;
  };
  if (controller_v_17) {
    sub_1 = v;
  } else {
    sub_1 = v_68;
  };
  sub_7 = true;
  if (controller_v_58) {
    sub_8 = sub_5;
  } else {
    sub_8 = sub_7;
  };
  if (controller_v_18) {
    sub_6 = sub_7;
  } else {
    sub_6 = sub_8;
  };
  if (controller_ck_1) {
    v_70 = sub_7;
    v_69 = sub_8;
  } else {
    v_70 = sub_6;
    v_69 = sub_6;
  };
  if (controller_v_17) {
    v_71 = v_69;
  } else {
    v_71 = v_70;
  };
  if (p_controller_c_move) {
    sub_0 = v_71;
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

