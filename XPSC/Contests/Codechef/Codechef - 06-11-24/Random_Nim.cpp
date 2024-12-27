#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long int n, d;
        cin>>n>>d;
        long long int s = 0;
        for(int i = 0; i<n; i++)
        {
            long long int a;
            cin>>a;
            s+=a;
        }

        long long int di = s/6;
        if(s%6 != 0) di++;

        long long int q = 1e9+7;
        long long int r = q*di/d;

        cout<<(r)<<endl;
    }
    return 0;
}