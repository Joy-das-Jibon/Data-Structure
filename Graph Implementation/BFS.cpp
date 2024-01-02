#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>g[N];
int visited[N],level[N];
void BFS(int source)
{
    queue<int>q;
    q.push(source);
    visited[source]=1;
    cout<<"Breadth first traversal for this graph\n";
    while(!q.empty())
    {
        int cur_v=q.front();
        q.pop();
        cout<<cur_v<<" ";
        for(int child:g[cur_v])
        {
            if(!visited[child])
            {
                q.push(child);
                visited[child]=1;
                level[child]=level[cur_v]+1;
            }
        }
    }
    cout<<endl;
}
int main()
{
    int i,n,x,y,source;
    cout<<"Enter number of node\n";
    cin>>n;
    cout<<"Enter connected edges\n";
    for(i=0;i<=n;i++)
    {
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    cout<<"Enter source node\n";
    cin>>source;
    BFS(source);
    for(i=1;i<n;i++)
    {
        cout<<"Distance of node "<<i<<"-"<<level[i]<<endl;
    }
    return 0;
}
