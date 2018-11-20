#include <stdio.h>
#include <string.h>
#define MAX_WORD_LENGTH 500

// Prototypes
int getwords(FILE *ifp, int k, char *words);

int main(void)
{
  char buffer[MAX_WORD_LENGTH];
  int no_of_words;

  FILE *input_file = fopen("text.txt","r");
  no_of_words = getwords(input_file, 10, buffer);
  printf("%i words read:\n%s\n", no_of_words, buffer);
  fclose(input_file);

  return 0;
}

/**
 * Loads the desired file and returns an array of all the words
 *
 *  @param [r] filename {FILE *ifp} The file to open
 *  @param [w] rows {int k} The amount of words to print
 *  @param [w] words {char *words} An array of all the words in the file
 */
int getwords(FILE *ifp, int k, char *words)
{
  char word[MAX_WORD_LENGTH];
  int count = 0;

  while (fscanf(ifp, "%s", word) != EOF && count < k)
  {
    count++;
    strcpy(words,word);
    words += strlen(word);
    *words = '\n';
     words++;
  }

  words--;
  *words = '\0';

  return count;
}
