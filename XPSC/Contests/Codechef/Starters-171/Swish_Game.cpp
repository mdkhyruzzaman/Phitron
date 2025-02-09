#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m, k, n, cntS = 0;
        string str;
        cin>>m>>k;
        cin>>str;
        for(int i = 0; i<m; i++)
        {
            if(str[i] == 'S') cntS++;
        }

        if(cntS>=k) cout<<m;
        else cout<<m + (k - cntS) - 1;
        cout<<endl;
    }
    return 0;
}