#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string num;
    cin>>num;
    if(num.size() == 1) cout<<"000"<<num;
    else if(num.size() == 2) cout<<"00"<<num;
    else if(num.size() == 3) cout<<"0"<<num;
    else cout<<num;
    return 0;
}