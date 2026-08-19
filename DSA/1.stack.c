#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
typedef struct stack
{
    int top;
    int data[SIZE];
} STACK;
int top = -1;
int stack[SIZE];
void push(STACK *s, int item)
{
    if (s->top == SIZE - 1)
        printf("\nOverflow! Stack is full.\n");
    else
    {
        s->top++;
        s->data[s->top] = item;
        printf("%d pushed into stack.\n", item);
    }
}
void pop(STACK *s  )
{
    if (s->top == -1)
        printf("\nUnderflow! Stack is empty.\n");
    else
    {
        printf("Element popped: %d\n", s->data[s->top]);
        s->top--;
    }
}

void display(STACK *s)
{
    if (s->top == -1)
        printf("\nStack is empty.\n");
    else
    {
        printf("\nStack contents (top to bottom):\n");
        for (int i = s->top; i >= 0; i--)
            printf("%d ", s->data[i]);
        printf("\n");
    }
}

int main()
{
    int ch, item;
    STACK s;
    s.top = -1;

    while (1)
    {
        printf("\n---- STACK MENU ----\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the element to push: ");
            scanf("%d", &item);
            push(&s, item);
            break;
        case 2:
            pop(&s);
            break;
        case 3:
            display(&s);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}