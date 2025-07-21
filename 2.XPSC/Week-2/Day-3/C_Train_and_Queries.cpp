#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        map<int, pair<int, int>> mp;
        for(int i = 1; i<=n; i++)
        {
            int u;
            cin>>u;
            if(mp[u].first != 0) mp[u].second = i;
            else mp[u] = make_pair(i, i);
        }

        while(k--)
        {
            int a, b;
            cin>>a>>b;
            if(mp[a].first <= mp[b].second && mp[a].first != 0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}