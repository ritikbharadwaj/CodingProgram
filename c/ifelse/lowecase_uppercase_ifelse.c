#include<stdio.h>
int main()
{
  char ch;
  printf("enter the alphabet= ");
  scanf("%c",&ch);
  if (ch>='A' && ch<='Z') {
    printf("The alphabet is uppercase\n");
  }
  else if (ch>='a' && ch<='z') {
    printf("The alphabet is lowercase\n");
  }
  else{
    printf("Alphabet is speacial character\n");
  }
  return 0;
}
