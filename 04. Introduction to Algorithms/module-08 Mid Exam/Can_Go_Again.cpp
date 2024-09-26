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
    vector<Edge> v;
    for(int i = 0; i<e; i++)
    {
        int a, b;
        long long w;
        cin>>a>>b>>w;
        v.push_back(Edge(a, b, w));
    }

    long long int dis[n+1];
    for(int i = 1; i<=n; i++)
    {
        dis[i] = INT_MAX;
    }

    int s, 
}