/*Program to enter a statement from the user and check whether that statement contains
  vowels, consonants, numbers or special characters. */
#include<string.h>
#include<stdio.h>
int main()
 {
  char S[50];
  int l, V=0, C=0, N=0, O=0;
  printf("\nInput a sentence.\n");
  fgets(S,50,stdin);
  l = strlen(S);  //counts the null character too.
  for(int i=0; i<l; i++)
   {
    //printf("\n%d\n",S[i]);
    if(S[i]>=97 && S[i]<=122)
     {
      if(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u') V++;
      else C++;
     }
    else if(S[i]>=65 && S[i]<=90)
     {
      if(S[i]=='A' || S[i]=='E' || S[i]=='I' || S[i]=='O' || S[i]=='U') V++;
      else C++;
     }
         else if(S[i]>=48 && S[i]<=57) N++;
              else O++;
   }

    printf("\nThere are %d vowels, %d consonants, %d numbers and %d special characters present in the input String.\n",V,C,N,O);
    return 0;          
 }