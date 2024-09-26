#include <bits/stdc++.h>
using namespace std;

class Edge
{
    public:
        int u;
        int v;
        long long int w;

        Edge(int u, int v, long long w)
        {
            this->u = u;
            this->v = v;
            this->w = w;
        }
};

int main()
{
    int n, e;
    cin>>n>>e;
    vector<Edge> EdgeList;
    for(int i = 0; i<e; i++)
    {
        int a, b;
        long long w;
        cin>>a>>b>>w;
        EdgeList.push_back(Edge(a, b, w));
    }

    long long int dis[n+1];
    for(int i = 1; i<=n; i++)
    {
        dis[i] = INT_MAX;
    }

    int s, t; 
    cin>>s>>t;
    dis[s] = 0;
    for (int i = 2; i <= n; i++)
    {
        for (Edge ed : EdgeList)
        {
            int u, v, w;
            u = ed.u;
            v = ed.v;
            w = ed.w;
            if (dis[u] < INT_MAX && dis[u] + w < dis[v])
            {
                dis[v] = dis[u] + w;
            }
        }
    }

    bool cycle = false;
    for (Edge ed : EdgeList)
    {
        int u, v, w;
        u = ed.u;
        v = ed.v;
        w = ed.w;
        if (dis[u] < INT_MAX && dis[u] + w < dis[v])
        {
            cycle = true;
            break;
        }
    }
    if (cycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        while (t--)
        {
            int d;
            cin>>d;
            if(dis[d] != INT_MAX) cout<<dis[d]<<endl;
            else cout<<"Not Possible"<<endl;
        }
        
    }

    return 0;
}