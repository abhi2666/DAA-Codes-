// Implementing Quick Sort considering first element as the pivot element.
#include <stdio.h>

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

int partition(int a[], int l, int h)
{
    int pivot = a[l];
    int i = l, j = h;
    // i to find element greater than pivot and j to find element smaller than pivot
    do
    {
        do
        {
            i++;
        } while (a[i] <= pivot);
        do
        {
            j--;
        } while (a[j] > pivot);

        if(i < j)
        {
            swap(&a[i], &a[j]);
        }
        
        
    } while (i < j);
    swap(&a[l], &a[j]);

    return j;    
}

void quick_sort(int a[], int l, int h)
{
    int part_index = 0;
    if(l < h)
    {
        part_index = partition(a, l, h);
        quick_sort(a, l, part_index);
        quick_sort(a, part_index+1, h);
    }
}

void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int a[] = {40, 50, 60, 70, 30, 20, 10};
    int n = sizeof(a)/sizeof(a[0]);

    quick_sort(a, 0, n);
    print_array(a, n);
    return 0;
}