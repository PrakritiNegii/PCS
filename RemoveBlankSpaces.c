//Program to remove all the blank spaces present in an array.
#include<stdio.h>
#include<string.h>
int main()
 {
   char S[100];
   printf("\nInput a string:\n");
   fgets(S,100,stdin);
   int l = strlen(S);
   for(int i=0; i<l; i++)
     {
	if(S[i]==' ')
	   {
		for(int k=i; k<l; k++)
		      {
		          S[k] = S[k+1];
		      }
		l--;
            }
        }
     printf("\nInput string on removing all the blank spaces present in it.\n");
     puts(S);
     return 0;
 }



/*	OUTPUT

 Input a string:
 Hey Th a t 's Mine.

Input string on removing all the blank spaces present in it.
HeyThat'sMine.
*/