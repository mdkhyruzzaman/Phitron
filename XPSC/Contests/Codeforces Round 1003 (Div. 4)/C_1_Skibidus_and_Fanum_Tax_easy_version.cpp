#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n, m;
        cin>>n>>m;
        vector<ll>a(n);
        vector<ll>b(m);
        for(ll i = 0; i<n; i++) cin>>a[i];
        for(ll i = 0; i<m; i++) cin>>b[i];

        bool ans = true;
        vector<ll> cha(n);
        cha[0] = min(b[0]-a[0], a[0]);

        for(ll i = 1; i<n; i++)
        {
            ll val1 = a[i], val2 = b[0] - a[i];

            if (val1 >= cha[i - 1] && val2 >= cha[i - 1])
            {
                cha[i] = min(val1, val2);
            }
            else if (val1 >= cha[i - 1])
            {
                cha[i] = val1;
            }
            else if (val2 >= cha[i - 1])
            {
                cha[i] = val2;
            }
            else
            {
                ans = false;
                break;
            }
        }

        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}