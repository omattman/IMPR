#include <stdio.h>

// Task 1.
int main() {
    // Declare variables
    int m,
        n;

    // Program
    printf("Enter two integers> ");
    scanf("%d%d", &m, &n);

    // Multiplication
    m = m + 5;
    n = 3 * n;

    // Print new results
    printf("m = %d\nn = %d\n", m, n);
}

// Task 3.
int main() {
    int exp = 11;

    printf("My name is ");
    printf("Jane Doe. ");
    printf("\n");
    printf("I live in");
    printf("Ann Arbor, MI\n");
    printf("and I have %d years ", exp);
    printf("of programming experience.\n");
}

// Task 4.
int main() {
    char name[] = "My name is Jane Doe.";
    char city[] = "I live in Ann Arbor, MI.";

    printf("%s %s", name, city );
}