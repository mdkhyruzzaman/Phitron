#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n, m;
    cin>>n>>m;

    stack<int> st;
    queue<int> qu;

    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }

    for(int i=0; i<m; i++)
    {
        int val;
        cin>>val;
        qu.push(val);
    }

    bool flg = true;

    if(n != m)
    {
        flg = false;
    }
    else
    {
        while(!st.empty())
        {
            if(st.top() != qu.front())
            {
                flg = false;
                break;
            }
            st.pop();
            qu.pop();
        }
    }

    if(flg) cout<<"YES";
    else cout<<"NO";

    return 0;
}