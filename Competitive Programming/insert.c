#include <stdio.h>

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

void bubble_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
        
    }
    
}

void insertion_sort(int a[], int n)
{
    int i , j;
    int x = 0;
    for ( i = 1; i < n; i++)
    {
        x = a[i];
        j = i - 1;
        while (j > -1 && a[j] > x)
        {
            a[j + 1] =a[j];
            j--;
        }
        a[j + 1] = x;
    }
    
}

void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
}

int main()
{
    int a[] = {5, 4, 3, 2, 1};
    int n = sizeof(a)/sizeof(a[0]);
    bubble_sort(a, n);
    print_array(a, n);

    return 0;
}

for (int i = 0; i < sqrt(n); i++)
{
    statement;
}
