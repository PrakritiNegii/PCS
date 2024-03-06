//Program to input two string and check if the strings are anagrams of each other using pointers.
#include<stdio.h>
#include<string.h>
void sort(char*, int);
int compare(char*, char*, int, int);
int main()
 {
   char str1[20], str2[20];
   int l1, l2;
   printf("\nInput two strings.\n");
   fgets(str1,20,stdin);
   fgets(str2,20,stdin);

   l1 = strlen(str1);
   l2 = strlen(str2);
   
   sort(str1,l1);
   sort(str2,l2);

   int res = compare(str1,str2,l1,l2);
   if(res==0) printf("\nAnagram\n");
   else printf("\nNOT Anagram\n");

   return 0;
 }

void sort(char*str, int l)
 {
   int i,j;
   char temp;
   for(i=0; i<l; i++)
     {
       for(j=0; j<l-i-1; j++)
        {
	   if(*(str+j)<*(str+j+1))
              {
		temp = *(str+j);
		*(str+j) = *(str+j+1);
		*(str+j+1) = temp;
	      }
	}
     }
 }

int compare(char*str1, char*str2, int l1, int l2)
 {
   if(l1!=l2) return 1;

   int f = 0;
   for(int i=0; i<l1; i++)
      if(str1[i]!=str2[i])
	{
	  f = 1;
	  break;
	}
    return f;
 }

/*
	OUTPUT

Input two strings.
heart
earth

Anagram


Input two strings.
dread
spread

NOT Anagram

*/