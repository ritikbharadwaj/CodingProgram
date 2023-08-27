#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
struct node *cpt=NULL;
struct node *ptr=NULL;
int create()
{
	printf("\nEnter the number= ");
	front=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&front->data);
	ptr=front;
	return 0;
}
int insert()
{
  /*do {
    int x;
    printf("\nIf want to insert press 1 OR Do not wanna insert press 0= ");
    scanf("%d",&x);
    if(x==1)
    {*/
      printf("Enter data= ");
      rear=(struct node*)malloc(sizeof(struct node));
      scanf("%d",&rear->data);
      ptr->next=rear;
      ptr=rear;
      ptr->next=NULL;
    /*}
    else if(x==0) {
      printf("\n<-------------ENDED THE TASK--------->\n");
      break;
    }
  }
  while(1);*/
	return 0;
}
int delete()
{
	if(front==NULL)
	{
		printf("\nQueue is empty");//underflow condition
	}
	else if(front==rear)
	{
		printf("you are on the last node");
		front=rear=NULL;
	}
	else
	{
		ptr=front;
		ptr=ptr->next;
		free(front);
		front=ptr;
	}
	return 0;
}
int traverse()
{
	printf("\nData in the Queue:-\n");
	cpt=front;
	if (front==NULL && rear==NULL)
	{
		printf("Queue is empty\n");

	}
	else{
    while (cpt->next!=NULL) 
	{
	printf("%d\t",cpt->data);
    cpt=cpt->next;
    }
	printf("%d\t",cpt->data);
	}
	return 0;
}
int main()
{
	int x;
	printf("\n<<<------Queue using linked list------>>>\n");
	printf("\n1. Create a Queue\n");
	printf("\n2. Insert data in Queue\n");
	printf("\n3. Delete data in the Queue\n");
	printf("\n4. Traverse the Queue\n");
	printf("\n5. Exit\n");
	while(1)
	{
	printf("\n\n Enter your choice= ");
	scanf("%d",&x);
	switch (x)
	{
		case 1:
		create();
		break;
		case 2:
		insert();
		break;
		case 3:
		delete();
		break;
		case 4:
		traverse();
		break;
		case 5:
		exit (0);
		break;
		default:
		printf(">>>>----Invalid Input----<<<<");
	}
 }
	return 0;
}
