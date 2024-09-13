#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin>>n>>e;
    vector<int> node[n];
    // cout<<n<<e<<endl;
    while(e--)
    {
        int p, c;
        cin>>p>>c;
        // cout<<p<<c<<endl;
        node[p].push_back(c);
    }

    int q;
    cin>>q;
    while(q--)
    {
        bool flg = false;
        int a, b;
        cin>>a>>b;
        if(a == b)
        {
            flg = true;
        }
        else 
        {
            for(int v:node[a])
            {
                if(b == v)
                {
                    flg = true;
                    break;
                }
            }
        }

        if(flg) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}