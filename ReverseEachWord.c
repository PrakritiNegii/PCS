//Program to reverse a word in a sentence in its own position.
#include<stdio.h>
#include<string.h>
int main()
 {
   char S[100], R[100];
   printf("\nInput a string:\n");
   fgets(S,100,stdin);
   int l = strlen(S);
   for(int i=0, j=0; i<=l; i++, j++)
     {
	R[j] = S[i];
	if(S[i]==' ' || S[i]=='\0')
	   {
                int l2 = strlen(R);
		for(int m=0, n=l2-2; m<n; m++,n--)
		  {
		     int temp = R[m];
		     R[m] = R[n];
		     R[n] = temp;
		   }
		for(int i=0; i<l2; i++)
                    printf("%c",R[i]);
		j = 0; 
           }
      }

     return 0;
 }


/*
		OUTPUT

Input a string:
what the name is
tahw eht eman si

Input a string:
whose serious
esohw suoires
*/