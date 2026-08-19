#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *NODE;
NODE start = NULL;

NODE insertbegin(NODE start, int item)
{
    NODE temp = (NODE)malloc(sizeof(struct node));
    temp->data = item;
    if (start == NULL)
    {
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    NODE last = start->prev;
    temp->next = start;
    temp->prev = last;
    last->next = temp;
    start->prev = temp;
    return temp; // new start
}

NODE insertend(NODE start, int item)
{
    NODE temp = (NODE)malloc(sizeof(struct node));
    temp->data = item;
    if (start == NULL)
    {
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    NODE last = start->prev;
    temp->next = start;
    temp->prev = last;
    last->next = temp;
    start->prev = temp;
    return start;
}

NODE insertpos(NODE start, int item, int pos)
{
    if (pos == 1)
        return insertbegin(start, item);
    if (start == NULL)
    {
        printf("List is empty\n");
        return start;
    }
    NODE temp = (NODE)malloc(sizeof(struct node));
    temp->data = item;
    NODE cur = start;
    int i;
    for (i = 1; i < pos - 1 && cur->next != start; i++)
        cur = cur->next;
    if (i != pos - 1) // position too large
    {
        printf("Position out of range\n");
        free(temp);
        return start;
    }
    temp->next = cur->next;
    temp->prev = cur;
    cur->next->prev = temp;
    cur->next = temp;
    return start;
}

NODE insertafter(NODE start, int key, int item)
{
    if (start == NULL)
    {
        printf("List empty\n");
        return start;
    }
    NODE cur = start;
    do
    {
        if (cur->data == key)
        {
            NODE temp = (NODE)malloc(sizeof(struct node));
            temp->data = item;
            temp->next = cur->next;
            temp->prev = cur;
            cur->next->prev = temp;
            cur->next = temp;
            return start;
        }
        cur = cur->next;
    } while (cur != start);
    printf("Key not found\n");
    return start;
}

NODE deletebegin(NODE start)
{
    if (start == NULL)
    {
        printf("List empty\n");
        return NULL;
    }
    if (start->next == start) // one node
    {
        free(start);
        return NULL;
    }
    NODE last = start->prev;
    NODE temp = start;
    start = start->next;
    start->prev = last;
    last->next = start;
    free(temp);
    return start;
}

NODE deleteend(NODE start)
{
    if (start == NULL)
    {
        printf("List empty\n");
        return NULL;
    }
    if (start->next == start)
    {
        free(start);
        return NULL;
    }
    NODE last = start->prev;
    NODE secondlast = last->prev;
    secondlast->next = start;
    start->prev = secondlast;
    free(last);
    return start;
}
NODE deletepos(NODE start, int pos)
{
    if (start == NULL)
    {
        printf("List empty\n");
        return start;
    }
    if (pos == 1)
        return deletebegin(start);
    NODE cur = start;
    int i;
    for (i = 1; i < pos && cur->next != start; i++)
        cur = cur->next;
    if (i != pos)
    {
        printf("Position out of range\n");
        return start;
    }
    cur->prev->next = cur->next;
    cur->next->prev = cur->prev;

    free(cur);
    return start;
}

NODE deletevalue(NODE start, int key)
{
    if (start == NULL)
    {
        printf("List empty\n");
        return start;
    }
    NODE cur = start;
    do
    {
        if (cur->data == key)
        {
            if (cur == start)
                return deletebegin(start);
            cur->prev->next = cur->next;
            cur->next->prev = cur->prev;
            free(cur);
            return start;
        }
        cur = cur->next;
    } while (cur != start);
    printf("Key not found\n");
    return start;
}

// NODE orderlist(NODE start, int item)
// {
//     NODE temp = (NODE)malloc(sizeof(struct node));
//     temp->data = item;
//     if (start == NULL)
//     {
//         temp->next = temp;
//         temp->prev = temp;
//         return temp;
//     }
//     NODE cur = start;
//     NODE last = start->prev;
//     if (item < start->data)
//     {
//         temp->next = start;
//         temp->prev = last;
//         last->next = temp;
//         start->prev = temp;
//         return temp; // new start
//     }
//     while (cur->next != start && cur->next->data < item)
//         cur = cur->next;
//     if (cur->next == last && item > cur->data)
//     {
//         temp->next = start;
//         temp->prev = cur;
//         cur->next = temp;
//         start->prev = temp;
//         return last; // start does not change
//     }
//     temp->next = cur->next;
//     temp->prev = cur;
//     cur->next->prev = temp;
//     cur->next = temp;
//     return start;
// }

NODE orderlist(NODE start, int item)
{
    NODE temp = (NODE)malloc(sizeof(struct node));
    temp->data = item;

    // Case 1: Empty list
    if (start == NULL)
    {
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    NODE cur = start;
    // Case 2: Insert before start (new smallest)
    if (item < start->data)
    {
        NODE last = start->prev;
        temp->next = start;
        temp->prev = last;
        last->next = temp;
        start->prev = temp;
        return temp;   // new start
    }

    // Case 3: Find correct position
    while (cur->next != start && cur->next->data < item)
        cur = cur->next;
    // Insert after cur
    temp->next = cur->next;
    temp->prev = cur;
    cur->next->prev = temp;
    cur->next = temp;
    return start;
}


NODE reverse(NODE start)
{
    if (start == NULL || start->next == start)
        return start;  // empty or one node
    NODE cur = start;
    NODE temp = NULL;
    do
    {
        temp = cur->next;
        cur->next = cur->prev;
        cur->prev = temp;
        cur = temp; // move to original next
    } while (cur != start);
    start = start->prev;
    return start;
}

void display(NODE start)
{
    if (start == NULL)
    {
        printf("List is empty\n");
        return;
    }

    NODE cur = start;
    do
    {
        printf("%d <-> ", cur->data);
        cur = cur->next;
    } while (cur != start);

    printf("(back to start)\n");
}

int main()
{
    int choice, item, pos, key;

    while (1)
    {
        printf("\n----- MENU -----\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at position\n");
        printf("4. Insert after value\n");
        printf("5. Delete from beginning\n");
        printf("6. Delete from end\n");
        printf("7. Delete at position\n");
        printf("8. Delete by value\n");
        printf("9. Display\n");
        printf("10. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter item: ");
            scanf("%d", &item);
            start = insertbegin(start, item);
            break;

        case 2:
            printf("Enter item: ");
            scanf("%d", &item);
            start = insertend(start, item);
            break;

        case 3:
            printf("Enter item and position: ");
            scanf("%d %d", &item, &pos);
            start = insertpos(start, item, pos);
            break;

        case 4:
            printf("Enter key and item: ");
            scanf("%d %d", &key, &item);
            start = insertafter(start, key, item);
            break;

        case 5:
            start = deletebegin(start);
            break;

        case 6:
            start = deleteend(start);
            break;

        case 7:
            printf("Enter position: ");
            scanf("%d", &pos);
            start = deletepos(start, pos);
            break;

        case 8:
            printf("Enter value: ");
            scanf("%d", &key);
            start = deletevalue(start, key);
            break;

        case 9:
            display(start);
            break;

        case 10:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}
