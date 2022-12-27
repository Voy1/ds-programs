#define size 10
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
        printf("%d",p->d[p->top]);
        p-> top = p->top-1;
    }
}

void main()
{
    struct stack a,*b;
    b=&a;
    initialize(b);
    push(b,10);
    push(b,20);
    pop(b);
    pop(b);
    pop(b);
    
}