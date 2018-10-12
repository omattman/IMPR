#include <stdio.h>

int main(void) {
  int i, j, small, large, remainder;

  while (1) {
    printf("Enter two non-negative integers:\n ");
    scanf("%d %d", &i, &j);

    if (i <= 0 || j <= 0) {
      return 0;
    }

    small = i <= j ? i : j;
    large = i <= j ? j : i;

    while (small > 0) {
      remainder = large % small;
      large = small;
      small = remainder;
    }

    printf("GCD of %d and %d is %d\n\n", i, j, large);
  }
}