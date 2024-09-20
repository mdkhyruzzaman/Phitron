#include <bits/stdc++.h>
using namespace std;

int r, c;
char a[100][100];
bool vis[100][100];
vector<pair<int, int>> d = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

bool valid(int i, int j)
{
    if(i<0 || i>=r || j<0 || j>=c) return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while(!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        cout<<par.first<<" "<<par.second<<endl;
        for(int i = 0; i<4; i++)
        {
            int ci = par.first+d[i].first;
            int cj = par.second+d[i].second;
            if(valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
    }
}

int main()
{
    cin>>r>>c;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            char c;
            cin>>c;
            a[i][j] = c;
        }
    }

    int si, sj;
    cin>>si>>sj;

    memset(vis, false, sizeof(vis));
    bfs(si, sj);
    return 0;
}