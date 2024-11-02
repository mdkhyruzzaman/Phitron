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
        map<int, int> mp;
        for(int i = 0; i<k; i++)
        {
            int brand, cost;
            cin>>brand>>cost;
            mp[brand]+=cost;
        }

        vector<int> sortByCost;
        for(auto [key, val]:mp)
        {
            sortByCost.push_back(val);
        }

        sort(sortByCost.begin(), sortByCost.end(), greater<int>());

        int maxAmt = 0;
        for(int cost:sortByCost)
        {
            maxAmt+=cost;
            n--;
            if(n==0) break;
        }

        cout<<maxAmt<<endl;
    }
    return 0;
}