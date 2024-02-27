//Program to insert elements in a string and count the total number of vowels and consonants using functions by sending string as a parameter.
#include<stdio.h>
#include<string.h>
void countVC(char [], int);
int main()
 {
   char S[100], L[100];
   printf("\nInput a string.\n");
   fgets(S, 100, stdin);
   int l = strlen(S);
   for(int i=0; i<l; i++)
     {
       if(S[i]>=65 && S[i]<=90)     L[i] = S[i] + 32;
       else L[i] = S[i]; 
     }
   countVC(L,l);
   return 0;
 }
void countVC(char str[], int l)
 {
   int C=0, V=0;
   for(int i=0; i<l; i++)
     {
      printf("%d\n",str[i]);
      if(str[i]>=97 && str[i]<=122)
       {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') 
           V++;
        else C++;
       }
     }
   printf("\nThere are %d vowels and %d consonants present in the string.\n",V,C);
 }