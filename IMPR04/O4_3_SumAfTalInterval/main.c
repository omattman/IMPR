#include <stdio.h>

int main(void) {
  int n,
      i;

  printf("Enter a random number> ");
  scanf("%d", &n);

  for (i = n; i <= n; ++i) {
    n *= 2;
    printf("%d", n);
  }

  return 0;
}