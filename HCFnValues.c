//Program to obtain the HCF of n numbers by checking numbers for factors.
#include<stdio.h>
int GCD(int N[], int n)
 {
  int HCF;
   for(int i=1; i<=N[0]; i++)
    {
     for(int j=0; j<n; j++)
      {
       if(N[j]%i==0) HCF = 1;
      }
    }
  return HCF;
 }

int main()
 {
  int n;
  printf("\nSpecify the amount of numbers whose HCF is to be calculated.\n");
  scanf("%d",&n);
  int N[n];

  printf("\nEnter %d numbers whose HCF is to be calculated.\n",n);
  for(int i=0; i<n; i++)
    scanf("%d",&N[i]);
  
  int HCF = GCD(N,n);
  printf("\nThe Highest Common Factor of input %d numbers is %d.\n",n,HCF);

  return 0;
 }