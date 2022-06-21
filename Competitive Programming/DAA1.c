#include <stdio.h>

// find kth smallest or largest element

// first sort the array with O(n*logn)
#define MAX 20
void merge(int a[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l;

    int aux_array[MAX];

    while (i <= mid && j <= h)
    {
        if (a[i] > a[j])
        {
            aux_array[k++] = a[j++];
        }
        else
        {
            aux_array[k++] = a[i++];
        }
    }
    while (i <= mid)
    {
        aux_array[k++] = a[i++];
    }
    while (j <= h)
    {
        aux_array[k++] = a[j++];
    }

    for (int i = l; i <= h; i++)
    {
        a[i] = aux_array[i];
    }
}

void merge_sort(int a[], int l, int h)
{
    int mid = 0;

    if (l < h)
    {
        mid = (l + h) / 2;

        merge_sort(a, l, mid);
        merge_sort(a, mid + 1, h);
        merge(a, l, mid, h);
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
    int a[] = {5, 4, 3, 2, 1, 0};
    int n = sizeof(a) / sizeof(a[0]);

    merge_sort(a, 0, n);

    int k = 0;
    scanf("%d", &k);

    printf("Kth largest is %d \n", a[n - k]);
    printf("Kth smallest is %d \n", a[k - 1]);

    return 0;
}