// Remove nth position element from the back of a linked list

#include <stdio.h>
#include <stdlib.h>


typedef struct node 
{
    int data;
    struct node *next;

}node;

void display(node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    
}

void create_list(node *first, int a[], int n)
{
    node *last = first, *temp;
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        temp = (node *)malloc(sizeof(node));
        temp->data = a[i];
        temp->next = NULL;
    // Connecting nodes
        last->next = temp;
        last = temp;
    }

}


int count(node *p)
{
    int c = 0;
    while (p)
    {
        p = p->next;
        c++;
    }

    return c;
    
}

node* remove_ele(node *l1, int n)
{
    int pos = count(l1) - n;
    node *p, *q;
    p = l1, q = l1;
    int c = 0;
    while (c < pos)
    {
        p = p->next;
        c++;
    }
    while(q->next != p) q = q->next;

    // delete the node

    q->next = p->next;
    free(p);

    return l1;
}

int main()
{
    node *first = (node *)malloc(sizeof(node));
    int a[5] = {1, 2, 3, 4, 5};
    int n = 4;
    create_list(first, a, 5);

    node *second = remove_ele(first, n);
    display(second);
    return 0;
}