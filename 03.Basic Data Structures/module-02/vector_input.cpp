#include <bits/stdc++.h>
using namespace std;
int main()
{   
    // One Way
    // vector<int>v;
    // int n;
    // cin>>n;
    // for(int i=0; i<n; i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // for(int val:v)
    // {
    //     cout<<val<<" ";
    // }

    // Another Way
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(int i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}