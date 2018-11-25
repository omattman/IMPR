/*
 * Brug malloc til at allokere plads til 100 doubles. Check at allokeringen blev gennemført, og dealloker dit lager
 * når du er færdig med at bruge det.
 *
 * Opfat det allokerede lager som et array af 100 doubles, og indskriv 100 tilfældige tal i dit array.
 * Udskriv dem på skærmen. Brug nu qsort til at sortere dine tal. Udskriv dem igen, så du kan se at dit array
 * rent faktisk er blevet sorteret.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int element_compare(const void *ip1, const void *ip2);

int main(void){
  int i, n = 100;
  double *a;

  /* Allocate space for n * sizeof(int) bytes. Dynamic allocation.
     Returns a generic pointer to the allocated memory (double).
     NOT initialized to 0.  */
  a = (double *)malloc(n * sizeof(double));

  srand(time(NULL));

  /* Initialize the array somehow: */
  printf("Before sort:\n");
  for (i = 0; i < n; i++) {
    a[i] = rand() % n;
    printf("number %.0lf: \n", a[i]);
  }

  qsort(a, n, sizeof(double), element_compare);

  printf("After sort:\n");
  for (i = 0; i < n; i++) {
    printf("%.0lf\n", a[i]);
  }

  free(a);        /* FREE THE SPACE */

  return 0;
}

// Compare elements and sort them from LOW - HIGH
int element_compare(const void *ip1, const void *ip2){
  int result;

  /* Typecast int inputs to double */
  double *ipi1 = (double *) ip1,
         *ipi2 = (double *) ip2;

  if (*ipi1 < *ipi2)
    result = -1;
  else if (*ipi1 > *ipi2)
    result = 1;
  else
    result = 0;

  return result;
}