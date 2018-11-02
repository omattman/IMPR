#include <stdio.h>

// Prototypes
int quotient(int dividend, int divisor);
int modulus(int dividend, int divisor);

// main function
int main(void) {
  int a, b;

  printf("Enter two numbers to divide");
  scanf("%d %d", &a, &b);

  quotient(a, b);
  modulus(a, b);

  return 0;
}

// Recursive substraction function
int quotient(int dividend, int divisor) {
  int result;

  if (dividend >= 1) {
    result = dividend / divisor;
    quotient(dividend-divisor, divisor); // Recursive call
    printf("%d / %d = %d\n", dividend, divisor, result);
  }
  else
    printf("No more division to be made.\n");
}

// Recursive modulo function
int modulus(int dividend, int divisor) {
  int remainder = 0;

  if (dividend >= 1) {
    remainder = divisor % dividend;

    modulus(dividend-divisor, divisor); // Recursive call
    printf("%d modulus %d = %d\n", dividend, divisor, remainder);
  }
  else
    printf("No more calculations to be made.\n");
}