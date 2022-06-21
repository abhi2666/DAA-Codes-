//factorial
#include <stdio.h>

int main()
{
    
    int t;
    scanf("%d", &t);
    int n, fact;
    while(t > 0)
    {
        fact = 1;
        scanf("%d", &n);
        while(n > 0)
        {
            fact *= n;
            n--;
        }
        printf("%d\n", fact);
        t--;
    }

    
    return 0;
}