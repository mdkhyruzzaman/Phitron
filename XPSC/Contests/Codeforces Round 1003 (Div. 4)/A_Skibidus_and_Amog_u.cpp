#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        str.pop_back();
        str.pop_back();
        str.push_back('i');
        cout<<str<<endl;
    }
    return 0;
}