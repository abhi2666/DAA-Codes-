#include <stdio.h>

int find(int a[], int size, int key)
{
    if(key == a[size])
    {
        printf("%d ", size);
        return size;
        
    }
    find(a, --size, key);

}

int main()
{
    int a[4] = {1, 2, 3, 4};

    int res = find(a, 4, 5);
    if(res >= 0)
    {
        printf("Element found ");
    }
    else
    {
        printf("Element not found");
    }


    return 0;
}
