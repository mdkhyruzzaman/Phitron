#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        string s, x;
        cin>>s>>x;
        long long int index = s.find(x);
        while(index<s.size())
        {
            s.replace(index, x.size(), "#");
            index = s.find(x, index+1);
        }
        cout<<s<<endl;
    }
    return 0;
}