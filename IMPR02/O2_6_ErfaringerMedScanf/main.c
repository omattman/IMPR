#include <stdio.h>

/* Program 1
 * Afprøv programmet med følgende input (i et tilsvarende antal kørsler af programmet). Forklar dine observationer:
 * abcd
 * ab
 * a b c d
int main(void) {
  int c1, c2, c3, c4, scanRes;

  printf("Enter input on the following line\n");

  scanRes = scanf("%c%c%c%c", &c1, &c2, &c3, &c4);

  printf("c1 = %c, c2 = %c, c3 = %c, c4 = %c\n", c1, c2, c3, c4);
  printf("scanRes = %d\n", scanRes);

  return 0;
}
 */


/* Program 2
 * Afprøv programmet med følgende input (i et tilsvarende antal kørsler af programmet). Forklar dine observationer:
 * 123 456
 * 123    456
 * 123.456
 * 123-456
 * 123_456
 * 123
int main(void) {

  int i1, i2,
    scanRes;

  printf("Enter input on the following line\n");

  scanRes = scanf("%d%d", &i1, &i2);

  printf("i1 = %d, i2 = %d\n", i1, i2);
  printf("scanRes = %d\n", scanRes);

  return 0;
}
 */

/* Program 3
 * Afprøv programmet med følgende input (i et tilsvarende antal kørsler af programmet). Forklar dine observationer:
 * 123;456
 * 123; 456
 * 123 ; 456
 * 123:456
 * 123.456;
int main(void) {

  int i1, i2,
    scanRes;

  printf("Enter input on the following line\n");

  scanRes = scanf("%d;%d", &i1, &i2);

  printf("i1 = %d, i2 = %d\n", i1, i2);
  printf("scanRes = %d\n", scanRes);

  return 0;
}
*/

/*
 * Program 4
 * 123 456
 * 123abe456
 * 123 abe 456
 * 123 kat 456
 * -123abe-456
int main(void) {

  int i1, i2,
    scanRes;

  printf("Enter input on the following line\n");

  scanRes = scanf("%d abe %d", &i1, &i2);

  printf("i1 = %d, i2 = %d\n", i1, i2);
  printf("scanRes = %d\n", scanRes);

  return 0;
}
 */

int main(void) {

  double d1, d2;
  int scanRes;

  printf("Enter input on the following line\n");

  scanRes = scanf("%lf %lf", &d1, &d2);

  printf("d1 = %10.5f, d2 = %8.4f\n", d1, d2);
  printf("scanRes = %d\n", scanRes);

  return 0;
}

