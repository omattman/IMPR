#include <stdio.h>

int main(void) {
  int counter = 0;
  int n = 100;
  int k = 0;

  for (int i = 2; i <= n + 1; ++i) {

    for (int j = 2; j <= n; ++j) {
      if (i % 2 != 0) {
        counter += 1;
        printf("%d %d sup\n", counter, i);
      }
    }
  }
}