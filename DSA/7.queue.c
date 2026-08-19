#include <stdio.h>
#define SIZE 5
typedef struct {
    int data[SIZE];
    int front, rear;
} Queue;
int isQueueEmpty(Queue *q) {
    return (q->front == -1);
}
int isQueueFull(Queue *q) {
    return (q->rear == SIZE - 1);
}
void enqueue(Queue *q, int value) {
    if (isQueueFull(q)) {
        printf("Queue is Full!\n");
        return;
    }
    if (q->front == -1)  // first element insertion
        q->front = 0;
    q->rear++;
    q->data[q->rear] = value;
    printf("Inserted %d\n", value);
}
void dequeue(Queue *q) {
    if (isQueueEmpty(q)) {
        printf("Queue is Empty!\n");
        return;
    }
    printf("Deleted %d\n", q->data[q->front]);
    if (q->front == q->rear) { // last element removed
        q->front = q->rear = -1;
    } else {
        q->front++;
    }
}
void display(Queue *q) {
    if (isQueueEmpty(q)) {
        printf("Queue is Empty!\n");
        return;
    }
    printf("Queue: ");
    for (int i = q->front; i <= q->rear; i++)
        printf("%d ", q->data[i]);
    printf("\n");
}
int main() {
    Queue q;
    q.front = q.rear = -1;
    printf("Queue Operations:\n");
    printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
    int choice, value;  
    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(&q, value);
                break;
            case 2:
                dequeue(&q);
                break;
            case 3:
                display(&q);
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
