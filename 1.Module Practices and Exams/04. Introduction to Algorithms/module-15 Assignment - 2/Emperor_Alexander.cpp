#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int parent[N];
int groupSize[N];

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

void dsu_inilialize(int n)
{
    for(int i=1; i<=n; i++)
    {
        parent[i] = -1;
        groupSize[i] = 1;
    }
}

int dsu_find(int n)
{
    if(parent[n] == -1) return n;
    int leader = dsu_find(parent[n]);
    parent[n] = leader;
    return leader;
}

void dsu_union_by_size(int n1, int n2)
{
    int leaderA = dsu_find(n1);
    int leaderB = dsu_find(n2);

    if(groupSize[leaderA]>groupSize[leaderB])
    {
        parent[leaderB] = leaderA;
        groupSize[leaderA] += groupSize[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        groupSize[leaderB] += groupSize[leaderA];
    }
}

int main()
{
    int n, e;
    cin>>n>>e;
    dsu_inilialize(n);
    vector<Edge> edgeList;
    while(e--)
    {
        int u, v, w;
        cin>>u>>v>>w;
        edgeList.push_back(Edge(u,v,w));
    }

    sort(edgeList.begin(), edgeList.end(), cmp);

    int removeRoads = 0;
    long long int minimumCost = 0;
    for(Edge ed:edgeList)
    {
        int leaderA = dsu_find(ed.u);
        int leaderB = dsu_find(ed.v);
        if(leaderA == leaderB)
        {
            removeRoads += 1;
            continue;
        }
        else
        {
            dsu_union_by_size(leaderA, leaderB);
            minimumCost += ed.w;
        }
    }

    int leader = 0;
    for(int i = 1; i<=n; i++)
    {
        if(parent[i] == -1) leader++;
    }

    if(leader>1) cout<<"Not Possible";
    else cout<<removeRoads<<" "<<minimumCost;
    return 0;
}