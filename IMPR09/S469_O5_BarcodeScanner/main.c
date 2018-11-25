/**
 * Write a program that prompts the user to enter the 12 digits of a barcode
 * separeted by spaces.
 *
 * TODO:
 * 1. Store the digits in an integer array
 * 2. Calculate the check digit, and compare it to the final barcode digit.
 * 3. If the digits match -> output "valiated"
 * 4. If the digits does not match -> output "error in barcode"
 */

#include <stdio.h>
#define BAR_CODE_MAX 12

void prompt_for_bar_code(int *bar_code);
void print_bar_code(const int bar_code[BAR_CODE_MAX]);
void check_bar_code(const int bar_code[BAR_CODE_MAX]);
int check_digit(const int bar_code[BAR_CODE_MAX]);

int main(void) {
  int bar_code[BAR_CODE_MAX], i;

  printf("Enter bar code (12 digits, separated by spaces):\n");

  prompt_for_bar_code(bar_code);

  printf("The bar code is: ");
  print_bar_code(bar_code);
  printf("\n");

  check_bar_code(bar_code);

  return 0;
}

/* A printing function that reports about the status of the bar code */
void check_bar_code(const int bar_code[BAR_CODE_MAX]){
  int chd = check_digit(bar_code);

  if (chd == bar_code[BAR_CODE_MAX - 1]){
    print_bar_code(bar_code);
    printf(" is validated.");
  }
  else {
    print_bar_code(bar_code);
    printf(" contains an error.");
  }
  printf("\n");
}

/* Return the check digit of the bar_code */
int check_digit(const int bar_code[BAR_CODE_MAX]){
  int odd_sum = 0, even_sum = 0, res, i;

  /* so-called odd-numbered positions: */
  for(i = 0; i < BAR_CODE_MAX; i += 2)        // Accumulate all even-indexed numbers
     odd_sum += bar_code[i];

  res = odd_sum * 3;

  /* so-called even-numbered positions: */
  for(i = 1; i < BAR_CODE_MAX - 2; i += 2)    // Accumulate all odd-indexed numbers, not the last
     even_sum += bar_code[i];

  res += even_sum;

  printf("Intermediate result: %d\n", res);

  if (res % 10 == 0)
    return 0;
  else
    return 10 - res % 10;
}

void prompt_for_bar_code(int *bar_code){
  int i;

  for(i = 0; i < BAR_CODE_MAX; i++){
    scanf("%d", bar_code + i);
  }
}

/* prints the barcode */
void print_bar_code(const int bar_code[BAR_CODE_MAX]){
  int i;
  for(i = 0; i < BAR_CODE_MAX; i++) printf("%d ", bar_code[i]);
}
