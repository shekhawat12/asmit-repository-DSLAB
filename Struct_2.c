// Write a program to store and print the roll no., name, age, address and marks of 15 students using structure..
#include <stdio.h>
#include<stdlib.h>
struct student
{
char name[50];
int roll;
float marks;
int age;
} s[100];

int main()
{
int i,n=15;
struct student s[100];

printf("Enter total of students:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("\n Enter information of %d) student :\n",i+1);
printf("Enter name: ");
scanf("%s", s[i].name);

printf("Enter roll number: ");
scanf("%d", &s[i].roll);

printf("Enter marks: ");
scanf("%f", &s[i].marks);

printf("Enter Age: ");
scanf("%d", &s[i].age);
}

printf("Displaying Information:--------------------------------------------------------------\n");
for(i=0;i<n;i++)
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
