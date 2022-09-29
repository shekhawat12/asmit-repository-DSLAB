#include<stdio.h>
int main()
{
  int a[5];

  printf("the entered array is:");
  for(int i=0;i<5;i++)
  {
     scanf("%d",&a[i]);

  }

  printf("the transversed array is:");
  for(int i=0;i<5;i++)
  {

    printf("%d ",a[i]);
  }
    return 0;


}
