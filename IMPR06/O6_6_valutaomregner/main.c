#include <stdio.h>

// Declare symbolic constants.
#define EURO 0.89
#define KRONER 6.66
#define RUBLER 66.43
#define YEN 119.9

// Declare prototypes.
void valutaConverter(int, double *, double *, double *, double *);

int main() {
  // Declare variables.
  double euro,
         kroner,
         rubler,
         yen;

  // Convert valutas starting from 1 dollar to 100 dollars.
  for (int input = 1; input <= 100; ++input) {

    // Call valuta converter and assign output values to correct variables.
    valutaConverter(input, &euro, &kroner, &rubler, &yen);

    // Start print statement.
    printf("%d dollars is equal to:\n", input);

    // Print correct conversion.
    printf("%.2f Euro\n", euro);
    printf("%.2f Kroner\n", kroner);
    printf("%.2f Rubler\n", rubler);
    printf("%.2f Yen\n\n", yen);
  }

  return 0;
}

/*
 * Convert dollars to different valutas
 * input: start from 1 and go to 100 in loop.
 * output: converted Euro, Kroner, Rubler and Yen.
 */
void valutaConverter(int input, double *convertEuro, double *convertKroner, double *convertRubler, double *convertYen){
  *convertEuro = input * EURO;
  *convertKroner = input * KRONER;
  *convertRubler = input * RUBLER;
  *convertYen = input * YEN;
}
