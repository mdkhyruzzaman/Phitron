#include <bits/stdc++.h>
using namespace std;

bool vis[100];
vector<int> v[100];

void bfs(int src, int des)
{
    queue<pair<int,int>> q;
    q.push({src, 0});
    vis[src] = true;
    bool paise = false;
    while(!q.empty())
    {
        pair<int, int> p = q.front();
        int par = p.first;
        int level = p.second;
        q.pop();
        if(par == des)
        {
            cout<<level<<endl;
            paise = true;
            break;
        }
        for(int child:v[par])
        {
            if(!vis[child])
            {
                q.push({child, level+1});
                vis[child] = true;;
            }
        }
    }

    if(!paise)
    {
        cout<<-1<<endl;
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
    bfs(src, 6);
    return 0;
}