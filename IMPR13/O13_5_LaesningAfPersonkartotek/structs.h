#include "header.h"

/* Structs */
struct person
{
  char fornavn[MAX_NAME_LGT];
  char efternavn[MAX_NAME_LGT];
  char vejnavn[MAX_NAME_LGT];
  int vejnummer;
  int postnummer;
  char bynavn[MAX_NAME_LGT];
};

typedef struct person person;