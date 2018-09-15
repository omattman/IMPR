#include <stdio.h>
/*
 * Write a program that atkes the x-y coordinates of a point in the Cartesian plane and prints
 * a message telling either an axis on which the point lies or the quadarant in which it is found
 */
int main() {
  double plane_x = 0.0,
    plane_y = 0.0,
    x_axis = 0.0,
    y_axis = 0.0;

  printf("Which coordinates does the plane have (x.x, y.y)?: ");
  scanf(" (%lf, %lf)", &plane_x, &plane_y);

  if (plane_x < x_axis && plane_y < y_axis) {
    printf("(%lf, %lf) is in the quadrant III", plane_x, plane_y);
  } else if (plane_x > x_axis && plane_y < y_axis) {
    printf("(%lf, %lf) is in the quadrant IIII", plane_x, plane_y);
  } else if (plane_x < x_axis && plane_y > y_axis) {
    printf("(%lf, %lf) is in the quadrant II", plane_x, plane_y);
  } else if (plane_x > x_axis && plane_y > y_axis) {
    printf("(%lf, %lf) is in the quadrant I", plane_x, plane_y);
  } else if (plane_x == x_axis) {
    printf("(%lf, %lf) is on the y-axis", plane_x, plane_y);
  } else if (plane_y == y_axis) {
    printf("(%lf, %lf) is on the x-axis", plane_x, plane_y);
  } else {
    printf("Where the heck is this plane?");
  }
}