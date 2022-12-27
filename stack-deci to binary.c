#define size 25
#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int d[size];
    int top;
};



void initialize(struct stack *p)
{
    p->top=-1;
}
void push(struct stack *p,int n)
{
    if(p->top==size-1)
    {
        printf("Overflow");
        exit(1);
    }
    else
    {
        p->top=p->top+1;
        p->d[p->top]=n;
    }
}
void pop(struct stack *p)
{
    if(p->top==-1)
    {
        printf("Underflow");
        exit(1);
    }
    else
    {
        printf("%d ",p->d[p->top]);
        p-> top = p->top-1;
    }
}

void main()
{
    struct stack a,*b;
    int n,temp=0;
    b=&a;
    initialize(b);
    printf("enter the no.");
    scanf("%d",&n);
    while(n!=0)
    {
       push(b,n%2);
       n=n/2;
       temp=temp+1;
    }
    printf("the binary no. is -");
    while(temp!=0)
    {
        pop(b);
        temp--;
    }
}