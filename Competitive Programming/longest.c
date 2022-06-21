// Program to find the length of the longest sequence in the array.
//  NOT WORKING 

#include <stdio.h>

void  longest_sequence(int a[], int n)
{
    int k, j, c = 0;

    j = 0, k = 1;
    while (k < n)
    {
        if (a[j] + 1 == a[k])
        {
            c++;
            j++;
            k++;
        }
    }

    printf("%d", c);
}

int main()
{
    int a[5] = {1, 2, 3, 4, 6};

    longest_sequence(a, 5);
    // printf("length is %d", len);
    return 0;
}