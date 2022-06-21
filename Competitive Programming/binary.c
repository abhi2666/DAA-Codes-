#include <stdio.h>

int binary_searchi(int a[], int n, int key)
{
    int l = 0, h = n, mid = 0;
    while (l < h)
    {   
        mid = (l + h)/2;
        if(a[mid] == key)
        {
            return 1;
        }
        else if(a[mid] > key)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return 0;
    
}

int binaryr(int a[], int l, int h, int key)
{
    int mid = 0;
    if(l < h)
    {
        mid = (l + h)/2;
        if(a[mid] == key)
        {
            return 1;
        }
        else if(a[mid] > key)
        {
            binaryr(a, l, mid - 1, key);
        }
        else
        {
            l = mid + 1;
            binaryr(a, mid+1, h, key);
        }
    }
    return 0;

    
}

int main()
{
    int a[] = {1, 5, 3, 2, 6};
    int n = sizeof(a)/sizeof(a[0]);
    int key = 0;

    printf("Enter an element to be searched\n");
    scanf("%d", &key);
    printf("---- BINARY SEARCH ------\n\n");
    printf("Using Iterative Approach\n");
    int res = binary_searchi(a, n, key);
    if(res == 1)
    {
        printf("Element found");
    }
    else
    {
        printf("Element not found");
    }

    printf("\nUsing Recursive Approach\n");
    int r = binary_searchi(a, n, key);
    if(r == 1)
    {
        printf("Element found");
    }
    else
    {
        printf("Element not found");
    }


    return 0;
}