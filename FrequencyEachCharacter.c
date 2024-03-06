
//Program to find and print the frequency of all the characters present in a string.
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
        int f = 0;
        for(int j=i+1; j<l; j++)
          {
		if(S[i]==S[j])
		   {
			f++;
			for(int k=j; k<l; k++)
			  {
			      S[k] = S[k+1];
			  }
			j--;
			l--;
		   }
             }
          printf("\n Character %c is present %d times in the input string.\n",S[i],f+1);
        }
     return 0;
 }


