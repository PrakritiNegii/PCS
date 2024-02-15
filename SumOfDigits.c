//Program to find the sum of digits of a number using recursion.
#include<stdio.h>
int sumOfDigits(int);
int main()
 {
  int n;
  printf("\nInput a number:\n");
  scanf("%d",&n);
  int res = sumOfDigits(n);
  printf("\nThe sum of digits of the number %d is %d.",n,res);
  return 0;
 }
int sumOfDigits(int N)
 {
  if(N==0) return 0;
  else return N%10+sumOfDigits(N/10);
 }