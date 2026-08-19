#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 50

typedef struct stack {
    int top;
    char data[SIZE];
} STACK;

void push(STACK *s, char item) {
    s->data[++(s->top)] = item;
}

char pop(STACK *s) {
    return s->data[(s->top)--];
}

int preced(char symbol) {
    switch (symbol) {
        case '^': return 5;
        case '*':
        case '/': return 3;
        case '+':
        case '-': return 1;
        default: return 0;
    }
}

void reverse(char str[]) {
    int i, j;
    char temp;
    int len = strlen(str);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void infix_to_prefix(char infix[], STACK *s) {
    char prefix[SIZE], symbol, temp;
    int i, j = 0;
    for (i = strlen(infix) - 1; i >= 0; i--) {
        symbol = infix[i];
        if (isalnum(symbol))
            prefix[j++] = symbol;
        else {
            switch (symbol) {
            case ')':
                push(s, symbol);
                break;
            case '(':
                while (s->data[s->top] != ')')
                    prefix[j++] = pop(s);
                pop(s);   // remove ')'
                break;
            default:  // operator case
                while (s->top != -1 && preced(s->data[s->top]) > preced(symbol))
                    prefix[j++] = pop(s);
                push(s, symbol);
            }
        }
    }
    while (s->top != -1)
        prefix[j++] = pop(s);
    prefix[j] = '\0';
    reverse(prefix);
    printf("\nPrefix expression: %s", prefix);
}

int main() {
    char infix[SIZE];
    STACK s;
    s.top = -1;

    printf("Enter expression: ");
    scanf("%s", infix);

    infix_to_prefix(infix, &s);

    return 0;
}
