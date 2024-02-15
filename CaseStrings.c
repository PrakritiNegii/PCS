//Program to input a string and convert all its alphabets into Upper Case and Lower Case.
#include <string.h>
#include <stdio.h>

int main() {
  char S[70];
  printf("\nInput a string.\n");
  fgets(S, 70, stdin);
  int l = strlen(S);

  printf("\nInput string in Lower Case.\n");
  for (int i = 0; i < l; i++) {
    if (S[i] >= 65 && S[i] <= 90) {
      S[i] = S[i] + 32;
    }
  }
  printf("%s", S);

  printf("\nInput string in Upper Case.\n");
  for (int i = 0; i < l; i++) {
    if (S[i] >= 97 && S[i] <= 122) {
      S[i] = S[i] - 32;
    }
  }
  printf("%s", S);

  return 0;
}
