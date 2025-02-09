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
        int ans = str.size();
        for(int i = 0; i<str.size()-1; i++)
        {
            if(str[i] == str[i+1]){
                ans = 1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}