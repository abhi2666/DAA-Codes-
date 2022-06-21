#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int data;
    struct node *next;
}node;


void create_list(node *first, int a[], int n)
{
    node *temp, *last;
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        temp = (node *)malloc(sizeof(node));
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
       
}

int count(node *s)
{
    int c = 0;
    while (s)
    {
        c++;
        s = s->next;
    }
    return c;
}

void display(node *s)
{
    while (s)
    {
        printf("%d ", s->data);
        s = s->next;
    }
    printf("\n");
    
}