#include <stdio.h>

// Declare symbolic constants.
#define HUNDRED_DOLLAR_BILL 100
#define FIFTY_DOLLAR_BILL 50
#define TWENTY_DOLLAR_BILL 20
#define TEN_DOLLAR_BILL 10

// Prototype declaration.
void exchangeDollarBills(int, int*, int*, int*, int*);

// Main function.
int main(void) {
  int dollarInput,
      hundredBills,
      fiftyBills,
      twentyBills,
      tenBills;

  // Prompt user for value dollar exchange.
  // Prompt again if input dollars is not divisible by 10.
  do {
    printf("Enter amount of dollars you wish exchanged:\n ");
    scanf("%d", &dollarInput);
  } while (dollarInput % 10);

  // Start print statement to show dollar exchange.
  printf("%d dollars is exchanged to:\n", dollarInput);

  // Call function to assign exchanged dollar bills to variables through pointers.
  exchangeDollarBills(dollarInput, &hundredBills, &fiftyBills, &twentyBills, &tenBills);

  // Check if exchanged dollar bill exists. If it does, then check if multiple or single bill.
  if(hundredBills > 0)
    (hundredBills > 1) ? printf("%d one hundred-dollar bills\n", hundredBills) : printf("%d one hundred-dollar bill\n", hundredBills);

  if(fiftyBills > 0)
    (fiftyBills > 1) ? printf("%d fifty-dollar bills\n", fiftyBills) : printf("%d fifty-dollar bill\n", fiftyBills);

  if(twentyBills > 0)
    (twentyBills > 1) ? printf("%d twenty-dollar bills\n", twentyBills) : printf("%d twenty-dollar bill\n", twentyBills);

  if(tenBills > 0)
    (tenBills > 1) ? printf("%d ten-dollar bills\n", tenBills) : printf("%d ten-dollar bill\n", tenBills);

  return 0;
}

/*
 * Calculation to find least amount of dollar-bills possible during exchange.
 * Input parameters: amountInput.
 * Output parameters: exchanged 100 bills, 50 bills, 20, bills and 10 bills.
*/
void exchangeDollarBills(
    int dollarInput,
    int *exchangedHundred,
    int *exchangedFifty,
    int *exchangedTwenty,
    int *exchangedTen)
{
  *exchangedHundred = dollarInput / HUNDRED_DOLLAR_BILL;
  *exchangedFifty = dollarInput % HUNDRED_DOLLAR_BILL / FIFTY_DOLLAR_BILL;
  *exchangedTwenty = dollarInput % HUNDRED_DOLLAR_BILL % FIFTY_DOLLAR_BILL / TWENTY_DOLLAR_BILL;
  *exchangedTen = dollarInput % HUNDRED_DOLLAR_BILL % FIFTY_DOLLAR_BILL % TWENTY_DOLLAR_BILL / TEN_DOLLAR_BILL;
}