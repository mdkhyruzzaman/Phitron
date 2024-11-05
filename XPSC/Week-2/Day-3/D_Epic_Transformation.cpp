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
        map<int, int> mp;
        for(int i = 0; i<n; i++)
        {
            int a;
            cin>>a;
            mp[a]++;
        }

        priority_queue<int> pq;
        for(auto [i, c]:mp)
        {
            pq.push(c);
        }

        int r = 0;

        while (!pq.empty())
        {
            if(pq.size() == 1){
                r = pq.top();
                pq.pop();
            }
            else{
                int firstVal = pq.top();
                pq.pop();
                int secVal = pq.top();
                pq.pop();
                firstVal--;
                secVal--;
                if(firstVal>0) pq.push(firstVal);
                if(secVal>0) pq.push(secVal);
            }
        }

        cout<<r<<endl;
    }
    return 0;
}