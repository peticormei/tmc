/* --- Generated the 14/10/2019 at 14:12 --- */
/* --- heptagon compiler, version 1.03.00 (compiled mon. oct. 14 13:8:41 CET 2019) --- */
/* --- Command line: /home/opam/.opam/4.02/bin/heptc -target c -target z3z -s controller car.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "car_types.h"

Car__st_8 Car__st_8_of_string(char* s) {
  if ((strcmp(s, "St_8_OBSTACLE")==0)) {
    return Car__St_8_OBSTACLE;
  };
  if ((strcmp(s, "St_8_NO_OBSTACLE")==0)) {
    return Car__St_8_NO_OBSTACLE;
  };
}

char* string_of_Car__st_8(Car__st_8 x, char* buf) {
  switch (x) {
    case Car__St_8_OBSTACLE:
      strcpy(buf, "St_8_OBSTACLE");
      break;
    case Car__St_8_NO_OBSTACLE:
      strcpy(buf, "St_8_NO_OBSTACLE");
      break;
    default:
      break;
  };
  return buf;
}

Car__st_7 Car__st_7_of_string(char* s) {
  if ((strcmp(s, "St_7_TURNING_STATE")==0)) {
    return Car__St_7_TURNING_STATE;
  };
  if ((strcmp(s, "St_7_STURNING_STATE")==0)) {
    return Car__St_7_STURNING_STATE;
  };
  if ((strcmp(s, "St_7_MOVING_STATE")==0)) {
    return Car__St_7_MOVING_STATE;
  };
}

char* string_of_Car__st_7(Car__st_7 x, char* buf) {
  switch (x) {
    case Car__St_7_TURNING_STATE:
      strcpy(buf, "St_7_TURNING_STATE");
      break;
    case Car__St_7_STURNING_STATE:
      strcpy(buf, "St_7_STURNING_STATE");
      break;
    case Car__St_7_MOVING_STATE:
      strcpy(buf, "St_7_MOVING_STATE");
      break;
    default:
      break;
  };
  return buf;
}

Car__st_6 Car__st_6_of_string(char* s) {
  if ((strcmp(s, "St_6_FORWARD_STATE")==0)) {
    return Car__St_6_FORWARD_STATE;
  };
  if ((strcmp(s, "St_6_BACKWARD_STATE")==0)) {
    return Car__St_6_BACKWARD_STATE;
  };
}

char* string_of_Car__st_6(Car__st_6 x, char* buf) {
  switch (x) {
    case Car__St_6_FORWARD_STATE:
      strcpy(buf, "St_6_FORWARD_STATE");
      break;
    case Car__St_6_BACKWARD_STATE:
      strcpy(buf, "St_6_BACKWARD_STATE");
      break;
    default:
      break;
  };
  return buf;
}

Car__st_5 Car__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_FORWARD_STATE")==0)) {
    return Car__St_5_FORWARD_STATE;
  };
  if ((strcmp(s, "St_5_BACKWARD_STATE")==0)) {
    return Car__St_5_BACKWARD_STATE;
  };
}

char* string_of_Car__st_5(Car__st_5 x, char* buf) {
  switch (x) {
    case Car__St_5_FORWARD_STATE:
      strcpy(buf, "St_5_FORWARD_STATE");
      break;
    case Car__St_5_BACKWARD_STATE:
      strcpy(buf, "St_5_BACKWARD_STATE");
      break;
    default:
      break;
  };
  return buf;
}

Car__st_4 Car__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_FORWARD_STATE")==0)) {
    return Car__St_4_FORWARD_STATE;
  };
  if ((strcmp(s, "St_4_BACKWARD_STATE")==0)) {
    return Car__St_4_BACKWARD_STATE;
  };
}

char* string_of_Car__st_4(Car__st_4 x, char* buf) {
  switch (x) {
    case Car__St_4_FORWARD_STATE:
      strcpy(buf, "St_4_FORWARD_STATE");
      break;
    case Car__St_4_BACKWARD_STATE:
      strcpy(buf, "St_4_BACKWARD_STATE");
      break;
    default:
      break;
  };
  return buf;
}

Car__st_3 Car__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_FORWARD_STATE")==0)) {
    return Car__St_3_FORWARD_STATE;
  };
  if ((strcmp(s, "St_3_BACKWARD_STATE")==0)) {
    return Car__St_3_BACKWARD_STATE;
  };
}

char* string_of_Car__st_3(Car__st_3 x, char* buf) {
  switch (x) {
    case Car__St_3_FORWARD_STATE:
      strcpy(buf, "St_3_FORWARD_STATE");
      break;
    case Car__St_3_BACKWARD_STATE:
      strcpy(buf, "St_3_BACKWARD_STATE");
      break;
    default:
      break;
  };
  return buf;
}

Car__st_2 Car__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_TURNING_STATE")==0)) {
    return Car__St_2_TURNING_STATE;
  };
  if ((strcmp(s, "St_2_STURNING_STATE")==0)) {
    return Car__St_2_STURNING_STATE;
  };
  if ((strcmp(s, "St_2_MOVING_STATE")==0)) {
    return Car__St_2_MOVING_STATE;
  };
}

char* string_of_Car__st_2(Car__st_2 x, char* buf) {
  switch (x) {
    case Car__St_2_TURNING_STATE:
      strcpy(buf, "St_2_TURNING_STATE");
      break;
    case Car__St_2_STURNING_STATE:
      strcpy(buf, "St_2_STURNING_STATE");
      break;
    case Car__St_2_MOVING_STATE:
      strcpy(buf, "St_2_MOVING_STATE");
      break;
    default:
      break;
  };
  return buf;
}

Car__st_1 Car__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_FORWARD_STATE")==0)) {
    return Car__St_1_FORWARD_STATE;
  };
  if ((strcmp(s, "St_1_BACKWARD_STATE")==0)) {
    return Car__St_1_BACKWARD_STATE;
  };
}

char* string_of_Car__st_1(Car__st_1 x, char* buf) {
  switch (x) {
    case Car__St_1_FORWARD_STATE:
      strcpy(buf, "St_1_FORWARD_STATE");
      break;
    case Car__St_1_BACKWARD_STATE:
      strcpy(buf, "St_1_BACKWARD_STATE");
      break;
    default:
      break;
  };
  return buf;
}

Car__st Car__st_of_string(char* s) {
  if ((strcmp(s, "St_OBSTACLE")==0)) {
    return Car__St_OBSTACLE;
  };
  if ((strcmp(s, "St_NO_OBSTACLE")==0)) {
    return Car__St_NO_OBSTACLE;
  };
}

char* string_of_Car__st(Car__st x, char* buf) {
  switch (x) {
    case Car__St_OBSTACLE:
      strcpy(buf, "St_OBSTACLE");
      break;
    case Car__St_NO_OBSTACLE:
      strcpy(buf, "St_NO_OBSTACLE");
      break;
    default:
      break;
  };
  return buf;
}

