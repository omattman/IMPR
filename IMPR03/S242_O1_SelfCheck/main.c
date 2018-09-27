#include <stdio.h>

/*
 * What will be printed by this carelessly constructed siwtch statement if
 * the value of color is 'R'?
 *
 * output: red blue yellow
 */


int main(void) {
  char c;

  printf("Enter R B C color");
  scanf("%c", &c);

  switch(c) {
    case 'R':
      printf("red\n");
    case 'B':
      printf("blue\n");
    case 'C':
      printf("yellow\n");
  }
}