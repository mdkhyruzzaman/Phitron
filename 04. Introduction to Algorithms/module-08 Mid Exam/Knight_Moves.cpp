#include <bits/stdc++.h>
using namespace std;

int n, m;
bool vis[101][101];
int level[101][101];

vector<pair<int, int>> d = {{1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}, {-2, 1}, {-1, 2}};

bool valid(int i, int j)
{
    if(i<0 || i>=n || j<0 || j>=m) return false;
    return true;
}

int bfs2D(int ki, int kj, int qi, int qj)
{
    queue<pair<int, int>> q;
    q.push({ki, kj});
    vis[ki][kj] = true;
    level[ki][kj] = 0;
    while(!q.empty())
    {
        pair<int, int> parentPair = q.front();
        q.pop();
        int pi = parentPair.first;
        int pj = parentPair.second;
        int parentLevel = level[pi][pj];
        if(pi == qi && pj == qj) return parentLevel;
        for(int i=0; i<8; i++)
        {
            int ci = pi+d[i].first;
            int cj = pj+d[i].second;
            if(valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = parentLevel+1;
            }
        }
    }
    return -1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        memset(vis, false, sizeof(vis));
        memset(level, false, sizeof(level));
        int ki, kj, qi, qj;
        cin>>ki>>kj>>qi>>qj;
        int result = bfs2D(ki, kj, qi, qj);
        cout<<result<<endl;
    }
}