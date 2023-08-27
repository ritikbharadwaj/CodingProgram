#include<stdio.h>
int fact(int);
int main()
{
  int s;
	int n;
	s=fact(n);
	return 0;
}
int fact(int n)
{
	int i,f=1;
	printf("enter the number= \n");
	scanf("%d",&n);
	for ( i = 1; i <= n; i++) {
		f=f*i;
	}
	printf("facorial of %d is %d",n,f);
	return (f);
}
