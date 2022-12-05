#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
// Write a program to store and print the roll no., name, age and marks of a student using structures. Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 1.
	
struct student
{
char name[50];
int roll;
float marks;
int age;

} s[100];

int main()
{
int i,n;
struct student s[100];

for(i=0;i<5;i++)
{
printf("\n Enter information of %d) student :\n",i+1);
printf("Enter Name: ");
scanf("%s", s[i].name);

printf("Enter Roll number: ");
scanf("%d", &s[i].roll);

printf("Enter Marks: ");
scanf("%f", &s[i].marks);

printf("Enter Age: ");
scanf("%d", &s[i].age);

}

printf("Displaying Information:--------------------------------------------------------------\n");
for(i=0;i<5;i++)
{
printf("\n %d)student info\n",i+1);
printf("\tName:%s\n ",s[i].name);
//or use
// puts(s[i].name);

printf("\t Roll number: %d\n",s[i].roll);

printf("\t Marks: %.1f\n\n",s[i].marks);
printf("\t Age: %d\n\n",s[i].age);

}

return 0;
}
