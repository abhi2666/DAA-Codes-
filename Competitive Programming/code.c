#include <stdio.h>
#include <stdlib.h>

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void merging(int arr[], int l, int mid, int r)
{
    int n1 = mid;
    int n2 = r - mid;

    int a[n1], b[n2], final[20];
    int i, j, k = 0;

    for (i = l; i <= mid; i++)
    {
        a[k++] = arr[i];
    }
    k = 0;
    for (j = mid + 1; j <= r; j++)
    {
        b[k++] = arr[j];
    }



    int x = l, y = mid + 1, c = l;
    while (x <= mid && y <= r)
    {
        if (a[x] < b[y])
        {
            arr[c++] = a[x++];
            
        }
        else
        {
            arr[c++] = b[y++];
            
        }
        
    }
    while (x <= mid)
    {
        arr[c++] = a[x++];
    }
    while (y <= r)
    {
        arr[c++] = b[y++];
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;

        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merging(arr, l, mid, r);
    }
}
int main()
{

    int A[] = {2, 5, 13, 5, 43, 8, 65, 10};
    int size = sizeof(A) / sizeof(A[0]);
    mergeSort(A, 0, size);
    print_array(A, size);
    return 0;
}