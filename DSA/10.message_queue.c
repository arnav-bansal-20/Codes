#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 5
typedef struct queue
{
    char data[SIZE][20];
    int front, rear;
} QUEUE;
void send(QUEUE *q, char msg[])
{
    if (q->front == (q->rear + 1) % SIZE)
    {
        printf("\nQueue is full!");
        return;
    }
    if (q->front == -1)
        q->front = 0;
    q->rear = (q->rear + 1) % SIZE;
    strcpy(q->data[q->rear], msg);
}
void recieve(QUEUE *q)
{
    char msg[20];
    if (q->front == -1)
    {
        printf("\nQueue is empty!");
        return;
    }
    strcpy(msg, q->data[q->front]);
    if (q->front == q->rear)
        q->front = q->rear = -1;
    else
        q->front = (q->front + 1) % SIZE;
    printf("%s", msg);
}
void display(QUEUE *q)
{
    if (q->front == -1)
    {
        printf("\nQueue is empty");
        return;
    }
    printf("\nQueue elements: ");
    for (int i = q->front; i != q->rear; i = (i + 1) % SIZE)
        printf("%s ", q->data[i]);
    printf("%s", q->data[q->rear]); // print the last element
}
int main()
{
    QUEUE q;
    int ch;
    char msg[20];
    q.front = -1;
    q.rear = -1;
    while (1)
    {
        printf("\n1. Send");
        printf("\n2. Receive");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter msg: ");
            scanf("%s", msg);
            send(&q, msg);
            break;
        case 2:
            printf("\nReceived: ");
            recieve(&q);
            break;
        case 3:
            display(&q);
            break;
        case 4:
            exit(0);
        default:
            printf("\nINVALID ENTRY");
        }
    }
    return 0;
}
