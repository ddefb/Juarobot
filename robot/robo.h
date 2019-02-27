/* --- Generated the 27/2/2019 at 8:32 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller robo.ept --- */

#ifndef ROBO_H
#define ROBO_H

#include "robo_types.h"
#include "controller_controller.h"
typedef struct Robo__obstacle_mem {
  int ck_1_2;
  int pnr;
} Robo__obstacle_mem;

typedef struct Robo__obstacle_out {
  int out;
} Robo__obstacle_out;

void Robo__obstacle_reset(Robo__obstacle_mem* self);

void Robo__obstacle_step(int sensor, Robo__obstacle_out* _out,
                         Robo__obstacle_mem* self);

typedef struct Robo__motor_mem {
  int ck_1;
  int pnr;
} Robo__motor_mem;

typedef struct Robo__motor_out {
  int mode;
  int velocity;
} Robo__motor_out;

void Robo__motor_reset(Robo__motor_mem* self);

void Robo__motor_step(int c_motor, Robo__motor_out* _out,
                      Robo__motor_mem* self);

typedef struct Robo__moving_or_turning_mem {
  int v_40;
  int v_39;
  int pnr;
  int mbc_1;
} Robo__moving_or_turning_mem;

typedef struct Robo__moving_or_turning_out {
  int turning;
  int ombc;
} Robo__moving_or_turning_out;

void Robo__moving_or_turning_reset(Robo__moving_or_turning_mem* self);

void Robo__moving_or_turning_step(int c, Robo__moving_or_turning_out* _out,
                                  Robo__moving_or_turning_mem* self);

typedef struct Robo__controller_mem {
  int ck_13_1;
  int ck_11_1;
  int ck_9_1;
  int ck_7_1;
  int v_58;
  int v_57;
  int ck_1;
  int pnr_5;
  int pnr_4;
  int pnr_3;
  int pnr_2;
  int pnr_1;
  int pnr;
  int mbc_2;
} Robo__controller_mem;

typedef struct Robo__controller_out {
  int obs;
  int turning;
  int motor1;
  int motor2;
  int motor3;
  int motor4;
  int cont;
  int vel1;
  int vel2;
  int vel3;
  int vel4;
} Robo__controller_out;

void Robo__controller_reset(Robo__controller_mem* self);

void Robo__controller_step(int obs_sensor, Robo__controller_out* _out,
                           Robo__controller_mem* self);

#endif // ROBO_H
