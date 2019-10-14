/* --- Generated the 14/10/2019 at 14:12 --- */
/* --- heptagon compiler, version 1.03.00 (compiled mon. oct. 14 13:8:41 CET 2019) --- */
/* --- Command line: /home/opam/.opam/4.02/bin/heptc -target c -target z3z -s controller car.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Car__controller_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int obs_sensor;
  Car__controller_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Car__controller_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("obs_sensor ? ");
    scanf("%d", &obs_sensor);;
    Car__controller_step(obs_sensor, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.obs);
    printf("=> ");
    printf("%d ", _res.turning);
    printf("=> ");
    printf("%d ", _res.motor1);
    printf("=> ");
    printf("%d ", _res.motor2);
    printf("=> ");
    printf("%d ", _res.motor3);
    printf("=> ");
    printf("%d ", _res.motor4);
    printf("=> ");
    printf("%d ", _res.cont);
    printf("=> ");
    printf("%d ", _res.vel1);
    printf("=> ");
    printf("%d ", _res.vel2);
    printf("=> ");
    printf("%d ", _res.vel3);
    printf("=> ");
    printf("%d ", _res.vel4);
    puts("");
    fflush(stdout);
  };
  return 0;
}

