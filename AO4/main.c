#include <stdio.h>
#include <math.h>

// Prototypes
void solveQuadraticEquation(double, double, double);
double solveDiscriminant(double, double, double);
double solveRootOne(double, double, double);
double solveRootTwo(double, double, double);

int main(void) {
  // Declare variables
  double a, b, c;

  // Prompt user for three integers
  // Assign input to variables
  printf("Enter coefficients a, b, and c: ");
  scanf("%lf %lf %lf", &a, &b, &c);

  // Call function to see if 0, 1 or 2 roots.
  solveQuadraticEquation(a, b, c);

  return 0;
}

// Print amount of roots
void solveQuadraticEquation(double a, double b, double c){
  if (solveDiscriminant(a, b, c) < 0) {
    printf("No roots was found\n");
  } else if (solveDiscriminant(a, b, c) == 0) {
    printf("One root was found:\nx1 = %.2f", solveRootOne(a, b, c));
  } else {
    printf("Two roots was found:\nx1 = %.2f and x2 = %.2f", solveRootOne(a, b, c), solveRootTwo(a, b, c));
  }
}

// Calculate discriminant
double solveDiscriminant(double a, double b, double c) {
  double discriminant = b * b - 4 * a * c;
  return discriminant;
}

// Find root one of quadratic equation
double solveRootOne(double a, double b, double c) {
  double rootOne = (-b + sqrt(solveDiscriminant(a, b, c)))/(2*a);
  return rootOne;
}

// Find root two of quadratic equation
double solveRootTwo(double a, double b, double c) {
  double rootTwo = (-b - sqrt(solveDiscriminant(a, b, c)))/(2*a);
  return rootTwo;
}