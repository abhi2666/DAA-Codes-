// program to find a key element and print its duplicates as well
//CONDIITON - WORKING
#include <stdio.h>

int get_max(int a[], int n)
{
    int max = 0;
    for (int  i = 0; i < n; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

int copies(int a[], int n, int index)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[index])
        {
            c++;
        }
        
    }
    return c;
}


int search(int a[], int n, int key)
{
    
    int l = 0, h = n, mid = 0;
    while (l < h)
    {
        mid = (l + h)/2;
        if(a[mid] == key)
        {
            return mid;
            
        }
        else if(a[mid] > key)
        {
            h = mid - 1;
        }
        else 
        {
            l = mid + 1;
        }
    }
    return 0;

}
int main()
{
    int key;
    int a[] = {1, 2, 3, 3, 5};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Enter element to be searched\n");
    scanf("%d", &key);
    int res = search(a, n, key);
    if(res != 0)
    {
        printf("Element found at index %d\n", res);
        printf("No. of copies it has is %d", copies(a, n, res));
    }
    else
    {
        printf("Element not found\nFuck off");
    }
    
    return 0;
}