/*
 * C file and functions library that contains calculations of discriminant and roots.
 */

#include <math.h>

// Calculate discriminant
double solveDiscriminant(double a, double b, double c) {
  double discriminant = b * b - 4 * a * c;
  return discriminant;
}

// Find root one of quadratic
double solveRootOne(double a, double b, double c) {
  double rootOne = (-b + sqrt(solveDiscriminant(a, b, c)))/(2*a);
  return rootOne;
}

// Find root two of quadratic
double solveRootTwo(double a, double b, double c) {
  double rootTwo = (-b - sqrt(solveDiscriminant(a, b, c)))/(2*a);
  return rootTwo;
}