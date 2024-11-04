#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int d;
        cin>>d;
        int r = (d-2)/7;
        if(d<2) cout<<0<<endl;
        else cout<<r+1<<endl;
    }
    return 0;
}