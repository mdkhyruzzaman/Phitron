#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin>>n>>m;

    vector<int> v;
    for(int i = 0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    vector<int> pref;
    set<int> st;
    for(int i = n-1; i>=0; i--)
    {
        st.insert(v[i]);
        pref.push_back(st.size());
    }

    while(m--)
    {
        int l;
        cin>>l;
        cout<<pref[n-l]<<endl;
    }
    return 0;
}