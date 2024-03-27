//Program to find the number of times a substring appears in a string.
#include<stdio.h>
#include<string.h>
int main()
 {
   char S[150], SS[30], *s, *ss;
   int l1, l2, i, j, c, c1;
   printf("\nInput a string.\n");
   fgets(S,150,stdin);
   printf("\nInput a substring.\n");
   fgets(SS,30,stdin);
   
   l1 = strlen(S);
   l2 = strlen(SS); //strlen counts the new line character not the null character.

   s = S, ss = SS;
   j=0, c=0, c1=0;
   
   for(i=0; i<l1-1; i++)
    {
     if(*(s+i)==*(ss+j))
      {
       for(j=0; j<l2-1; j++, i++)
        {
         if(*(s+i)==*(ss+j)) 
          {
              c++;
          }
         else break;
        }

       if(c==l2-1) 
         {
            c1++;  
         }

       j = 0; c=0;
      }
    }
    
    printf("\n%s is present %d times in the string.\n",ss, c1);
    return 0; 
 }


/*

	OUTPUT

Input a string.
the cat saw the fat rat

Input a substring.
at

at
 is present 3 times in the string.



Input a string.
they say there is none thee loves.

Input a substring.
the

the
 is present 3 times in the string.

*/