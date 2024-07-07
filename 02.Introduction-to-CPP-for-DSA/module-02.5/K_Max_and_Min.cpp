#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    int maxV = max({a, b, c});
    int minV = min({a, b, c});
    cout<<minV<<" "<<maxV;
}