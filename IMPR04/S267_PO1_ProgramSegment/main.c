#include <stdio.h>

/*
 * Write a program segment that computes 1 + 2 + 3 + ... + (n-1) +n, where n is a data value.
 * Follow the loop body with an if statement that compares this value to (n * (n + 1)) / 2 and
 * displays a message that indicates whether the values are the same or different. What message
 * do you think will be displayed?
 */

int main(void) {

  int n = 0,
      sum = 0;

  do {
    printf("Enter a positive integer n:\n ");
    scanf("%d", &n);
  } while (n < 0);

  for (int i = 0; i <= n; ++i) {
    sum += i;
  }

  if (sum == (n * (n + 1)) / 2) {
    printf("%d is the same value\n", sum);
  } else {
    printf("%d is not the same value\n", sum);
  }

  return 0;
}