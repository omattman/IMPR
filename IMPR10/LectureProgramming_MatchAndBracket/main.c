#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define OUT_MAX 200

/* Copies str to str_out, bracketing matches of str_pred with prefix and suffix. */
void match_and_bracket(int (*str_pred)(char*),
                       char str_in[], int str_in_len,
                       const char *prefix, const char *suffix,
                       char str_out[], int str_out_len);

/* Return a positive integer n, if n characters match where cp points. Else return 0. */
int hours_minutes_p(char* cp);

int main(void) {
  char in[] = "Vi starter kl. 10:15 og slutter kl. 12:00",
       out[OUT_MAX];

  match_and_bracket(hours_minutes_p, in, strlen(in), "[", "]", out, OUT_MAX);

  printf("%s =>\n%s\n", in, out);

  return EXIT_SUCCESS;
}

void match_and_bracket(int (*str_pred)(char*),
                       char str_in[], int str_in_len,
                       const char *prefix, const char *suffix,
                       char str_out[], int str_out_len) {
  int i = 0,
      o = 0,
      sp;

  while (i < str_in_len) {
    if ((sp = str_pred(str_in + i))) {
      strcpy(str_out + o, prefix); o += strlen(prefix);
      strncpy(str_out + o, str_in + i, sp); o += sp; i += sp; str_out[o] = '\0';
      strcpy(str_out + o, suffix); o += strlen(suffix);
    } else {
      str_out[o++] = str_in[i++];
    }
  }
}

int hours_minutes_p(char* cp) {
  if (strlen(cp) < 5)
    return 0;
  else {
    int res = isdigit(*(cp + 0)) && isdigit(*(cp + 1)) && *(cp + 2) == ':' && isdigit(*(cp + 3)) && isdigit(*(cp + 4));
    return res ? 5 : 0;
  }
}