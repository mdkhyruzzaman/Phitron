#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
int vis[N][N];
char arr[N][N];

vector<pair<int, int>> d = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

int n, m;
bool valid(int i, int j)
{
    if(i>=0 && i<n && j>=0 && j<m) return true;
    return false;
}

int area(int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j});
    vis[i][j] = true;
    int count = 1;
    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();
        int pi = parent.first;
        int pj = parent.second;
        for(int x = 0; x < 4; x++)
        {
            int ci = pi + d[x].first;
            int cj = pj + d[x].second;
            if (valid(ci, cj) == true && vis[ci][cj] == false && arr[ci][cj] == '.')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                count += 1;
            }
        }
    }
    return count;
}

int main()
{
    memset(vis, false, sizeof(vis));

    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j]; 
        }
    }

    int mincomp = INT_MAX;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if (vis[i][j] == false && arr[i][j] == '.')
            {
                int result = area(i, j);
                if(result<mincomp) mincomp = result;
            }
        }
    }

    if(mincomp == INT_MAX) cout<<-1;
    else cout<<mincomp;
    return 0;
}