//Program to input a string and print the character that repeats the maximum number of times.
#include<stdio.h>
#include<string.h>
int main()
 {
   char S[100];
   int C[100];
   printf("\nInput a string:\n");
   fgets(S,100,stdin);
   int l = strlen(S);
   
   for(int i=0; i<l-1; i++)
    {
      int c = 1;
      for(int j=i+1; j<l-1; j++)
	{
 	  if(S[i]==S[j]) 
 	    {
	      c++;
              for(int k=j; k<l-1; k++)
		{
		   S[k] = S[k+1];
		}
	      j--;
              l--;
	    }
	}
      C[i] = c;
    }

  int B = C[0], F = 0;
  for(int i=1; i<l-1; i++)
   {
     if(C[i]>B) 
	{
	   B = C[i];
	   F=i;
	}
    }
  
  for(int i=0; i<l-1; i++)
    {
      printf("\n%c(%d) = %d\n",S[i],i,C[i]);
    }
  
  printf("\n%c character repeats the maximum number of times that is %d times.\n",S[F],B);
  return 0;
 }


/*
	OUTPUT

Input a string:
bees seeek nectaar

b(0) = 1

e(1) = 6

s(2) = 2

 (3) = 2

k(4) = 1

n(5) = 1

c(6) = 1

t(7) = 1

a(8) = 2

r(9) = 1

e character repeats the maximum number of times that is 6 times.

*/