// creating linked list
// adding lists

// not done yet
#include <stdio.h>
#include <stdlib.h>
#define MAX 20
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


node* add_lists(node *l1, node *l2)
{
    int a, b, carry, sum;
    node *temp; //new list consist of added elements
    node *d = (node *)malloc(sizeof(node));
    node *last = d;
    d->data = 0;
    
    while (l1 != NULL || l2 != NULL || carry)
    {
        a = 0, b = 0, carry = 0;

        if(l1 != NULL)
        {
            a = l1->data;
            l1 = l1->next;
        }

        if(l2 != NULL)
        {
            b = l2->data;
            l2 = l2->next;
        }

        sum = a+b+carry;
        carry = sum / 10;


        temp  = (node *)malloc(sizeof(node));
        temp->data = sum % 10;
        last->next = temp;
        last = temp;
        temp->next = NULL;

    }   

    return d->next;
}



int main()
{
    node *first = (node *)malloc(sizeof(node)); //created a node
    //Creating first list using array
    int a[] = {5, 6, 7};
    int n = sizeof(a)/sizeof(a[0]);
    create_list(first, a, n);
    // Creating Second list using array
    node *second = (node *)malloc(sizeof(node)); //created a node
    int a1[] = {1, 0, 8};
    int n1 = sizeof(a)/sizeof(a[0]);
    create_list(second, a1, n1);
   node *final = add_lists(first, second);
    display(final);


    return 0;
}