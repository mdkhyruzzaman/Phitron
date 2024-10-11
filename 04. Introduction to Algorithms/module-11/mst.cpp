#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int parent[N];
int group_size[N];

void dsu_initialize(int n)
{
    for(int i = 0; i<n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
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
    if(group_size[leaderA]>group_size[leaderB])
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

class Edge
{
    public:
        int u, v, w;
        Edge(int u, int v, int w)
        {
            this->u = u;
            this->v = v;
            this->w = w;
        }
};

bool cmp(Edge a, Edge b)
{
    return a.w<b.w;
}

int main()
{
    int n, e;
    cin>>n>>e;
    dsu_initialize(n);
    vector<Edge> edgeList;
    while(e--)
    {
        int u, v, w;
        cin>>u>>v>>w;
        edgeList.push_back(Edge(u, v, w));
    }

    sort(edgeList.begin(), edgeList.end(), cmp);
    int totalCost = 0;
    for(Edge ed:edgeList)
    {
        if(dsu_find(ed.u) != dsu_find(ed.v))
        {
            dsu_union_by_size(ed.u, ed.v);
            totalCost += ed.w;
        }
    }

    cout<<totalCost;
    return 0;
}