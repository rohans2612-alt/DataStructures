#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
struct stack
{
    int top;
    int data[SIZE];
};
typedef struct stack STACK;
void push(STACK *s,int item)
{
    if(s->top==SIZE-1)
        printf("\nStack Overflow\n");
    else
    {
        s->top=s->top+1;
        s->data[s->top]=item;
    }
}
void pop(STACK *s)
{
    if(s->top==-1)
        printf("\nStack Underflow\n");
    else
    {
        printf("\nElement popped is:%d",s->data[s->top]);
        s->top=s->top-1;
    }
}
void display(STACK s)
{
    int i;
    if(s.top==-1)
        printf("\nStack is empty\n");
    else
    {
        printf("\nStack elements are:\n");
        for(i=s.top;i>=0;i--)
            printf("%d\n",s.data[i]);
    }
}
int main()
{
    int ch,item;
    STACK s;
    s.top=-1;
    for(;;)
    {
        printf("STACK OPERATIONS:\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
        printf("\nEnter your choice");
        scanf("%d",&ch);
        switch(ch){
        case 1:printf("\nEnter elements:");
        scanf("%d",&item);
        push(&s,item);
        break;
        case 2:pop(&s);
        break;
        case 3:display(s);
        break;
        default:exit(0);
    }
}return 0;
}
