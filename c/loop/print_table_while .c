#include<stdio.h>
int main()
{
  int n,i=1,sum=0;
  printf("Enter the number whose table u want to print= ");
  scanf("%d",&n);
  while (i<=10) {
    sum=i*n;
    printf("%d\n",sum);
    i++;
  }
  return 0;
}
