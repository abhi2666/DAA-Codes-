// detect cycle in singly LL
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
int cycle_detector(node *l1,  int k, int a1[], int n)
{
    node *first, *slow;
    first = slow = l1;
    
    while(first != NULL && slow != NULL)
    {
        first = (first->next)->next;
        slow = slow->next;

        if(first == slow)
        {
            return 1;
        }
    }

    return 0;
}
  
    


int main()
{
    node *first = (node *)malloc(sizeof(node));
    int a[5] = {1, 2, 3, 4, 5};
    int n = 4;
    create_list(first, a, 5);

    int res = cycle_detector(first);
    if(res == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

  
    return 0;
}