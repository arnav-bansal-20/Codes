#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define SIZE 20

typedef struct stack {
    int top;
    float data[SIZE];
} STACK;

void push(STACK *s, float item) {
    s->data[++(s->top)] = item;
}

float pop(STACK *s) {
    return s->data[(s->top)--];
}

float operate(float a, float b, char symbol) {
    switch (symbol) {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return a / b;
    case '^': return pow(a, b);
    default:
        printf("Invalid operator: %c\n", symbol);
        return 0;
    }
}

float evaluate(char postfix[], STACK *s)
{
    char symbol;
    float a, b,result;

    for (int i = 0; postfix[i] != '\0'; i++)
    {
        symbol = postfix[i];
        if (isdigit(symbol))
        {
            push(&s, symbol - '0');
        }
        else
        {
            b = pop(&s);   
            a = pop(&s);   
            result = operate(a, b, symbol);
            push(&s, result);  
        }
    }
    return pop(&s);
}

int main() {
    STACK s;
    s.top = -1;
    char postfix[20];
    float result;
    printf("\nRead postfix : ");
    scanf("%s", postfix);
    result = evaluate(postfix, &s);
    printf("\nResult = %f\n", result);
    return 0;
}
