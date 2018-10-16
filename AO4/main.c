#include <stdio.h>
#include <math.h>

// Define symbolic constants
#define SENTINEL 0

// Prototypes
void solveQuadraticEquation(double, double, double);
double solveDiscriminant(double, double, double);
double solveRootOne(double, double, double);
double solveRootTwo(double, double, double);

// Main function and logic to handle input integers.
int main(void) {
  // Declare variables
  double a = 0,
         b = 0,
         c = 0;

  // Prompt user for three integers and prompt again after equation until all integers is equal to 0, then EXIT.
  // Assign input to variables
  do {
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a != SENTINEL || b != SENTINEL || c != SENTINEL)
      solveQuadraticEquation(a, b, c);
  } while (a != SENTINEL || b != SENTINEL || c != SENTINEL);

  return 0;
}

// Print amount of roots
void solveQuadraticEquation(double a, double b, double c){
  if (solveDiscriminant(a, b, c) < 0) {
    printf("No roots was found\n");
  } else if (solveDiscriminant(a, b, c) == 0) {
    printf("One root was found:\nx1 = %.2f\n", solveRootOne(a, b, c));
  } else {
    printf("Two roots was found:\nx1 = %.2f and x2 = %.2f\n", solveRootOne(a, b, c), solveRootTwo(a, b, c));
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