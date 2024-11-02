#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        int markList[n];
        for(int i=0; i<n; i++)
        {
            cin>>markList[i];
        }

        int markNeed = 1000-m;
        bool dp[n+1][markNeed+1];
        dp[0][0] = true;
        for(int i = 1; i <= markNeed; i++)
        {
            dp[0][i] = false;
        }

        for(int i = 1; i <= n; i++)
        {
            for(int j = 0; j <= markNeed; j++)
            {
                if(markList[i-1] <= j)
                {
                    dp[i][j] = dp[i-1][j-markList[i-1]] || dp[i-1][j];
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        if(dp[n][markNeed]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}