// Program to demostrate merge sort using iteration
#include <stdio.h>
#define m 20

void merge(int a[], int l, int mid, int h)
{
    printf("inside func\n");
    int b[m], k = l;
    // to merge array in sorted order
    int i = l, j = mid + 1;
    while (i <= mid && j <= h)
    {
        if (a[i] < a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
        }
    }
    // for rest elements
    for (; i <= mid; i++, k++)
    {
        b[k] = a[i];
    }
    for (; j <= h; j++, k++)
    {
        b[k] = a[i];
    }
    // copying element back into real array
    for (i = l; i <= h; i++)
    {
        a[i] = b[i];
    }
}

void merge_sort(int a[], int n)
{
    printf("inside func\n");
    int parse, l, h, i, mid;

    for (parse = 2; parse < n; parse = parse * 2)
    {
        for (i = 0; i + parse - 1 < n; i = i + parse)
        {
            l = i;
            h = i + parse - 1;
            mid = (l + h) / 2;

            merge(a, l, mid, h);
        }
        
    }
    if (parse / 2 < n)
    {
        merge(a, 0, parse/2 - 1, n - 1);
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
    int a[] = {1, 4, 3, 5, 2, 9, 7};
    int n = sizeof(a) / sizeof(a[0]);

    merge_sort(a, n);
    print_array(a, n);

    return 0;
}