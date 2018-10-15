#include <stdio.h>
#include <math.h>

double solveDiscriminant(double, double, double);
double solveRootOne(double, double);
double solveRootTwo(double, double, double, double*, double*);
void solveQuadraticEquation(double, double, double);


int main(void) {
  double a, b, c;

  printf("Enter coeficients a, b, and c: ");
  scanf("%lf %lf %lf", &a, &b, &c);
  solveQuadraticEquation(a, b, c);

  return 0;
}

double solveDiscriminant(double a, double b, double c) {
  double discriminant = b * b - 4 * a * c;
  return discriminant;
}

double solveRootOne(double a, double b) {
  double rootOne = -b/(2*a);
  return rootOne;
}

double solveRootTwo(double a, double b, double c, double *rootOne, double *rootTwo) {
  *rootOne = (-b + sqrt(solveDiscriminant(a, b, c)))/(2*a);
  *rootTwo = (-b - sqrt(solveDiscriminant(a, b, c)))/(2*a);
}

/* Prints roots of the quadratic equation a * x*x + b * x + c = 0 */
void solveQuadraticEquation(double a, double b, double c){
  double rootOne, rootTwo;

  if (solveDiscriminant(a, b, c) < 0) {
    printf("No roots\n");
  } else if (solveDiscriminant(a, b, c) == 0) {
    printf("One root: %f\n", solveRootOne(a, b));
  } else {
    solveRootTwo(a, b, c, &rootOne, &rootTwo);
    printf("Two roots: %f and %f", rootOne, rootTwo);
  }
}