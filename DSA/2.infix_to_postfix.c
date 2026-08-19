#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 20
typedef struct stack
{
    int top;
    char data[SIZE];
} STACK;
void push(STACK *s, char item)
{
    s->data[++(s->top)] = item;
}
char pop(STACK *s)
{
    return s->data[(s->top)--];
}
int preced(char symbol)  //precedence function
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
void infix_to_postfix(char infix[], STACK *s)
{
    char postfix[SIZE], symbol, temp;
    int i, j = 0;
    for (i = 0; infix[i] != '\0'; i++)
    {
        symbol = infix[i];
        if (isalnum(symbol))
            postfix[j++] = symbol;
        else
        {
            switch (symbol)
            {
            case '(':
                push(s, symbol);
                break;
            case ')':
                temp = pop(s);
                while (temp != '(')
                {
                    postfix[j++] = temp;
                    temp = pop(s);
                }
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                if (s->top == -1 || s->data[s->top] == '(')
                    push(s, symbol);
                else
                {
                    while (s->top != -1 && preced(s->data[s->top]) >= preced(symbol))
                    {
                        postfix[j++] = pop(s);
                        if (s->top == -1)
                            break;
                    }
                    push(s, symbol);
                }
                break;
            }
        }
    }
    while (s->top != -1)
        postfix[j++] = pop(s);
    postfix[j] = '\0';
    printf("\n postfix expression is: \t %s", postfix);
}
int main()
{
    char infix[SIZE];
    STACK s;
    s.top = -1;
    printf("Enter expression : \t  ");
    scanf("%s", infix);
    infix_to_postfix(infix, &s);
    return 0;
}
