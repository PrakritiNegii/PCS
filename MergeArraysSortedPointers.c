//Program to merge two arrays using pointers.
#include<stdio.h>
int main()
 {
   int A[50], B[50], C[100], n1, n2, i, j, k;
   printf("\nSpecify sizes of both arrays.\n");
   scanf("%d %d",&n1, &n2);
   printf("\nInput %d elements in the first array in ascending order.\n",n1);
   for(i=0; i<n1; i++)
      scanf("%d",(A+i));
   printf("\nInput %d elements in the second array in ascending order.\n",n2);
   for(i=0; i<n2; i++)
      scanf("%d",(B+i));

   i=0, j=0, k=0;
   while(j<n1 && k<n2)
     {
       if(*(A+j)<*(B+k))
	{
	 *(C+i) = *(A+j);
	 ++i; ++j;
	}
       if(*(A+j)>*(B+k))
	{
	 *(C+i) = *(B+k);
	 ++i; ++k;
	}
       if(*(A+j)==*(B+k))
        {
         *(C+i) = *(A+j);
         *(C+i+1) = *(B+k);
         i+=2; j++; k++;
        }
     }

   while(j<n1)
    {
      *(C+i) = *(A+j);
      ++i; ++j;
    }

   while(k<n2)
    {
      *(C+i) = *(B+k);
      ++i; ++k;
    }

   printf("\nAfter merging the two input arrays:\n");
   for(i=0; i<n1+n2; i++)
      printf("%d\n",*(C+i));

   return 0;
 }

/*
Specify sizes of both arrays.
6
7

Input 6 elements in the first array in ascending order.
1
4
7
8
11
13

Input 7 elements in the second array in ascending order.
2
3
5
6
9
10
12

After merging the two input arrays:
1
2
3
4
5
6
7
8
9
10
11
12
13



Specify sizes of both arrays.
5
4

Input 5 elements in the first array in ascending order.
2
3
3
4
7

Input 4 elements in the second array in ascending order.
2
3
5
6

After merging the two input arrays:
2
2
3
3
3
4
5
6
7
*/
