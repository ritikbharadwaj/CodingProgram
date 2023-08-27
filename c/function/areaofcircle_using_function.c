#include<stdio.h>
#include<math.h>
int area(int);
int main()
{
  int a;
  int s;
  s=area(a);
  return 0;
}
int area(int a)
{
    int r;
    printf("enter the radius of the circle\n");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("area of the circle is %d\n",a);
    return (a);
}
