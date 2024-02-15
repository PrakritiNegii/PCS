//Program to form a 2D array and display its elements.
#include<stdio.h>
int main()
 {
  int A[10][10], r, c;
  printf("\nInput the number of rows and columns in the 2D array.\n");
  scanf("%d %d",&r,&c);
  printf("\nInput %d array elements.\n",r*c);
  for(int i=0; i<r; i++)
    {
      for(int j=0; j<c; j++)
       {
        scanf("%d",&A[i][j]);
       }
    }

  printf("\nThe input 2-D array with its elements is: \n");
  for(int i=0; i<r; i++)
    {
      for(int j=0; j<c; j++)
       {
        printf("%d\t",A[i][j]);
       }
     printf("\n");
    }
 }