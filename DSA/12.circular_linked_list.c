#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} *NODE;
NODE last = NULL;
NODE insertbegin(NODE last, int item)
{
    NODE temp = (NODE)malloc(sizeof(struct node));
    temp->data = item;
    if (last == NULL)
    {
        temp->next = temp; // circular
        return temp;
    }
    temp->next = last->next;
    last->next = temp;
    return last;
}
NODE insertend(NODE last, int item)
{
    NODE temp = (NODE)malloc(sizeof(struct node));
    temp->data = item;
    if (last == NULL)
    {
        temp->next = temp;
        return temp;
    }
    temp->next=last->next;
    last->next = temp;
    return temp;
}
NODE insertpos(NODE last, int item, int pos)
{
    NODE temp = (NODE)malloc(sizeof(struct node));
    temp->data = item;

    if (pos == 1)
        return insertbegin(last, item);

    NODE cur = last;
    for (int i = 1; i < pos - 1; i++)
    {
        cur = cur->next;
        if (cur == last)
        {
            printf("Position out of range\n");
            free(temp);
            return last;
        }
    }

    temp->next = cur->next;
    cur->next = temp;
    return last;
}

// Insert after a given key
NODE insertafter(NODE last, int key, int item)
{
    NODE temp = (NODE)malloc(sizeof(struct node));
            temp->data = item;

    if (last == NULL)
    {
        printf("List empty\n");
        return last;
    }

    NODE cur = last;

    do
    {
        if (cur->data == key)
        {
            temp->next = cur->next;
            cur->next = temp;
            return last;
        }
        cur = cur->next;
    } while (cur != last);

    printf("Key not found\n");
    free(temp);
    return last;
}
// Delete at beginning
NODE deletebegin(NODE last)
{
    if (last == NULL)
    {
        printf("List empty\n");
        return last;
    }
    if (last->next == last)
    {
        free(last);
        return NULL;
    }

    NODE temp = last->next;
    last->next = temp->next;
    free(temp);
    return last;
}

// Delete at end
NODE deleteend(NODE last)
{
    if (last == NULL)
    {
        printf("List empty\n");
        return last;
    }
    NODE cur = last->next;
    if (last->next == last)
    {
        free(last);
        return NULL;
    }
    while (cur->next != last)
        cur = cur->next;
        cur->next = last->next;
    free(last);
    return cur;
}

// Delete by position
NODE deletepos(NODE last, int pos)
{
    if (last == NULL)
    {
        printf("List empty\n");
        return last;
    }
    if (pos == 1)
        return deletebegin(last);
    NODE cur = last, prev = NULL;
    for (int i = 1; i < pos; i++)
    {
        prev = cur;
        cur = cur->next;
        if (cur == last)
        {
            printf("Position out of range\n");
            return last;
        }
    }
    prev->next = cur->next;
    free(cur);
    return last;
}

// Delete by value
NODE deletevalue(NODE last, int key)
{
    if (last == NULL)
    {
        printf("List empty\n");
        return last;
    }

    NODE cur = last, prev = NULL;

    if (last->data == key)
        return deletebegin(last);

    do
    {
        prev = cur;
        cur = cur->next;

        if (cur->data == key)
        {
            prev->next = cur->next;
            free(cur);
            return last;
        }

    } while (cur != last);

    printf("Key not found\n");
    return last;
}

NODE orderlist(NODE last, int item)
{
    NODE temp = (NODE)malloc(sizeof(struct node));
    temp->data = item;
    if (last == NULL)
    {
        temp->next = temp;
        return temp;
    }
    NODE start = last->next;
    if (item < start->data)
    {
        temp->next = start;
        last->next = temp;
        return last;
    }
    if (item > last->data)
    {
        temp->next = start;
        last->next = temp;
        return temp;   // new last
    }
    NODE cur = start;
    while (cur->next != start && cur->next->data < item)
        cur = cur->next;
    temp->next = cur->next;
    cur->next = temp;
    return last;
}
NODE reverse(NODE last)
{
    if (last == NULL || last->next == last)
        return last;   // empty or single node
    NODE prev = last;
    NODE cur = last->next;   // first node
    NODE temp;
    do
    {
        temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
    } while (cur != last->next);
    last = prev;   // update last
    return last;
}
// Display list
void display(NODE last)
{
    if (last == NULL)
    {
        printf("List is empty\n");
        return;
    }
    NODE temp = last->next;   // first node
    do
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != last->next);
    printf("(back to start %d)\n", last->next->data);
}
int main()
{
    int choice, item, pos, key;
    while (1)
    {
        printf("\n----- MENU -----\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at specific position\n");
        printf("4. Insert after node (by value)\n");
        printf("5. Delete from beginning\n");
        printf("6. Delete from end\n");
        printf("7. Delete from specific position\n");
        printf("8. Delete by value\n");
        printf("9. Ordered list insert\n");
        printf("10. Reverse list\n");
        printf("11. Display\n");
        printf("12. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter item: ");
            scanf("%d", &item);
            last = insertbegin(last, item);
            break;

        case 2:
            printf("Enter item: ");
            scanf("%d", &item);
            last = insertend(last, item);
            break;

        case 3:
            printf("Enter item and position: ");
            scanf("%d %d", &item, &pos);
            last = insertpos(last, item, pos);
            break;

        case 4:
            printf("Enter key and item: ");
            scanf("%d %d", &key, &item);
            last = insertafter(last, key, item);
            break;

        case 5:
            last = deletebegin(last);
            break;

        case 6:
            last = deleteend(last);
            break;

        case 7:
            printf("Enter position: ");
            scanf("%d", &pos);
            last = deletepos(last, pos);
            break;

        case 8:
            printf("Enter value to delete: ");
            scanf("%d", &key);
            last = deletevalue(last, key);
            break;

        case 9:
            printf("Enter item: ");
            scanf("%d", &item);
            last = orderlist(last, item);
            break;

        case 10:
            last = reverse(last);
            break;

        case 11:
            display(last);
            break;

        case 12:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}
