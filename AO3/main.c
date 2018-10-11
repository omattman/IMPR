#include <stdio.h>

// Prototype for gcdExtended function to let the program know it exists.
int gcdExtended(int, int, int *, int *);

int main(void) {
  int a, b, x, y, integerOne, integerTwo;

  do {
    printf("Enter two positive integer numbers: ");
    scanf("%d %d", &a, &b);
  } while (a < 0 || b < 0);

  integerOne = a <= b ? a : b;
  integerTwo = a <= b ? b : a;

  while(integerOne != 0) {
    printf("gcd(%d, %d) = %d\n", integerOne, b, gcdExtended(integerOne, integerTwo, &x, &y));
    integerOne -= 1;
  }
  return 0;
}

// Extended Euclidean Algorithm
int gcdExtended(int a, int b, int *x, int *y) {
  if (a == 0) {
    *x = 0;
    *y = 1;
    return b;
  }

  int x1, y1; // To store results of recursive call
  int gcd = gcdExtended(b%a, a, &x1, &y1);

  // Update x and y using results of recursive call
  *x = y1 - (b/a) * x1;
  *y = x1;

  return gcd;
}