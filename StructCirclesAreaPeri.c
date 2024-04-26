/*Define a structure called 'CIRCLE' to represent a circle with radius.
  Write a program to calculate the area and perimeter of 'n' different circles and display their results.*/

#include<stdio.h>
struct Circle
 {
  float radius;
 } typedef cir; 

int main()
 {
  cir C[20];
  int n, i;
  float A[20], P[20];
  printf("\nInput the number of circles.\n");
  scanf("%d",&n);
  for(i=0; i<n; i++)
   {
    printf("\nInput radius of circle %d.\n",i+1);
    scanf("%f",&C[i].radius);
    A[i] = 3.14 * C[i].radius * C[i].radius;  //area = pi * r * r
    P[i] = 2 * 3.14 * C[i].radius;            //perimeter = 2 * pi * r
   }
  printf("\nRadius \t Area \t Perimeter\n\n");
  for(i=0; i<n; i++)
   {
    printf("%0.2f \t %0.2f \t %0.2f \n",C[i].radius, A[i], P[i]);
   }
  return 0;
 }

/*
Input the number of circles.
3

Input radius of circle 1.
7

Input radius of circle 2.
11

Input radius of circle 3.
4

Radius 	 Area 	 Perimeter

7.00 	 153.86 	 43.96 
11.00 	 379.94 	 69.08 
4.00 	 50.24 	 25.12
*/
