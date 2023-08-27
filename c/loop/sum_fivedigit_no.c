#include<stdio.h>
int main()
{
  int n,i,sum=0;
  printf("enter a number= ");
  scanf("%d",&n);
  while (n!=0)
  {
    i=n%10;
    sum=sum+i;
    n=n/10;
  }
  printf("%d",sum);
  return 0;
}