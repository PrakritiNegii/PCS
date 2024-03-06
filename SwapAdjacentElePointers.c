//Program to swap the adjacent elements of an array.
#include<stdio.h>
#include<string.h>
void adjacentSwap(int*, int);
int main()
 {
   int a[20], i, n, *p;
   printf("\nSpecify length of the array.\n");
   scanf("%d",&n);
   p = a;
   printf("\nInput array elements.\n");
   for(i=0; i<n; i++)
	scanf("%d",(p+i));

   adjacentSwap(a,n);
   printf("\nArray obtained on swapping its adjacent elements is:\n");
   for(int i=0; i<n; i++)
	printf("%d\n",*(p+i));

   return 0;
 } 

void adjacentSwap(int *p, int l)
 {
    int i, j, k;
    for(int i=0, j=1, k=0; k<l/2; i+=2, j+=2, k++)
      {
	int temp = *(p+i);
	*(p+i) = *(p+j);
        *(p+j) = temp;
      }
 }
