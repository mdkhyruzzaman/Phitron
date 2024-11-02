#include <bits/stdc++.h>
using namespace std;


int n, m;

char arr[1001][1001];
bool vis[1001][1001];
vector<pair<int, int>> d = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void dfs(int si, int sj)
{
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci, cj) == true && vis[ci][cj] == false)
        {
            vis[ci][cj] = true;
            if(arr[ci][cj] == '.')
            {
                dfs(ci, cj);
            }
        }
    }
} 

int main()
{
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            char c;
            cin>>c;
            arr[i][j] = c;
        }
    }
    memset(vis, false, sizeof(vis));

    int apCount = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if (vis[i][j] == false)
            {
                vis[i][j] = true;
                if(arr[i][j] == '.')
                {
                    apCount += 1;
                    dfs(i, j);
                }
            }
        }
    }

    cout<<apCount<<endl;


    return 0;
}