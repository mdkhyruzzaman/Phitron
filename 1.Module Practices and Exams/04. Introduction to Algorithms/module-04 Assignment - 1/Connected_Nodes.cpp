#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin>>n>>e;
    vector<int> node[n];
    while(e--)
    {
        int p, c;
        cin>>p>>c;
        node[p].push_back(c);
        node[c].push_back(p);
    }

    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        vector<int> vec;
        for(int v:node[x])
        {
            vec.push_back(v);
        }
        
        sort(vec.begin(), vec.end(), greater<int>());

        if(vec.size() == 0)
        {
            cout<<-1;
        } 
        else 
        {
            for(int v:vec)
            {
                cout<<v<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}