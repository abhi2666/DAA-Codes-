//find three smallest and largest elements


#include <stdio.h>



void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int max(int a[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    return max;
    
}

void get_elements(int a[], int n)
{
    int hash[50] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[a[i]]+= a[i];
    }
    // checking
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if(hash[i] >= 1)
        {
            printf("%d ", hash[i]);
            c++;
        }
        if(c == 3)
        {
            break;
        }
    }
    c = 0;
    printf("highest is \n");
    for (int i = n ; i >=0; i--)
    {
        if(hash[i] >= 1)
        {
            printf("%d ", hash[i]);
            c++;
        }
        if(c == 3)
        {
            break;
        }
    }


}


int main()
{
    int a[] = {6, 5, 4, 3, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);

    get_elements(a, n);

    return 0;
}