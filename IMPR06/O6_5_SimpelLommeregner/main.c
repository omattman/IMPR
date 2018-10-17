#include <stdio.h>

void scan_data(char *, double *);
void do_next_op(char, double, double *);

int main(void) {
  char operator;
  double operand,
         akkumulator = 0.0;

  scan_data(&operator, &operand);
  do_next_op(operator, operand, &akkumulator);

  printf("Result so far is %f", akkumulator);

}

void scan_data(char *operator, double *operand) {
  printf("Enter operater and operand:\n");
  scanf(" %c %lf", operator, operand);
}

void do_next_op(char operator, double operand, double *akkumulator) {
  *akkumulator = 0.0;
  switch (operator) {
    case '+' :
      *akkumulator = operand + *akkumulator;
    case '-' :
      *akkumulator = operand - *akkumulator;
    case '*' :
      *akkumulator = operand * *akkumulator;
    case '/' :
      *akkumulator = operand / *akkumulator;
    case 'q' :
      printf("%f", akkumulator);
    default :
      printf("Invalid operator\n" );
  }
}
