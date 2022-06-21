/*
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

Input: nums = [1]
Output: 1
*/

// Using Kadane's Algorithm
// Working but not for all the inputs
#include <stdio.h>
int max_subarray(int a[], int n)
{
    int f_max = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        max += a[i];

        if (max > f_max)
        {
            f_max = max;
        }
        if (max < 0) // if max has become negative
        {
            max = 0;
        }
    }
    return f_max;
}

int main()
{
   
   
    printf("%d", x);
    // int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // int n = sizeof(a) / sizeof(a[0]);

    // int res = max_subarray(a, n);
    // printf("%d", res);
    return 0;
}