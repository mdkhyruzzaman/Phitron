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

char dfs(int si, int sj)
{
    // cout<<"Func"<<arr[si][sj]<<" "<<endl;
    vis[si][sj] = true;
    if(arr[si][sj] == 'B') return 'B';
    if(arr[si][sj] == '#') return '#';
    char rt;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) == true && vis[ci][cj] == false)
        {
            rt = dfs(ci, cj);
            if(rt == 'B') return 'B';
        }
    }
    
    return rt;
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

    int si, sj;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j] == 'A')
            {
                si = i;
                sj = j;
                break;
            }
        }
    }

    vis[si][sj] = true;
    char rt;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) == true && vis[ci][cj] == false)
        {
            // cout<<"Before Outer"<<arr[ci][cj] <<" "<<endl;
            rt = dfs(ci, cj);
            // cout<<"After Outer"<<rt<<" "<<endl;

        }

        if(rt == 'B') break;
    }

    if(rt == 'B') cout<<"YES";
    else cout<<"NO";


    return 0;
}