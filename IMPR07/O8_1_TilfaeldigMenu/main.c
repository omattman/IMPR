#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum forret { guacamole, tarteletter, lakserulle, graeskarsuppe };
enum hovedret { gyldenkael, hakkeboef, gullash, forloren_hare };
enum dessert { pandekager_med_is, gulerodskage, chokolademousse, citronfromage };

void maaltid(int, int, int);

int main() {
  srand(time(NULL));

  for (int i = 1; i <= 25; ++i) {
    printf("Ret nummer %d: ", i);
    maaltid(rand()%4, rand()%4, rand()%4);
    printf("\n");
  }

  return 0;
}

void maaltid(int number1, int number2, int number3) {
  switch(number1) {
    case 0:
      printf("Guacamole ");
      break;
    case 1:
      printf("Tarteletter ");
      break;
    case 2:
      printf("Lakserulle ");
      break;
    case 3:
      printf("Graeskarsuppe ");
      break;
  }

  switch(number2) {
    case 0:
      printf("Gyldenkael ");
      break;
    case 1:
      printf("Hakkeboef ");
      break;
    case 2:
      printf("Gullash ");
      break;
    case 3:
      printf("Forloren hare ");
      break;
  }

  switch(number3) {
    case 0:
      printf("Pandekager med is ");
      break;
    case 1:
      printf("Gulerodskage ");
      break;
    case 2:
      printf("Chokolademusse ");
      break;
    case 3:
      printf("Citronfromage ");
      break;
  }
}