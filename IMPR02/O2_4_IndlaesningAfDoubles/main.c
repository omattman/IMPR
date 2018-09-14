#include <stdio.h>

/*
 * Prøverkør programmet, og forklar hvorfor det ikke virker efter hensigten.
 *
 * Ret programmet, så det virker.
 *
 * Når du har forstået problemet, så prøv meget gerne forskellige andre variationer af tilsvarende fejl.
 *
 * Læs gerne på side 85-86 af lærebogen Problem Solving and Program Design in C, 8th edition for at forstå udfordringen.
 */
int main(void) {

  double d, e, f;

  printf("Enter three real numbers: ");
  scanf("%lf %lf %lf", &d, &e, &f);

  printf("The average is: %f\n", (d + e + f) / 3.0);

  return 0;
}