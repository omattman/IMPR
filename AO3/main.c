#include <stdio.h>

int main(void) {
  int integerOne, integerTwo, small, large, remainder;

  while (1) {
    printf("Enter two non-negative integers:\n ");
    scanf("%d %d", &integerOne, &integerTwo);

    if (integerOne <= 0 || integerTwo <= 0) {
      return 0;
    }

    small = integerOne <= integerTwo ? integerOne : integerTwo;
    large = integerOne <= integerTwo ? integerTwo : integerOne;

    while (small > 0) {
      remainder = large % small;
      large = small;
      small = remainder;
    }

    printf("GCD of %d and %d is %d\n\n", integerOne, integerTwo, large);
  }
}