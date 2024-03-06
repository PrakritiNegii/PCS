//Program to insert elements in an array and sort the elements in the array in descending order using pointers.
#include<stdio.h>
int main()
 {
   int n, A[20], *p;
   p = A;
   printf("\nSpecify size of the array.\n");
   scanf("%d",&n);
   printf("\nInput array elements.\n");
   for(int i=0; i<n; i++)
         scanf("%d",(p+i));

   for(int i=0; i<n-1; i++)
    {
      for(int j=0; j<n-i-1; j++)
       {
          if(*(p+j)<*(p+j+1))
           {
	     int temp = *(p+j);
             *(p+j) = *(p+j+1);
	     *(p+j+1) = temp;
	   }
       }
    }

   printf("\nInput array on sorting in descending order:\n");
   for(int i=0; i<n; i++)
         printf("%d\n",*(p+i));
   return 0;
 }

/*
	OUTPUT

Specify size of the array.
5

Input array elements.
43
87
63
91
12

Input array on sorting in descending order:
91
87
63
43
12

*/