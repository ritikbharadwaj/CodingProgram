#include<stdio.h>
int main()
{
  int i=1,n=0;
  scanf("%d",&n);
  while (i<=n) {
    printf("%d\t",2*n+1-2*i);
    i++;
  }
  return 0;
}
