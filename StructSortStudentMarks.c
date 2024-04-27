/*Program to create a structure named student with members: Name, age and total marks.
  Input data for 'n' students display their information in ascending order of their Total Marks.*/
#include<stdio.h>
typedef struct Student 
 {
  char Nm[50];
  int age;
  float TM; 	//Total Marks
 }stu;
 
int main()
 {
  stu S[20], temp;
  int n, i, j;
  float sum;
  printf("\nInput the number of students.\n");
  scanf("%d",&n);
  for(i=0; i<n; i++)
   {
    printf("\nInput the name, age and total marks of student %d.\n",i+1);
    scanf("%s %d %f",S[i].Nm,&S[i].age,&S[i].TM);
    sum = sum + S[i].TM;
   }
  for(i=0; i<n-1; i++)
   {
     for(j=0; j<n-i-1; j++)
      {
        if(S[j].TM>S[j+1].TM) 
         {
           temp = S[j];
           S[j] = S[j+1];
           S[j+1] = temp; 
         }
      }
   }
  printf("\nName \t Age \t Total Marks\n\n");
  for(i=0; i<n; i++)
   {
    printf("%s \t %d \t %0.2f\n",S[i].Nm,S[i].age,S[i].TM);
   }
  return 0;
 }
 
 /*
 Input the number of students.
3

Input the name, age and total marks of student 1.
Prakss
19
100

Input the name, age and total marks of student 2.
Nandss
17
80

Input the name, age and total marks of student 3.
Jigsss
19
90

Name 	 Age 	 Total Marks

Nandss 	 17 	 80.00
Jigsss 	 19 	 90.00
Prakss 	 19 	 100.00
 */
