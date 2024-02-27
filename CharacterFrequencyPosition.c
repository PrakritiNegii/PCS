//Program to check whether a character is present in the string or not, if present display the position of the character.
#include<stdio.h>
#include<string.h>
int main()
 {
   char S[100], c;
0   int f = 1;
   printf("\nInput a string:\n");
   fgets(S,100,stdin);
   printf("\nInput a character to be searched.\n");
   scanf("%c",&c);
   int l = strlen(S);
   for(int i=0; i<l; i++)
     {
	if(S[i]==c)
	   {
		printf("\nThe character %c is present at position %d in the string.\n",c, i+1);
                f++;
            }
        }

     printf("\n\n %c is present %d times in the string.\n",c,f);
     return 0;
 }
 
/*
	OUTPUT

Input a string:
Hype Girl Han Hae

Input a character to be searched.
H

The character H is present at position 1 in the string.

The character H is present at position 11 in the string.

The character H is present at position 15 in the string.


 H is present 3 times in the string.
*/