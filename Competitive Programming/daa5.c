//to implement a[i] + a[j] =a[k]
//condition - WORKING
#include <stdio.h>

void get_indices(int a[], int n)
{
    int i, j, k, val;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            val = a[i] + a[j];
            k = 0;
            while (k < n)
            {
                if(val == a[k++])
                {
                    printf("%d + %d = %d\n", a[i], a[j], val);
                }
                
            }
            
        }
        
    }
    
}

int main()
{
    int a[5] = {3, 2, 6, 5, 4};
    
    get_indices(a, 5);
    return 0;
}