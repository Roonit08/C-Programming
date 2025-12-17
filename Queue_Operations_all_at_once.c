#include<stdio.h>
#include<stdlib.h>
#define MAXQUEUE 4
struct queue{
    int items [MAXQUEUE];
    int front;
    int rear;
};
void enqueue(struct queue *,int);
int dequeue(struct queue *);
int peek(struct queue *);
void display(struct queue *);
int main()
{
    struct queue q;
    int option;
    char ch ='y';
    int x;
    q.rear = -1;
    q.front = -1;
    printf("What do you want to do???");
    printf("\n1. Add item to queue.");
    printf("\n2. Remove ietm from queue.");
    printf("\n3. Display queue.");
    printf("\n4. Peek (view front element)");

    while(ch == 'y')
    {
        printf("\n Enter your option(1,2,3 or 4)");
        scanf("%d",&option);
        switch (option){
            case 1:
            printf("\n Enter item to insert:");
            scanf("%d",&x);
            enqueue(&q,x);
            break;

            case 2:
            x=dequeue(&q);
            if(x!= -9999)
            printf("\n The removeed item is: %d",x);
            break;

            case 3:
            display(&q);
            break;

            case 4:
            x= peek(&q);
            if (x!= -9999)
            printf("\n Front element is:%d",x);
            break;
            default:
            printf("\n Wrong Option");
        }
        printf("\nDo you want to continue (y/n)? ");
        scanf(" %c", &ch);   
    }
    return 0;
}
// Function part for all 3 operations.

void enqueue(struct queue *q, int x)
{
    if (q->rear == MAXQUEUE - 1)
    {
        printf("\n Queue Overflow!");
        return;
    }
    else
    {
        if (q->front == -1)
            q->front = 0;

        q->rear++;
        q->items[q->rear] = x;
        printf("\n Item %d added to queue", x);
    }
}

int dequeue(struct queue *q)
{
    if (q->front == -1 || q->front > q->rear)
    {
        printf("\n Queue Underflow!");
        return -9999;
    }
    else
    {
        int x = q->items[q->front];
        q->front++;

        if (q->front > q->rear)
        {
            q->front = -1;
            q->rear = -1;
        }
        return x;
    }
}

int peek(struct queue *q)
{
    if (q->front == -1 || q->front > q->rear)
    {
        printf("\n Queue is empty.");
        return -9999;
    }
    else
    {
        return q->items[q->front];
    }
}

void display(struct queue *q)
{
    int i;
    if (q->front == -1 || q->front > q->rear)
    {
        printf("\n Queue is empty.");
        return;
    }
    printf("\n No. of elements in the queue: %d",q->rear - q->front + 1);
    for (i = q->front; i <= q->rear; i++)
    {
        printf("\n q[%d] = %d", i, q->items[i]);
    }
}
