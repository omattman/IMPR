#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define CONSTANT_INPUT 1

double area(double, double, double, double, double, double);
double circumference(double, double, double, double, double, double);
double side_length(double, double, double, double);
double square(double);

int main (void){
  double p1_x = 0.0, p1_y = 0.0,
      p2_x = 0.0, p2_y = 0.0,
      p3_x = 0.0, p3_y = 0.0;

  int choice = 0,
      is_triangle = 0;


  if(CONSTANT_INPUT) {
    p1_x = 0; p1_y = 0;
    p2_x = 5; p2_y = 0;
    p3_x = 0; p3_y = 5;
  } else {
    printf("Please enter a point:\n");
    scanf(" (%lf , %lf)", &p1_x, &p1_y);
    printf("Point: (%lf, %lf)\n\n", p1_x, p1_y);

    printf("Please enter a point:\n");
    scanf(" (%lf , %lf)", &p2_x, &p2_y);
    printf("Point: (%lf, %lf)\n\n", p2_x, p2_y);

    printf("Please enter a point:\n");
    scanf(" (%lf , %lf)", &p3_x, &p3_y);
    printf("Point: (%4.1lf, %4.1lf)\n\n", p3_x, p3_y);
  }

  is_triangle = 1;

  if(is_triangle) {

    /* Promt for choice */
    printf("Your choice: Area (1), Circumference (2), Equilateral? (3) \n");
    scanf(" %d", &choice);

    switch (choice) {
      case 1: {
        printf("Area: %lf\n", area(p1_x, p1_y, p2_x, p2_y, p3_x, p3_y));
        break;
      }
      case 2: {
        printf("Circumference: %lf and area %lf\n", circumference(p1_x, p1_y, p2_x, p2_y, p3_x, p3_y));
        break;
      }
      case 3: {
        int equilateral = 0;
        printf("The triangle is %s equilateral\n", equilateral ? "" : "NOT");
      }
      default: {
        printf("Should not happen. Bye bye\n");
        exit(EXIT_FAILURE);
      }
    }
  } else {
    printf("Not a tringle\n");
  }

  return EXIT_SUCCESS;
}

double area(double p1_x, double p1_y, double p2_x, double p2_y, double p3_x, double p3_y) {
  double hc = circumference(p1_x, p1_y, p2_x, p2_y, p3_x, p3_y) / 2.0;

  return sqrt(hc * (hc - side_length(p1_x, p1_y, p2_x, p2_y)) * (hc - side_length(p2_x, p2_y, p3_x, p3_y)) * (hc - side_length(p3_x, p3_y, p1_x, p1_y)));
}

double circumference(double p1_x, double p1_y, double p2_x, double p2_y, double p3_x, double p3_y) {
  return side_length(p1_x, p1_y, p2_x, p2_y) + side_length(p2_x, p2_y, p3_x, p3_y) + side_length(p3_x, p3_y, p1_x, p1_y);
}

double side_length(double a_x, double a_y, double b_x, double b_y) {
  return sqrt(square(a_x - b_x) + square(a_y - b_y));
}