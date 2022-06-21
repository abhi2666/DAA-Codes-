/*
Input: head = [1,2,3,4]
Output: [2,1,4,3]
*/
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

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

void swap_nodes(node *head)
{
    
    while (head != NULL && head->next != NULL)
    {
        swap(&(head->data), &((head->next)->data));

        head = (head->next)->next;
    }
    
    
}
void display(node *p)
{
    while (p)
    {
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
}


int main()
{
    node *first = (node *)malloc(sizeof(node));
    int a[4] = {1, 2, 3, 4};
    create_list(first, a, 4);
    swap_nodes(first);
    display(first);
    return 0;
}