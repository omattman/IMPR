#include <stdio.h>

/*
 * Opgave 4.2
 * Sum af tal i interval som er dividerbare med samme tal
 *
 * I denne opgave gives tre positive heltal m, n og k, hvor k er større end 1. Skriv et program der adderer
 * alle heltal mellem m og n (begge inklusive) hvor i k går op.
 *
 * Eksempler:
 *    Hvis m er 5, n er 13 og k er 3 er resultatet 6 + 9 + 12 = 27.
 *    Hvis m er 5, n er 10 og k er 5 er resultatet 5 + 10 = 15.
 *    Hvis m er 10, n er 5 og k er 3 ønsker vi at resultatet er 0, idet m er større end n.
 *
 * Denne opgave stammer fra bogen C by Dissection - anvendt med tilladelse fra forlaget.
 */
int main(void) {
  int remainder,
      m,
      n,
      k;

  do {
    printf("Enter three positive integers:\n");
    scanf("%d %d %d", &m, &n, &k);
  } while (m < 0 || n < 0 || k < 1);

  printf("%d %d %d", m, n, k);

  return 0;
}