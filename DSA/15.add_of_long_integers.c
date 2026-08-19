#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} *NODE;
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
NODE add(NODE a, NODE b)
{
    NODE result = NULL;
    int carry = 0, sum;
    while (a != NULL || b != NULL || carry)
    {
        sum = carry;
        if (a != NULL)
        {
            sum += a->data;
            a = a->next;
        }
        if (b != NULL)
        {
            sum += b->data;
            b = b->next;
        }
        result = insertend(result, sum % 10);
        carry = sum / 10;
    }
    return result;
}
//Display 
void display(NODE start)
{
    while (start != NULL)
    {
        printf("%d -> ", start->data);
        start = start->next;
    }
    printf("\n");
}

int main()
{
    NODE n1 = NULL , n2 = NULL, sum;
    int n, m, digit;

    printf("Enter number of digits of first number: ");
    scanf("%d", &n);
    printf("Enter digits in REVERSE order: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &digit);
        n1 = insertend(n1, digit);
    }

    printf("Enter number of digits of second number: ");
    scanf("%d", &m);
    printf("Enter digits in REVERSE order: ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &digit);
        n2 = insertend(n2, digit);
    }

    sum = add(n1, n2);

    printf("Sum = ");
    display(sum);

    return 0;
}

// using double linked list to add two long integers without reversing input
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct node
// {
//     int data;
//     struct node *next;
//     struct node *prev;
// } *NODE;

// // Insert at end (digits entered in NORMAL order)
// NODE insertend(NODE start, int item)
// {
//     NODE temp = (NODE)malloc(sizeof(struct node));
//     temp->data = item;
//     temp->next = NULL;
//     temp->prev = NULL;

//     if (start == NULL)
//         return temp;

//     NODE cur = start;
//     while (cur->next != NULL)
//         cur = cur->next;

//     cur->next = temp;
//     temp->prev = cur;

//     return start;
// }

// // Function to add two numbers WITHOUT reversing input
// NODE add(NODE a, NODE b)
// {
//     NODE result = NULL;
//     int carry = 0, sum;

//     // Move to last nodes (rightmost digits)
//     NODE p = a;
//     NODE q = b;

//     while (p->next != NULL)
//         p = p->next;

//     while (q->next != NULL)
//         q = q->next;

//     // Add from right to left using prev pointers
//     while (p != NULL || q != NULL || carry)
//     {
//         sum = carry;

//         if (p != NULL)
//         {
//             sum += p->data;
//             p = p->prev;
//         }
//         if (q != NULL)
//         {
//             sum += q->data;
//             q = q->prev;
//         }
//         // Insert result at FRONT (because we are adding from right)
//         NODE temp = (NODE)malloc(sizeof(struct node));
//         temp->data = sum % 10;
//         temp->prev = NULL;
//         temp->next = result;
//         if (result != NULL)
//             result->prev = temp;
//         result = temp;
//         carry = sum / 10;
//     }
//     return result;
// }
// // Display list
// void display(NODE start)
// {
//     while (start != NULL)
//     {
//         printf("%d -> ", start->data);
//         start = start->next;
//     }
//     printf("NULL\n");
// }
// int main()
// {
//     NODE n1 = NULL, n2 = NULL, sum;
//     int n, m, digit;
//     printf("Enter number of digits of first number: ");
//     scanf("%d", &n);
//     printf("Enter digits in NORMAL order: ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &digit);
//         n1 = insertend(n1, digit);
//     }
//     printf("Enter number of digits of second number: ");
//     scanf("%d", &m);
//     printf("Enter digits in NORMAL order: ");
//     for (int i = 0; i < m; i++)
//     {
//         scanf("%d", &digit);
//         n2 = insertend(n2, digit);
//     }
//     sum = add(n1, n2);
//     printf("Sum = ");
//     display(sum);
//     return 0;
// }