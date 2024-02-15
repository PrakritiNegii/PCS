//Program to input n numbers in an array and count how many elements are Palindrome.
#include<stdio.h>
int reverse(int);
int main()
 {
  int n, c=0;
  printf("\nSpecify the size of the array:\n");
  scanf("%d",&n);
  int A[n];

  printf("\nInput %d numbers:\n",n);
  for(int i=0; i<n; i++)
    scanf("%d",&A[i]);

 printf("\nThe palindrome numbers in the array are:\n");
 for(int i=0; i<n; i++)
    if(reverse(A[i])==A[i])
      {
         printf("%d at position %d\n",A[i], i+1);
         c++;
      }

  printf("\nThere are %d Palindrome numbers in the array. ",c);
  return 0;
 }

int reverse(int num)
 {
  static int rev = 0;
  if(num==0) 
   {
    int r = rev;
    rev = 0;
    return r;
   }
  else 
  {
   rev = rev * 10 + num % 10;
   return reverse(num/10);
  }
 }
