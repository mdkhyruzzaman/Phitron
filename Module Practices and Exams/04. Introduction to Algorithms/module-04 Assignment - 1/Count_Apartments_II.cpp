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

int dfs(int si, int sj)
{
    int roomCount = 0;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci, cj) == true && vis[ci][cj] == false)
        {
            vis[ci][cj] = true;
            if(arr[ci][cj] == '.')
            {   roomCount += 1;
                roomCount += dfs(ci, cj);
            }
        }
    }

    return roomCount;
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

    vector<int> vec;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if (vis[i][j] == false)
            {
                vis[i][j] = true;
                if(arr[i][j] == '.')
                {
                    int roomCount = 1;
                    roomCount += dfs(i, j);
                    vec.push_back(roomCount);
                }
            }
        }
    }

    sort(vec.begin(), vec.end());
    for(int v:vec) cout<<v<<" ";
    if(vec.empty()) cout<<0;

    return 0;
}