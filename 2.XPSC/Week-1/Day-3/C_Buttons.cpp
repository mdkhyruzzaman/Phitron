#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    cin>>a>>b;
    int r = 0;
    if(a==b)
    {
        r = a+b;
    }
    else if(a>b)
    {
        r = a+a-1;
    }
    else
    {
        r = b+b-1;
    }

    cout<<r;
    return 0;
}