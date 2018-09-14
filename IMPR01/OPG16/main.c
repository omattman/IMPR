#include <stdio.h>

int main(void) {
    // declare float values
    float first_num,
          second_num,
          third_num;

    printf("Give me three: ");

    // scan 3 input elements and return the output of calculation
    scanf("%f %f %f", &first_num, &second_num, &third_num);
    printf("The result is: %f\n", (first_num+second_num+third_num) / 3.0);

    return 0;
}