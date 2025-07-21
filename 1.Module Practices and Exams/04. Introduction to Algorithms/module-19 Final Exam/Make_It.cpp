#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int dp[N];
bool knapsack(int n)
{
    if(n == 1) return true;
    if(dp[n] != -1) return dp[n];
    if(n>1)
    {
        bool op1 = knapsack(n-3);
        bool op2;
        if(n%2 == 0) op2 = knapsack(n/2);
        else op2 = false;

        return dp[n] = (op1||op2);
    }

    return false;
}
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        memset(dp, -1, sizeof(dp));
        int n;
        cin>>n;
        if(knapsack(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}