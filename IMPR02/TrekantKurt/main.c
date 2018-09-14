#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  double p1_x = 0.0,
         p1_y = 0.0,
         p2_x = 0.0,
         p2_y = 0.0,
         p3_x = 0.0,
         p3_y = 0.0,
         length_p1_p2 = 0.0,
         length_p2_p3 = 0.0,
         length_p3_p1 = 0.0,
         circumference = 0.0,
         hc = 0.0,
         area = 0.0;


  /* Promt for three points */
  printf("Please enter a point (x,y): ");
  scanf(" (%lf, %lf)", &p1_x, &p1_y);

  printf("Please enter a point (x,y): ");
  scanf(" (%lf, %lf)", &p2_x, &p2_y);

  printf("Please enter a point (x,y): ");
  scanf(" (%lf, %lf)", &p3_x, &p3_y);

  /* Circumference */
  length_p1_p2 = sqrt((p1_x - p2_x) * (p1_x - p2_x) + (p1_y - p2_y) * (p1_y - p2_y));
  length_p2_p3 = sqrt((p2_x - p3_x) * (p2_x - p3_x) + (p2_y - p3_y) * (p2_y - p3_y));
  length_p3_p1 = sqrt((p3_x - p1_x) * (p3_x - p1_x) + (p3_y - p1_y) * (p3_y - p1_y));

  circumference = length_p1_p2 + length_p2_p3 + length_p3_p1;
  printf("Circumference: %lf\n", circumference);

  /* Area */
  hc = circumference / 2;
  area = sqrt(hc * (hc - length_p1_p2) * (hc - length_p2_p3) * (hc - length_p3_p1));
  printf("Area: %lf\n", area);

  return 0;
}