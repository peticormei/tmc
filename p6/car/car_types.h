/* --- Generated the 20/10/2019 at 2:1 --- */
/* --- heptagon compiler, version 1.03.00 (compiled sun. oct. 20 0:47:43 CET 2019) --- */
/* --- Command line: /home/opam/.opam/4.02/bin/heptc -target c -target z3z -s controller car.ept --- */

#ifndef CAR_TYPES_H
#define CAR_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "controller_controller.h"
typedef enum {
  Car__St_8_OBSTACLE,
  Car__St_8_NO_OBSTACLE
} Car__st_8;

Car__st_8 Car__st_8_of_string(char* s);

char* string_of_Car__st_8(Car__st_8 x, char* buf);

typedef enum {
  Car__St_7_TURNING,
  Car__St_7_STURNING,
  Car__St_7_MOVING
} Car__st_7;

Car__st_7 Car__st_7_of_string(char* s);

char* string_of_Car__st_7(Car__st_7 x, char* buf);

typedef enum {
  Car__St_6_FORWARD,
  Car__St_6_BACKWARD
} Car__st_6;

Car__st_6 Car__st_6_of_string(char* s);

char* string_of_Car__st_6(Car__st_6 x, char* buf);

typedef enum {
  Car__St_5_FORWARD,
  Car__St_5_BACKWARD
} Car__st_5;

Car__st_5 Car__st_5_of_string(char* s);

char* string_of_Car__st_5(Car__st_5 x, char* buf);

typedef enum {
  Car__St_4_FORWARD,
  Car__St_4_BACKWARD
} Car__st_4;

Car__st_4 Car__st_4_of_string(char* s);

char* string_of_Car__st_4(Car__st_4 x, char* buf);

typedef enum {
  Car__St_3_FORWARD,
  Car__St_3_BACKWARD
} Car__st_3;

Car__st_3 Car__st_3_of_string(char* s);

char* string_of_Car__st_3(Car__st_3 x, char* buf);

typedef enum {
  Car__St_2_TURNING,
  Car__St_2_STURNING,
  Car__St_2_MOVING
} Car__st_2;

Car__st_2 Car__st_2_of_string(char* s);

char* string_of_Car__st_2(Car__st_2 x, char* buf);

typedef enum {
  Car__St_1_FORWARD,
  Car__St_1_BACKWARD
} Car__st_1;

Car__st_1 Car__st_1_of_string(char* s);

char* string_of_Car__st_1(Car__st_1 x, char* buf);

typedef enum {
  Car__St_OBSTACLE,
  Car__St_NO_OBSTACLE
} Car__st;

Car__st Car__st_of_string(char* s);

char* string_of_Car__st(Car__st x, char* buf);

#endif // CAR_TYPES_H
