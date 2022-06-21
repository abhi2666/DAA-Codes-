#include <stdio.h>

int linear_searchi(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int linear_searchr(int a[], int n, int key)
{
    if(n <= 0)
    {
        if(a[n] == key)
        {
            return 1;
        }
        else
        {
            linear_searchr(a, n - 1, key);
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
    printf("Iterative Approach\n");
    int res = linear_searchi(a, n, key);
    if(res == 1)
    {
        printf("Element found");
    }
    else
    {
        printf("Element not found");
    }
    printf("\nRecursive Approach\n");
    int r = linear_searchi(a, n, key);
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