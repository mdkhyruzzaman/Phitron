#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, t;
    cin>>a>>b>>t;

    int total_bis = 0;
    while(t>=a)
    {
        t-=a;
        total_bis+=b;
    }

    cout<<total_bis;
    return 0;
}