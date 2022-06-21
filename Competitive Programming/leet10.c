// Program to search in a rotated sorted array
// we can use binary Search on array


#include <stdio.h>

int target_index(int a[], int n, int target)
{
    int l = 0, h = n - 1, mid = 0;
    while(l < h)
    {
        mid = (l + h)/2; //this is the index of the middle element
        if(a[mid] == target)
        {
            return mid;
        }
        if(a[l] < target)
        {
            h = mid - 1;
        }
        if(a[h] > target)
        {
            l = mid + 1;
        }
        

    }
    return -1;
}

int main()
{
    int a[] = {4, 5, 6, 1, 2}; // Sorted-Rotated array
    int n = sizeof(a)/sizeof(a[0]);
    int target = 6;
    int res = target_index(a, n, target);
    printf("%d", res);
    return 0;
}
