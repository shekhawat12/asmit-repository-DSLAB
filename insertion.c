#include<stdio.h>
int main()
{
    int a[10],n,pos,value;

    printf("enter the number of elements of array:n:");
    scanf("%d",&n);

    printf("enter the elements of array:\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the position where the element is to be inserted:\n");

    scanf("%d",&pos);

    printf("enter the value of inserted element:\n");

    scanf("%d",&value);

    for(int i=n-1;i<=pos-1;i--)
        a[i+1]=a[i];

        a[pos-1]=value;

        printf("resultant array:\n");

        for(int i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }

    return 0;
}
