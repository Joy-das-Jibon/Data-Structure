#include <bits/stdc++.h>
using namespace std;
const int M = 1e5 + 7;
vector<int> graph[M];
bool visited[M];

void DFS(int start)
{
    visited[start]=true;
    cout <<start<<" ";
    for (auto neighbor : graph[start])
    {
        if(visited[neighbor])
        {
            continue;
        }
            DFS(neighbor);
    }
}

int main()
{
    int vertices, edges,i;
    cout<<"Enter the number of vertices\n";
    cin>>vertices;
    cout <<"Enter the number of Edges\n";
    cin>>edges;
    cout<<"Enter Edges\n";
    for (i=0;i<edges;i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int start;
    cout<<"Enter starting Vertex : ";
    cin>>start;
    cout<<"DFS result ";
    DFS(start);

    return 0;
}
