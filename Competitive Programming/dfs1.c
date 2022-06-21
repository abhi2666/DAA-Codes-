// Creating DFS
#include <stdio.h>
static int visited[3] = {0};
void DFS(int mat[3][3], int start_point)
{
    // printf("%d ", start_point);
    visited[start_point] = 1;
   
    for (int i = 0; i < 3; i++)
    {
        if (mat[start_point][i] == 1 && visited[i] != 1)
        {
            DFS(mat, i, end_point);
        }
    }
   
}

int main()
{
    int A[3][3] = { {0, 1, 0},
                    {0 ,0 ,1},
                    {1, 0, 0}};

    DFS(A, 0);
    
    return 0;
}