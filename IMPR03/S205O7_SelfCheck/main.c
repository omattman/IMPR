#include <stdio.h>

/*
 * What value is assigned to the type int variable ans in this statement if the value of p is
 * 100 and q is 50?
 *
 * The value is: 2.
 *
 * The reasoning for this is that the left side of the expression returns 1, and so does the right
 * side. This is because both cases are true which equals to 1 + 1 = 2
 */
int main(void) {
  int p = 100,
    q = 50,
    ans;

  ans = (p > 95) + (q < 95);

  printf("The value is exactly: %d", ans);
}