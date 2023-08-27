#include<stdio.h>
int top=0,s[10];
int create()
{
	top++;
	printf("\nEnter the first number in the Stack= ");
	scanf("%d",&s[top]);
	return 0;
}
int push()
{
	if (top==10) {
		printf("\n<-----Stack is overflow------>\n");
	}
	else
	{
		top++;
		printf("\nEnter the number you want to insert= ");
		scanf("%d",&s[top]);
	}
 return 0;
}
int pop()
{
	if (top==0) {
		printf("********--stack is underflow--********");
	}
	else
	{
	top=top-1;
	}
	return 0;
}
int traverse()
{
	if (top==0) {
		printf("___________STACK is empty_________");
	}
	else{
	for (int i=top;i>=1;i--)
	{
		printf("%d\t",s[i]);
	}
 }

	return 0;
}
int main()
{
	int x;
	printf("\n\t<-----Stack Using Array----->\n");
	printf("\n1. Create a Stack\n");
	printf("\n2. Insert a element in the stack\n");
	printf("\n3. Traverse the Stack\n");
	printf("\n4. Delete element in array\n");
	while(1){
	printf("\n\nEnter your choice= ");
	scanf("%d",&x);
	switch (x) {
		case 1:
		create();
		break;
		case 2:
		push();
		break;
		case 3:
		traverse();
		break;
		case 4:
		pop();
		break;
		default:
		printf("<----Inalid Input---->");
		break;
	}
}
	return 0;
}
