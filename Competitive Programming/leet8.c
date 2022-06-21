// Delete traget element from the last of the array
// not complete
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
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

int count(struct node *first)
{
    int c = 0;
    while (first)
    {
        c++;
    }
    return c;
}

void del_ele(node * p, int target)
{
    node *q = p;
   int c = 0;
   while (p != NULL)
   {
       p = p->next;
       c++;
   }
   int k = (c - target) + 1;
   c = 0; 
   
   while (c <= k)
   {
       p = p->next;
       c++;
   }
   while (q->next != p) 
   {
       q = q->next;
   }
   printf("%d %d", p->data, q->data);
   
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
    int a[5] = {1, 2, 3, 4, 5};
    create_list(first, a, 5);
    display(first);
    int target = 2; //delete 2 element from the back
    del_ele(first, target);
    
    return 0;
}