/* Program to check if each element of an array is a prime number or not.
   Then display the total number of prime numbers.
   Use Functions. */

#include<stdio.h>
int primeCheck(int);
int main()
 {
  int A[100], l, i, c=0;
  printf("\nSpecify the size of the array.\n");
  scanf("%d",&l);
  printf("\nInput %d array elements.\n",l);
  for(i=0; i<l; i++)
    scanf("%d",&A[i]);
  printf("\nThe prime numbers in the array are:\n");
  for(i=0; i<l; i++)
    if(primeCheck(A[i])==1)
     {
      printf("%d at position %d \n",A[i],i+1);
      c++;
     }
  printf("\nThere are %d prime numbers present in the array.",c);
  return 0;
 }

int primeCheck(int n)
 {
  int c=0;
  for(int i=1; i<=n/2; i++)
   {
     if(n%i==0) c++;
   }
  if(c==1) return 1;
  else return 0;
 }