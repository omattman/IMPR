#include <stdio.h>

/*
    1.  Write a statement that asks the user to type three integers and another statement that
        stores the three user responses into first, second, and third.
    2.  a.  Write a statement that displays the following line with the value of the type int
            variable n before the period.
        b.  Assuming that "side" and "area" are type double variables containing the length
            of one of side in cm and the area of a square in square cm, write a statement that
            will display this information in this form:
                "The area of a square whose side length is ______ cm is ______ square cm.
    3.  Write a program that asks the user to enter the radius of a circle and then computes
        and displays the circle's area. Use the formula:
            Area = PI * Radius * Radius
        Where PI is the constant macro 3.14159
*/

// 1.
int main() {
    int first,
        second,
        third;

    printf("Type three integers: ");
    scanf("%d %d %d", &first, &second, &third);
}

// 2a.
int main(void) {
    int n;

    printf("Type a integer: ");
    scanf("%d", &n);

    printf("The value of %d is", n);
}

// 2b.
int main(void) {
    // variables
    double side, area;

    // Prompt the user
    printf("Enter a desired length of one side of the area: ");

    // Assign to memory
    scanf("%lf", &side);

    // calculate the size of the area
    area = side * side;
    printf("The area of a square whose side length is %fl cm is %fl square cm.", side, area);
}

// 3.
int main(void) {
    #define PI 3.14159;

    double radius, area;

    printf("Enter the radius of a circle: ");
    scanf("%lf", &radius);

    area = radius * radius * PI;

    printf("The circle's area is %fl", area);
}