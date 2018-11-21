#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"
#include "functions.h"

/**
 * Loads the desired file and returns an array of all the words
 *
 *  @param [r] filename {const char*} The file to open
 *  @param [w] lexicon {struct LEXICON_WORD_PROP*} An array of all the words in the file
 */
person load_person_from_file(FILE *pointer_to_file)
{
    person data;
    int scan_data;

    scan_data = fscanf(pointer_to_file,
                        " %s %[abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ] ,"      /* Fornavn, efternavn uden komma, komma */
                        " %[^0123456789] %d ,"                                               /* Indtil vejnummer, vejnummer som int, saa komma */
                        " %d %[abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ] . ",    /* Postnummer som int, bynavn uden punktum, punktum */
                    data.fornavn, data.efternavn,
                    data.vejnavn, &data.vejnummer,
                    &data.postnummer, data.bynavn);

    trim_string(data.vejnavn);

    if (scan_data == 6)
    {
        printf(".");
        return data;
    }
}

/**
 * Trim string for trailing white spaces
 *
 *  @param [w] string {char *str} The string to trim
 */
void trim_string(char *str)
{
    int i = strlen(str) - 1;
    while (i >= 0 && str[i] == ' ')
    {
        str[i] = '\0';
        --i;
    }
}

/**
 * Read data in p_array, and return the number of persons read
 *
 * @param [r] file_name {char *} The file to read from
 * @param [w] p_array {struct person} An array of persons read from file
 */
int read_all(char *file_name, person p_array[])
{
    FILE *fp = fopen(file_name, "r");
    int i = 0;
    if (fp != NULL)
    {
        while(!(feof(fp)))
        {
            p_array[i] = load_person_from_file(fp);
            ++i;
        }
        fclose(fp);
        return i;
    }
}

/**
 * Print all the persons who exists in the file.
 *
 * @param [r] all[] {struct person} Array of persons
 * @param [r] n {int} Number of persons, which exist.
 * @param [w] output_file_name {char*} Which file to create with the output
 */
void print_all(person all[], int n, char* output_file_name)
{
    int i;

    /* Create filepointer, which creates a new file to avoid deleting existing data */
    FILE *fp = fopen(output_file_name, "w");
    if (fp != NULL)
    {
        for (i = 0; i < n; ++i)
        print_person(all[i], fp);
        fclose(fp);
    }
}

/**
 * 1. print_person:         print person city name and last name
 * 2. print_person_full:    print all data belonging to person
 *
 * @param [r] data {struct person} acces all data in struct array
 * @param [r] *fp {FILE} file pointer to read from
 */
void print_person(person data, FILE *fp)
{
    fprintf(fp, "%s: %s\n", data.bynavn, data.efternavn);
}

void print_person_full(person data, FILE *fp)
{
    fprintf(fp, "%s %s, %s %d, %d %s\n",
            data.efternavn, data.bynavn, data.vejnavn, data.vejnummer, data.postnummer, data.bynavn);
}

/**
 * Compare persons by lastname, which is used in a qsort()
 *
 * @param [r] p1 {const void *} First string to be compared
 * @param [r] p2 {const void *} Second string to be compared
 */
int person_compare(const void *p1, const void *p2)
{
    return strcmp(((person*)p1)->efternavn, ((person*)p2)->efternavn);
}