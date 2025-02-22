#include <bits/stdc++.h>
using namespace std;

bool vis[100];
vector<int> v[100];
int level[100];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        for(int child:v[par])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par]+1;
            }
        }
    }
}

int main()
{
    int n, e;
    cin>>n>>e;
    while (e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int src;
    cin>>src;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(src);
    for(int i=0; i<n; i++)
    {
        cout<<"Node: "<<i<<" Level:"<<level[i]<<endl;
    }
    // for(int i=0; i<10; i++)
    // {
    //     if(v[i].size()>0)
    //     {
    //         cout<<i<<endl;
    //     }
    // }
    return 0;
}