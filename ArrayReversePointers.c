//Program to reverse an array using pointers.
#include<stdio.h>
void reverse(int*, int);
int main()
 {
   int n, a[20];
   printf("\nSpecify the size.\n");
   scanf("%d",&n);

   printf("\nInput array elements.\n");
   for(int i=0; i<n; i++)
	scanf("%d",(a+i));

   reverse(a,n);

   printf("\nInput array after reversing its elements.\n");
   for(int i=0; i<n; i++)
	printf("%d",*(a+i));
   return 0;
 }

void reverse(int*p, int l)
 {
    for(int i=0, j=l-1;  i<j  ; i++, j--)
      {
	int temp = *(p+i);
        *(p+i) = *(p+j);
	*(p+j) = temp;
      }
 }

/*
	OUTPUT

Specify the size.
7

Input array elements.
435
768
234
657
342
997
235

Input array after reversing its elements.
235
997
342
657
234
768
435
*/