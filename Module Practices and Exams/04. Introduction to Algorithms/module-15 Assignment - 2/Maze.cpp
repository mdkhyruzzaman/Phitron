#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
char arr[N][N];
vector<pair<int, int>> chDir = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int vis[N][N];
pair<int, int> parent[N][N];

int n, m;

bool valid(int i, int j)
{
    return (i>=0 && i<n && j>=0 && j<m);
}

pair<int, int> bfs2D(pair<int, int> r)
{
    queue<pair<int, int>> qu;
    qu.push(r);
    int si, sj;
    si = r.first;
    sj = r.second;
    vis[si][sj] = true;
    while(!qu.empty())
    {
        pair<int, int> pa = qu.front();
        qu.pop();
        int pi, pj;
        pi = pa.first;
        pj = pa.second;
        for(int i = 0; i<4; i++)
        {
            int ci = pi+chDir[i].first;
            int cj = pj+chDir[i].second;
            if(valid(ci, cj) && !vis[ci][cj] && arr[ci][cj] != '#')
            {
                qu.push({ci, cj});
                vis[ci][cj] = true;
                parent[ci][cj] = {pi, pj};
                if(arr[ci][cj] == 'D') return {ci, cj};
            }
        }
    }

    return {-1, -1};
}

int main()
{
    cin>>n>>m;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            char ch;
            cin>>ch;
            arr[i][j] = ch;
        }
    }

    memset(vis, false, sizeof(vis));

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            parent[i][j] = {-1, -1};
        }
    }

    pair<int, int> start;
    pair<int, int> dist;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            if(arr[i][j] == 'R') start = {i, j};
        }
    }

    dist = bfs2D(start);
    if(dist.first == -1 && dist.second == -1)
    {
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }
    else
    {
        int ci, cj;
        ci = dist.first;
        cj = dist.second;
        while(ci != -1 && cj != -1)
        {
            pair<int, int> par = parent[ci][cj];
            ci = par.first;
            cj = par.second;
            if(arr[ci][cj] == 'R') break;
            arr[ci][cj] = 'X';
        }

        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}