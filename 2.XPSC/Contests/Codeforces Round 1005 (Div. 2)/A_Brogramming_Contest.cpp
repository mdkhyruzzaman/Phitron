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
        char active = '0';
        int cnt = 0;
        for(int i = 0; i<n; i++)
        {
            if(str[i] == active) continue;
            else {
                active = str[i];
                cnt++;
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}