#define size 10
#include<stdio.h>

struct queue
{
    int data[size];
    int front,rear;
};

void initialized(struct queue *p)
{
    p->front=-1;
    p->rear=-1;
}

void enqueue(struct queue *p,int val)
{
    if(p-> rear == size-1)
    {
        printf("overflow");
    }
    else if(p->front==-1 && p->rear==-1)
    {
        (p->front)++;
        (p->rear)++;
        p->data[p->rear]=val;
    }
    else
    {
        (p->rear)++;
        p->data[p->rear]=val;
    }
}

int dequeue(struct queue *p)
{
    int x;
    if(p-> front ==-1)
    {
        printf("underflow");
    }
    else if(p->front == p->rear)
    {
        x=p->data[p->front];
        (p->front)=-1;
        (p->rear)=-1;
        return(x);
    }
    else
    {
        x=p->data[p->front];
        (p->front)++;
        return(x);
    }
}

void main()
{
    struct queue a;
    initialized (&a);
    enqueue(&a,10);
    enqueue(&a,20);
    printf("%d",dequeue(&a));
    printf("%d",dequeue(&a));
    printf("%d",dequeue(&a));
}