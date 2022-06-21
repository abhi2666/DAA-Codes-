/*
Given an m x n integer matrix matrix, 
if an element is 0, set its entire row and column to 0's.

Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
*/

void zero(int mat[][3], int r, int c)
{
    int i;
    for (i = 0; i < 3; i++)
    {
        if(mat[r][i] != 0)
        {
            mat[r][i] = 0;
        }
    }
    for (i = 0; i <3; i++)
    {
        if(mat[i][c] != 0)
        {
            mat[i][c] = 0;
        }
    }
    
}

void make_zeroes(int mat[][3], int m, int n)
{
    int row , col;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(mat[i][j] == 0)
            {
                row  = i, col = j;
                zero(mat, row, col);
            }
        }
        
    }
    
}

#include <stdio.h>
int main()
{
    
    int mat[3][3] = {{1, 2, 3}, {4, 0, 6}, {7, 8, 9}};

    make_zeroes(mat, 3, 3);
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}