#include<stdio.h>
#include<stdlib.h>
struct node 
{
int data;
struct node * next;

};
void addnode(struct node **head,int num)
{
    struct node *addnode=malloc(sizeof(struct node));
    addnode->data=num;
    addnode->next=NULL;
if(*head==NULL)
{*head=addnode;
return 0;}
  struct node *current=*head;
  while(current->next!=NULL)
  current=current->next;
  current->next=addnode;
 return 0;
}
void deleteatlast(struct node *head)
{
 while(head->next->next)
 head=head->next;
 free(head->next);
 head->next=NULL;
}
void deleteatfirst(struct node **head)
{
  struct node*current=*head;
  free(*head);
  *head=NULL;
  current=current->next;
  *head=current;
}
void insertatindex(struct node ** head,int num,int index)
{
struct node* addnode=malloc(sizeof(struct node));
addnode->data=num;
struct node*current=*head;
int pos=0;
if(index==0)
{
addnode->next=current;
*head=addnode;
return 0;
} 
else
while(pos!=index-1)
{
current=current->next;
pos++;
}
addnode->next=current->next;
current->next=addnode;

}
void deleteatindex( struct node **head , int index )
{
struct node*current=*head;
int pos=0;
if(index==0)
{
  current=current->next;
free(*head);
*head=current;
return 0;
}
else
while(pos!=index-1)
{
current=current->next;
pos++;
}
free(current->next);
current->next=current->next->next;
}
void deletelist(struct node** head)
{
struct node *current=*head;
while(*head)
{
  current=current->next;
  free(*head);
  *head=current;
}
*head=NULL;
}
void insertsorted(struct node **head, int num)
{
struct node* addnode=malloc(sizeof(struct node));
addnode->data=num;
struct node * current=*head;
if(current->data > addnode->data)
{
addnode->next=current;
*head=addnode;
return;
}
while(current->next)
{
if(current->next->data > addnode->data)
{addnode->next=current->next;
current->next=addnode; 
return;}
current=current->next;
}
current->next=addnode;
addnode->next=NULL;
}
void reverse (struct node ** head)
{
struct node* current=*head;
struct node* next=NULL;
struct node* prev=NULL;
while(current)
{
next=current->next;
current->next=prev;
prev=current;
current=next;
}
*head=prev;
}
void printt(struct node *head)
{
if(head==NULL)
{printf("the list is empty"); } 

while (head!=NULL)
{printf(" %d ",head->data);
 head=head->next;}
  printf("\n");
}



int main()
{
  struct node* head;
 struct node**headd=&head;
addnode(headd,1);
addnode(headd,7);
addnode(&head,8);
addnode(&head,10);
addnode(&head,100);
printt(head);
printf(" this is working \n ");
//insertatindex(headd,101,0);
//deleteatindex(headd,0);
//deletelist(&head);
insertsorted(headd,103);
printt(head);
return 0;
}
  
