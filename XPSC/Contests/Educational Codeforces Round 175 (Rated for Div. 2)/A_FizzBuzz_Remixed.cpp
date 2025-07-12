#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        
        ll ans = max((n / 15)*3, 0LL);
        ans += min((n % 15) + 1, 3LL);

        cout<<ans<<endl;
    }

    return 0;
}