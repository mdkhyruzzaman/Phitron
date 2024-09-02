#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        stack<char> st;
        string str;
        cin>>str;
        for(char c:str)
        {
            st.push(c);
        }

        bool flg = true;

        if(st.size()%2 != 0)
        {
            flg = false;
        }
        else
        {
            int one = 0;
            int zero = 0;
            while(!st.empty())
            {
                if(st.top() == '1') one++;
                else zero++;

                st.pop();
            }

            if(one != zero)
            {
                flg = false;
            }

        }

        if(flg) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }

    return 0;
}