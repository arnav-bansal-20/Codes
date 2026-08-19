#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 50
typedef struct stack
{
    char data[SIZE];
    int top;
} STACK;
void push(STACK *s, char symbol)
{
    if (s->top == SIZE - 1)
        printf("Stack Overflow\n");
    else
        s->data[++(s->top)] = symbol;
}
char pop(STACK *s)
{
    if (s->top == -1)
        return '\0';   // stack empty
    else
        return s->data[(s->top)--];
}
int match(char open, char close)
{
    return  (open == '(' && close == ')') || 
            (open == '[' && close == ']') || 
            (open == '{' && close == '}');
}
int bal_par_check(STACK *s, char expr[])
{
    char symbol, temp;
    for (int i = 0; expr[i] != '\0'; i++)
    {
        symbol = expr[i];
        if (symbol == '(' || symbol == '[' || symbol == '{')
        {
            push(&s, symbol);
        }
        else if (symbol == ')' || symbol == ']' || symbol == '}')
        {
            if (s->top == -1)   // no matching opening bracket
                return 0;
            temp = pop(&s);
            if (!match(temp, symbol))
                return 0;
        }
    }
    return (s->top == -1);   // stack empty → balanced
}
int main()
{
    STACK s;
    s.top = -1;   // ✅ FIXED
    char expr[50];
    printf("Enter expression: ");
    scanf("%s", expr);
    if (bal_par_check(&s, expr))
        printf("Balanced parentheses.\n");
    else
        printf("Not balanced.\n");
    return 0;
}
