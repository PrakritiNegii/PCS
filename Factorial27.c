/* Program to find the factorial of a number using recursion and the factorial 
   should also be obtained for numbers greater than 27. */

#include<stdio.h>
long double factorial(int);
int main()
 {
  int n;
  printf("\nInput the number whose factorial is to be calculated.\n");
  scanf("%d",&n);
  long double f = factorial(n);
  printf("\nThe factorial of %d is: %LF",n,f);    // %Lf can be use in place of %LF
  return 0;
 }

 long double factorial(int n)
 {
  //printf("\n%d",n);
  if(n==0) return 1;
  else return n*factorial(n-1);
 }