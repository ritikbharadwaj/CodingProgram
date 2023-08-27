#include<stdio.h>
int main()
{
  int a[10],max;
  printf("enter ten values=");
  for (int i = 1; i <= 10; i++) {
    scanf("%d",&a[i]);
  }
  max=a[1];
  for (int i = 1; i <= 10; i++) {
    if (max<a[i]) {
      max=a[i];
    }
  }
  printf("greatest number is %d\n",max);
  return 0;
}
