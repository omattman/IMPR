#include <stdio.h>

// Declare symbolic constants
#define SEC_IN_WEEK 604800
#define SEC_IN_DAY 86400
#define SEC_IN_HOUR 3600
#define SEC_IN_MINUTE 60

int main(void) {
  // Declare variables
  int inputSeconds,
      inputRest,
      weeks,
      days,
      hours,
      minutes,
      seconds;

  // Prompt user for random number
  // Assign value amountInput
  printf("Enter a random number of seconds: ");
  scanf("%d", &inputSeconds);

  // Calculate remainder of all instances
  weeks = inputSeconds / SEC_IN_WEEK;
  inputRest = inputSeconds % SEC_IN_WEEK;
  days = inputRest / SEC_IN_DAY;
  inputRest = inputRest % SEC_IN_DAY;
  hours = inputRest / SEC_IN_HOUR;
  inputRest = inputRest % SEC_IN_HOUR;
  minutes = inputRest / SEC_IN_MINUTE;
  inputRest = inputRest % SEC_IN_MINUTE;
  seconds = inputRest;

  printf("%d sekunder er det samme som ", inputSeconds);

  if(weeks > 0) {
    (weeks > 1) ? printf("%d uger", weeks) : printf("%d uge", weeks);
    printf(", ");
  }
  if(days > 0) {
    (days > 1) ? printf("%d dage", days) : printf("%d dag", days);
    printf(", ");
  }
  if(hours > 0) {
    (hours > 1) ? printf("%d timer", hours) : printf("%d time", hours);
    printf(", ");
  }
  if(minutes > 0) {
    (minutes > 1) ? printf("%d minutter", minutes) : printf("%d minut", minutes);
    printf(", ");
  }
  if(seconds > 0) {
    (seconds > 1) ? printf("%d sekunder", seconds) : printf("%d sekund", seconds);
    printf(", ");
  }

  return 0;
}