#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *top=NULL;
struct node *ptr=NULL;
struct node *first=NULL;
struct node *cpt=NULL;
int create()
{
  printf("\nEnter the fist number in the Stack= ");
  top=(struct node*)malloc(sizeof(struct node));
  scanf("%d",&top->data);
  ptr=top;
  first=top;
  top->next=NULL;
  return 0;
}
int push()
{
  /*do
  {
    int x;
    printf("\nIf want to insert data press 1 OR Do not want to then press 0= ");
    scanf("%d",&x);
    if (x==1) {*/
      printf("\nEnters data= ");
      top=(struct node*)malloc(sizeof(struct node));
      scanf("%d",&top->data);
      top->next=ptr;
      ptr=top;
    /*}
    else if(x==0)
    {
      printf("\n<---ENDED THE TASK--->\n");
      break;
    }

  } while(1);*/
  return 0;
}
int pop()
{
  if (top==0)
  {
    printf("\n<-----Stack is underflow----->\n");
  }
  else
  {
    ptr=ptr->next;
    free(top);
    top=ptr;
  }

  return 0;
}
int traverse()
{
  if(top==0)
  {
  printf("\n_____Stack is empty_____\n");
  }
  else
  {
  cpt=top;
  printf("\nData in the Stack:-\n");
  while (cpt->next!=NULL)
  {
    printf("%d\n\n",cpt->data);
    cpt=cpt->next;
  }
  printf("%d\n\n",cpt->data);
  }
  return 0;
}
int main()
{
  while(1)
  {
  int x;
  printf("\n\t\t||    Stack using linked list    ||\n");
  printf("\n1. Create  Stack\n");
  printf("\n2. Insert data in Stack\n");
  printf("\n3. Delete data in Stack\n");
  printf("\n4. Traverse data of Stack\n");
  printf("\n5. Exit\n");
  printf("\nEnter your choice= ");
  scanf("%d",&x);
  switch (x)
  {
    case 1:
    create();
    break;
    case 2:
    push();
    break;
    case 3:
    pop();
    break;
    case 4:
    traverse();
    break;
    case 5:
    exit(0);
    break;
    default:
    printf("\n<-------Invalid Input------>");
    break;
  }
 }
 return 0;
}
