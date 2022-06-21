// Rotata list k times to the right
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


void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}
void rotate_list(node *l1,  int k, int a1[], int n)
{
    node *p = l1;
    int c = 0;
    while (p)
    {
        a1[c++] = p->data;
        p = p->next;
    }
    
    int  temp;
    while(k > 0)
    {
        temp = a1[n - 1]; //last element
        for (int i = n - 2; i >= 0; i--)
        {
            a1[i + 1] = a1[i];
        }
        a1[0] = temp;
        k--;
    }
    p = l1, c = 0;
    while (p)
    {
        p->data = a1[c++];
        p = p->next;
    }
    
}

int main()
{
    node *first = (node *)malloc(sizeof(node));
    int a[5] = {1, 2, 3, 4, 5};
    int n = 4;
    create_list(first, a, 5);

    int k = 0;
    printf("no. of times you want to rotate the list\n");
    scanf("%d", &k);
    int a1[5] ={0};
    rotate_list(first, k, a1, 5);
    display(first);

    return 0;
}