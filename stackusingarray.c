#include<stdio.h>
#include<stdlib.h>
void push(n);
void pop();
void display();
int c,b,mass,n;
int a[100];
int main(void)
{
int ch;
printf("enter array size\n");
scanf("%d",&n);
while(1)
{
printf("\n1. push \n 2.pop \n 3.display \n 4.exit");
scanf("%d",&ch);
switch(ch)
{
    case 1:
    push(n);
    break;
    case 2:
    pop();
    break;
    case 3:
    display();
    break;
    case 4:
    exit(0);
    break;
    default:
    printf("try  again _|_");
}}
}
void push(int n)
{
    scanf("%d",&b);
    if(c!=n)
    {
    a[mass]=b;
    mass++;
    c++;
    printf("%d",c);

    }
    else{
        printf("\noverflow");
    }
}
void pop()
{
    if(c!=0)
    {
    free(a[c]);
    c--;
    }
    else
    {
        printf("underflow");
    }
}
void display()
{
    int i;
    for(i=0;i<c;i++)
    {
    printf("%d\n",a[i]);
    }
}

