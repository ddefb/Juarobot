/* --- Generated the 27/2/2019 at 8:32 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller robo.ept --- */

#ifndef ROBO_TYPES_H
#define ROBO_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "controller_controller.h"
typedef enum {
  Robo__St_8_OBSTACLE,
  Robo__St_8_NO_OBSTACLE
} Robo__st_8;

Robo__st_8 Robo__st_8_of_string(char* s);

char* string_of_Robo__st_8(Robo__st_8 x, char* buf);

typedef enum {
  Robo__St_7_TURNING_STATE,
  Robo__St_7_STURNING_STATE,
  Robo__St_7_MOVING_STATE
} Robo__st_7;

Robo__st_7 Robo__st_7_of_string(char* s);

char* string_of_Robo__st_7(Robo__st_7 x, char* buf);

typedef enum {
  Robo__St_6_FORWARD_STATE,
  Robo__St_6_BACKWARD_STATE
} Robo__st_6;

Robo__st_6 Robo__st_6_of_string(char* s);

char* string_of_Robo__st_6(Robo__st_6 x, char* buf);

typedef enum {
  Robo__St_5_FORWARD_STATE,
  Robo__St_5_BACKWARD_STATE
} Robo__st_5;

Robo__st_5 Robo__st_5_of_string(char* s);

char* string_of_Robo__st_5(Robo__st_5 x, char* buf);

typedef enum {
  Robo__St_4_FORWARD_STATE,
  Robo__St_4_BACKWARD_STATE
} Robo__st_4;

Robo__st_4 Robo__st_4_of_string(char* s);

char* string_of_Robo__st_4(Robo__st_4 x, char* buf);

typedef enum {
  Robo__St_3_FORWARD_STATE,
  Robo__St_3_BACKWARD_STATE
} Robo__st_3;

Robo__st_3 Robo__st_3_of_string(char* s);

char* string_of_Robo__st_3(Robo__st_3 x, char* buf);

typedef enum {
  Robo__St_2_TURNING_STATE,
  Robo__St_2_STURNING_STATE,
  Robo__St_2_MOVING_STATE
} Robo__st_2;

Robo__st_2 Robo__st_2_of_string(char* s);

char* string_of_Robo__st_2(Robo__st_2 x, char* buf);

typedef enum {
  Robo__St_1_FORWARD_STATE,
  Robo__St_1_BACKWARD_STATE
} Robo__st_1;

Robo__st_1 Robo__st_1_of_string(char* s);

char* string_of_Robo__st_1(Robo__st_1 x, char* buf);

typedef enum {
  Robo__St_OBSTACLE,
  Robo__St_NO_OBSTACLE
} Robo__st;

Robo__st Robo__st_of_string(char* s);

char* string_of_Robo__st(Robo__st x, char* buf);

#endif // ROBO_TYPES_H
