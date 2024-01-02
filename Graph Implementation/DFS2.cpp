#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>g[N];
bool visited[N];
void DFS(int source)
{
    stack<int>s;
    s.push(source);
    visited[source]=true;
    while(!s.empty())
    {
        int curr=s.top();
        cout<<curr<<" ";
        s.pop();
        for(auto neighbour:g[curr])
        {
            if(visited[neighbour])
            {
                continue;
            }
            s.push(neighbour);
            visited[neighbour]=true;
        }
    }
}
int main()
{
    int vertex,edges,i,v,u;
    cout<<"Enter total number of vertex\n";
    cin>>vertex;
    cout<<"Enter total number of edges\n";
    cin>>edges;
    cout<<"Enter edges\n";
    for(i=0;i<edges;i++)
    {
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int source;
    cout<<"Enter start node\n";
    cin>>source;
    cout<<"DFS result is "<<endl;
    DFS(source);
    return 0;
}
