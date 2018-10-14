/*
 * Vi har tidligere programmeret en simpel funktion, der omregner fra en celcius temperatur til fahrenheit temperatur.
 * Det er helt naturligt at celcius temperaturen er en call by value input parameter. Ligeledes er det naturligt
 * at fahrenheit temperaturen returneres med return fra funktionen.
 *
 * Omskriv nu funktionen således at fahrenheit temperaturen returneres gennem en output parameter - en pointer.
 * Omskriv også main, således at kaldet ændres til denne nye parameterprofil.
 *
 * Hvilken version foretrækker du?
 */

#include <stdio.h>

double celcToFahr(double *p1);

int main(void){
  // Declaring variable
  double amountCelcius = 0.0;

  // Prompt user for integer
  // Store integer in amountCelcius
  printf("Enter amount of celcius you want converted to fahrenheit:\n");
  scanf("%lf", &amountCelcius);

  /*
   * Print correct calculation from celcius to fahrenheit.
   * celcToFahr assigns the address of variable amountCelcius to the
   * pointer p1 in the celcToFahr function.
   */
  printf("%.0f celcius = %6.2f fahrenheit.\n", amountCelcius, celcToFahr(&amountCelcius));

  return 0;
}

// Calculation for celcToFahr
double celcToFahr(double *p1) {
  return 9.0 / 5.0 * *p1 + 32.0;
}

