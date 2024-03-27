//Program to check if particular words are present in a string. 
//Specify no. of words to be searched.
//Use pointers.
#include<stdio.h>
#include<string.h>
int wordSearch(char*, char*, int*);
int main()
 {
  char s[200], w[50];
  int n, i, l1, l2, f;
  printf("\nInput a string.\n");
  fgets(s,200,stdin);
  l1 = strlen(s);
  printf("\nSpecify the number of words to be searched.\n");
  scanf("%d",&n);
  for(i=1; i<=n; i++)
   {
    printf("\nInput word no.%d to be searched.\n",i);
    scanf("%s",&w);
    l2 = strlen(w);
    f = wordSearch(s,w,&l2);
    if(f==0) printf("\"%s\" NOT found in the string.\n",w);
    else printf("\"%s\" found %d times in the string.\n",w,f);
   }
  return 0;
 }

int wordSearch(char*S, char*W, int*p)
 {
  int i=0, j, c=0, x;
  while(*(S+i)!='\0')
   {
    for(j=0; j<=*p; j++)
     {
      if(*(S+i)!=*(W+j)) 
       {
         i++; break;
       }
      i++;
     }
    if(j==*p+1) c++;
   }
  return c;
 }


 /*
Input a string.
where is she and where is the dog

Specify the number of words to be searched.
4

Input word no.1 to be searched.
is
"is" found 2 times in the string.

Input word no.2 to be searched.
an
"an" NOT found in the string.

Input word no.3 to be searched.
she
"she" found 1 times in the string.

Input word no.4 to be searched.
where
"where" found 2 times in the string.
 */



/*
int wordSearch(char*S, char*W, int*p)
 {
  int i=0, j, c=0, x;
  while(*(S+i)!='\0')
   {
    if(*(S+i)==' ' || *(S+i+1)=='\0') 
     {
      x=i-1; j=*p-1;
      while(j>=0)
       {
        if(*(S+x)==*(W+j)) 
         {
          x--; j--;
         }
        else break;
       }
      if(j==-1) c++;  
     }
    i++;
   }
  return c;
 }
*/