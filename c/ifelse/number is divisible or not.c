#include<stdio.h>
int main() {
  int a;
  printf("Enter the number= \n");
  scanf("%d",&a);
  if (a%5==0 && a%11==0) {
    printf("Number is divisible by 5 an 11");
  }
  else
  {
    printf("Number is not divisible");
  }
  return 0;
}
