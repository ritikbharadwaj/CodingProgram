#include<stdio.h>
int main()
{
  int a[5];
  printf("enter 5 integer= ");
  for(int i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("display the integer \n");
  for (int i = 0; i <5; i++)
  {
    printf("%d\n",a[i]);
  }
  return 0;
}
