#include <bits/stdc++.h>
using namespace std;

int n, m;
char arr[1001][1001];
bool vis[1001][1001];

vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m) return false;
    return true;
}

bool bfs(int si, int sj, int di, int dj)
{
    if(si == di && sj == dj) return true;

    queue<pair<int,int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();
        int parentFirst = parent.first;
        int parentSecond = parent.second;

        for(int i=0; i<4; i++)
        {
            int childFirst = parentFirst+dir[i].first;
            int childSecond = parentSecond+dir[i].second;

            if(childFirst == di && childSecond == dj) return true;

            if(valid(childFirst, childSecond) && !vis[childFirst] [childSecond] && arr[childFirst][childSecond] == '.')
            {
                if(childFirst == di && childSecond == dj) return true;

                q.push({childFirst, childSecond});
                vis[childFirst][childSecond] = true;
            };

        }
    }

    return false;
}

int main()
{
    cin>>n>>m;
    for(int i = 0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            char c;
            cin>>c;
            arr[i][j] = c;
        }
    }

    memset(vis, false, sizeof(vis));

    int si, sj, di, dj;
    cin>>si>>sj>>di>>dj;
    bool result = bfs(si, sj, di, dj);
    if(result) cout<<"YES";
    else cout<<"NO";
}