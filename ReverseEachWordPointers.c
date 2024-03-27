//Program to reverse each word of a sentence in its own position.
//Use pointers.
#include<stdio.h>
#include<string.h>
void reverse(char*, int*);
int main()
 {
   char S[150];
   int l;
   printf("\nInput a string:\n");
   fgets(S,150,stdin);
   l = strlen(S);
   reverse(S,&l);
   printf("\nInput string after reversing its words in their own positions is:\n%s",S);
   return 0;
 }

void reverse(char*s, int*l)
 {
  int i=0, x, j=0, t;
  while(i<*l)
   {
    if(*(s+i)==' ' || *(s+i+1)=='\0')
     {
      x=i-1;
      while(j<x)
       {
        t = *(s+x);
        *(s+x) = *(s+j);
        *(s+j) = t;

        x--; j++;
       }
      j = i;
      s[j] = ' '; j++;
     }
    i++;
   }
  *(s+*l) = '\0';
 }

/*
Input a string:
There is nothing better than ice-cream on a hot sunday.

Input string after reversing its words in their own positions is:
erehT si gnihton retteb naht maerc-eci no a toh .yadnus
*/