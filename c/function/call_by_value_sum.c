#include<stdio.h>
int add(int, int);
int main()
{
  int x,y;
  printf("enter the numbers\n");
  scanf("%d",&x);
  scanf("%d",&y);
  add(x , y);
  return 0;
}
int add(int a , int b)
{
  int c;
  c=a+b;
  printf("sum of number is %d\n",c);
  return(c);
}
