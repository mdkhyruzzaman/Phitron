#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string name;
        cin>>name;
        sort(name.begin(), name.end());
        if(name == "Timru") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}