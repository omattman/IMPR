#include <stdio.h>
#include <stdlib.h>
#define CONSTANT_INPUT 1

#include "functions.h"

int main (void){
  double p1_x = 0.0, p1_y = 0.0;
  double p2_x = 0.0, p2_y = 0.rf0;
  double p3_x = 0.0, p3_y = 0.0;
  double length_p1_p2 = 0.0, length_p2_p3 = 0.0, length_p3_p1 = 0.0;
  int choice = 0;
  int is_triangle = 0;

  if (CONSTANT_INPUT){
    p1_x = 0.0; p1_y = 0.0;
    p2_x = 5.0; p2_y = 0.0;
    p3_x = 0.0; p3_y = 5.0;
  }
  else{
    /* Enter points */
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

  if(is_triangle){

    printf("Your choice. Area (1), Circumference (2), Equilateral? (3) \n");
    scanf(" %d", &choice);

    switch(choice){
      case 1:{
        /* Area */
        printf("Area: %lf\n", area(p1_x, p1_y, p2_x, p2_y, p3_x, p3_y));
        break;
      }
      case 2: {
        /* Circumference */
        printf("Circumference: %lf\n", circumference(p1_x, p1_y, p2_x, p2_y, p3_x, p3_y));
        break;
      }
      case 3: {
        /* Equilateral */
        int is_equilateral = 0;
        printf("The triangle is %s equilateral\n", is_equilateral ? "" : "NOT");
        break;
      }
      default:
        printf("Should not happen...");
        break;
    }
  }
  else {
    printf("Not a triangle. Bye\n");
    exit(EXIT_FAILURE);
  }

  return EXIT_SUCCESS;
}