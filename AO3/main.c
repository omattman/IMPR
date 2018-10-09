#include <stdio.h>

// Prototype for euclidGCD function to let the program know it exists.
int euclidGCD(int, int);

int main(void) {

  // Declare variables
  int integerOne, integerTwo, j, i;

  do {
    printf("Enter two positive integer numbers: ");
    scanf("%d %d", &i, &j);
  } while (i < 0 || j < 0);

  integerOne = i <= j ? i : j;
  integerTwo = i <= j ? j : i;

  printf ("GCD of %d and %d is %d\n\n", i, j, euclidGCD(integerOne, integerTwo));

  return 0;
}

// GCD of two numbers using Euclid's algorithm
int euclidGCD(int integerOne, int integerTwo) {

  // Declare variables
  int remainder;

  while (integerOne > 0) {
    remainder = integerTwo % integerOne;
    integerTwo = integerOne;
    integerOne = remainder;
  }

  return integerTwo;
}