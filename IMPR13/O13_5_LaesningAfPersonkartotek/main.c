#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"
#include "functions.h"

/**
 * Main function to run the program
 *
 *  @param NONE
 */
int main()
{
    person persons_arr[MAX_PERSONS_LGT];
    int number_of_persons;

    number_of_persons = read_all("adresser.text", persons_arr);
    qsort(persons_arr, number_of_persons, sizeof(person), person_compare);
    print_all(persons_arr, number_of_persons, "adresser-out.text");

    return 0;
}