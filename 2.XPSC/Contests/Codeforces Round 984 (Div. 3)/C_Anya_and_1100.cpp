#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int strLen = s.length();
        int q;
        cin>>q;
        while(q--)
        {
            int i;
            char v;
            cin>>i>>v;
            s[i-1]=v;
            if(s.find("1100")<strLen) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}