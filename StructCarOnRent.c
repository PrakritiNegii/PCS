/*To design a structure called 'CAR' to store the details like: car_id, model, rental rate per day.
  Write a program to input data for 'n' cars, calculate the total rental cost for specified number of days.*/
#include<stdio.h>
struct Car
 {
  char car_id[20], model[15];
  float rate;
 }C[20];

int main()
 {
  int n, i, d;
  printf("\nSpecify the number of cars.\n");
  scanf("%d",&n);
  for(i=0; i<n; i++)
   {
    printf("\nInput car-id, model name and rental rate per day of car %d.\n",i+1);
    scanf(" %[^\n] %[^\n] %f",C[i].car_id, C[i].model, &C[i].rate);
   }
  printf("\nSpecify the number of days to take a car on rent.\n");
  scanf("%d",&d);
  printf("\nCar-id \t\t Model Name \t\t Rent for %d days\n\n",d);
  for(i=0; i<n; i++)
   {
    float TotalRent = C[i].rate * d;
    printf("%s \t %s \t     %0.2f\n",C[i].car_id, C[i].model, TotalRent);
   }
  return 0;
 } 

/*
Specify the number of cars.
3

Input car-id, model name and rental rate per day of car 1.
UK 04 U 6638
Maruti Alto K-10
700

Input car-id, model name and rental rate per day of car 2.
UK 07 AC 2357
Renault Duster
1200

Input car-id, model name and rental rate per day of car 3.
UK 13 K 1111
Mercedes-Benz EQS
4500

Specify the number of days to take a car on rent.
2

Car-id           Model Name              Rent for 2 days

UK 04 U 6638     Maruti Alto K-10            1400.00
UK 07 AC 2357    Renault Duster              2400.00
UK 13 K 1111     Mercedes-Benz EQ            9000.00
*/
