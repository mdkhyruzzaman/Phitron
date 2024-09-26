#include <bits/stdc++.h>
using namespace std;
const long long int N = 1001;
vector<pair<long long int, long long int>> v[N];
long long int dis[N];

class CMP
{
    public:
        bool operator()(pair<long long int, long long int> a, pair<long long int, long long int> b)
        {
            return a.second > b.second;
        }
};

void dijkstra(long long int s) 
{
    priority_queue<pair<long long int, long long int>, vector<pair<long long int, long long int>>, CMP> pq;
    pq.push({s, 0});
    dis[s] = 0;
    while(!pq.empty())
    {
        pair<long long int, long long int> parentPair = pq.top();
        pq.pop();

        long long int parent = parentPair.first;
        long long int cost = parentPair.second;
        for(pair<long long int, long long int> childPair:v[parent]) 
        {
            long long int childNode = childPair.first;
            long long int childcost = childPair.second;

            if(cost+childcost < dis[childNode])
            {
                dis[childNode] = cost+childcost;
                pq.push({childNode, cost+childcost});
            }
        }
    }
}

int main()
{
    long long int n, e;
    cin>>n>>e;
    for(long long int i = 0; i<e; i++)
    {
        long long int a, b, w;
        cin>>a>>b>>w;
        v[a].push_back({b, w});
    }

    for (long long int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }

    long long int s, t;
    cin>>s>>t;
    dijkstra(s);
    while(t--)
    {
        long long int d, dw;
        cin>>d>>dw;
        if(dis[d]<=dw) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}