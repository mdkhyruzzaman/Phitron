#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        char a[n];
        char b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }

        for(int i=0; i<n; i++)
        {
            if(a[i] != b[i] && k>0)
            {
                a[i] = b[i];
                k--;
            };
        }

        bool isSame = true;

        for(int i=0; i<n; i++)
        {
            if(a[i] != b[i])
            {
                isSame = false;
            };
        }

        if(isSame) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}