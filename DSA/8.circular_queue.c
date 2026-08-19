#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
typedef struct
{
    int data[SIZE];
    int f;
    int r;
} Queue;
void enqueue(Queue *q, int item)
{
    if (q->f == (q->r + 1) % SIZE)
        printf("\nQueue is full!");
    else
    {
        if (q->f == -1) // queue was empty
            q->f = 0;
        q->r = (q->r + 1) % SIZE;
        q->data[q->r] = item;
        printf("\n%d inserted into queue.", item);
    }
}
void dequeue(Queue *q)
{
    if (q->f == -1)
        printf("\nQueue is empty!");
    else
    {
        printf("\nElement deleted is: %d", q->data[q->f]);
        if (q->f == q->r)
        {
            q->f = -1;
            q->r = -1; // queue becomes empty
        }
        else
            q->f = (q->f + 1) % SIZE;
    }
}
void display(Queue q)
{
    if (q.f == -1)
    {
        printf("\nQueue is empty!");
        return;
    }
    printf("\nQueue contents are: ");
    for (int i = q.f;i != q.r; i = (i + 1) % SIZE)
    {
        printf("%d ", q.data[i]);
    }
    printf("%d ", q.data[q.r]); // Print the last element
}
int main()
{
    Queue q1;
    q1.f = -1;
    q1.r = -1;
    int item, ch;
    while (1)
    {
        printf("\n\n--- Circular Queue Menu ---");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter element: ");
            scanf("%d", &item);
            enqueue(&q1, item);
            break;
        case 2:
            dequeue(&q1);
            break;
        case 3:
            display(q1);
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid choice!");
        }
    }
    return 0;
}
