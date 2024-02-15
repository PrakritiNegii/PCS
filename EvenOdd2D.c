//Program to find even and odd elements in a 2D array and display them in separate 2D arrays.
#include<stdio.h>
int main()
 {
  int A[10][10], E[10][10], O[10][10], r, c, k1=0, k2=0;
  printf("\nSpecify the number of rows and columns.\n");
  scanf("%d %d",&r,&c);

  printf("\nInput %d array elements.\n",r*c);
  for(int i=0; i<r; i++)
    {
      for(int j=0; j<c; j++)
       {
        scanf("%d",&A[i][j]);
       }
    }

  for(int i=0; i<r; i++)
    {
      for(int j=0; j<c; j++)
       {
        if(A[i][j]%2==0) 
            { E[0][k1] = A[i][j]; k1++;}
        else 
            { O[0][k2] = A[i][j]; k2++; }
       }
    }


  printf("\nThe even numbers present in the 2D array are: ");
    for(int j=0; j<k1; j++)
       {
        printf("%d   ",E[0][j]);
       }    

  printf("\nThe odd numbers present in the 2D array are: ");
    for(int j=0; j<k2; j++)
       {
        printf("%d   ",O[0][j]);
       }
 
  return 0;
 }