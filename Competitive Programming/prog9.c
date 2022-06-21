// Program to find middle element of a list
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void find_middle(node *p)
{
    node *q;
    q = p;
    while (p != NULL && p->next != NULL)
    {
        p = (p->next) ->next;
        q = q->next;
    }
    printf("%d", q->data);
}

int main()
{
    node *first = (node *)malloc(sizeof(node));

    int a[6] = {1, 2, 3, 4, 5, 7};
    create_list(first, a, 6);
   
    find_middle(first);
    return 0;

}