#include <stdio.h>

int main(void) {
  // Declare symbolic constants
  #define SEC_IN_WEEK 604800
  #define SEC_IN_DAY 86400
  #define SEC_IN_HOUR 3600
  #define SEC_IN_MINUTE 60

  // Declare variables
  int amountInput,
      amountWeeks,
      amountDays,
      amountHours,
      amountMinutes,
      amountSeconds;

  // Prompt user for random number
  // Assign value amountInput
  printf("Enter a random number of seconds: ");
  scanf("%d", &amountInput);

  // Calculate remainder of all instances
  amountWeeks = amountInput / SEC_IN_WEEK;
  amountDays = amountInput % SEC_IN_WEEK / SEC_IN_DAY;
  amountHours = amountInput % SEC_IN_WEEK % SEC_IN_DAY / SEC_IN_HOUR;
  amountMinutes = amountInput % SEC_IN_WEEK % SEC_IN_DAY % SEC_IN_HOUR / SEC_IN_MINUTE;
  amountSeconds = amountInput % SEC_IN_WEEK % SEC_IN_DAY % SEC_IN_HOUR % SEC_IN_MINUTE;

  if(amountHours != 0) {
    (amountHours > 1) ? printf("%d timer", amountHours)
      : (amountHours == 1) ? printf("%d time", amountHours)
    : printf("");
    printf(", ");
  }

  if(amountMinutes != 0) {
    (amountMinutes > 1) ? printf("%d minutter", amountMinutes)
      : (amountMinutes == 1) ? printf("%d minut", amountMinutes)
    : printf("");
    printf(", ");
  }

  (amountSeconds > 1) ? printf("%d sekunder ", amountSeconds)
    : (amountSeconds == 1) ? printf("%d sekund ", amountSeconds)
  : printf("");
  

  return 0;
}