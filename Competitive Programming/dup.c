#include <stdio.h>


int max(int a[], int n)
{
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] > m)
        {
            m = a[i];
        }
        
    }
    return m;
    
}

int containsDuplicate(int* nums, int n)
{
    int m = max(nums, n);
    int H[m], i, j;
    for (i = 0; i < m; i++)
    {
        H[i] = 0;
    }

    //increment the values

    for (i = 0; i < n; i++)
    {
        H[nums[i]]++;
    }

    for (int i = 0; i < m; i++)
    {
        if(H[i] > 1)
        {
            return 1;
        }
    }
    return 0;
    
       
}

int main()
{
    int a[] = {1, 4, 2, 1};
    int res = containsDuplicate(a, 4);
    printf("%d ", res);
    return 0;
}