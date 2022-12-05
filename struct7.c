// Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.
#include<stdio.h>
#include<stdlib.h>
struct marks {
    char name[50];
    int roll;
    float chem_marks;
    float maths_marks;
    float phy_marks;
    float total;
    float perc;
    

} s[5];
int main(){
    printf("Enter information:\n");
    for (int i = 0; i < 5; i++)
    {
    printf("Enter name: ");
    fgets(s[i].name, sizeof(s[i].name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s[i].roll);
    printf("Enter marks out of 100--------\n");
    printf("Enter marks of subject 1: ");
    scanf("%f", &s[i].chem_marks);
    printf("Enter marks of subject 2: ");
    scanf("%f", &s[i].maths_marks);
    printf("Enter marks of subject 3: ");
    scanf("%f", &s[i].phy_marks);
     s[i].total=s->maths_marks+s->phy_marks+s->chem_marks;
     s[i].perc=(s[i].total/300)*100;
}
for (int i = 0; i < 5; i++)
{
    printf("\n %d)student info\n",i+1);
printf("\tName:%s\n ",s[i].name);
//or use
// puts(s[i].name);

printf("\t Roll number: %d\n",s[i].roll);

printf("\t Marks: %.1f\n\n",s[i].total);

printf("\t Percentage: %d\n\n",s[i].perc);


}

}