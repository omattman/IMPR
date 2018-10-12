/*
 * I lektionen om iterative kontrolstrukturer arbejde vi også med opgave 1 side 181 i bogen. Vi har en befolkning
 * på 9870 personer som vokser med 10% per år. Spørgsmålet var hvor mange år der går inden befolkningstallet
 * er mere end 30000.
 *
 * Skriv nu en funktion som generaliserer denne opgave. Mere specifikt:
 *
 * En funktion population-projection med tre double parametre: start-befolkningstallet, vækstprocent pr år, og
 * den øvre grænse af befolkningstallet. Funktionen skal returnere det antal år (af typen int) det tager for
 * befolkningen at vokse fra start-befolkningstlalet til mere end slut-befolkningstallet.
 *
 * Kald derefter funktionen så den løser opgaven fra side 181 i bogen (med de tre givne tal 9870, 10% og 30000).
 */

#include <stdio.h>

int population_projection(double, double, double);

int main(void) {
  double start_pop,
         growth_percentage,
         max_pop;

  printf("Enter 3 integers:\n ");
  scanf("%lf %lf %lf", &start_pop, &growth_percentage, &max_pop);

  printf("With %lf people the population will surpass %lf in %d years", start_pop, max_pop, population_projection(start_pop, growth_percentage, max_pop));

  return 0;
}

int population_projection(double start_pop, double growth_percentage, double max_pop) {
  int countYears = 0;

  while (start_pop <= max_pop) {
    countYears += 1;
    start_pop *= growth_percentage;
  }

  return countYears;
}