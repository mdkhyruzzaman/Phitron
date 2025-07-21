#include <bits/stdc++.h>
using namespace std;
void reverseStack(stack<int> &s) {
    if(s.empty()) return;
    int x = s.top();
    s.pop();
    reverseStack(s);

    stack<int> temp;

    while(!s.empty()) {
        temp.push(s.top());
        s.pop();
    }

    temp.push(x);

    while(!temp.empty())
    {
        s.push(temp.top());
        temp.pop();
    }
}

int main()
{   
    stack<int> st;
    while(true)
    {
        int x;
        cin>>x;
        if(x == -1) break;

        st.push(x);
    }

    reverseStack(st);

    cout<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}