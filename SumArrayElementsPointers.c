//Program to print the sum of array elements using pointers.
#include<stdio.h>
#include<string.h>
int sum(int*, int*);
int main()
 {
    int n, a[30], *pn, *pa;
    pn = &n;
    pa = a;
    printf("\nSpecify size of the array.\n");
    scanf("%d",pn);
    
    printf("\nEnter array elements.\n");
    for(int i=0; i<n; i++)
      scanf("%d",(pa+i));

   int Sum = sum(pa,pn);    
   printf("\nThe sum of array elements is: %d",Sum);
   return 0;
 }

int sum(int *a, int*n)
 {
   int s = 0;
   for(int i=0; i<*n; i++)
      s = s + *(a+i);
   
   return s;
 }


/*
 	OUTPUT

Specify size of the array.
6

Enter array elements.
1
2
3
4
5
6

The sum of array elements is: 21
*/