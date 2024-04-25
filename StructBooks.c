//Program to create a structure named 'BOOK' to store details like: Title, author and price.
//Input details for 'n' books and find the most expensive book and also the least expensive one.
#include<stdio.h>
struct Book
 {
  char Title[50];
  char Author[30];
  float price;
 }B[30], temp;
 
int main()
 {
  int n, i, j;
  printf("\nInput the number of books.\n");
  scanf("%d",&n);
  for(i=0; i<n; i++)
   {
    printf("\nInput title, author name and price of book %d.\n",i+1);
    scanf(" %[^\n] %[^\n] %f",B[i].Title, B[i].Author, &B[i].price);
   }
  for(i=0; i<n; i++)
   {
    for(j=0; j<n-i-1; j++)
     {
      if(B[j].price>B[j+1].price)
       {
        temp = B[j];
        B[j] = B[j+1];
        B[j+1] = temp;
       }
     }
   }
   
  printf("\nBook with highest price is: %s.\n",B[n-1].Title);
  printf("\nBook with lowest price is: %s.\n",B[0].Title);
  return 0;
 }
