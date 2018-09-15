#include <stdio.h>

/*
 * Write a nested if statement equivalent to the switch statement
 * described in S242O1_ProgrammingExercise.
 */

int main() {
  int lumens = 0,
      watts = 0;

  printf("What is the expected watts of your light bulb?");
  scanf("%d", &watts);

  if(watts == 15) {
    lumens = 125;
    printf("%d watts bulb is equal to %d lumens", watts, lumens);
  } else if(watts == 25) {
    lumens = 215;
    printf("%d watts bulb is equal to %d lumens", watts, lumens);
  } else if(watts == 40) {
    lumens = 500;
    printf("%d watts bulb is equal to %d lumens", watts, lumens);
  } else if(watts == 60) {
    lumens = 880;
    printf("%d watts bulb is equal to %d lumens", watts, lumens);
  } else if(watts == 75) {
    lumens = 1000;
    printf("%d watts bulb is equal to %d lumens", watts, lumens);
  } else if(watts == 100) {
    lumens = 1675;
    printf("%d watts bulb is equal to %d lumens", watts, lumens);
  } else {
    printf("You specified an invalid watts amount.");
  }
}