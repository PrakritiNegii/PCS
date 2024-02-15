//Program to input a string from the user and display its reverse.
#include<stdio.h>
#include<string.h>
int main()
 {
  int S[70];
  printf("\nInput a string.\n");
  fgets(S,70,stdin);
  int l = strlen(S)-1; //Subtract 1 to account for null character.

  for(int i=0, j=l; i<j; i++, j--)
   {
    int t = S[i];
    S[i] = S[j];
    S[j] = t;
   }
  printf("\nInput string on reversing is: \n");
  puts(S);
  return 0;
 }