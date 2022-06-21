/*
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_] 5 represent no. of unique elements
*/
#include <stdio.h>

int is_unique(int key, int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if(key == b[i])
        {
            return 0;
        }
    }
    return 1;
    
}

void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void refined_array(int a[], int n)
{
    int b[n], count = 0;
    for (int i = 0; i < n; i++)
    {
        if(is_unique(a[i], b, n))
        {
            b[i] = a[i];
            count++;
        }
    }
    //add 0
    for (int i = count; i < n; i++)
    {
        b[i] = 0;
    }
    print_array(b, n);
}


int main()
{
    int n;
    printf("Enter elments \n");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    refined_array(a, n); 
    
    
    return 0;
}
