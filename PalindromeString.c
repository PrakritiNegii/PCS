//Program to input a string and check whether it is Palinrome or not.
#include<stdio.h>
#include<string.h>
int main()
 {
   char S[70];
   int l, f=0;
   printf("\nInput a string.\n");
   fgets(S,70,stdin);
   l = strlen(S)-1;
  
  for(int i=0, j=l-1; i<j; i++,j--)
    {
      if(S[i]!=S[j]) f=1;
    }
  if(f==0) printf("\nInput string is PALINDROME.\n");
  else printf("\nInput string is NOT palindrome.\n");

  return 0;
 }