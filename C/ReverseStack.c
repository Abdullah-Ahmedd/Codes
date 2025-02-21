#include <stdio.h>
#include <stdlib.h>

struct node
{
int data;
struct node* next;
};

int isempty(struct node *top)
{
if(top==NULL)
return 1;
else return 0;
}
void push (int num, struct node **top)
{
struct node * addnode=malloc(sizeof(struct node));
addnode->data=num;
addnode->next=*top;
*top=addnode;
}
int pop(struct node **top)
{
struct node * temp;
int val;
    if( isempty(*top) )
    {
     printf("stack underflow ");
    exit(1);
    }
temp=*top;
val=temp->data;
*top=temp->next;
free(temp);
temp=NULL;
return val;

}
int peek(struct node **top)
{
if( isempty(*top) )
{   
    printf("stack underflow ");
    exit(1);
}
return (*top)->data;
}
void printt(struct node *top)
{
while(! isempty(top) )
{
    printf(" %d ",peek(&top));
    top=top->next;
}
}
void reverse(struct node ** top,struct node ** temp1 ,struct node ** temp2)
{
    int x;
while(!isempty(*top))
{
 x=pop(top);
push(x,temp1);
}
while(!isempty(*temp1))
{
 x=pop(temp1);
push(x,temp2);
}
while(!isempty(*temp2))
{
x=pop(temp2);
push(x,top);
}

}
int main ()
{
struct node * top=NULL;
struct node * temp1=NULL;
struct node *temp2=NULL;
int num;
int x;
printf("enter the number of elements of your stack:");
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
    printf("enter the %d number:",i);
scanf("%d",&x);
push(x,&top);
}
printf("the list before reversing is: \n");
printt(top);
reverse(&top,&temp1,&temp2);
printf("\n the list after reversing is: \n");
printt(top);
return 0;
}
