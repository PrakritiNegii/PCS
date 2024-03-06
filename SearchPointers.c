//Program to search for a character in a string and if found return the index of that character.
//Use pointers.
#include<stdio.h>
#include<string.h>
int search(char*, int*, char*);
int main()
 {
   char S[100], c;
   printf("\nInput a string:\n");
   fgets(S,100,stdin);
   int l = strlen(S);
   
   printf("\nInput the character to be searched.\n");
   scanf("%c",&c);

   int res = search(S,&l,&c);

   if(res==-1) printf("\nCharacter %c not found in the input string.\n",c);
   else printf("\nCharacter %c is present at the index %d in the input string.\n",c,res);
  
   return 0;
 }

int search(char*S, int*l, char*c)
 {
   for(int i=0; i<*l; i++)
      {
	 if(*c==*(S+i)) return i;
      }
   return -1;
 }

/*
	OUTPUT

Input a string:
What do u mean?

Input the character to be searched.
m

Character m is present at the index 10 in the input string.



Input a string:
have you seen?

Input the character to be searched.
z

Character z not found in the input string.

*/