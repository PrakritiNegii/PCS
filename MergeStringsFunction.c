//Program to merge two strings using functions.
#include<string.h>
#include<stdio.h>
void merge(char[], char[], int, int);
int main()
 {
   char str1[150], str2[150];
   int l1, l2;
   printf("\nInput first string.\n");
   fgets(str1,150,stdin);
   printf("\nInput second string.\n");
   fgets(str2,150,stdin);
   l1 = strlen(str1)-1;
   l2 = strlen(str2)-1;
   merge(str1,str2,l1,l2);
   printf("\nString after merging is: ");
   puts(str1);		//For an array changes performed in any function are reflected back in the main function. (even without using pointers)
   return 0;
 }

void merge(char str1[], char str2[], int l1, int l2)
 {
   int i=0;
   str1[l1] = ' ';
   while(str2[i]!='\0')
    {
      str1[l1+1] = str2[i];
      l1++;
      i++
    }
   str1[l1] = '\0';
 }


/*
	OUTPUT

Input first string.
William doesn't throw the spear for he is

Input second string.
WILLIAM SHAKE--SPEARE :)

String after merging is: 
William doesn't throw the spear for he is WILLIAM SHAKE--SPEARE :)

*/
