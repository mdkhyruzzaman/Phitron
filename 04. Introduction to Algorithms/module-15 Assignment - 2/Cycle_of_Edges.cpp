#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int parent[N];
int group_size[N];

void dsu_initialize(int n)
{
    for(int i=0; i<n; i++)
    {
        parent[i]=-1;
        group_size[i]=1;
    }
}

int dsu_find(int n)
{
    if(parent[n] == -1) return n;
    int leader = dsu_find(parent[n]);
    parent[n] = leader;
    return leader;
}

void dsu_union_by_size(int u, int v)
{
    int leaderA = dsu_find(u);
    int leaderB = dsu_find(v);
    if(group_size[leaderA] > group_size[leaderB])
    {
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
    
}

int main()
{
    int n, e;
    cin>>n>>e;
    dsu_initialize(n);
    int cycle = 0;
    while (e--)
    {
        int a, b;
        cin>>a>>b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if(leaderA == leaderB)
        {
            cycle += 1;
        }
        else
        {
            dsu_union_by_size(a, b);
        }
    }

    cout<<cycle;
    return 0;
}