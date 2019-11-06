/* --- Generated the 4/11/2019 at 13:29 --- */
/* --- heptagon compiler, version 1.03.00 (compiled sun. oct. 20 0:47:43 CET 2019) --- */
/* --- Command line: /home/opam/.opam/4.02/bin/heptc -target c -target z3z -s controller model.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Model__controller_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int distance_left;
  int distance_right;
  int event_dir_left;
  int event_dir_right;
  Model__controller_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Model__controller_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("distance_left ? ");
    scanf("%d", &distance_left);;
    
    printf("distance_right ? ");
    scanf("%d", &distance_right);;
    
    printf("event_dir_left ? ");
    scanf("%d", &event_dir_left);;
    
    printf("event_dir_right ? ");
    scanf("%d", &event_dir_right);;
    Model__controller_step(distance_left, distance_right, event_dir_left,
                           event_dir_right, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.obs_left);
    printf("=> ");
    printf("%d ", _res.obs_right);
    printf("=> ");
    printf("%d ", _res.motor_mode_left);
    printf("=> ");
    printf("%d ", _res.motor_mode_right);
    printf("=> ");
    printf("%d ", _res.motor_speed_left);
    printf("=> ");
    printf("%d ", _res.motor_speed_right);
    puts("");
    fflush(stdout);
  };
  return 0;
}

