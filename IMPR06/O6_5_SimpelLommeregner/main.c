#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void prompt_for_input(void);
void scan_data(char *operator, double *operand);
void do_next_op(const char operator, double operand, double *akkumulator);
void print_results(double result);

int main(void) {
  char operator = '+';
  double akkumulator = 0.0;
  double operand;

  while(operator != 'q') {
    prompt_for_input();
    scan_data(&operator, &operand);
    if (operator != 'q') {
      do_next_op(operator, operand, &akkumulator);
      print_results(akkumulator);
    }
  }
  printf("Final result is: %f\n", akkumulator);

  return 0;
}

void prompt_for_input(void) {
  printf("Enter operater and operand:\n");
}

void scan_data(char *operator, double *operand) {
  scanf(" %c %lf", operator, operand);
}

void do_next_op(const char operator, double operand, double *akkumulator) {
  switch (operator) {
    case '+': *akkumulator += operand; break;
    case '-': *akkumulator -= operand; break;
    case '*': *akkumulator *= operand; break;
    case '/': *akkumulator /= operand; break;
    case '^': *akkumulator = pow(*akkumulator, operand); break;
    default: printf("Error: Unknown operator. Try again. Nothing changed\n");
  }
}

void print_results(double result) {
  printf("Result so far is %f.\n", result);
}
