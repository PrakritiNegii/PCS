//Program to input two strings and check whether the second string is the reverse of first.
//Using pointers
#include<stdio.h>
#include<string.h>
int reverse(char*, char*, int, int);
int main()
 {
   char A[100], B[100];
   printf("\nInput String 1.\n");
   fgets(A,100,stdin);
   int l1 = strlen(A);

   printf("\nInput String 2.\n");
   fgets(B,100,stdin);
   int l2 = strlen(B);

   int f = reverse(A,B,l1,l2);

  if(f==1) printf("\nString 2 is NOT the reverse of string 1.\n");
  else printf("\nString 2 is the reverse of the string 1.\n");
  return 0;
 }

int reverse(char *a, char *b, int l1, int l2)
 {
    if(l1!=l2) return 1;
    
    for(int i=0, j=l1-2; i<l2-1; i++, j--)
      {
         if(*(a+i)!=*(b+j)) return 1;
      }

    return 0;
 }


/*
	OUTPUT

Input String 1.
erutan

Input String 2.
nature

String 2 is the reverse of the string 1.


Input String 1.
run 

Input String 2.
nut

String 2 is NOT the reverse of string 1.
*/