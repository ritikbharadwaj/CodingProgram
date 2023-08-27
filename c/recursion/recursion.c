#include<stdio.h>
int main()
{
    int k;
    k=fact(5);
    printf("%d",k);
}
int fact(int a)
{
    if(a==1)
    {
        return a;
    }
    return(a+fact(a-1));
}
