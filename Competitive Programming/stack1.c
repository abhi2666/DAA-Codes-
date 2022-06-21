#include <stdio.h>
#include <stdlib.h>
typedef struct stack
{
    int top;
    int size;
    int *stk;
    
}stack;

void create(stack *s, int size)
{
    s->size = size;
    s->top = -1;
    s->stk = (int *)malloc(s->size*sizeof(int));
}

void push(stack *s, int val)
{
    if(s->top == s->size -1)
    {
        printf("Stack full\n");
        return;
    }
    else
    {
        s->top += 1;
        s->stk[s->top] = val;
    }
}

void display(stack *s)
{
    while(s->top != -1)
    {
        printf("%d\n", s->stk[s->top--]);
    }
}

