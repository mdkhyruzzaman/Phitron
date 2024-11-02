#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    map<string, bool> names;
    while(n--)
    {
        string name;
        cin>>name;
        if(!names[name]){
            cout<<"NO"<<endl;
            names[name] = true;
        }
        else cout<<"YES"<<endl;
    }
}