#include<stdio.h>
int main() {
  char ch;
  printf("Enter the year= \n");
  scanf("%c",&ch);
  if (ch>='a' && ch<='z')
  {
    printf("The input is alphabet\n");
  }
  return 0;
}
//Note: You can also use ASCII values to check alphabets. ASCII value of a=97, z=122, A=65 and Z=90
