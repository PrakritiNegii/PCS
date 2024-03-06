//Program to find the maximum and minimum element of an array using pointers.
#include<stdio.h>
int main()
 {
   int n, A[20], *p;
   p = A;
  printf("\nSpecify size of the array.\n");
  scanf("%d",&n);
  printf("\nInput array elements.\n");
  for(int i=0; i<n; i++)
   {
      scanf("%d",(p+i));
   }
  int  max=*p, min=*p;
  for(int i=1; i<n; i++)
    {
	if(max<*(p+i)) max=*(p+i);
	if(min>*(p+i)) min=*(p+i);
    }
  printf("\nThe maximum no. in the array is %d and the minimum no. is %d.\n",max,min);
  return 0;
 }

/*
	OUTPUT

Specify size of the array.
5

Input array elements.
5645
8787
2345
3254
7645

The maximum no. in the array is 8787 and the minimum no. is 2345.
*/