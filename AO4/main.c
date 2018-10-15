#include <stdio.h>
#include <math.h>

double solveDiscriminant(double, double, double);
double solveRootOne(double, double, double);
double solveRootTwo(double, double, double);
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

double solveRootOne(double a, double b, double c) {
  double rootOne = (-b + sqrt(solveDiscriminant(a, b, c)))/(2*a);
  return rootOne;
}

double solveRootTwo(double a, double b, double c) {
  double rootTwo = (-b - sqrt(solveDiscriminant(a, b, c)))/(2*a);
  return rootTwo;
}

// Print amount of roots
void solveQuadraticEquation(double a, double b, double c){
  double discriminant = solveDiscriminant(a, b, c);
  double rootOne = solveRootOne(a, b, c);
  double rootTwo = solveRootTwo(a, b, c);

  if (discriminant < 0) {
    printf("No roots\n");
  } else if (discriminant == 0) {
    printf("One root: %f\n", rootOne);
  } else {
    printf("Two roots: %f and %f", rootOne, rootTwo);
  }
}