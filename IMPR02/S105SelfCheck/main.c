#include <stdio.h>

// Program 1
int main() {
    int first,
        second,
        third,
        fourth;

    int numberOne = 3;
    int numberTwo = 23;

    first = numberOne / numberTwo;
    second = numberTwo / numberOne;
    third = numberOne % numberTwo;
    fourth = numberTwo % numberOne;

    printf("%d %d %d %d", first, second, third, fourth);
}



// Program 2
int main(void) {
    double celcius, salary, output1, output2;

    celcius = 38.1;
    salary = 38450.00;

    output1 = 1.8 * celcius * 32.0;
    output2 = (salary - 5000.0) * 0.20 + 1425;

    printf("1.8 * %f + 32.0 is equal to %f\n", celcius, output1);
    printf("(%f - 5000.0) * 0.20 + 1425 is equal to %f\n", salary, output2);
}


// Program 3
int main(void) {
    #define PI 3.14519
    #define MAX_I 1000

    double x, y;
    int a, b, i;

    a = 3;
    b = 4;
    y = -1.0;

    i = a % b; // Valid, since mod of 3 against 4 leaves 3
    i = (989 - MAX_I) / a;

    printf("Value: %d", i);
}
