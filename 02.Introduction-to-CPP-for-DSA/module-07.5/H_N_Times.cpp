#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        char c;
        cin>>n>>c;
        string s(n, c);
        for(char c:s)
        {
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}