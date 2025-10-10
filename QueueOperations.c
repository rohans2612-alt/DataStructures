#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
struct queue{
int front,rear;
int data[SIZE];
};
typedef struct queue QUEUE;
void enqueue(QUEUE *q,int item)
{
    if(q->rear==SIZE-1){
        printf("\nQueue overflow-Queue is full!\n");
    }else
    {
        q->rear++;
        q->data[q->rear]=item;
        if(q->front==-1)
            q->front=0;
        printf("\nInserted %d into the queue.\n",item);
    }
}
void dequeue(QUEUE *q)
{
    if(q->front==-1){
        printf("\nQueue Underflow-Queue is Empty!\n");
    }else{
        printf("\nDeleted Element is %d\n",q->data[q->front]);
        if(q->front==q->rear){
            q->front=-1;
            q->rear=-1;
    }
        else{
        q->front++;
    }
    }
}
void display(QUEUE q){
int i;
if(q.front==-1){
    printf("\nQueue is empty.\n");
}else
{
printf("\nQueue contents are:\n");
for(i=q.front;i<=q.rear;i++)
    printf("%d\t",q.data[i]);
}
}
int main()
{
    int item,ch;
    QUEUE q;
    q.front=-1;
    q.rear=-1;
    while(1){
        printf("\n-----QUEUE OPERATION-----");
        printf("\n1.Enqueue.\n2.Dequeue.\n3.Display.\n4.Exit");
        printf("\n --------------------------\n");
        scanf("%d",&ch);
    switch(ch){
        case 1:
            printf("Enter the element to insert:");
            scanf("%d",&item);
            enqueue(&q,item);
            break;
        case 2:
            dequeue(&q);
            break;
        case 3:
            display(q);
            break;
        case 4:
            printf("\nExiting Program.....\n");
            exit(0);
        default:
            printf("\nInvalid Choice! Please Try Again.\n");
    }
}
return 0;
}
