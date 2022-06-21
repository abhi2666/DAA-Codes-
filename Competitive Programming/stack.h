#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int size;
    int top;
    int *stk;
}stack;

void create_stack(stack *s, int size)
{
    s->size = size;
    s->top = -1;
    s->stk = (int *)malloc(s->size * sizeof(int));

}

void push(stack *s, int val)
{
    if(s->top == s->size - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    else
    {
        s->top++;
        s->stk[s->top] = val;
    }

}

int isEmpty(stack *s)
{
    int x = 0;
    if(s->top == -1)
    {
        x = 1;
    }
    return x;
}

int isFull(stack *s)
{
    int x = 0;
    if(s->top == s->size - 1)
    {
        x = 1;
    }
    return x;
}

int pop(stack *s)
{
    int x = 0;
    if(s->top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        x = s->stk[s->top--];
    }
    return x;
}

void display_stack(stack *s)
{
    while(s->top <= 0)
    {
        printf("%d\n", s->stk[s->top--]);
    }
    printf("\n");
}