//Program to swap two elements using call by value and call by reference.
#include<stdio.h>
void callByValue(int, int);
void callByReference(int*, int*); 
int main()
 {
   int a, b, c, d;
   printf("\nInput four numbers a, b, c, d.\n");
   scanf("%d %d %d %d", &a, &b, &c, &d);
   callByValue(a,b);
   printf("\nValues of a and b in main method after swapping are %d and %d.\n",a,b);
   callByReference(&c,&d);
   printf("\nValues of c and d in main method after swapping are %d and %d.\n",c,d);
   return 0;
 }

void callByValue(int a, int b)
 {
   int temp = a;
   a = b;
   b = temp;
   printf("\nValues of a and b on swapping using call by value are %d and %d.",a,b);
 }

void callByReference(int*pc, int*pd)
 {
   int temp = *pc;
   *pc = *pd;
   *pd = temp;
   printf("\nValues of c and d on swapping using call by reference are %d and %d.",*pc,*pd);
 }


/*
	OUTPUT

Input four numbers a, b, c, d.
67
89
77
56

Values of a and b on swapping using call by value are 89 and 67.
Values of a and b in main method after swapping are 67 and 89.

Values of c and d on swapping using call by reference are 56 and 77.
Values of c and d in main method after swapping are 56 and 77.

*/