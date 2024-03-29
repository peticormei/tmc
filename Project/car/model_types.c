/* --- Generated the 17/11/2019 at 13:30 --- */
/* --- heptagon compiler, version 1.03.00 (compiled sun. oct. 20 0:47:43 CET 2019) --- */
/* --- Command line: /home/opam/.opam/4.02/bin/heptc -target c -target z3z -s controller model.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "model_types.h"

Model__st_7 Model__st_7_of_string(char* s) {
  if ((strcmp(s, "St_7_OBSTACLE")==0)) {
    return Model__St_7_OBSTACLE;
  };
  if ((strcmp(s, "St_7_NO_OBSTACLE")==0)) {
    return Model__St_7_NO_OBSTACLE;
  };
}

char* string_of_Model__st_7(Model__st_7 x, char* buf) {
  switch (x) {
    case Model__St_7_OBSTACLE:
      strcpy(buf, "St_7_OBSTACLE");
      break;
    case Model__St_7_NO_OBSTACLE:
      strcpy(buf, "St_7_NO_OBSTACLE");
      break;
    default:
      break;
  };
  return buf;
}

Model__st_6 Model__st_6_of_string(char* s) {
  if ((strcmp(s, "St_6_OBSTACLE")==0)) {
    return Model__St_6_OBSTACLE;
  };
  if ((strcmp(s, "St_6_NO_OBSTACLE")==0)) {
    return Model__St_6_NO_OBSTACLE;
  };
}

char* string_of_Model__st_6(Model__st_6 x, char* buf) {
  switch (x) {
    case Model__St_6_OBSTACLE:
      strcpy(buf, "St_6_OBSTACLE");
      break;
    case Model__St_6_NO_OBSTACLE:
      strcpy(buf, "St_6_NO_OBSTACLE");
      break;
    default:
      break;
  };
  return buf;
}

Model__st_5 Model__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_TURN_RIGHT")==0)) {
    return Model__St_5_TURN_RIGHT;
  };
  if ((strcmp(s, "St_5_TURN_LEFT")==0)) {
    return Model__St_5_TURN_LEFT;
  };
  if ((strcmp(s, "St_5_REVERSE")==0)) {
    return Model__St_5_REVERSE;
  };
  if ((strcmp(s, "St_5_AHEAD")==0)) {
    return Model__St_5_AHEAD;
  };
}

char* string_of_Model__st_5(Model__st_5 x, char* buf) {
  switch (x) {
    case Model__St_5_TURN_RIGHT:
      strcpy(buf, "St_5_TURN_RIGHT");
      break;
    case Model__St_5_TURN_LEFT:
      strcpy(buf, "St_5_TURN_LEFT");
      break;
    case Model__St_5_REVERSE:
      strcpy(buf, "St_5_REVERSE");
      break;
    case Model__St_5_AHEAD:
      strcpy(buf, "St_5_AHEAD");
      break;
    default:
      break;
  };
  return buf;
}

Model__st_4 Model__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_FORWARD")==0)) {
    return Model__St_4_FORWARD;
  };
  if ((strcmp(s, "St_4_BACKWARD")==0)) {
    return Model__St_4_BACKWARD;
  };
}

char* string_of_Model__st_4(Model__st_4 x, char* buf) {
  switch (x) {
    case Model__St_4_FORWARD:
      strcpy(buf, "St_4_FORWARD");
      break;
    case Model__St_4_BACKWARD:
      strcpy(buf, "St_4_BACKWARD");
      break;
    default:
      break;
  };
  return buf;
}

Model__st_3 Model__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_FORWARD")==0)) {
    return Model__St_3_FORWARD;
  };
  if ((strcmp(s, "St_3_BACKWARD")==0)) {
    return Model__St_3_BACKWARD;
  };
}

char* string_of_Model__st_3(Model__st_3 x, char* buf) {
  switch (x) {
    case Model__St_3_FORWARD:
      strcpy(buf, "St_3_FORWARD");
      break;
    case Model__St_3_BACKWARD:
      strcpy(buf, "St_3_BACKWARD");
      break;
    default:
      break;
  };
  return buf;
}

Model__st_2 Model__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_FORWARD")==0)) {
    return Model__St_2_FORWARD;
  };
  if ((strcmp(s, "St_2_BACKWARD")==0)) {
    return Model__St_2_BACKWARD;
  };
}

char* string_of_Model__st_2(Model__st_2 x, char* buf) {
  switch (x) {
    case Model__St_2_FORWARD:
      strcpy(buf, "St_2_FORWARD");
      break;
    case Model__St_2_BACKWARD:
      strcpy(buf, "St_2_BACKWARD");
      break;
    default:
      break;
  };
  return buf;
}

Model__st_1 Model__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_TURN_RIGHT")==0)) {
    return Model__St_1_TURN_RIGHT;
  };
  if ((strcmp(s, "St_1_TURN_LEFT")==0)) {
    return Model__St_1_TURN_LEFT;
  };
  if ((strcmp(s, "St_1_REVERSE")==0)) {
    return Model__St_1_REVERSE;
  };
  if ((strcmp(s, "St_1_AHEAD")==0)) {
    return Model__St_1_AHEAD;
  };
}

char* string_of_Model__st_1(Model__st_1 x, char* buf) {
  switch (x) {
    case Model__St_1_TURN_RIGHT:
      strcpy(buf, "St_1_TURN_RIGHT");
      break;
    case Model__St_1_TURN_LEFT:
      strcpy(buf, "St_1_TURN_LEFT");
      break;
    case Model__St_1_REVERSE:
      strcpy(buf, "St_1_REVERSE");
      break;
    case Model__St_1_AHEAD:
      strcpy(buf, "St_1_AHEAD");
      break;
    default:
      break;
  };
  return buf;
}

Model__st Model__st_of_string(char* s) {
  if ((strcmp(s, "St_OBSTACLE")==0)) {
    return Model__St_OBSTACLE;
  };
  if ((strcmp(s, "St_NO_OBSTACLE")==0)) {
    return Model__St_NO_OBSTACLE;
  };
}

char* string_of_Model__st(Model__st x, char* buf) {
  switch (x) {
    case Model__St_OBSTACLE:
      strcpy(buf, "St_OBSTACLE");
      break;
    case Model__St_NO_OBSTACLE:
      strcpy(buf, "St_NO_OBSTACLE");
      break;
    default:
      break;
  };
  return buf;
}

