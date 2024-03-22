/*Program to input a string and replace the first vowel with the last vowel.
  second vowel with second last vowel, and so on... */
//Use pointers.
#include<stdio.h>
#include<string.h>
int main()
 {
   char S[150], *p;
   printf("\nInput a string.\n");
   fgets(S,150,stdin);
   int l = strlen(S);
   p=S;

   for(int i=0, j=l-1; i<j; i++)
    {
      if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u'||*(p+i)=='A'||*(p+i)=='E'||*(p+i)=='I'||*(p+i)=='O'||*(p+i)=='U')
       {
        for(;j>0; j--)
         {
          if(*(p+j)=='a'||*(p+j)=='e'||*(p+j)=='i'||*(p+j)=='o'||*(p+j)=='u'||*(p+j)=='A'||*(p+j)=='E'||*(p+j)=='I'||*(p+j)=='O'||*(p+j)=='U')
           {
            int temp = *(p+i);
            *(p+i) = *(p+j);
            *(p+j) = temp;

            j--;
            break;
           }
         } 
      }
    }

   printf("\nString after swapping the vowels pesent in it.\n");
   puts(p);
   return 0;
 }

/*
    OUTPUT

Input a string.
serious

String after swapping the vowels pesent in it.
suroies



Input a string.
i have a fEElIng

String after swapping the vowels pesent in it.
I hEvE a fealing
*/
  