#include<stdio.h>
int sum()
{
  int i,n,sum=0;
  printf("enter the number= ");
  scanf("%d",&n);
  for (i=1;i<=n;i++)
  {
    sum=sum+(i*i);
  }
  printf("\nSum of %d number =%d",n,sum);
  return 0;
}
int main()
{
  sum();
}
