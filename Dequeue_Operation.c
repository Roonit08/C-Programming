#include <stdio.h>
#define MAXQUEUE 5
struct queue {
    int items[MAXQUEUE];
    int front;
    int rear;
};
int dequeue(struct queue *q)
{
    if (q->front == -1 || q->front > q->rear)
    {
        printf("\n Queue Underflow!");
        return -9999; // Error code instead of exit(0)
    }
    else
    {
        int x = q->items[q->front];
        q->front++;
        // Reset queue when it becomes empty
        if (q->front > q->rear)
        {
            q->front = -1;
            q->rear = -1;
        }

        return x;
    }
}
int main()
{
    struct queue q;

    // Initialize queue (same style as enqueue program)
    q.front = 0;
    q.rear = MAXQUEUE - 1;

    // Assume queue is already filled
    q.items[0] = 10;
    q.items[1] = 20;
    q.items[2] = 30;
    q.items[3] = 40;
    q.items[4] = 50;

    // Dequeue operations
    printf("\n Deleted item: %d", dequeue(&q));
    printf("\n Deleted item: %d", dequeue(&q));
    printf("\n Deleted item: %d", dequeue(&q));
    printf("\n Deleted item: %d", dequeue(&q));
    printf("\n Deleted item: %d", dequeue(&q));
    printf("\n Deleted item: %d", dequeue(&q)); // Underflow
    return 0;
}
