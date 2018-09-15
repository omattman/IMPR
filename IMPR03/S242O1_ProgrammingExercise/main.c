#include <stdio.h>

/*
 * Write a switch  statement that assigns to the variable lumens the expected brightness of an incandescent
 * light bulb whose wattage has been stored in watts.
 */

int main() {
  int lumens = 0,
      watts = 0;

  printf("How much wattage can your provided light bulb use?: ");
  scanf("%d", &watts);

  switch(watts) {
    case 15:
      lumens = 125;
      printf("Brightness is %d from %d watts.", lumens, watts);
      break;
    case 25:
      lumens = 215;
      printf("Brightness is %d from %d watts.", lumens, watts);
      break;
    case 40:
      lumens = 500;
      printf("Brightness is %d from %d  watts.", lumens, watts);
      break;
    case 60:
      lumens = 880;
      printf("Brightness is %d from %d watts.", lumens, watts);
      break;
    case 75:
      lumens = 1000;
      printf("Brightness is %d from %d watts.", lumens, watts);
      break;
    case 100:
      lumens = 1675;
      printf("Brightness is %d from %d watts.", lumens, watts);
      break;
    default: break;
  }
  printf("\n");
}