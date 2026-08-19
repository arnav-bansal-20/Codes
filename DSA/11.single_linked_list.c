#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} *NODE;
NODE start = NULL;
NODE insertbegin(NODE start, int item)
{
    NODE temp = (NODE)malloc(sizeof(struct node));
    temp->data = item;
    temp->next = start;
    return temp;
}
NODE insertend(NODE start, int item)
{
    NODE temp = (NODE)malloc(sizeof(struct node));
    temp->data = item;
    temp->next = NULL;
    if (start == NULL)
        return temp;
    NODE cur = start;
    while (cur->next != NULL)
        cur = cur->next;
    cur->next = temp;
    return start;
}
NODE insertpos(NODE start, int item, int pos)
{
    NODE temp = (NODE)malloc(sizeof(struct node));
    temp->data = item;
    temp->next = NULL;
    if (pos == 1)
    {
        temp->next = start;
        return temp;
    }
    NODE cur = start;
    for (int i = 1; i < pos - 1 && cur != NULL; i++)
        cur = cur->next;
    if (cur == NULL)
    {
        printf("Position out of range\n");
        free(temp);
        return start;
    }
    temp->next = cur->next;
    cur->next = temp;
    return start;
}
NODE insertafter(NODE start, int key, int item)
{
    NODE cur = start;
    while (cur != NULL && cur->data != key)
        cur = cur->next;
    if (cur == NULL)
    {
        printf("Key not found\n");
        return start;
    }
    NODE temp = (NODE)malloc(sizeof(struct node));
    temp->data = item;
    temp->next = cur->next;
    cur->next = temp;
    return start;
}
NODE deletebegin(NODE start)
{
    if (start == NULL)
    {
        printf("List is empty\n");
        return start;
    }
    NODE temp = start;
    start = start->next;
    free(temp);
    return start;
}
NODE deleteend(NODE start)
{
    if (start == NULL)
    {
        printf("List is empty\n");
        return start;
    }
    if (start->next == NULL)
    {
        free(start);
        return NULL;
    }
    NODE prev = NULL, cur = start;
    while (cur->next != NULL)
    {
        prev = cur;
        cur = cur->next;
    }
    prev->next = NULL;
    free(cur);
    return start;
}
NODE deletepos(NODE start, int pos)
{
    if (start == NULL) {
        printf("List is empty\n");
        return start;
    }
    // Delete first node
    if (pos == 1)
    {
        NODE temp = start;
        start = start->next;
        free(temp);
        return start;
    }
    NODE cur = start;
    NODE prev = NULL;
    // Move to the required position
    for (int i = 1; i < pos && cur != NULL; i++)
    {
        prev = cur;
        cur = cur->next;
    }

    if (cur == NULL)
    {
        printf("Position out of range\n");
        return start;
    }

    prev->next = cur->next;
    free(cur);

    return start;
}

NODE deletevalue(NODE start, int key)
{
    NODE cur = start, prev = NULL; 
    while (cur != NULL && cur->data != key)
    {
        prev = cur;
        cur = cur->next;
    }
    if (cur == NULL)
    {
        printf("Key not found\n");
        return start;
    }
        prev->next = cur->next;
    free(cur);
    return start;
}
NODE orderlist(NODE start, int item)
{
    NODE temp = (NODE)malloc(sizeof(struct node));
    temp->data = item;
    temp->next = NULL;

    // Case 1: Empty list
    if (start == NULL)
        return temp;

    // Case 2: Insert at beginning
    if (item < start->data)
    {
        temp->next = start;
        return temp;
    }

    // Case 3: Insert in middle or end
    NODE cur = start;

    while (cur->next != NULL && cur->next->data < item)
        cur = cur->next;

    temp->next = cur->next;
    cur->next = temp;

    return start;
}

NODE sortList(NODE start) {
    NODE sorted = NULL;     // new empty sorted list
    NODE cur = start;

    while (cur != NULL) {
        sorted = orderlist(sorted, cur->data);  // insert each element sorted
        cur = cur->next;
    }

    return sorted;  // return sorted list
}
NODE reverse(NODE start)
{
    NODE prev = NULL, cur = start, temp = NULL;
    while (cur != NULL)
    {
        temp = prev;
        prev = cur;
        cur = cur->next;
        prev->next = temp;
    } 
    return prev;
}
void display(NODE start)
{
    if (start == NULL)
    {
        printf("List is empty\n");
        return;
    }
    NODE temp = start;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    int choice, item, pos, key;
    start = NULL;
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
        printf("9. ordered list insert\n");
        printf("10. Reverse list\n");
        printf("11. Display\n");
        printf("13. sorted list\n");
        printf("12. Exit\n");
        printf("Enter your choice: ");
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
            printf("Enter value to delete: ");
            scanf("%d", &key);
            start = deletevalue(start, key);
            break;
        case 9:
            printf("Enter item: ");
            scanf("%d", &item);
            start = orderlist(start, item);
            break;
        case 10:
            start = reverse(start);
            break;
        case 11:
            display(start);
            break;
        case 12:
            exit(0);
            case 13:
            start=sortList(start);
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node *NODE;
/* Create new node */
NODE createNode(int data)
{
    struct Node *newNode = (NODE)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

/* Insert at end */
NODE insertEnd(struct Node *head, int data)
{
    struct Node *temp = createNode(data);

    if (head == NULL)
        return temp;

    struct Node *p = head;
    while (p->next != NULL)
        p = p->next;

    p->next = temp;
    return head;
}

/* Display list */
void display(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

/* Merge two sorted linked lists */
NODE mergeSortedLists(struct Node *head1, struct Node *head2)
{
    NODE merged = NULL;
    NODE *last = &merged;

    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data <= head2->data)
        {
            *last = head1;
            head1 = head1->next;
        }
        else
        {
            *last = head2;
            head2 = head2->next;
        }
        last = &((*last)->next);
    }

    /* Attach remaining nodes */
    *last = (head1 != NULL) ? head1 : head2;

    return merged;
}

/* Main */
int main()
{
    struct Node *list1 = NULL;
    struct Node *list2 = NULL;
    struct Node *merged = NULL;

    /* First sorted list */
    list1 = insertEnd(list1, 1);
    list1 = insertEnd(list1, 3);
    list1 = insertEnd(list1, 5);

    /* Second sorted list */
    list2 = insertEnd(list2, 2);
    list2 = insertEnd(list2, 4);
    list2 = insertEnd(list2, 6);

    printf("List 1: ");
    display(list1);

    printf("List 2: ");
    display(list2);

    merged = mergeSortedLists(list1, list2);

    printf("Merged List: ");
    display(merged);

    return 0;
}
