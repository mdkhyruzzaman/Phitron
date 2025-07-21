#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
	int t;
    cin>>t;
    while(t--)
    {
        ll n, x;
        cin>>n>>x;
        vector<ll> h(n);
        for(int i = 0; i<n; i++) cin>>h[i];
        
        sort(h.begin(), h.end(), greater<ll>());
        ll ans = 0;
        for(int i = 0; i<n; i++)
        {
            ans = max(ans, h[i]+x*i);
        }

        cout<<ans<<endl;
    }
    return 0;
}