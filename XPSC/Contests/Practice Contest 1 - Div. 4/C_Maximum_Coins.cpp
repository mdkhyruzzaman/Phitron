#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n, w;
        cin>>n>>w;
        int lose = 0, win=0;
        for(int i = 1; i<=n-w; i++)
        {
            lose+=pow(2, i);
        }

        for(int i = n-w+1; i<=n; i++)
        {
            win+=pow(2, i);
        }

        cout<<win-lose<<'\n';
    }
    return 0;
}