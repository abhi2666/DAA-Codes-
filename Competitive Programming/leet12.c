// merge two sorted lists

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;

} node;

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

node *merge_list(node *l1, node *l2)
{
    node *temp = (node *)malloc(sizeof(node));
    int a[20] = {0}, k = 0;
    while (l1 != NULL || l2 != NULL)
    {
        if(l1->data <= l2->data)
        {
            a[k++] = l1->data;
            l1 = l1->next;
        }
        else
        {
            a[k++] = l2->data;
            l2 = l2->next;
        }
    }
    while (l1 != NULL)
    {
        a[k++] = l1->data;
        l1 = l1->next;
    }
    while (l2 != NULL)
    {
        a[k++] = l2->data;
        l2 = l2->next;
    }
    create_list(temp, a, 8);
    return temp;
}

int main()
{
    node *first = (node *)malloc(sizeof(node));
    node *second = (node *)malloc(sizeof(node));
    int a1[5] = {1, 2, 3, 4, 5};
    int a2[3] = {6, 7, 8};
    create_list(first, a1, 5);
    create_list(second, a2, 3);

    node *final = merge_list(first, second);

    display(final);
    return 0;
}