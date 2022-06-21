// Program to demostrate merge sort using recursion
#include <stdio.h>
#define m 20
void merge(int a[], int l, int mid, int h)
{
    int b[m], k = 0;
    int i = l, j = mid+1;
    while(i <= mid && j <= h)
    {
        if(a[i] > a[j])
        {
            b[k++] = a[i++];
        }
        else if(a[j] > a[i])
        {
            b[k++] = a[j++];
        }
        else
        {
            break;
        }
    }
    for (; i<=mid; i++)
    {
        b[k++] = a[i];
    }
    for (; j<=h; j++)
    {
        b[k++] = a[j];
    }
    //copying back into the real array
    for (i = l; i < h; i++)
    {
        a[i] = b[i];
    }
    
}

void print_array(int a[], int n)
{
    for (int  i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
}

void merge_sort(int a[], int l, int h)
{
    int mid = 0;
    if(l < h)
    {
        mid = (l+h)/2;
        merge_sort(a, l, mid);
        merge_sort(a, mid+1, h);
        merge(a, l, mid, h);
    }
}

int main()
{
    int a[] = {1,4,2,8,5,7,9};
    int n =sizeof(a)/sizeof(a[0]);

    merge_sort(a, 0, n);
    print_array(a, n);
    return 0;
}