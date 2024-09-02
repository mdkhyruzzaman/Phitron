#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        stack<char> first;
        stack<char> secound;
        string str;
        cin>>str;
        for(char c:str)
        {
            first.push(c);
        }

        while(!first.empty())
        {
            if ((!secound.empty()) && (first.top() == '0') && (secound.top() == '1'))
            {
                first.pop();
                secound.pop();
            }
            else
            {
                secound.push(first.top());
                first.pop();
            }
        }

        if(secound.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}