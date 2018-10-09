/*
 * Write nests of loops that cause the following output to be displayed:
 * 0
 * 0 1
 * 0 1 2
 * 0 1 2 3
 * 0 1 2 3 4
 * 0 1 2 3 4 5
 * 0 1 2 3 4
 * 0 1 2 3
 * 0 1 2
 * 0 1
 * 0
 */

#include <stdio.h>

int main() {
  int i,
      j,
      rows;

  printf("Enter number of rows: ");
  scanf("%d",&rows);

  // Count up from 0 to 5
  for(i = 0; i <= rows; ++i) {
    for (j = 0; j <= i; ++j) {
      printf("%d ",j);
    }
    printf("\n");
  }

  // Count from 4 and down to 0
  for(i = rows - 1; i >= 0; --i) {
    for(j = 0; j <= i; ++j) {
      printf("%d ",j);
    }
    printf("\n");
  }

  return 0;
}
