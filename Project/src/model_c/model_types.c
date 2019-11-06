/* --- Generated the 4/11/2019 at 13:29 --- */
/* --- heptagon compiler, version 1.03.00 (compiled sun. oct. 20 0:47:43 CET 2019) --- */
/* --- Command line: /home/opam/.opam/4.02/bin/heptc -target c -target z3z -s controller model.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "model_types.h"

Model__st_5 Model__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_OBSTACLE")==0)) {
    return Model__St_5_OBSTACLE;
  };
  if ((strcmp(s, "St_5_NO_OBSTACLE")==0)) {
    return Model__St_5_NO_OBSTACLE;
  };
}

char* string_of_Model__st_5(Model__st_5 x, char* buf) {
  switch (x) {
    case Model__St_5_OBSTACLE:
      strcpy(buf, "St_5_OBSTACLE");
      break;
    case Model__St_5_NO_OBSTACLE:
      strcpy(buf, "St_5_NO_OBSTACLE");
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
  if ((strcmp(s, "St_3_OBSTACLE")==0)) {
    return Model__St_3_OBSTACLE;
  };
  if ((strcmp(s, "St_3_NO_OBSTACLE")==0)) {
    return Model__St_3_NO_OBSTACLE;
  };
}

char* string_of_Model__st_3(Model__st_3 x, char* buf) {
  switch (x) {
    case Model__St_3_OBSTACLE:
      strcpy(buf, "St_3_OBSTACLE");
      break;
    case Model__St_3_NO_OBSTACLE:
      strcpy(buf, "St_3_NO_OBSTACLE");
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
  if ((strcmp(s, "St_1_FORWARD")==0)) {
    return Model__St_1_FORWARD;
  };
  if ((strcmp(s, "St_1_BACKWARD")==0)) {
    return Model__St_1_BACKWARD;
  };
}

char* string_of_Model__st_1(Model__st_1 x, char* buf) {
  switch (x) {
    case Model__St_1_FORWARD:
      strcpy(buf, "St_1_FORWARD");
      break;
    case Model__St_1_BACKWARD:
      strcpy(buf, "St_1_BACKWARD");
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

