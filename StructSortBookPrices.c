 //Program to create a structure named 'BOOK' to store details like: Title, author and price.
//Input details for 'n' books and sort them in the increasing order of their prices.
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
  printf("\nBooks sorted in increasing order of their prices are: \n\n");
  for(i=0; i<n; i++)
   {
    printf("%s by %s costs Rs-%0.2f\n",B[i].Title, B[i].Author, B[i].price);
   } 

  return 0;
 }
 
 /*
 Input the number of books.
4

Input title, author name and price of book 1.
Lookism 
Taejun Park
6000

Input title, author name and price of book 2.
Percy Jackson
Rick Riordan
2300

Input title, author name and price of book 3.
Animal Farm
George Orwell
300

Input title, author name and price of book 4.
Emma
Jane Austen
750

Books sorted in increasing order of their prices are: 

Animal Farm by George Orwell costs Rs-300.00
Emma by Jane Austen costs Rs-750.00
Percy Jackson by Rick Riordan costs Rs-2300.00
Lookism  by Taejun Park costs Rs-6000.00
 */
