/*
Input: nums = [2,2,1]
Output: 1

Input: nums = [4,1,2,1,2]
Output: 4
*/
#include <stdio.h>
#define MAX 100
void get_element(int a[], int n)
{
    int i = 0;
    int h[MAX];
    for (i = 0; i < MAX; i++)
    {
        h[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        h[a[i]]++;
    }
    //traversing through hash table
    for (i = 0; i < n; i++)
    {
        if(h[i] == 1)
        {
            printf("%d", h[i]);
        }
    }   
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    get_element(a, n);
    return 0;
}