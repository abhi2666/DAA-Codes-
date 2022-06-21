#include <bits/stdc++.h>
using namespace std;
// this will work for connected graph only !!
int isBipartite(int g[][3], int src)
{
    int vis[3] = {0};
    int col[3] = {-1};

    queue<int> q;
    q.push(src);
    vis[src] = 1;
    col[src] = 1;
    int temp;
    while(!q.empty())
    {
        temp = q.front();
        q.pop();
        //traverse its neighbours
        for(int i  = 0;  i  < 3; i++)
        {
            if(col[i] == -1)
            {
                col[i] = 1 - col[temp]; // give it different colour
                q.push(i);
            }

            else if(col[temp] == col[i])
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    int adj_mat[3][3] = {{0, 1, 1},
                        {1, 0, 1},
                        {1, 1, 0},
                        };


    if(isBipartite(adj_mat, 0))
    {
        cout<<"bipartite";
    } 
    else
    {
        cout<<"not bipartite";
    }
    return 0;
}