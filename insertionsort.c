#include<stdio.h>
int main()
{
    int a[100],n,value,i;

    printf("enter the number of elements of array:n:");
    scanf("%d",&n);

    printf("enter the elements of array:\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the value of inserted element:\n");

    scanf("%d",&value);

    i=n-1;
    while(value<a[i] && i>=0)
       {
         a[i+1]=a[i];
         i--;}

         a[i+1]=value;
         n++;


        printf("resultant array:\n");

        for(int i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }

    return 0;
}
