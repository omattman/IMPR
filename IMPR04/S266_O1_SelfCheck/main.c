#include <stdio.h>

/*
 * What output values are displayed by the following while loop for a data value of 5? of 6? of 7?
 *
 * Answer:
 * 5, 25, 125, 625
 * 6, 36, 216, 1296
 * 7, 49, 343, 2401
 */

int main(void) {
  int product,
      count,
      x;

  printf("Enter an integer> ");
  scanf("%d", &x);

  product = x;
  count = 0;

  while (count < 4) {
    printf("%d\n", product);
    product *= x;
    count += 1;
  }

  return 0;
}