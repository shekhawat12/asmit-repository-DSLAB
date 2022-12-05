#include<stdio.h>
#include<stdlib.h>
void display(struct student s1){
    printf("%d%s%d",s1.r,s1.name,s1.m);
}
struct student
    {
        int r;
        char name[20];
        int m;
    }s[20],*s1;
    
void main(){
     s1=&s;
     printf("Enter Student details:\nEnter roll number,name,marks in ds respectively\n");
    // scanf("%d%s%d",&s1->r,&s1->name,&s1->m);
     //printf("Name:%s\nRoll number:%d\nMarks in ds:%d",s1->name,s1->r,s1->m);
    
    for (int i = 0; i < 3; i++)
    {
        scanf("%s%d%d",(s1+i)->name,&(s1+i)->r,&(s1+i)->m);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Name:%s\nRoll number:%d\nmarks in ds:%d",(s1+i)->name,(s1+i)->r,(s1+i)->m);
        printf("\n");
    }
    
}