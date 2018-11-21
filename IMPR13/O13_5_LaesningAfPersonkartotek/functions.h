#include <stdio.h>
#include "header.h"
#include "structs.h"

/* Prototypes */
person load_person_from_file(FILE *pointer_to_file);
void trim_string(char *str);
int read_all(char *file_name, person p_array[]);
void print_all(person all[], int n, char* file_name);
void print_person(person p, FILE *fp);
void print_person_full(person p, FILE *fp);
int person_compare(const void *p1, const void *p2);