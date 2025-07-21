// Wrong Answer
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
        cin >> n;
        string s;
        cin>>s;

        for(int i = 0; i<n-2; i++)
        {
            if(s.substr(i,3)>="100"){
                s[i]='1';
                s[i+1]='0';
                s[i+2]='0';
            };
        }

        cout<<s<<endl;
    }
    return 0;
}