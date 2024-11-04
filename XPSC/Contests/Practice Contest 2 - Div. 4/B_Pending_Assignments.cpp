#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int x, y, z;
        cin>>x>>y>>z;
        int td = x*y;
        if((z*24*60)>=td) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}