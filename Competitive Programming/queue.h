//header file for Queue 
// Queue using linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int data;
    struct node *next;
}node;

void enqueue(node **rear, int val)
{
    node *temp = (node *)malloc(sizeof(node));
    
    if(temp == NULL)
    {
        printf("Space Filled !\n");

    }
    else
    {
        temp->data = val;
        *rear = temp;    
    }
}

int dequeue(node **front, int val)
{
    int x = 0;
    node *p;
    if(*front == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        x = (*front)->value;
        p = *front;
        *front = (*front)->next;
        free(p);
    }
}

void display_queue(node *first, node *rear)
{
    while(first != rear)
    {
        printf("%d ", first->data);
        first = first->next;
    }
    printf("\n");
}