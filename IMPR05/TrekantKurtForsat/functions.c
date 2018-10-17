#include <math.h>
#include "functions.h"

double area(double p1_x, double p1_y, double p2_x, double p2_y, double p3_x, double p3_y){
  double hc = circumference(p1_x, p1_y, p2_x, p2_y, p3_x, p3_y) / 2.0;

  return sqrt(hc * (hc - side_length(p1_x, p1_y, p2_x, p2_y)) *
              (hc - side_length(p2_x, p2_y, p3_x, p3_y)) *
              (hc - side_length(p3_x, p3_y, p1_x, p1_y)));
}

double side_length(double p1_x, double p1_y,  double p2_x, double p2_y){
  return sqrt(square(p1_x - p2_x) + square(p1_y - p2_y));
}

double square(double d){
  return d * d;
}

double circumference(double p1_x, double p1_y, double p2_x, double p2_y, double p3_x, double p3_y){
  return side_length(p1_x, p1_y,  p2_x, p2_y) + side_length(p2_x, p2_y,  p3_x, p3_y) + side_length(p3_x, p3_y,  p1_x, p1_y);
}
