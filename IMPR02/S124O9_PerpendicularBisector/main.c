#include <stdio.h>

int main() {
  #define SQUARE_FEET 2

  // Variables
  double house_x = 0.0,
         house_y = 0.0,
         yard_x = 0.0,
         yard_y = 0.0,
         house = 0.0,
         yard = 0.0,
         speed = 0.0;


  // Prompt yard meters
  printf("Enter the length and width of the yard: ");
  scanf("%lf %lf", &yard_x, &yard_y);

  // Prompt house meters
  printf("Enter the length and width of the house: ");
  scanf("%lf %lf", &house_x, &house_y);

  // Assign values to house
  house = house_x * house_y;

  // Calculate yard areal minus the house
  yard = (yard_x * yard_y) - house;

  // Calculate speed
  speed = yard / SQUARE_FEET;

  printf("%lf", speed);
}