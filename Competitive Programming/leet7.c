/*
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
*/
#include <stdio.h>

void get_indices(int a[], int n, int target)
{
    int flag = 0, k = 0, c = -1;
    int arr[2] = {-1};
    for (int i = 0; i < n; i++)
    {
        if(a[i] == target && i != c)
        {
            arr[k++] = i;
        }
        
    }
    if (flag == 0)
    {
        printf("-1 -1\n");
    }
    
}

int main()
{
    int a[6] = {5,7,7,8,10};
    int target = 8;

    get_indices(a, 6, target);
    
    return 0;
}