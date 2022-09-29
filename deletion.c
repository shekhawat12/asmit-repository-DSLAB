#include<stdio.h>
int main()
{
    int a[10],n,value,i,pos;

    printf("enter the number of elements of array:n:");
    scanf("%d",&n);

    printf("enter the elements of array:\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

      printf("enter the position from which the element deletes:\n");
      scanf("%d",&pos);

      for(i=pos-1;i<n-1;i++)
      {
          a[i]=a[i+1];

      }
      printf("the resultant array is:");
      for(i=0;i<n-1;i++)
      {
          printf("%d ",a[i]);
      }

    return 0;
}
