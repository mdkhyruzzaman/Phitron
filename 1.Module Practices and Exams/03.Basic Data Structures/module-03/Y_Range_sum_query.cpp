#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n, q;
    cin>>n>>q;
    long long int a[n];
    long long int pref[n];
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        pref[i] = (i==0)?a[i]:pref[i-1]+a[i];
    }
    while(q--)
    {
        int l, r;
        cin>>l>>r;
        l--;
        r--;
        if(l==0) cout<<pref[r]<<endl;
        else cout<<pref[r]-pref[l-1]<<endl;
    }
    return 0;
}