//Program to search for a value in a string. In case the value is found in the string return the index where that value is present.
#include<stdio.h>
#include<string.h>
int search(char[], char, int*);
int main()
 {
   char S[100], c;

   printf("\nInput a string.\n");
   fgets(S,100,stdin);
   int l = strlen(S);

   printf("\nInput a value to be searched.\n");
   scanf("%c",&c);

   int res = search(S,c,&l);

   if(res==-1) printf("\n%c is NOT present in the input string.\n",c);
   else printf("\n%c is present in the array at index %d.\n",c,res);

   return 0;
 }
int search(char S[], char c, int* p)
 {
   for(int i=0; i<*p; i++)
     {
	if(S[i]==c) return i;
     }
   return -1;
 }


/* 
 	OUTPUT

Input a string.
all hell will

Input a value to be searched.
h

h is present in the array at index 4.

*/