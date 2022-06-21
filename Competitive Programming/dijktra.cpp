// WAP to implement Dijktra's algo
/*
1 .Traverse through the whole graph
2. find the nearest neighbour
3. check if not visited and has edge with the src
4. If yes, then check for the distance and repalce it..
*/

#include <iostream>
#define inf 9999
using namespace std;

int findnear(int g[][3], int v[], int d[])
{
    // if vertex is not visited then only consider it 
    int min_value = -1, min_index = -1;
    for(int i = 0; i < 3; i++)
    {
        if(!v[i] && d[i] < min_value)
        {
            min_value = d[i];
            min_index = i; // index of the nearest neighbour
        }
    }
    return min_index;
}

void dijktra(int g[][3], int src)
{
    int v[3] = {0};
    int dist[3] = {inf};
    dist[src] = 0; 
    for(int i = 0 ; i < 3; i++) //for these no. of vertices
    {
        //find the nearest neighbour
        int nearest = findnear(g, v, dist);
        v[nearest] = 1; //mark it visited
        // now, traverse its neighbours

        for(int j = 0 ; j < 3; j++)
        {
            if(g[nearest][j] && dist[j] > dist[nearest] + g[nearest][j])
            {
                dist[j] = dist[nearest] + g[nearest][j];
            }
        }
    }

    for(auto i : dist)
    {
        cout<<i<<" ";
    }
}
int main()
{
    int adj_mat[3][3] = {
        {0, 1, 1},
        {1, 0, 1},
        {1, 1, 0},
    };

    dijktra(adj_mat, 0);
    return 0;
}