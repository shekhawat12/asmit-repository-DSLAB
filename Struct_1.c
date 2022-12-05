#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float sub1;
    float sub2;
    float sub3;
    float sub4;
    float sub5;
    float sub6;

} s;
// Get the input of student: Name, Roll No, Marks in 6 subjects in 12th. Find if the student is eligible for admission in Delhi University. A student is eligible for DU if he has scored 95 % or more in Best 4.
// Lab 9		
int main() {
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks out of 100--------\n");
    printf("Enter marks of subject 1: ");
    scanf("%f", &s.sub1);
    printf("Enter marks of subject 2: ");
    scanf("%f", &s.sub2);
    printf("Enter marks of subject 3: ");
    scanf("%f", &s.sub3);
    printf("Enter marks of subject 4: ");
    scanf("%f", &s.sub4);
    printf("Enter marks of subject 5: ");
    scanf("%f", &s.sub5);
    printf("Enter marks of subject 6: ");
    scanf("%f", &s.sub6);
    
    float total=s.sub6+s.sub5+s.sub4+s.sub3+s.sub2+s.sub1;
    float perc=(total/600)*100;
    if (perc>95)
    {
        printf("%s You are eligible for admission in Delhi University.Your score is %0.2f.",s.name,perc);
    }
    else if(perc<=95)
        printf("%s You are not eligible for admission in Delhi university.Your score is %0.2f it should be <95",s.name,perc);
    else
        printf("Entered invalid marks!!! Kindly check yur marks.");

    return 0;
}
