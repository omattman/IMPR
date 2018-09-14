#include <stdio.h>

int main(void) {
  // Declare symbolic constants
  #define SEC_IN_WEEK 604800
  #define SEC_IN_DAY 86400
  #define SEC_IN_HOUR 3600
  #define SEC_IN_MINUTE 60

  // Initialize variables
  int amountInput,
    amountWeeks,
    amountDays,
    amountHours,
    amountMinutes,
    amountSeconds;

  // Prompt user for random number
  // Assign value to variable
  printf("Enter a random number of seconds: ");
  scanf("%d", &amountInput);

  // Calculate remainder of all instances
  amountWeeks = amountInput / SEC_IN_WEEK;
  amountDays = amountInput % SEC_IN_WEEK / SEC_IN_DAY;
  amountHours = amountInput % SEC_IN_WEEK % SEC_IN_DAY / SEC_IN_HOUR;
  amountMinutes = amountInput % SEC_IN_WEEK % SEC_IN_DAY % SEC_IN_HOUR / SEC_IN_MINUTE;
  amountSeconds = amountInput % SEC_IN_WEEK % SEC_IN_DAY % SEC_IN_HOUR % SEC_IN_MINUTE;

  // Output results
  printf("%d sekunder er det samme som %d uger, %d dage, %d timer, %d minutter og %d sekunder.",
         amountInput, amountWeeks, amountDays, amountHours, amountMinutes, amountSeconds);

  return 0;
}