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

void dfs(int si, int sj)
{
    cout<<si<<" "<<sj<<endl;
    vis[si][sj] = true;
    for(int i=0; i<4; i++)
    {
        int ci = si+d[i].first;
        int cj = sj+d[i].second;
        if(valid(ci, cj) && !vis[ci][cj]) dfs(ci, cj);
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
    dfs(si, sj);

    return 0;
}