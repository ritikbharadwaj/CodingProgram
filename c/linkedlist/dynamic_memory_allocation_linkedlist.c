#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
 int main()
 {
   int flag=0;
   struct node *first,*ptr,*temp;
   printf("enter the number= ");
   first = (struct node*)malloc(sizeof(struct node));
   scanf("%d",&first->data);
   temp=first;
   do {
     int x;
     printf("do you want to enter another data? ");
     printf("1 for yes || 0 for no= ");
     scanf("%d",&x);
     if(x==1)
     {
       printf("enter one more data= ");
       ptr=(struct node*)malloc(sizeof(struct node));
       scanf("%d",&ptr->data);
       temp->next=ptr;
       temp=ptr;
       temp->next=NULL;
     }
     else if(x==0) {
       printf("thank you for using our application\ndata in the list is:-\n");
       break;
     }
   }
   while(1);
   ptr=first;//this block is to show the element in the linked list
    while(ptr->next!=NULL)
    {
     printf("%d\t",ptr->data);
     ptr=ptr->next;
   }
   printf("%d",temp->data);
   int a;
 printf("\nenter the element you want to search= ");
 scanf("%d",&a);
 ptr=first;
 while (ptr->next!=NULL) {
   if (ptr->data==a) {
     printf("%d is present int the linked list\n",a);
     flag++;
   }
      ptr=ptr->next;
 }
   if (flag==0) {
     printf("%d is not present in the linked list \n",a);
   }
 }
