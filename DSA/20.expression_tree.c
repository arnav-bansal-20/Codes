#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 20
struct node
{
    char data;
    struct node *left;
    struct node *right;
};
typedef struct node *NODE;
struct stack
{
    int top;
    NODE data[MAX];
};
typedef struct stack STACK;
void push(STACK *s, NODE item)
{
    if (s->top == MAX - 1)
    {
        printf("\nStack Overflow\n");
        exit(0);
    }
    s->data[++(s->top)] = item;
}
NODE pop(STACK *s)
{
    if (s->top == -1)
    {
        printf("\nStack Underflow - Invalid Expression\n");
        exit(0);
    }
    return s->data[(s->top)--];
}
int preced(char symbol)
{
    switch (symbol)
    {
    case '^':
        return 5;
    case '*':
    case '/':
        return 3;
    case '+':
    case '-':
        return 1;
    default:
        return 0;
    }
}
NODE createnode(char item)
{
    NODE temp = (NODE)malloc(sizeof(struct node));
    temp->data = item;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void preorder(NODE root)
{
    if (root != NULL)
    {
        printf("%c ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
NODE create_expr_tree(char infix[MAX])
{
    STACK TS, OS;
    TS.top = -1;
    OS.top = -1;
    int i;
    char symbol;
    NODE temp, t;
    for (i = 0; infix[i] != '\0'; i++)
    {
        symbol = infix[i];
        temp = createnode(symbol);
        if (isalnum(symbol))
            push(&TS, temp);
        else
        {
            if (OS.top == -1)
                push(&OS, temp);
            else
            {
                while (OS.top != -1 && preced(OS.data[OS.top]->data) >=preced(symbol))
                {
                    t = pop(&OS);
                    t->right = pop(&TS);
                    t->left = pop(&TS);
                    push(&TS, t);
                }
                push(&OS, temp);
            }
        }
    }
    while (OS.top != -1)
    {
        t = pop(&OS);
        t->right = pop(&TS);
        t->left = pop(&TS);
        push(&TS, t);
    }
    return pop(&TS);
}
int main()
{
    char infix[MAX];
    NODE root = NULL;
    printf("\nEnter the infix expression: ");
    scanf("%19s", infix);
    root = create_expr_tree(infix);
    printf("\nPreorder traversal of Expression Tree:\n");
    preorder(root);
    printf("\n");
    return 0;
}
// postfix expression tree creation (for reference, not part of main code)
//  NODE create_expr_tree_postfix(char postfix[MAX])
//  {
//      STACK TS;
//      TS.top = -1;

//     int i;
//     NODE temp;

//     for (i = 0; postfix[i] != '\0'; i++) {
//         char symbol = postfix[i];
//         temp = createnode(symbol);

//         /* If operand, push to stack */
//         if (isalnum(symbol)) {
//             push(&TS, temp);
//         }
//         /* If operator, pop two operands */
//         else {
//             temp->right = pop(&TS);
//             temp->left = pop(&TS);

//             push(&TS, temp);
//         }
//     }

//     return pop(&TS); // root of expression tree
// }

// prefix expression tree creation (for reference, not part of main code)
// NODE create_expr_tree_prefix(char prefix[MAX])
// {
//     STACK TS;
//     TS.top = -1;

//     int i;
//     NODE temp;

//     // Scan from right to left
//     for (i = strlen(prefix) - 1; i >= 0; i--) {
//         char symbol = prefix[i];
//         temp = createnode(symbol);

//         /* If operand, push to stack */
//         if (isalnum(symbol)) {
//             push(&TS, temp);
//         }
//         /* If operator, pop two operands */
//         else {
//
//            temp->left = pop(&TS);   // left operand
//             temp->right = pop(&TS);   // right operand
//             push(&TS, temp);
//         }
//     }

//     return pop(&TS); // root of expression tree
// }
