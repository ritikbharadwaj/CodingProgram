#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *first=NULL,*ptr=NULL,*temp=NULL,*cpt=NULL;
int create()
{
  printf("enter the number= ");
  first = (struct node*)malloc(sizeof(struct node));
  scanf("%d",&first->data);
  cpt=first;
  do {
    int x;
    printf("do you want to enter another data?\n");
    printf("1 for yes OR 0 for no= ");
    scanf("%d",&x);
    if(x==1)
    {
      printf("enter one more data= ");
      ptr=(struct node*)malloc(sizeof(struct node));
      scanf("%d",&ptr->data);
      cpt->next=ptr;
      cpt=ptr;
      cpt->next=NULL;
    }
    else if(x==0) {
      printf("thank you\n");
      break;
    }
  }
  while(1);
  return 0;
}
int insertatbeginning()
{
  printf("\nenter data to insert at the beginning = ");
  cpt=(struct node*)malloc(sizeof(struct node));
  scanf("%d",&cpt->data);
  cpt->next=first;
  first=cpt;
  return 0;
}
int insertatend()
{
  printf("\nenter the data to insert at the end = ");
  temp=(struct node*)malloc(sizeof(struct node));
  scanf("%d",&temp->data);
  while(ptr->next!=NULL)
  {
    ptr=ptr->next;
  }
  ptr->next=temp;
  temp->next=NULL;
  return 0;
}
int insertafternode()
{
  int x;
  ptr=first;
  printf("\nenter the data whose after you want to insert a node=  ");
  scanf("%d",&x);
  while(ptr->data!=x){
    ptr=ptr->next;
  }
  printf("\nenter the data you wanna insert= ");
  temp=(struct node*)malloc(sizeof(struct node));
  scanf("%d",&temp->data);
  temp->next=ptr->next;
  ptr->next=temp;
  return 0;
}
int deleteanyposition()
{
  int x;
  cpt=first;
  printf("\nwhich data you want to delete=");
  scanf("%d",&x);
  while (cpt->data!=x) {
    ptr=cpt;
    cpt=cpt->next;
  }
  if(cpt==first)
  {
    first=first->next;
    free(cpt);
  }
  else{
  ptr->next=cpt->next;
  free(cpt);
  }
  return 0;
}
int traverse()
{
  printf("\ndata in the linked list is:-\n");
  ptr=first;
  while (ptr->next!=NULL) {
    printf("%d\t",ptr->data);
    ptr=ptr->next;
  }
  printf("%d\t",ptr->data);
  return 0;
}
int searching()
{
  int a,flag=0;
  printf("\nEnter the data you want to search= ");
  scanf("%d",&a);
  ptr=first;
  while (ptr->next!=NULL) {
    if (ptr->data==a)
    {
      printf("----%d is present in the linked list----\n",a);
      flag++;
    }
    ptr=ptr->next;
  }
    if (ptr->data==a) {
      printf("-----%d is present in the linked list------\n",a);
      flag++;
  }
  if (flag==0) {
    printf("-------data is not present in the linked list--------");
  }
  return 0;
  }
int main()
{

    int input;
    printf("\n----------Linked List Program------------\n");
    printf("\n1. Create a linked list:- \n");
    printf("\n2. Traverse the linked list:- \n");
    printf("\n3. Insert element in the beginning:- \n");
    printf("\n4. Insert element in the end:- \n");
    printf("\n5. Insert element after a node:- \n");
    printf("\n6. Delete any node:- \n");
    printf("\n7. Search an element in the linked list:- \n");
    printf("\n8. EXIT from the program\n");
    while(1)
    {
    printf("\nEnter your choice= ");
    scanf("%d",&input);
    switch (input) {
      case 1:
      create();
      break;
      case 2:
      traverse();
      break;
      case 3:
      insertatbeginning();
      break;
      case 4:
      insertatend();
      break;
      case 5:
      insertafternode();
      break;
      case 6:
      deleteanyposition();
      break;
      case 7:
      searching();
      break;
      case 8:
      exit(0);
      break;
      default:
      printf("------*Invalid input*----");
      break;
    }
  }
  return 0;
}
