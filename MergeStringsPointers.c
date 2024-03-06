//Program to merge two strings if they are equal using pointers.
#include<stdio.h>
#include<string.h>
void merge(char*, char*, int, int);
int main()
 {
    char S1[100], S2[100];
    printf("\nInput first String.\n");
    fgets(S1,100,stdin);
    printf("\nInput second String.\n");
    fgets(S2,100,stdin);

    int l1 = strlen(S1);
    int l2 = strlen(S2);

    merge(S1,S2,l1,l2);

    printf("\nOn merging the two input strings.\n");
    for(int i=0; i<l1+l2-1; i++)
	printf("%c",S1[i]);

    return 0;
 }

void merge(char*s1, char*s2, int l1, int l2)
 {
   *(s1+l1-1) = ' ';

   for(int i=l1, j=0; j<l2; j++, i++)
	*(s1+i) = *(s2+j);
 }


/*
	OUTPUT

Input first String.
helloo

Input second String.
mellow day

On merging the two input strings.
helloo mellow day
*/