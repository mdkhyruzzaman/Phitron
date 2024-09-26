#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin>>n>>e;
    long long int arr[n+1][n+1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            arr[i][j] = INT_MAX;
            if (i == j) arr[i][j] = 0;
        }
    }

    while(e--)
    {
        long long int a, b, w;
        cin>>a>>b>>w;
        if(w<arr[a][b]) arr[a][b] = w;
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (arr[i][k] + arr[k][j] < arr[i][j])
                {
                    arr[i][j] = arr[i][k] + arr[k][j];
                }
            }
        }
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (arr[i][j] == INT_MAX) cout<<-1<<" ";
    //         else cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int q;
    cin>>q;
    while (q--)
    {
        int x, y;
        cin>>x>>y;
        // cout<<x<<y<<endl;
        if(arr[x][y] != INT_MAX) cout<<arr[x][y]<<endl;
        else cout<<"-1"<<endl;
    }
    
    return 0;
}