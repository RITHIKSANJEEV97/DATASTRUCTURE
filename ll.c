#include<stdio.h>
#include<stdlib.h>
void create();
void display();
struct node
{
int data;
struct node *next;
struct node *prev;
};
typedef struct node n;
n *head;
void create()
{
int a;
n *newnode;
newnode=(n*)malloc(sizeof(n*));
scanf("%d",&a);
newnode->data=a;
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
head->prev=NULL;
}
else
{
head->prev=newnode;
newnode->next=head;
head=newnode;
}
}
void display(n *temp)
{
while(temp!=NULL)
{
printf("%d ",temp->data);
temp=temp->next;
}
}
int main(void)
{
create();
create();
create();
display(head);
}
