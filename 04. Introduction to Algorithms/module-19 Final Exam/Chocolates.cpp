#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int choBox[n];
        int totalCho = 0;
        for(int i=0; i<n; i++)
        {
            cin>>choBox[i];
            totalCho += choBox[i];
        }

        if(totalCho%2 == 0)
        {
            int halfCho = totalCho/2;
            bool dp[n+1][halfCho+1];
            dp[0][0] = true;
            for(int i = 1; i <= halfCho; i++)
            {
                dp[0][i] = false;
            }

            for(int i = 1; i <= n; i++)
            {
                for(int j = 0; j <= halfCho; j++)
                {
                    if(choBox[i-1] <= j)
                    {
                        dp[i][j] = dp[i-1][j-choBox[i-1]] || dp[i-1][j];
                    }
                    else
                    {
                        dp[i][j] = dp[i-1][j];
                    }
                }
            }
            if(dp[n][halfCho]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}