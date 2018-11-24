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

double celcToFahr(double celcius_temp, double *fahrenheit_temp);

int main(void){
  /* Variable declaration */
  double amountCelcius,
         result;

  /* Prompt user for amount celcius to convert and store in variable. */
  printf("Enter amount of celcius you want converted to fahrenheit:\n");
  scanf("%lf", &amountCelcius);

  /* Print correct calculation from celcius to fahrenheit. */
  celcToFahr(amountCelcius, &result);
  printf("%.2lf celcius = %.2lf fahrenheit\n", amountCelcius, result);

  return 0;
}

/**
 * Convert celcius to fahrenheit.
 *
 *  @param [r] celcius_temp {const double} Amount of celcius to convert
 *  @param [w] fahrenheit_temp {double *} The pointer output, which is the conversion
 */
double celcToFahr(const double celcius_temp, double *fahrenheit_temp) {
  *fahrenheit_temp = (9.0 / 5.0) * celcius_temp + 32.0;
}
