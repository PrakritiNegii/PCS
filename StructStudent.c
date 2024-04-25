/*Program to create a structure named student with members: Name, age and total marks.
  Input data for 'n' students display their information and find the average of total marks.*/
#include<stdio.h>
typedef struct Student 
 {
  char Nm[50];
  int age;
  float TM; 	//Total Marks
 }stu;
 
int main()
 {
  stu S[20];
  int n, i;
  float sum;
  printf("\nInput the number of students.\n");
  scanf("%d",&n);
  for(i=0; i<n; i++)
   {
    printf("\nInput the name, age and total marks of student %d.\n",i+1);
    scanf("%s %d %f",S[i].Nm,&S[i].age,&S[i].TM);
    sum = sum + S[i].TM;
   }
  
  printf("\nName \t Age \t Total Marks\n\n");
  for(i=0; i<n; i++)
   {
    printf("%s \t %d \t %0.2f\n",S[i].Nm,S[i].age,S[i].TM);
   }
  printf("\nThe average of the total marks of all students is: %0.2f.\n",(sum/n));
  return 0;
 }
