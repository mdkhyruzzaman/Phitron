#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    map<string, int> mp;
    vector<string> response;
    while(n--)
    {
        string str; 
        cin>>str;
        if(mp[str] == 0)
        {
            response.push_back("OK");
        }
        else
        {
            response.push_back(str+to_string(mp[str]));
        }
        mp[str]++;
    }

    for(auto res:response)
    {
        cout<<res<<endl;
    }
    return 0;
}