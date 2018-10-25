/*
 * Denne opgave går ud på at debugge - at bruge gdb - på programmet der søger efter en rod i en kontinuert funktion.
 * Se gerne først videoen om gdb, og følg også gerne dele af den tutorial som er knyttet til kurset.
 *
 * Sæt et breakpoint når funktionen findRootBetween kaldes. Følg værdierne af de lokale variable l og u i takt
 * med at while løkken udføres. Dette kræves at der sættes endnu et breakpoint.
 *
 * Kør programmet igen, og break ligesom tidligere i findRootBetween. Sæt en watch på variable u, og følg med i
 * hvordan u ændrer sig i løkken.
 *
 * Leg gerne med andre aspekter af GDB med udgangspunkt i dette program.
 *
 * Det vil naturligvis også være fint at anvende gdb på andre af de programmer, du har skrevet i kurset.
 */

#include <stdio.h>
#include <math.h>

int sameSign(double x, double y);
double middleOf(double x, double y);
int isSmallNumber(double x);
double findRootBetween(double a, double b);

double f(double x){
  /* (x - 5.0) * (x - 3.0) * (x + 7.0) */
  return (x*x*x - x*x - 41.0 * x + 105.0);
}

int main(void){
  double x, y;
  int numbers;

  do{
    printf("%s","Find a ROOT between two number: ");
    numbers = scanf("%lf%lf", &x, &y);

    if (numbers == 2 && !sameSign(f(x),f(y))){
      double solution = findRootBetween(x,y);
      printf("\nThere is a root in %lf\n", solution);
    }
    else if (numbers == 2 && sameSign(f(x),f(y)))
      printf("\nf must have different signs in %lf and %lf\n",
                x, y);
    else if (numbers != 2)
      printf("\nBye\n\n");
  }
  while (numbers == 2);

  return 0;
}

/* Precondition: The signs of f(a) and f(b) are different */
double findRootBetween(double a, double b){
  double l = a, u = b;
  while (!isSmallNumber(f(middleOf(l,u)))){
    if(sameSign(f(middleOf(l,u)), f(u)))
      u = middleOf(l,u);
    else
      l = middleOf(l,u);
  }
  return middleOf(l,u);
}

int sameSign(double x, double y){
  return (x > 0 && y > 0) || (x < 0 && y < 0);
}

double middleOf(double x, double y){
  return x + (y - x)/2;
}

int isSmallNumber(double x){
  return (fabs(x) < 0.0000001);
}