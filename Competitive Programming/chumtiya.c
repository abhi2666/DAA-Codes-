#include <stdio.h>

int main()
{
    for (int i = 1; i < 9; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            if(i >= 2 && i <= 5 && j >= 6 && j <= 9)
            {
                if(i + j == 11)
                {
                    printf("%d %d", i, j);
                    printf("*");
                }
            }
        }
        printf("\n");
        
        
    }
    
    return 0;
}