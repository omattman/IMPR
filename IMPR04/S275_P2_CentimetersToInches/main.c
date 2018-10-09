/*
 * 1. Write a program to display a centimeters-to-inches conversion table.
 * 2. The smallest and largest number of centimeters in the table are input values.
 * 3. Your table should give conversions in 10-centimeter intervals.
 *    One centimeter equals 0.3937 inch.
 */

#include <stdio.h>

#define CM_PER_INCH 0.3937

int main(void) {
  // 10-centimeter interval loop up to 100
  for (int centimeter = 0; centimeter <= 200; centimeter += 10) {

    // count up inches 1 time for every loop
    for (int inch = 0; inch < 1; inch++) {
      printf("%d centimeter er lig %0.5lf inches\n", centimeter, CM_PER_INCH * centimeter);
    }
  }
}