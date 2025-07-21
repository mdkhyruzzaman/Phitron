#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        map<char, char> r;
        for(char ch:str)
        {
            r[ch] = ch;
        }

        string revHelp;
        for(auto [key, val]:r)
        {
            revHelp.push_back(val);
        }

        int i = revHelp.length()-1;
        for(char ch:revHelp)
        {
            r[ch] = revHelp[i];
            i--;
        }

        string encoding;
        for(char ch:str)
        {
            encoding.push_back(r[ch]);
        }

        cout<<encoding<<endl;
    }
    return 0;
}