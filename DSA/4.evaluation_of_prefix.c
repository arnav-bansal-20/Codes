#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#define SIZE 20
typedef struct stack
{
    int top;
    float data[SIZE];
} STACK;
void push(STACK *s, float element)
{
    s->data[++(s->top)] = element;
}
float pop(STACK *s)
{
    return s->data[(s->top)--];
}
float op(float a, char sym, float b)
{
    switch (sym)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '^':
        return pow(a, b);
    default:
        return 0;
    }
}
float evaluate(char prefix[SIZE], STACK *s)
{
    char sym;
    float a, b,result;
    for (int i = strlen(prefix) - 1; i >= 0; i--)

    {
        sym = prefix[i];
        if (isdigit(sym))
        {
            push(s, sym - '0');
        }
        else
        {
            a = pop(s);
            b = pop(s);
            result= op(a, sym, b);
            push(s, result);
        }
    }
    return pop(s);
}
int main()
{
    STACK s;
    s.top = -1;
    char prefix[SIZE];
    printf("enter prefix : ");
    scanf("%s", prefix);
    float res = evaluate(prefix, &s);
    printf("Result : %f ", res);
}