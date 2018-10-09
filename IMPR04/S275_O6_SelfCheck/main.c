#include <stdio.h>

/*
 * What errors do you see in the following fragment?
 *
 * for mult4= 0;
 * mult4 < 100;
 * mult4 += 4;
 * printf("%d\n", mult4);
 *
 * Correct the code so it displays all multiples of 4 from 0 through 100.
 */

 /*
  * Correct solution to the for loop
  */
int main(void) {
  int mult4;

  for (mult4= 0; mult4 < 100; mult4 += 4) {
    printf("%d\n", mult4);
  }
}