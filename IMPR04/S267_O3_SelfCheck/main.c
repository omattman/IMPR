#include <stdio.h>

/*
 * The following segment needs some revision. Insert braces where they are needed and correct the errors.
 * The corrected code should take five integers and display their sum.
 */
int main(void) {
  int count,
      next_num,
      sum;

  count = 0;

  while (count < 5) {
    count += 1;
    printf("Next number> ");
    scanf("%d", &next_num);
    next_num += sum;
  }
  printf("%d numbers were added; \n", count);
  printf("their sum is %d.\n", sum);

  return 0;
}