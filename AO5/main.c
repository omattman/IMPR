/*
 * TO DO:
 * Juster if statements til at indeholde "og", hvis der er en mindre værdi af dollar sedler tilgængelige.
 */

#include <stdio.h>

// Declare symbolic constants
#define HUNDRED_DOLLAR_BILL 100
#define FIFTY_DOLLAR_BILL 50
#define TWENTY_DOLLAR_BILL 20
#define TEN_DOLLAR_BILL 10

// Prototype declaration
void change_dollar_bills(int, int*, int*, int*, int*);

// Main function
int main(void) {
  int amountInput,
      hundredBills,
      fiftyBills,
      twentyBills,
      tenBills;

  // Prompt user for value dollar change
  // Prompt again if amount is not divisible by 10.
  do {
    printf("Enter amount of dollars you want to change:\n ");
    scanf("%d", &amountInput);
  } while (amountInput % 10);

  // Start print statement
  printf("%d is changed to: ", amountInput);

  // Call function to assign values to variables
  change_dollar_bills(amountInput, &hundredBills, &fiftyBills, &twentyBills, &tenBills);

  // Check if the correct dollar-values is changeable.
  if(hundredBills > 0) {
    (hundredBills > 1) ? printf("%d 100-dollar sedler", hundredBills) : printf("%d 100-dollar seddel", hundredBills);
    (fiftyBills >= 1 || twentyBills >= 1 || tenBills >= 1) ? printf(", ") : printf("");
  }
  if(fiftyBills > 0) {
    (fiftyBills > 1) ? printf("%d 50-dollar sedler", fiftyBills) : printf("%d 50-dollar seddel", fiftyBills);
    (twentyBills >= 1 || tenBills >= 1) ? printf(", ") : printf("");
  }
  if(twentyBills > 0) {
    (twentyBills > 1) ? printf("%d 20-dollar sedler", twentyBills) : printf("%d 20-dollar seddel", twentyBills);
  }
  if(tenBills > 0) {
    (hundredBills >= 1 || fiftyBills >= 1 || twentyBills >= 1) ? printf(" og ") : printf("");
    (tenBills > 1) ? printf("%d 10-dollar sedler", tenBills) : printf("%d 10-dollar seddel", tenBills);
  }

  return 0;
}

/*
 * Calculation to find least amount of dollar-bills possible during exchange.
 * Input parameters: amountInput
 * Output parameters: 100 bills, 50 bills, 20, bills and 10 bills.
*/
void change_dollar_bills(int amountInput, int *number1, int *number2, int *number3, int *number4) {
  *number1 = amountInput / HUNDRED_DOLLAR_BILL;
  *number2 = amountInput % HUNDRED_DOLLAR_BILL / FIFTY_DOLLAR_BILL;
  *number3 = amountInput % HUNDRED_DOLLAR_BILL % FIFTY_DOLLAR_BILL / TWENTY_DOLLAR_BILL;
  *number4 = amountInput % HUNDRED_DOLLAR_BILL % FIFTY_DOLLAR_BILL % TWENTY_DOLLAR_BILL / TEN_DOLLAR_BILL;
}