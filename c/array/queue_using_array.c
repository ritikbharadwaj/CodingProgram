#include<stdio.h>
#include<stdlib.h>
int front=0,rear=0,q[10];
int create()
{
	front++;
	rear++;
	printf("\nEnter the first number in the Queue= ");
	scanf("%d",&q[rear]);
	return 0;
}
int push()
{
	if (rear==10) {
		printf("\n<-----Queue is overflow----->\n");
	}
	else
	{
		rear++;
		printf("\nEnter the number you want to insert= ");
		scanf("%d",&q[rear]);
	}
 return 0;
}
int pop()
{
	if (front==0 && rear==0) {
		printf("\n********--Queue is underflow--********\n");
	}
	else if (front>rear) {
		printf("\n<-----Queue is underflow----->\n");
	}
	else
	{
	front=front+1;
	}
	return 0;
}
int traverse()
{
	if (front==0 && rear==0) {
		printf("\n\t___________Queue is empty_________\n");
	}
	else{
	for (int i=front;i<=rear;i++)
	{
		printf("%d\t",q[i]);
	}
 }

	return 0;
}
int main()
{
while(1){
	int x;
	printf("\n\n<-----Queue Using Array----->\n");
	printf("\n1. Create a Queue\n");
	printf("\n2. Insert a element in the Queue\n");
	printf("\n3. Traverse the Queue\n");
	printf("\n4. Delete element in Queue\n");
	printf("\n5. Exit\n");
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
		case 5:
		exit(0);
		break;
		default:
		printf("<----Invalid Input---->");
		break;
	}
}
	return 0;
}
