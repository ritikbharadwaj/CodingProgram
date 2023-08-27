#include<stdio.h>
int main(){
    int n, lastdigit,firstdigit;
    printf("Enter a number = ");
    scanf("%d",&n);
    // it will give the remainder and remainder is the last digit of the number
    lastdigit = n % 10;
    printf("last digit of the number: %d \n",lastdigit);
    while (n >= 10)
    {
        n = n / 10;
    }
    firstdigit = n;
    printf("first digit of the number: %d \n",firstdigit);
    int sum = firstdigit + lastdigit;
    printf("sum of the first and last digit of a number is: %d",sum);
    return 0;
}