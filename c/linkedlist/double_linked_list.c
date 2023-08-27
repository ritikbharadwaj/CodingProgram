#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *prev;
  struct node *next;
};
struct node *first=NULL, *ptr=NULL, *cpt=NULL ;
void create(){
  printf("\nenter a number= ");
  first=(struct node*)malloc(sizeof(struct node));
  scanf("%d",&first->data);
  ptr=first;
  ptr->prev=NULL;
}
void insert(){
  printf("\nenter the data you wanna insert= ");
  cpt=(struct node*)malloc(sizeof(struct node));
  scanf("%d",&cpt->data);
  ptr->next=cpt;
  cpt->prev=ptr;
  cpt->next=NULL;
  ptr=ptr->next;
}
void traverse(){
  printf("data in the list:-\n");
  cpt=first;
  while (cpt->next!=NULL)
  {
    printf("%d\t",cpt->data);
    cpt=cpt->next;
  }
  printf("%d\t",cpt->data);
}
void reversetraverse(){
  printf("\nreverse order:-\n");
  while (cpt->prev!=NULL)
  {
    printf("%d\t",cpt->data);
    cpt=cpt->prev;
  }
  printf("%d\t",cpt->data);
  
}  
int main(){
  create();
  insert();
  insert();
  insert();
  insert();
  traverse();
  reversetraverse();
  return 0;
}