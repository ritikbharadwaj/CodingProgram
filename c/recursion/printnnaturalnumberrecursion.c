#include<stdio.h>
#include<stdlib.h>
int main()
{
  print(5);
  return 0;
}
void print(int n)
{
  if (n>0) {
    print(n-1);
    printf("%d\n",n);
  }
  else if (n==0) {
    exit;
  }

}
