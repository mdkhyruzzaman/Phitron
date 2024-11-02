#include <bits/stdc++.h>
using namespace std;

const int X = 1e6;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin>>q;
    // priority_queue<int, vector<int>, greater<int>> pq;
    long long int arr[X];
    while(q--)
    {
        int op, val;
        cin>>op;
        if(op == 1)
        {
            cin>>val;
            cout<<"op-1: "<<val<<endl;
            // if(arr[val]>0)
            // {
            //     arr[val]++;
            // }
            // else
            // {
            //     pq.push(val);
            //     arr[val]++;
            // }
        }
        else if(op == 2)
        {
            cout<<"op-2"<<endl;
            // if(!pq.empty())
            // {
            //     val = pq.top();
            //     cout<<val<<"\n";
            //     if(arr[val]>0)
            //     {
            //         arr[val] = 0;
            //     }
            //     else
            //     {
            //         pq.pop();
            //     }
            // }
            // else
            // {
            //     cout<<"empty"<<"\n";
            // }
        }
    }
    return 0;
}