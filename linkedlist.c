#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node n;
n* head=NULL;
int main(void)
{
printf("enter 3 elements\n");
create(head);
create(head);
create(head);
insertinfront(head);
insertatend(head);
insertatmiddle(head);
deleteinfront(head);
deleteatend(head);
deleteatmiddle(head);
display(head);
}
void insertinfront()
{
    int no;
    printf("enter the element to be inserted at front of LL\n");
    scanf("%d",&no);
    n *newn;
    newn=(n*)malloc(sizeof(n));
    newn->data=no;
    newn->next=head;
    head=newn;
}
void insertatmiddle()
{
    int data1,no;
    printf("enter the prev element  you wish to insert your new element\n");
    scanf("%d",&data1);
    n *m,*temp;
    m=(n*)malloc(sizeof(n));
   temp=(n*)malloc(sizeof(n));
    temp=head;
    printf("enter the element\n");
    scanf("%d",&no);
    m->data=no;
    while(temp->data!=data1)//temp->data means the elements in LL.
    {
        temp=temp->next;
    }
    m->next=temp->next;
    temp->next=m;
}
void insertatend()
{
    int no;
    printf("enter the element to be inserted at end\n");
    scanf("%d",&no);
  n *end,*temp;
  end=(n*)malloc(sizeof(n));
  temp=(n*)malloc(sizeof(n));
  temp=head;
  end->data=no;
  end->next=NULL;
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->next=end;
  temp=end;
}
void create()
{
    n *newnode,*temp;
    newnode=(n*)malloc(sizeof(n));
    newnode=(n*)malloc(sizeof(n));
    int no;
    scanf("%d",&no);
    newnode->data=no;
    if(head==NULL)
    {
    head=newnode;
    temp=head;
    }
    temp->next=newnode;
    temp=newnode;
    newnode->next=NULL;
}
void deleteinfront()
{
    n *temp;
    temp=(n*)malloc(sizeof(n));
    temp=head;
    head=head->next;
    temp->next=NULL;
    free(temp);
}
void deleteatend()
{
  n *temp,*prev;
  temp=(n*)malloc(sizeof(n));
  prev=(n*)malloc(sizeof(n));
  temp=head;
  while(temp->next!=NULL)
  {
      prev=temp;
      temp=temp->next;
  }
  prev->next=NULL;
  free(temp);
}
void deleteatmiddle()
{
  int data1;
  printf("enter element you like to delete from the LL\n");
  scanf("%d",&data1);
  n *temp,*prev;
  temp=(n*)malloc(sizeof(n));
  prev=(n*)malloc(sizeof(n));
  temp=head;
  while(temp->data!=data1)
  {
      prev=temp;
      temp=temp->next;
  }
  prev->next=temp->next;
  temp->next=NULL;
  free(temp);
}
void display(n *temp)
{
    int c=0;
    while(temp!=NULL)
    {

        printf("%d\n",temp->data);
        temp=temp->next;
        c++;

    }
    printf("%d is the count",c);
}
