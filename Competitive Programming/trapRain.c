/*
trapping rain water

NOT WORKING
*/

#include <stdio.h>
void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int mini(int a, int b)
{

    return (a > b) ? b : a;
}

int trapped_water(int *a, int n)
{
    int left[n], right[n];
    int m1 = a[0], m2 = a[n - 1], k = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > m1)
        {

            left[i] = a[i];
        }
        else
        {
            left[i] = m1;
        }
    }
  
    for (int i = n; i >= 0; i--)
    {
        if (a[i] > m2)
        {

            right[k--] = a[i];
        }
        else
        {
            right[k--] = m2;
        }

    }
    print_array(left, n);

    print_array(right, n);

    // Main Code .. for calculating

    int water = 0; //for storing the trapped water content
    
    for (int i = 0; i < n; i++)
    {
        water = water + (mini(left[i], right[i]) - a[i]);
        printf("for %d result is %d\n", i, water);
    }
    
    
}

int main()
{
    int a[4] = {3, 1, 2, 4};

    int water = trapped_water(a, 4);

    return 0;
}
