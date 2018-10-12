#include <stdio.h>

/*
 * There are 9.870 people in a town whose population increases by 10% each year.
 * Write a loop that displays the annual population and determines how many years (count_years)
 * it will take for the population to surpass 30.000
 */

int main(void) {
  double population = 9870.0;
  int countYears;

  while (population <= 30000) {
    countYears += 1;
    population *= 1.10;
  }

  printf("in %d years the population will surpass 30.000 with %.0f people", countYears, population);

  return 0;
}