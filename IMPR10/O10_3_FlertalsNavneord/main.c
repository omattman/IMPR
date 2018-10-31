/*
 * Skriv et program som oversætter udvalgte engelske navneord fra ental til flertal. Følgende regler skal overholdes:
 *
 *    1. Hvis et navneord ender i et "y" fjernes "y" og der tilføjes "ies".
 *    2. Hvis et navneord ender i et "s", "ch" eller "sh" tilføjes et "es".
 *    3. I alle andre tilfælde tilføjes et "s" til navneordet.
 *
 * Udskriv hvert navneord i både ental og flertal.
 * Som altid skal du designe en funktion med et passende navn, og med parametre (input og evt. output).
 * Og som altid laver vi top-down programmering ved trinvis forfinelse. Ønsker du at bruge
 * returværdien af funktionen til noget?
 *
 * Afprøv dit program på følgende engelske navneord:
 *
 *    chair dairy boss circus fly dog church clue dish
 *
 * Alloker plads til disse i en passende array af tekststrenge.
 *
 * Denne opgave svarer til opgave 5 side 532 i 6. udgave af lærebogen
 *
 * Hints: Måske er funktionen strrchr fra string.h nyttig i denne opgave. Den søger efter et tegn
 * fra bagenden af strengen. Husk også at du blot kan tilgå tegn i en tekststreng med array
 * subscripting operatoren: str[i]. Du kan teste om et tegn i din streng svarer
 * til et bestemt tegn: str[i] == 'y'.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* singular_to_pluralis(char* word_in);

int main(void) {
  char* words[] = { "chair", "dairy", "boss", "circus", "fly", "dog", "church", "clue", "dish" };

  for (int i = 0; i < 9; ++i) {
    printf("Ental: %s | Flertal %c\n", words[i], singular_to_pluralis(words[i]));
  }

  return 0;
}

char* singular_to_pluralis(char* word_in) {

  switch(word_in[strlen(word_in) - 1]) {
    case 's':
      printf("Ja, hallo");
      break;
  }
}