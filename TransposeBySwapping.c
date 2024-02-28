// Program to obtain the transpose of an input matrix.
#include<stdio.h>
int main()
 {
   int r,c;
   printf("\nSpecify the number of rows and columns.\n");
   scanf("%d %d",&r,&c);
   int A[r][c], B[c][r];
   printf("\nInput matrix elements:\n");
   for(int i=0; i<r; i++)
    {
      for(int j=0; j<c; j++)
	{
  	  scanf("%d",&A[i][j]);
 	  B[j][i] = A[i][j];
	}
     }

   printf("\nThe input matrix is:\n");
   for(int i=0; i<r; i++)
    {
      for(int j=0; j<c; j++)
	{
  	  printf("%d\t",A[i][j]); 
	  B[j][i] = A[i][j];
	}
      printf("\n");
     }    

   printf("\nThe transpose of the input matrix is:\n");
   for(int i=0; i<c; i++)
    {
      for(int j=0; j<r; j++)
	{
  	  printf("%d\t",B[i][j]); 
	}
      printf("\n");
     }
   return 0;
 }

/*
	OUTPUT

Specify the number of rows and columns.
3
4

Input matrix elements:
5
3
8
4
3
9
4
6
7
1
2
6

The input matrix is:
5	3	8	4	
3	9	4	6	
7	1	2	6	

The transpose of the input matrix is:
5	3	7	
3	9	1	
8	4	2	
4	6	6	

  
*/