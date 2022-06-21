// find absolute difference of the diagonal

#include <stdio.h>
#include <stdlib.h>

int absolute_diff(int mat[3][3])
{
    int d1 = 0, d2 = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(i == j)
            {
                d1 += mat[i][j];
            }

            if(i == 3 - j - 1) //for second diagonal
            {
                d2 += mat[i][j];
            }
        }
        
    }
    return abs(d1 - d2); // abs to return positive value only
 
}

int main()
{
    int mat[3][3] = {{10, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    int diff = absolute_diff(mat);
    printf("Absolute Diffrence is %d", diff);
    return 0;
}