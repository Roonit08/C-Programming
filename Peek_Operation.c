#include <stdio.h>
#define MAXQUEUE 5
struct queue {
    int items[MAXQUEUE];
    int front;
    int rear;
};
int peek(struct queue *q)
{
    if (q->front == -1 || q->front > q->rear)
    {
        printf("\n Queue is empty.");
        return -9999; // Error code instead of exit(0)
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
    printf("\n No. of elements in the queue: %d", q->rear - q->front + 1);
    for (i = q->front; i <= q->rear; i++)
    {
        printf("\n q[%d] = %d", i, q->items[i]);
    }
}
int main()
{
    struct queue q;

    // Initialize queue (same style as previous programs)
    q.front = 0;
    q.rear = MAXQUEUE - 1;

    // Assume queue is already filled
    q.items[0] = 10;
    q.items[1] = 20;
    q.items[2] = 30;
    q.items[3] = 40;
    q.items[4] = 50;

    // Display queue
    display(&q);

    // Peek operation
    printf("\n Front element (Peek): %d", peek(&q));
    return 0;
}
