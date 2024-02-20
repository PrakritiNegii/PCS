//Program in C to count the number of duplicate elements present in the array.
#include<stdio.h>
int main()
 {
  int A[30], n, c;
  printf("\nSpecify the size of the array.\n");
  scanf("%d",&n);
  printf("\nInput array elements.\n");
  for(int i=0; i<n; i++)
    scanf("%d",%A[i]);

  for(int i=0; i<n; i++)
   {
    c = 0;
    for(int j=i+1; j<n; j++)
      {
       if(A[i]==A[j]) 
         {
          c++;
          for(int k=j; k<n; k++)
            {
             A[k] = A[k+1];
            }
          n--;
         }
     }
    printf("\nThe number %d is present %d times in the input array.\n",i,c);
   }
   return 0;
 }
