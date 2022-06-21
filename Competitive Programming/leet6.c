/*
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.
*/
#include <stdio.h>
#define max 20

void find_intersection(int num1[], int num2[], int n, int m)
{
    int c = -1, k = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(num1[i] == num2[j]  && c != j && k != i)
            {
                printf("%d ", num1[i]);
                c = j;
                k = i;
            }
        }
        
    }
    
}

int main()
{
    int num1[3] = {4, 9, 5};
    int num2[5] = {9,4,9,8,4};

    find_intersection(num1, num2, 4, 2);
    return 0;
}