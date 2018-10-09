#include <stdio.h>

/*
 * Correct the syntax and logic of the code that follows so that it prints
 * all multiples of 4 from 0 through 100
 *
 * for sum = 0;
 *     sum < 100;
 *     sum += 4;
 * printf("%d\n", sum);
 */

 /*
  * The solution
  */
int main(void) {
  int sum;

  for (sum = 0; sum < 100; sum += 4) {
    printf("%d\n", sum);
  }
  return 0;
}