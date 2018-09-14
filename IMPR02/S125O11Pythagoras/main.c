#include <stdio.h>

int main(void) {
  // Initialize variables
  int m = 0,
      n = 0,
      s1 = 0,
      s2 = 0,
      h = 0;

  // Prompt user for digit inputs
  printf("Enter two digits, m & n: ");
  scanf("%d %d", &m, &n);

  s1 = (m * m) - (n * n);
  s2 = 2 * m * n;
  h = (m * m) + (n * n);

  if(m > n) {
    printf("side1 = %d, side2 = %d, and hypotenuse = %d", s1, s2, h);
  } else {
    printf("EXIT PROGRAM: The value m must be greater than n.");
  }

  return 0;
}