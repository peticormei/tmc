/* --- Generated the 17/11/2019 at 13:30 --- */
/* --- heptagon compiler, version 1.03.00 (compiled sun. oct. 20 0:47:43 CET 2019) --- */
/* --- Command line: /home/opam/.opam/4.02/bin/heptc -target c -target z3z -s controller model.ept --- */

#ifndef MODEL_TYPES_H
#define MODEL_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "controller_controller.h"
typedef enum {
  Model__St_7_OBSTACLE,
  Model__St_7_NO_OBSTACLE
} Model__st_7;

Model__st_7 Model__st_7_of_string(char* s);

char* string_of_Model__st_7(Model__st_7 x, char* buf);

typedef enum {
  Model__St_6_OBSTACLE,
  Model__St_6_NO_OBSTACLE
} Model__st_6;

Model__st_6 Model__st_6_of_string(char* s);

char* string_of_Model__st_6(Model__st_6 x, char* buf);

typedef enum {
  Model__St_5_TURN_RIGHT,
  Model__St_5_TURN_LEFT,
  Model__St_5_REVERSE,
  Model__St_5_AHEAD
} Model__st_5;

Model__st_5 Model__st_5_of_string(char* s);

char* string_of_Model__st_5(Model__st_5 x, char* buf);

typedef enum {
  Model__St_4_FORWARD,
  Model__St_4_BACKWARD
} Model__st_4;

Model__st_4 Model__st_4_of_string(char* s);

char* string_of_Model__st_4(Model__st_4 x, char* buf);

typedef enum {
  Model__St_3_FORWARD,
  Model__St_3_BACKWARD
} Model__st_3;

Model__st_3 Model__st_3_of_string(char* s);

char* string_of_Model__st_3(Model__st_3 x, char* buf);

typedef enum {
  Model__St_2_FORWARD,
  Model__St_2_BACKWARD
} Model__st_2;

Model__st_2 Model__st_2_of_string(char* s);

char* string_of_Model__st_2(Model__st_2 x, char* buf);

typedef enum {
  Model__St_1_TURN_RIGHT,
  Model__St_1_TURN_LEFT,
  Model__St_1_REVERSE,
  Model__St_1_AHEAD
} Model__st_1;

Model__st_1 Model__st_1_of_string(char* s);

char* string_of_Model__st_1(Model__st_1 x, char* buf);

typedef enum {
  Model__St_OBSTACLE,
  Model__St_NO_OBSTACLE
} Model__st;

Model__st Model__st_of_string(char* s);

char* string_of_Model__st(Model__st x, char* buf);

#endif // MODEL_TYPES_H
