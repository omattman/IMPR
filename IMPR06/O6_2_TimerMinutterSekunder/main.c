/*
 * Vi har på et tidligt tidspunkt i kurset skrevet et program, som omregner et antal sekunder til timer,
 * minutter og sekunder efter de sædvanlige principper.
 *
 * Skriv nu en funktion, hours_minutes_seconds, som tager antal af sekunder som en input parameter, og som
 * returnerer de tre outputs (timer, minutter og sekunder) som output parametre (pointere, call-by-reference).
 */

#include <stdio.h>

// Declare symbolic constants
#define SEC_IN_HOUR 3600
#define SEC_IN_MINUTE 60

// Prototype declaration
void hours_minutes_seconds(int, int*, int*, int*);

// Main function
int main(void) {
  int amountInput,
      amountHours,
      amountMinutes,
      amountSeconds;

  printf("Enter a random number of seconds: ");
  scanf("%d", &amountInput);

  hours_minutes_seconds(amountInput, &amountHours, &amountMinutes, &amountSeconds);

  // Output results
  printf("%d sekunder er det samme som %d timer %d minutter og %d sekunder.",
         amountInput, amountHours, amountMinutes, amountSeconds);

  return 0;
}

// Calculation & remainders for hours, minutes and remainder.
void hours_minutes_seconds(int amountInput, int *number1, int *number2, int *number3) {
  *number1 = amountInput / SEC_IN_HOUR;
  *number2 = amountInput % SEC_IN_HOUR / SEC_IN_MINUTE;
  *number3 = amountInput % SEC_IN_HOUR % SEC_IN_MINUTE;
}