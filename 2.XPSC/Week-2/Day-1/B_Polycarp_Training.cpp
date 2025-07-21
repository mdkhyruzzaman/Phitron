#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    vector<int> v;

    while(n--)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    int day = 1, givenCons = 0;
    for(int val:v)
    {
        if(val >= day)
        {
            givenCons++;
            day++;
        }
    }

    cout<<givenCons<<endl;
    return 0;
}