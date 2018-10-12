/*
 * I lektionen om iterative kontrolstrukturer arbejde vi med to opgaver, som vi nu vil tage op igen med det formål at
 * indføre abstraktion med funktioner.
 *
 * I opgave programmeringsopgave 1 side 267 (i Problem Solving and Program Design in C, eighth edition) summerede vi
 * alle heltal fra 1 til n, og vi sammenlignede værdien af denne sum med (n + 1)* n / 2. Skriv nu følgende to funktioner:
 *
 *    1. En funktion sum-iter med én int parameter n. Funktionen skal addere alle heltal fra 1 til n. Funktionen skal
 *       returnere denne sum.
 *    2. En funktion sum-formula med én int parameter n som indkapsler beregningen af (n + 1)* n / 2, og som returnerer
 *       værdien af dette udtryk.
 *
 *  I skal kalde disse to funktioner på passende input og sammenligne deres resultater (ligesom i den oprindelige opgave).
 */

#include <stdio.h>

// Prototypes for functions
int sum_iter(int);
int sum_formular(int);

// Main function
int main(void) {
  // Declare variables
  int n = 0;

  // Integer must be a positive number or else repeat
  do {
    printf("Enter a positive integer n:\n ");
    scanf("%d", &n);
  } while (n < 0);

  // Controle-structure for printf statements
  if (sum_iter(n) == sum_formular(n)) {
    printf("%d is the same value\n", sum_iter(n));
  } else {
    printf("%d is not the same value\n", sum_iter(n));
  }

  return 0;
}

// Sum iteration loop function
int sum_iter(int n) {
  int sum = 0;

  for (int i = 0; i <= n; ++i) {
    sum += i;
  }

  return sum;
}

// Sum formular
int sum_formular(int n) {
  return (n * (n + 1)) / 2;
}