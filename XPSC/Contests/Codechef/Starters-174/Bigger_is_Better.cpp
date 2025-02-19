#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        string ans;
        for(int i = 0; i<n; i++) ans.push_back('z');

        if(str == ans) cout<<-1<<endl;
        else cout<<ans<<endl;
    }

    return 0;
}