#include <stdio.h>
#define MAXQUEUE 5
struct queue {
    int items[MAXQUEUE];
    int front;
    int rear;
};
void enqueue(struct queue *q, int x)
{
    if (q->rear == MAXQUEUE - 1)
    {
        printf("\n Queue Overflow!");
        return;
    }
    else
    {
        // If queue is empty, set front to 0
        if (q->front == -1)
            q->front = 0;

        q->rear++;
        q->items[q->rear] = x;
        printf("\n Item %d added to queue", x);
    }
}
int main()
{
    struct queue q;   
    // Initializing the queue
    q.front = -1;
    q.rear = -1;
    // Enqueue operations
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);
    enqueue(&q, 60);   // This will cause overflow
    return 0;
}
