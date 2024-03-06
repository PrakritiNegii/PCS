//Program to reverse a string using pointers.
#include<stdio.h>
#include<string.h>
int reverse(char*, int);
int main()
 {
   char S[100];
   printf("\nInput a string.\n");
   fgets(S,100,stdin);
   int l = strlen(S);
   reverse(S,l);
   printf("\nInput string after reversing.");
   puts(S);
   return 0;
 }

int reverse(char*S, int n)
 {
   for(int i=0, j=n-1;  i<n/2  ; i++, j--)
    {
      int temp = *(S+i);
      *(S+i) = *(S+j);
      *(S+j) = temp;
    }
 }

/*
	OUTPUT

Input a string.
Hey, how are u?

Input string after reversing.
?u era woh ,yeH

*/