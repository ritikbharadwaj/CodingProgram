#include<stdio.h>
int main() {
  int a;
  printf("Enter the year= \n");
  scanf("%d",&a);
  if (a%4==0) {
    printf("This year is a leap year\n");
  }
  else if (a%4!=0) {
    printf("This year is not a leap year\n");
  }
  return 0;
}
